/*
 * XREFs of ndisSriovGetResourceForBar @ 0x1401567B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisSriovGetResourceForBar(struct _NDIS_MINIPORT_BLOCK *a1, __int16 a2, __int16 a3, __int64 a4)
{
  int v8; // edx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  struct _NDIS_OID_REQUEST v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+140h] [rbp+40h] BYREF
  __int16 v14; // [rsp+144h] [rbp+44h]
  __int16 v15; // [rsp+146h] [rbp+46h]
  unsigned int v16; // [rsp+148h] [rbp+48h]
  __int128 v17; // [rsp+14Ch] [rbp+4Ch]
  int v18; // [rsp+15Ch] [rbp+5Ch]

  memset(&v12.Header.Revision, 0, 0xF7uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      26,
      118,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  v18 = 0;
  v13 = 786816;
  v14 = a2;
  v16 = 12;
  v15 = a3;
  v17 = 0LL;
  memset(&v12, 0, 0xF8uLL);
  *(_DWORD *)&v12.NdisReserved[16] |= 8u;
  *(_QWORD *)&v12.NdisReserved[32] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v12.NdisReserved[96]);
  v12.PortNumber = 0;
  v12.DATA.QUERY_INFORMATION.InformationBuffer = &v13;
  v12.Header = (NDIS_OBJECT_HEADER)15466902;
  v12.DATA.QUERY_INFORMATION.InformationBufferLength = 32;
  *(_QWORD *)&v12.DATA.METHOD_INFORMATION.OutputBufferLength = 32LL;
  v12.RequestType = NdisRequestMethod;
  v12.DATA.QUERY_INFORMATION.Oid = 66137;
  v9 = ndisQuerySetMiniport(a1, 0LL, &v12, 0, 0LL);
  if ( !v9 )
  {
    v10 = v16;
    *(_OWORD *)a4 = *(_OWORD *)((char *)&v13 + v16);
    *(_DWORD *)(a4 + 16) = *(_DWORD *)((char *)&v17 + v10 + 4);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x77u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1,
      v9);
  return v9;
}
