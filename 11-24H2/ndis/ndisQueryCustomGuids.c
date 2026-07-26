/*
 * XREFs of ndisQueryCustomGuids @ 0x140082F30
 * Callers:
 *     ndisQuerySupportedGuidToOidList @ 0x140083350 (ndisQuerySupportedGuidToOidList.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x14000AD80 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisQueryCustomGuids(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        _QWORD *a3,
        _WORD *a4)
{
  struct _NDIS_OID_REQUEST *v5; // rbx
  _WORD *v6; // r12
  unsigned __int128 v8; // rax
  UINT MethodId_low; // edi
  unsigned __int64 v10; // rbp
  __int64 Pool2; // rax
  int v12; // edx
  _DWORD *v13; // r13
  int SetMiniport; // edi
  int v15; // edx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  unsigned __int8 MajorNdisVersion; // al
  _DWORD *v19; // rax
  __int64 v20; // rcx
  int *v21; // rsi
  __int64 v22; // r15
  int v23; // ecx
  void *v24; // rbx
  PVOID DataBlockObject; // [rsp+40h] [rbp-48h] BYREF

  v5 = a2;
  DataBlockObject = 0LL;
  v6 = a4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      13,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  *(_OWORD *)&v5->Header.Type = 0LL;
  *(_OWORD *)&v5->RequestId = 0LL;
  *a3 = 0LL;
  *(_OWORD *)&v5->DATA.QUERY_INFORMATION.Oid = 0LL;
  *v6 = 0;
  *(_OWORD *)&v5->DATA.METHOD_INFORMATION.InputBufferLength = 0LL;
  *(_OWORD *)&v5->DATA.METHOD_INFORMATION.BytesRead = 0LL;
  *(_OWORD *)&v5->NdisReserved[8] = 0LL;
  *(_QWORD *)&v5->NdisReserved[24] = 0LL;
  *(_OWORD *)&v5->NdisReserved[40] = 0LL;
  *(_OWORD *)&v5->NdisReserved[56] = 0LL;
  *(_OWORD *)&v5->NdisReserved[72] = 0LL;
  *(_OWORD *)&v5->NdisReserved[88] = 0LL;
  *(_OWORD *)&v5->NdisReserved[104] = 0LL;
  *(_OWORD *)&v5->NdisReserved[120] = 0LL;
  *(_OWORD *)&v5->MiniportReserved[8] = 0LL;
  *(_OWORD *)&v5->SourceReserved[8] = 0LL;
  *(_QWORD *)&v5[1].Header.Type = 0LL;
  *(_DWORD *)&v5->NdisReserved[16] |= 8u;
  *(_QWORD *)&v5->NdisReserved[32] = &ndisIntReqWmi;
  EtwActivityIdControl(3u, (LPGUID)&v5->NdisReserved[96]);
  *(_QWORD *)&v5->Header.Type = 15466902LL;
  v5->DATA.QUERY_INFORMATION.Oid = 65815;
  v5->PortNumber = 0;
  v5->DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v5->DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  LODWORD(v8) = ndisQuerySetMiniportEx(a1, 0LL, v5, 0, 0LL, 0LL);
  MethodId_low = LOWORD(v5->DATA.METHOD_INFORMATION.MethodId);
  if ( (((_DWORD)v8 + 1073676268) & 0xFFFFFFFD) == 0 )
  {
    if ( (_WORD)MethodId_low )
    {
      v8 = LOWORD(v5->DATA.METHOD_INFORMATION.MethodId) * (unsigned __int128)0x2492492492492493uLL;
      v10 = (*((_QWORD *)&v8 + 1)
           + (((unsigned __int64)LOWORD(v5->DATA.METHOD_INFORMATION.MethodId) - *((_QWORD *)&v8 + 1)) >> 1)) >> 4;
      if ( (_WORD)v10 )
      {
        Pool2 = ExAllocatePool2(64LL, LOWORD(v5->DATA.METHOD_INFORMATION.MethodId), 829899854LL);
        v13 = (_DWORD *)Pool2;
        if ( !Pool2 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v12,
              18,
              15,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a1);
          }
          SetMiniport = -1073741670;
          goto LABEL_37;
        }
        v5->DATA.QUERY_INFORMATION.InformationBuffer = (PVOID)Pool2;
        v5->DATA.QUERY_INFORMATION.InformationBufferLength = MethodId_low;
        SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, v5, 0, 0LL, 0LL);
        if ( SetMiniport )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v15,
              18,
              16,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a1);
          }
LABEL_33:
          ExFreePoolWithTag(v13, 0);
          goto LABEL_37;
        }
        if ( (a1->Flags & 0x20000) != 0 )
        {
          v16 = v13 + 6;
          v17 = (unsigned __int16)v10;
          do
          {
            *v16 |= 0x10000000u;
            v16 += 7;
            --v17;
          }
          while ( v17 );
          MajorNdisVersion = a1->MajorNdisVersion;
        }
        else
        {
          MajorNdisVersion = a1->MajorNdisVersion;
        }
        if ( MajorNdisVersion < 6u )
        {
          v21 = v13 + 6;
          v22 = (unsigned __int16)v10;
          do
          {
            v23 = *v21;
            if ( (*(_BYTE *)v21 & 0x60) == 0x60 )
            {
              v24 = &AllUsersReadWriteSecurityDescriptor;
            }
            else if ( (v23 & 0x20) != 0 )
            {
              v24 = &AllUsersReadSecurityDescriptor;
            }
            else
            {
              v24 = &AllUsersWriteSecurityDescriptor;
              if ( (v23 & 0x40) == 0 )
                v24 = &AdminsSecurityDescriptor;
            }
            *v21 = v23 | 0x8000000;
            SetMiniport = IoWMIOpenBlock((LPCGUID)(v21 - 6), 0x40000u, &DataBlockObject);
            if ( SetMiniport >= 0 )
            {
              SetMiniport = ObSetSecurityObjectByPointer(DataBlockObject, 7LL, v24);
              ObfDereferenceObject(DataBlockObject);
            }
            v21 += 7;
            --v22;
          }
          while ( v22 );
          v6 = a4;
          if ( SetMiniport )
            goto LABEL_33;
        }
        else
        {
          v19 = v13 + 6;
          v20 = (unsigned __int16)v10;
          do
          {
            *v19 |= 0x8000000u;
            v19 += 7;
            --v20;
          }
          while ( v20 );
        }
        *v6 = v10;
        *a3 = v13;
        goto LABEL_37;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    BYTE8(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      SDWORD2(v8),
      18,
      14,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  SetMiniport = -1073741637;
LABEL_37:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x11u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      SetMiniport);
  return (unsigned int)SetMiniport;
}
