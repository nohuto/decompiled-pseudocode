/*
 * XREFs of ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18004E6D8
 * Callers:
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x18004E5B0 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800BAFE0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x1800D1B50 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FD7A0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800FE290 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FE9E4 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801C8600 (-MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     <none>
 */

struct IMPCInputPostProcessor *__fastcall MPC3DStateHelper::GetPostProcessor(PSRWLOCK SRWLock)
{
  PVOID Ptr; // rbx

  AcquireSRWLockShared(SRWLock);
  Ptr = SRWLock[3].Ptr;
  ReleaseSRWLockShared(SRWLock);
  return (struct IMPCInputPostProcessor *)Ptr;
}
