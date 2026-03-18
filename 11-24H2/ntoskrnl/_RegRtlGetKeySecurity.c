/*
 * XREFs of _RegRtlGetKeySecurity @ 0x1408210D4
 * Callers:
 *     _PnpCtxRegGetKeySecurity @ 0x14081792C (_PnpCtxRegGetKeySecurity.c)
 *     _RegRtlCopyTreeInternal @ 0x140820BA0 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwQuerySecurityObject @ 0x1406A9110 (ZwQuerySecurityObject.c)
 */

NTSTATUS __fastcall RegRtlGetKeySecurity(void *a1, SECURITY_INFORMATION a2, void *a3, ULONG *LengthNeeded)
{
  return ZwQuerySecurityObject(a1, a2, a3, *LengthNeeded, LengthNeeded);
}
