/*
 * XREFs of PsTimerResolutionActive @ 0x1403AE390
 * Callers:
 *     KiInitializeTimer2 @ 0x1403AE058 (KiInitializeTimer2.c)
 *     KiExpireTimer2 @ 0x1403AF650 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 0x1000) != 0 && (*(_DWORD *)(a1 + 1532) & 0x4000000) == 0;
}
