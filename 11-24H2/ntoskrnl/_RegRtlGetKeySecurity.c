/*
 * XREFs of _RegRtlGetKeySecurity @ 0x140821814
 * Callers:
 *     _PnpCtxRegGetKeySecurity @ 0x14081806C (_PnpCtxRegGetKeySecurity.c)
 *     _RegRtlCopyTreeInternal @ 0x1408212E0 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwQuerySecurityObject @ 0x1406AA0B0 (ZwQuerySecurityObject.c)
 */

NTSTATUS __fastcall RegRtlGetKeySecurity(void *a1, SECURITY_INFORMATION a2, void *a3, ULONG *LengthNeeded)
{
  return ZwQuerySecurityObject(a1, a2, a3, *LengthNeeded, LengthNeeded);
}
