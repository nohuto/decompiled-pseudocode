/*
 * XREFs of ndisMSendPmParametersOidForSuspend @ 0x1400842B0
 * Callers:
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x140083FB0 (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140165EE0 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisMSendPmParametersOidForSuspend(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  __int64 result; // rax
  struct _NDIS_OID_REQUEST v5; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v6; // [rsp+110h] [rbp+10h]

  v6 = 0LL;
  memset(&v5.NdisReserved[40], 0, 128);
  *(_QWORD *)&v5.NdisReserved[32] = &ndisIntReqGeneric;
  memset(&v5, 0, 32);
  *(&v5.DATA.METHOD_INFORMATION.Oid + 1) = 0;
  memset(&v5.DATA.METHOD_INFORMATION.InputBufferLength, 0, 56);
  *(_DWORD *)&v5.NdisReserved[16] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v5.NdisReserved[96]);
  *(_DWORD *)&v5.NdisReserved[16] |= 0x400u;
  v5.Header = (NDIS_OBJECT_HEADER)15466902;
  v5.DATA.QUERY_INFORMATION.Oid = -50265847;
  *(_QWORD *)&v5.RequestType = 1LL;
  v5.DATA.QUERY_INFORMATION.InformationBuffer = a2;
  v5.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
  KeInitializeEvent((PRKEVENT)&v5.NdisReserved[40], NotificationEvent, 0);
  result = ndisMInvokeOidRequest(a1, &v5);
  if ( (_DWORD)result == 259 )
  {
    ndisWaitForKernelObject(&v5.NdisReserved[40]);
    return *(unsigned int *)&v5.NdisReserved[8];
  }
  return result;
}
