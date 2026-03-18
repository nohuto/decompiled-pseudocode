/*
 * XREFs of ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14003506C
 * Callers:
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14000E5A8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140014C24 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     GreMakeBitmapNonStock @ 0x140015630 (GreMakeBitmapNonStock.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001DDB4 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140020190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     bPEBCacheHandle @ 0x14002DDC0 (bPEBCacheHandle.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400348A0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x140034950 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140038F80 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgUnlock @ 0x140131968 (HmgUnlock.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper@@@@SAXPEAX@Z @ 0x1401C0A30 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VRGNOBJAPI@@@@SAXPEAX@Z @ 0x1401C1320 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VRGNOBJAPI@@@@SAXPEAX@.c)
 *     ?HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x1401C1B50 (-HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@SAXPEAX@Z @ 0x1401C31E0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@.c)
 *     ?CleanupRoutine@?$HmgLockResult@VDRVOBJ@@@@QEAAXXZ @ 0x1401CD55C (-CleanupRoutine@-$HmgLockResult@VDRVOBJ@@@@QEAAXXZ.c)
 *     EngUnlockDriverObj @ 0x1401CD720 (EngUnlockDriverObj.c)
 * Callees:
 *     ?ReportOverflow@OBJECT@@QEAAXK@Z @ 0x1401C1EE0 (-ReportOverflow@OBJECT@@QEAAXK@Z.c)
 */

void __fastcall OBJECT::InterlockedDecrementExclusiveLockCount(OBJECT *this)
{
  _InterlockedDecrement((volatile signed __int32 *)this + 3);
  if ( *((_WORD *)this + 6) == 0xFFFF )
    OBJECT::ReportOverflow(this, 3u);
}
