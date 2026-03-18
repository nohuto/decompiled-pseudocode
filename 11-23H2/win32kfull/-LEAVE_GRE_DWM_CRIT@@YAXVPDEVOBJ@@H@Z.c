/*
 * XREFs of ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00C3C44
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C00208A8 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00217FC (GreTransferSpriteStateToDwmState.c)
 *     GreSfmCloseCompositorRef @ 0x1C0087114 (GreSfmCloseCompositorRef.c)
 *     GreDwmStartup @ 0x1C008F45C (GreDwmStartup.c)
 *     GreDesktopSwitch @ 0x1C0096ACC (GreDesktopSwitch.c)
 *     GreDwmShutdown @ 0x1C009DFB8 (GreDwmShutdown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LEAVE_GRE_DWM_CRIT(Gre::Base *a1, int a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rsi
  __int64 result; // rax

  v4 = Gre::Base::Globals(a1);
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
  GreReleaseSemaphoreInternal(*((_QWORD *)a1 + 6));
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 9));
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
  GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 14));
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()");
  GreReleaseSemaphoreInternal(*((_QWORD *)a1 + 7));
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
  GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 11));
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
  result = GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 15));
  if ( a2 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    return GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 10));
  }
  return result;
}
