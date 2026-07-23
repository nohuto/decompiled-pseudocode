/*
 * XREFs of RtlpSetProcMergedLangList @ 0x1801061B4
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x1800115D4 (RtlpInitMuiCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpSetProcMergedLangList(__int64 a1, __int64 a2)
{
  if ( !a2 || !a1 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a1 + 96) )
  {
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    if ( !*(_QWORD *)(a1 + 96) )
    {
      *(_DWORD *)(a2 + 40) |= 0x40u;
      *(_DWORD *)a1 |= 0x200u;
      *(_QWORD *)(a1 + 96) = a2;
    }
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
  }
  return 0LL;
}
