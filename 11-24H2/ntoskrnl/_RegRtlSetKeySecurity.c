/*
 * XREFs of _RegRtlSetKeySecurity @ 0x140821AFC
 * Callers:
 *     _PnpCtxRegSetKeySecurity @ 0x1408180BC (_PnpCtxRegSetKeySecurity.c)
 *     _RegRtlCopyTreeInternal @ 0x1408212E0 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1406AAAD0 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall RegRtlSetKeySecurity(void *a1, SECURITY_INFORMATION a2, void *a3)
{
  return ZwSetSecurityObject(a1, a2, a3);
}
