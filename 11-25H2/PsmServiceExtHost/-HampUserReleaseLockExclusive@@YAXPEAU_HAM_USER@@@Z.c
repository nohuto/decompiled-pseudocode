/*
 * XREFs of ?HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180038138
 * Callers:
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180037EB8 (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180084618 (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x1800381B0 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampUserReleaseLockExclusive(struct _HAM_USER *a1, __int64 a2)
{
  CempLockTrackerMarkReleased(HampLockTrackerId, a2, 7LL);
  *((_DWORD *)a1 + 44) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 168);
}
