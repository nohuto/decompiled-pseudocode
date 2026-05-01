/*
 * XREFs of ?GetCallerPID@@YAKPEAX@Z @ 0x18005C820
 * Callers:
 *     RmgrSrv_RmAcquireResources @ 0x18005C2B0 (RmgrSrv_RmAcquireResources.c)
 *     RmgrSrv_RmAccessCheck @ 0x18005C5A0 (RmgrSrv_RmAccessCheck.c)
 *     RmgrSrv_RmAccessCheckOnCaller @ 0x180077C10 (RmgrSrv_RmAccessCheckOnCaller.c)
 *     RmgrSrv_RmAvailabilityCheck @ 0x180077CE0 (RmgrSrv_RmAvailabilityCheck.c)
 * Callees:
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall GetCallerPID(RPC_BINDING_HANDLE ClientBinding)
{
  _DWORD RpcCallAttributes[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v4[56]; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v5; // [rsp+60h] [rbp-48h]

  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v4, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  return v5;
}
