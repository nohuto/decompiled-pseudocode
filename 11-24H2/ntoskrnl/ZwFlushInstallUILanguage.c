/*
 * XREFs of ZwFlushInstallUILanguage @ 0x1406A91B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwFlushInstallUILanguage(LANGID InstallUILanguage, ULONG SetComittedFlag)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InstallUILanguage);
}
