/*
 * XREFs of RtlpSetProcMergedLangList @ 0x18010DAB4
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpInitMuiCriticalSection @ 0x18008BB44 (RtlpInitMuiCriticalSection.c)
 */

__int64 __fastcall RtlpSetProcMergedLangList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !a2 || !a1 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a1 + 96) )
  {
    RtlpInitMuiCriticalSection(a1, a2, a3, a4);
    RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
    if ( !*(_QWORD *)(a1 + 96) )
    {
      *(_DWORD *)(a2 + 40) |= 0x40u;
      *(_DWORD *)a1 |= 0x200u;
      *(_QWORD *)(a1 + 96) = a2;
    }
    RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
  }
  return 0LL;
}
