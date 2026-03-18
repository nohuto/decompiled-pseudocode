/*
 * XREFs of _RegRtlSetKeySecurity @ 0x1408213BC
 * Callers:
 *     _PnpCtxRegSetKeySecurity @ 0x14081797C (_PnpCtxRegSetKeySecurity.c)
 *     _RegRtlCopyTreeInternal @ 0x140820BA0 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1406A9B30 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall RegRtlSetKeySecurity(void *a1, SECURITY_INFORMATION a2, void *a3)
{
  return ZwSetSecurityObject(a1, a2, a3);
}
