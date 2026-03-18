/*
 * XREFs of HalpTimerInitializeClockPn @ 0x140546EE4
 * Callers:
 *     HalpTimerInitSystem @ 0x14053AFA0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpInterruptSetIdtEntry @ 0x14055A460 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerInitializeClockPn(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r9d
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9

  HalpInterruptSetIdtEntry(210, (unsigned int)HalpTimerClockIpiRoutine, 13, a4, -3LL);
  v5 = HalpClockTimer;
  result = *(unsigned int *)(HalpClockTimer + 224);
  if ( (result & 1) != 0 )
  {
    result = HalpInterruptSetIdtEntry(209, (unsigned int)HalpTimerClockInterrupt, 13, v4, -3LL);
    if ( (*(_DWORD *)(v5 + 224) & 0x800) != 0 )
    {
      InternalData = HalpTimerGetInternalData(v5);
      result = guard_dispatch_icall_no_overrides(InternalData, 209LL, v8, v9);
    }
  }
  v10 = HalpAlwaysOnTimer;
  if ( HalpAlwaysOnTimer )
  {
    result = *(unsigned int *)(HalpAlwaysOnTimer + 224);
    if ( (result & 1) != 0 )
    {
      result = HalpInterruptSetIdtEntry(211, (unsigned int)HalpTimerAlwaysOnClockInterrupt, 13, v4, -3LL);
      if ( (*(_DWORD *)(v10 + 224) & 0x800) != 0 )
      {
        v11 = HalpTimerGetInternalData(v10);
        return guard_dispatch_icall_no_overrides(v11, 211LL, v12, v13);
      }
    }
  }
  return result;
}
