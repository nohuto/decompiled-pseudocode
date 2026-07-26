/*
 * XREFs of ndisSriovInterfaceSetVfPowerState @ 0x14014C660
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceSetVfPowerState(struct _NDIS_MINIPORT_BLOCK *a1, __int16 a2, int a3, char a4)
{
  int v8; // edx
  unsigned int v9; // ebx
  char v11[4]; // [rsp+30h] [rbp-D0h]
  struct _NDIS_OID_REQUEST v12; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[13]; // [rsp+140h] [rbp+40h] BYREF
  __int16 v14; // [rsp+14Dh] [rbp+4Dh]
  char v15; // [rsp+14Fh] [rbp+4Fh]

  memset(&v12.Header.Revision, 0, 0xF7uLL);
  *(_QWORD *)&v13[1] = 0LL;
  *(_DWORD *)&v13[9] = 0;
  v14 = 0;
  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      26,
      112,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  *(_DWORD *)v13 = 1048960;
  *(_WORD *)&v13[4] = a2;
  *(_DWORD *)&v13[8] = a3;
  v13[12] = a4;
  memset(&v12, 0, 0xF8uLL);
  *(_DWORD *)&v12.NdisReserved[16] |= 8u;
  *(_QWORD *)&v12.NdisReserved[32] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v12.NdisReserved[96]);
  v12.PortNumber = 0;
  v12.DATA.QUERY_INFORMATION.InformationBuffer = v13;
  v12.Header = (NDIS_OBJECT_HEADER)15466902;
  v12.DATA.QUERY_INFORMATION.Oid = 66134;
  v12.RequestType = NdisRequestSetInformation;
  v12.DATA.QUERY_INFORMATION.InformationBufferLength = 16;
  v9 = ndisQuerySetMiniport(a1, 0LL, &v12, 0, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x71u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1,
      *(_DWORD *)v11);
  }
  return v9;
}
