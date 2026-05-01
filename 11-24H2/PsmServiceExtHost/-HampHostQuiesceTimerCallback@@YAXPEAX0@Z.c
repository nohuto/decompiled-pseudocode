/*
 * XREFs of ?HampHostQuiesceTimerCallback@@YAXPEAX0@Z @ 0x18006E520
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800090C0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA04 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall HampHostQuiesceTimerCallback(void *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  _BYTE v3[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(v3, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v3);
  HampHostAcquireLockExclusiveEx(a2, 0);
  if ( (*((_DWORD *)a2 + 166) & 0xE0000000) == 0xA0000000LL )
  {
    HampHostReleaseLockExclusive(a2);
  }
  else
  {
    HampHostReleaseLockExclusive(a2);
    RtlWakeAllConditionVariable((char *)a2 + 696);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
