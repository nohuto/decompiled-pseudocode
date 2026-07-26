/*
 * XREFs of ?ndisSetTaskOffloadValidate@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BF380
 * Callers:
 *     ?ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BD48C (-ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x140057110 (NdisConvertNtStatusToNdisStatus.c)
 */

__int64 __fastcall ndisSetTaskOffloadValidate(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  unsigned __int64 InformationBufferLength; // rbp
  unsigned int v4; // r9d
  _NDIS_MINIPORT_BLOCK *Miniport; // r15
  char *InformationBuffer; // rax
  __int64 v7; // rdi
  char *i; // rsi
  int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  __int64 v13; // r14
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // edx

  InformationBufferLength = a3->DATA.QUERY_INFORMATION.InformationBufferLength;
  v4 = 0;
  Miniport = a2;
  if ( !a2 )
    Miniport = a1->Miniport;
  if ( (unsigned int)InformationBufferLength >= 0x1C
    && (InformationBuffer = (char *)a3->DATA.QUERY_INFORMATION.InformationBuffer,
        *(_QWORD *)InformationBuffer == 0x1C00000001LL)
    && (v7 = *((unsigned int *)InformationBuffer + 3), (unsigned int)v7 <= (unsigned int)InformationBufferLength) )
  {
    if ( (_DWORD)v7 )
    {
      for ( i = &InformationBuffer[v7]; (unsigned int)v7 < 0xFFFFFFE8; i += v13 )
      {
        if ( (unsigned __int64)(unsigned int)v7 + 24 > InformationBufferLength )
          break;
        v9 = *((_DWORD *)i + 4);
        v10 = v9 + v7;
        if ( v9 + (int)v7 < (unsigned int)v7 )
          break;
        if ( v10 > (unsigned int)InformationBufferLength )
          break;
        v11 = v10 + 20;
        if ( v11 < 0x14 || v11 > (unsigned int)InformationBufferLength )
          break;
        if ( *((_DWORD *)i + 2) == 2 )
        {
          Offload = Miniport->Offload;
          if ( v9 == 16 && *((_DWORD *)i + 6) <= Offload->TopCapabilities.LsoV1.IPv4.MaxOffLoadSize )
          {
            if ( *((_DWORD *)i + 7) < Offload->TopCapabilities.LsoV1.IPv4.MinSegmentCount )
              v4 = -1073676267;
          }
          else
          {
            v4 = -1073676267;
          }
        }
        v13 = *((unsigned int *)i + 3);
        if ( !(_DWORD)v13 )
          return v4;
        v14 = v13 + v7;
        v15 = -1;
        v16 = v7;
        if ( (int)v13 + (int)v7 >= (unsigned int)v7 )
          v15 = v13 + v7;
        LODWORD(v7) = v15;
        v4 = NdisConvertNtStatusToNdisStatus(v14 < v16 ? 0xC0000095 : 0);
        if ( v4 )
          break;
      }
      return (unsigned int)-1073676267;
    }
  }
  else
  {
    return (unsigned int)-1073676267;
  }
  return v4;
}
