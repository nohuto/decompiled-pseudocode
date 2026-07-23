/*
 * XREFs of HalpTimerInitializeClockPn @ 0x1405447A4
 * Callers:
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpInterruptSetIdtEntry @ 0x140558090 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerInitializeClockPn(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r9d
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v8; // rbx
  __int64 v9; // rax

  HalpInterruptSetIdtEntry(210, (unsigned int)HalpTimerClockIpiRoutine, 13, a4, -3LL);
  v5 = HalpClockTimer;
  result = *(unsigned int *)(HalpClockTimer + 224);
  if ( (result & 1) != 0 )
  {
    result = HalpInterruptSetIdtEntry(209, (unsigned int)HalpTimerClockInterrupt, 13, v4, -3LL);
    if ( (*(_DWORD *)(v5 + 224) & 0x800) != 0 )
    {
      InternalData = HalpTimerGetInternalData(v5);
      result = guard_dispatch_icall_no_overrides(InternalData, 209LL);
    }
  }
  v8 = HalpAlwaysOnTimer;
  if ( HalpAlwaysOnTimer )
  {
    result = *(unsigned int *)(HalpAlwaysOnTimer + 224);
    if ( (result & 1) != 0 )
    {
      result = HalpInterruptSetIdtEntry(211, (unsigned int)HalpTimerAlwaysOnClockInterrupt, 13, v4, -3LL);
      if ( (*(_DWORD *)(v8 + 224) & 0x800) != 0 )
      {
        v9 = HalpTimerGetInternalData(v8);
        return guard_dispatch_icall_no_overrides(v9, 211LL);
      }
    }
  }
  return result;
}
