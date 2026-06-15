/*
 * XREFs of __tailMerge_rpcrt4_dll @ 0x1800215C2
 * Callers:
 *     __imp_load_RpcRevertToSelf @ 0x180021641 (__imp_load_RpcRevertToSelf.c)
 *     __imp_load_RpcImpersonateClient @ 0x180021653 (__imp_load_RpcImpersonateClient.c)
 *     __imp_load_I_RpcBindingInqLocalClientPID @ 0x18002178D (__imp_load_I_RpcBindingInqLocalClientPID.c)
 *     __imp_load_RpcServerInqCallAttributesW @ 0x180021940 (__imp_load_RpcServerInqCallAttributesW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180048A60 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_rpcrt4_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_rpcrt4_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
