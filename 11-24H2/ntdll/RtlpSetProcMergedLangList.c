/*
 * XREFs of RtlpSetProcMergedLangList @ 0x18010B414
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpInitMuiCriticalSection @ 0x18007CC94 (RtlpInitMuiCriticalSection.c)
 */

__int64 __fastcall RtlpSetProcMergedLangList(__int64 a1, __int64 a2)
{
  if ( !a2 || !a1 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a1 + 96) )
  {
    RtlpInitMuiCriticalSection();
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
