/*
 * XREFs of GreDwmCreatedBitmapRemotingOutput @ 0x140321980
 * Callers:
 *     NtGdiDwmCreatedBitmapRemotingOutput @ 0x1403370C0 (NtGdiDwmCreatedBitmapRemotingOutput.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140196DC0 (--0-$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DrvModeChangeCompleteNotify @ 0x140322C60 (DrvModeChangeCompleteNotify.c)
 */

__int64 __fastcall GreDwmCreatedBitmapRemotingOutput(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v4, v1);
  SEMOBJSHARED<7>::SEMOBJSHARED<7>((HSEMAPHORE *)&v3, v1);
  if ( (unsigned int)UserIsCurrentProcessDwm() && (unsigned int)UserIsRemoteConnection() )
    DrvModeChangeCompleteNotify();
  GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v3);
  return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
           (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
           v4);
}
