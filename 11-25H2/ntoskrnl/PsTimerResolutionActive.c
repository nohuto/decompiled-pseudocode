/*
 * XREFs of PsTimerResolutionActive @ 0x14036F5C0
 * Callers:
 *     KiTimerWaitTest @ 0x1402EEDC0 (KiTimerWaitTest.c)
 *     KiInitializeTimer2 @ 0x14036F318 (KiInitializeTimer2.c)
 *     KiExpireTimer2 @ 0x140370160 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 0x1000) != 0 && (*(_DWORD *)(a1 + 1532) & 0x4000000) == 0;
}
