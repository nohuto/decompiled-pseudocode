/*
 * XREFs of ??0?$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140196DC0
 * Callers:
 *     GreDwmCreatedBitmapRemotingOutput @ 0x140321980 (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreGetHwndUpdateIds @ 0x140321B48 (GreGetHwndUpdateIds.c)
 *     GreHLsurfSetPresentFlags @ 0x140321CA0 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x140321DA4 (GreHLsurfSetUpdateId.c)
 *     GreSetHwndPresentFlags @ 0x140321F68 (GreSetHwndPresentFlags.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x140060C4C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJSHARED<7>::SEMOBJSHARED<7>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx

  v3 = (HSEMAPHORE)(*a2 + 520LL);
  *a1 = v3;
  GreAcquireSemaphoreSharedInternal(v3);
  GrepAcquireLockValidate<7>();
  return a1;
}
