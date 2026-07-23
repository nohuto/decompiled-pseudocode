/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x1801080D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180011550 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x1800115D4 (RtlpInitMuiCriticalSection.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180018270 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 */

NTSTATUS __cdecl RtlGetProcessPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  char v7; // bl
  NTSTATUS result; // eax
  __int64 v9; // rsi
  NTSTATUS v10; // ebx
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = Flags;
  if ( !ReturnLength || !NumberOfLanguages || !Languages && *ReturnLength )
    return -1073741811;
  if ( Flags )
  {
    if ( (Flags & 0xFFFFFFF3) != 0 || (Flags & 0xC) == 12 )
      return -1073741811;
  }
  else
  {
    v7 = 8;
  }
  result = RtlpCreateProcessRegistryInfo(&v11);
  if ( result >= 0 )
  {
    v9 = v11;
    if ( !*(_QWORD *)(v11 + 72) )
      return LdrpConvertLangFallbackListToMultiSz(0LL, v11, Languages, ReturnLength, v7, 0, NumberOfLanguages);
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    v10 = LdrpConvertLangFallbackListToMultiSz(
            *(_QWORD *)(v9 + 72),
            v9,
            Languages,
            ReturnLength,
            v7,
            0,
            NumberOfLanguages);
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    return v10;
  }
  return result;
}
