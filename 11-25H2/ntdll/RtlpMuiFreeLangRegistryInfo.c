/*
 * XREFs of RtlpMuiFreeLangRegistryInfo @ 0x180088D50
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180086FD0 (RtlUpdateProcessRegistryInfo.c)
 *     RtlGetUILanguageInfo @ 0x18008A190 (RtlGetUILanguageInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x180141E40 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800871E0 (RtlpMuiRegFreeRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiFreeLangRegistryInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // r9

  if ( !a1 )
    return 3221225485LL;
  v5 = RtlpMuiRegFreeRegistryInfo(a1, 0xFFFu, a3, a4);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1, v6);
  return v5;
}
