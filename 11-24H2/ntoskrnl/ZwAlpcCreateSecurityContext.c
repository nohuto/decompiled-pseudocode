/*
 * XREFs of ZwAlpcCreateSecurityContext @ 0x1406A83D0
 * Callers:
 *     DifZwAlpcCreateSecurityContextWrapper @ 0x14063AA40 (DifZwAlpcCreateSecurityContextWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
