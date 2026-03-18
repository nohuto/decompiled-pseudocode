/*
 * XREFs of PsTimerResolutionActive @ 0x1403BF7D0
 * Callers:
 *     KiTimerWaitTest @ 0x140335E10 (KiTimerWaitTest.c)
 *     KiInitializeTimer2 @ 0x1403BF498 (KiInitializeTimer2.c)
 *     KiExpireTimer2 @ 0x1403C0A90 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 0x1000) != 0 && (*(_DWORD *)(a1 + 1532) & 0x4000000) == 0;
}
