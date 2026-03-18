/*
 * XREFs of GreLockVisRgnWithDmcLockAcquiredEx @ 0x1401C4B60
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400117B8 (--$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B140 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreLockVisRgnWithDmcLockAcquiredEx(__int64 a1)
{
  struct _ERESOURCE **v1; // rbx

  v1 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  GreAcquireSemaphore<2,>(v1);
  return GreAcquireSemaphore<3,>((__int64 *)v1);
}
