/*
 * XREFs of RtlGetLocaleFileMappingAddress @ 0x1800FC290
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtInitializeNlsFiles @ 0x180165310 (NtInitializeNlsFiles.c)
 */

NTSTATUS __cdecl RtlGetLocaleFileMappingAddress(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  NTSTATUS result; // eax

  if ( !BaseAddress )
    return -1073741585;
  if ( !DefaultLocaleId )
    return -1073741584;
  if ( gBaseAddress )
  {
    *BaseAddress = (PVOID)gBaseAddress;
    *DefaultLocaleId = gSystemLocale;
  }
  else
  {
    result = NtInitializeNlsFiles(BaseAddress, DefaultLocaleId, 0LL, CurrentNLSVersion);
    if ( result < 0 )
      return result;
    gSystemLocale = *DefaultLocaleId;
    if ( _InterlockedCompareExchange64(&gBaseAddress, (signed __int64)*BaseAddress, 0LL) )
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *BaseAddress);
      *BaseAddress = (PVOID)gBaseAddress;
    }
  }
  return 0;
}
