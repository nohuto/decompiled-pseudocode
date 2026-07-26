/*
 * XREFs of ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14003E130
 * Callers:
 *     ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x14003D9C0 (-ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x14003DF90 (-ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400BE2BC (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 */

__int64 __fastcall ndisIsValidMulticastFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  struct _NDIS_OPEN_BLOCK *v4; // rsi
  UINT InformationBufferLength; // ecx
  unsigned int v7; // edx
  KIRQL v9; // al

  v4 = a2;
  if ( a2 )
  {
    if ( (a2->OpenFlags & 0x2000000) != 0 && (*(_DWORD *)&a3->NdisReserved[16] & 0x20) != 0 )
      return 3221225659LL;
    if ( (*(_DWORD *)&a3->NdisReserved[16] & 0x20) != 0 )
    {
      v9 = KeAcquireSpinLockRaiseToDpc(&a2->SpinLock);
      v4->OpenFlags |= 0x1000000u;
      KeReleaseSpinLock(&v4->SpinLock, v9);
    }
  }
  if ( a1->MediaType )
  {
    *(_QWORD *)&a3->DATA.METHOD_INFORMATION.OutputBufferLength = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        11,
        71,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)a1,
        (char)v4,
        (char)a3);
    }
    return 3221225659LL;
  }
  InformationBufferLength = a3->DATA.QUERY_INFORMATION.InformationBufferLength;
  v7 = InformationBufferLength / 6;
  if ( InformationBufferLength == 6 * (InformationBufferLength / 6) )
  {
    if ( v7 > a1->EthDB->MaxMulticastAddresses )
    {
      *(_QWORD *)&a3->DATA.METHOD_INFORMATION.OutputBufferLength = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_qqq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          11,
          73,
          (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
          (char)a1,
          (char)v4,
          (char)a3);
      }
      return 3221291017LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    *(_QWORD *)&a3->DATA.METHOD_INFORMATION.OutputBufferLength = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        11,
        72,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)a1,
        (char)v4,
        (char)a3);
    }
    return 3221291028LL;
  }
}
