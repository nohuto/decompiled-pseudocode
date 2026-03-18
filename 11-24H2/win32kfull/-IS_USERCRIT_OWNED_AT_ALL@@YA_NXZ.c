/*
 * XREFs of ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140082A00
 * Callers:
 *     ?HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z @ 0x14002BD28 (-HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z.c)
 *     xxxHkCallHook @ 0x140080630 (xxxHkCallHook.c)
 *     PhkFirstValid @ 0x140080F00 (PhkFirstValid.c)
 *     PhkNextValid @ 0x140080FC4 (PhkNextValid.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxLoadHmodIndex @ 0x140082390 (xxxLoadHmodIndex.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x140082960 (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x140082A28 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140083708 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?MovePointer@Api@Cursor@InputTraceLogging@@SAXHHKPEAX_K@Z @ 0x140093E40 (-MovePointer@Api@Cursor@InputTraceLogging@@SAXHHKPEAX_K@Z.c)
 *     ?MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z @ 0x140093F58 (-MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z.c)
 *     ClientPrinterThunk @ 0x1400D9D34 (ClientPrinterThunk.c)
 *     ?SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z @ 0x1401BB918 (-SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z.c)
 *     ?ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x14021EA20 (-ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall IS_USERCRIT_OWNED_AT_ALL(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(_DWORD *)(PsGetCurrentThreadWin32Thread(a1, a2, a3) + 24) & 0xC) != 0;
}
