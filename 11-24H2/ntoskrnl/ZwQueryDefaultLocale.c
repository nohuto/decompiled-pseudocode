/*
 * XREFs of ZwQueryDefaultLocale @ 0x1406A7650
 * Callers:
 *     DifZwQueryDefaultLocaleWrapper @ 0x140642690 (DifZwQueryDefaultLocaleWrapper.c)
 *     NtInitializeNlsFiles @ 0x1408DD880 (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(UserProfile);
}
