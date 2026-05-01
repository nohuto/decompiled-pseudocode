/*
 * XREFs of ?HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180037F48
 * Callers:
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180037E38 (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180084AD8 (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x180038030 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampUserAcquireLockExclusive(struct _HAM_USER *a1)
{
  CempLockTrackerMarkAcquired(HampLockTrackerId);
  CempLockAcquireExclusive((__int64)a1 + 168);
}
