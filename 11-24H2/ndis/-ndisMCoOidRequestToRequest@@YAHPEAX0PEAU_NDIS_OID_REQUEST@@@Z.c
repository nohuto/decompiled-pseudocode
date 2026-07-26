/*
 * XREFs of ?ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z @ 0x14004AF10
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x14000AD80 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qqDd @ 0x14004B090 (WPP_RECORDER_SF_qqDd.c)
 *     NdisMCoRequestComplete @ 0x14004B150 (NdisMCoRequestComplete.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMCoOidRequestToRequest(_QWORD *a1, void *a2, struct _NDIS_OID_REQUEST *a3)
{
  NDIS_OID Oid; // r14d
  unsigned int v6; // esi
  __int64 Pool2; // rax
  __int64 v9; // rdi
  PVOID InformationBuffer; // rcx
  UINT InformationBufferLength; // edx
  UINT BytesWritten; // r8d
  UINT BytesNeeded; // r9d
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  NDIS_STATUS v17; // eax
  char v19[4]; // [rsp+38h] [rbp-40h]

  Oid = a3->DATA.QUERY_INFORMATION.Oid;
  v6 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v19 = a3->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      (char)a3,
      *(_DWORD *)v19);
  }
  if ( a3->RequestType == NdisRequestMethod )
  {
    v6 = -1073741637;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 176LL, 1701987406LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 32) = a3->RequestType;
      InformationBuffer = a3->DATA.QUERY_INFORMATION.InformationBuffer;
      InformationBufferLength = a3->DATA.QUERY_INFORMATION.InformationBufferLength;
      BytesWritten = a3->DATA.QUERY_INFORMATION.BytesWritten;
      BytesNeeded = a3->DATA.QUERY_INFORMATION.BytesNeeded;
      *(_DWORD *)(Pool2 + 40) = a3->DATA.QUERY_INFORMATION.Oid;
      *(_QWORD *)(Pool2 + 48) = InformationBuffer;
      *(_DWORD *)(Pool2 + 56) = InformationBufferLength;
      *(_DWORD *)(Pool2 + 60) = BytesWritten;
      v14 = Pool2;
      *(_DWORD *)(Pool2 + 64) = BytesNeeded;
      v15 = a1[470];
      *(_DWORD *)(v9 + 24) |= 0x400u;
      v16 = a1[3];
      *(_QWORD *)(v9 + 8) = a3;
      v17 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(v15 + 288))(v16, a2, v14);
      v6 = v17;
      if ( v17 != 259 )
      {
        NdisMCoRequestComplete(v17, a1, (PNDIS_REQUEST)v9);
        v6 = 259;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      (int)a3,
      29,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      (char)a3,
      Oid,
      v6);
  return v6;
}
