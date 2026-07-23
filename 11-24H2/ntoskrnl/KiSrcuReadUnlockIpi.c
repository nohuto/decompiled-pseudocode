/*
 * XREFs of KiSrcuReadUnlockIpi @ 0x1405BECC0
 * Callers:
 *     <none>
 * Callees:
 *     KeSrcuReadUnlock @ 0x1405BE300 (KeSrcuReadUnlock.c)
 */

__int64 __fastcall KiSrcuReadUnlockIpi(__int64 a1, __int64 a2, _DWORD *a3)
{
  return KeSrcuReadUnlock(a2, a3);
}
