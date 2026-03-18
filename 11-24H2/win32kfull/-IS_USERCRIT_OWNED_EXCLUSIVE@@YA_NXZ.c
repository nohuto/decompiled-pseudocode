/*
 * XREFs of ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0
 * Callers:
 *     ?HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z @ 0x14002BD28 (-HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z.c)
 *     xxxHkCallHook @ 0x140080630 (xxxHkCallHook.c)
 *     PhkFirstValid @ 0x140080F00 (PhkFirstValid.c)
 *     PhkNextValid @ 0x140080FC4 (PhkNextValid.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxLoadHmodIndex @ 0x140082390 (xxxLoadHmodIndex.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x140082960 (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x140082A28 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z @ 0x140082ADC (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z.c)
 *     FreeHidData @ 0x140082EF0 (FreeHidData.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140083108 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     DestroySMWP @ 0x140083140 (DestroySMWP.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140083708 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     EnsurePointerDeviceHasMonitor @ 0x140083760 (EnsurePointerDeviceHasMonitor.c)
 *     EnterEditionCrit @ 0x140084100 (EnterEditionCrit.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x14008AE58 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 *     ?MovePointer@Api@Cursor@InputTraceLogging@@SAXHHKPEAX_K@Z @ 0x140093E40 (-MovePointer@Api@Cursor@InputTraceLogging@@SAXHHKPEAX_K@Z.c)
 *     ?MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z @ 0x140093F58 (-MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x140094048 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     UserDetachQueueFromInputWindow @ 0x1400A4408 (UserDetachQueueFromInputWindow.c)
 *     UserJobCallout @ 0x1400A4480 (UserJobCallout.c)
 *     EditionParseDesktop @ 0x1400A48F0 (EditionParseDesktop.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x140156C00 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x140156CBC (InvalidateWEFCOMPOSITEDDCEs.c)
 *     ?SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z @ 0x1401BB918 (-SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z.c)
 *     DestroyWindowStation @ 0x1401E4650 (DestroyWindowStation.c)
 *     FreeWindowStation @ 0x1401E89C0 (FreeWindowStation.c)
 *     ?ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x14021EA20 (-ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ??0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1402B14C4 (--0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ.c)
 *     ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x1402D9D08 (-DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall IS_USERCRIT_OWNED_EXCLUSIVE(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(_DWORD *)(PsGetCurrentThreadWin32Thread(a1, a2, a3) + 24) & 0xC) == 8;
}
