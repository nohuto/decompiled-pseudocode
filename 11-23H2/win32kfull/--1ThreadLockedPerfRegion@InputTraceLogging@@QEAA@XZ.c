/*
 * XREFs of ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0063088
 * Callers:
 *     NtUserSendInput @ 0x1C000A260 (NtUserSendInput.c)
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C0062D70 (-OnPointerCursorOperation@@YAXXZ.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 *     ProcessHidRawInput @ 0x1C014E1F0 (ProcessHidRawInput.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C014EA9E (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     EditionLLMouseButtonHook @ 0x1C01ABA90 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01ABC70 (EditionLLMouseWheelHook.c)
 *     NtUserInjectTouchInput @ 0x1C01D4D00 (NtUserInjectTouchInput.c)
 *     NtUserSetCursorPos @ 0x1C01DAC50 (NtUserSetCursorPos.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C01A8CD0 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        InputTraceLogging::ThreadLockedPerfRegion *this)
{
  __int64 v1; // rdi

  if ( *(_QWORD *)this )
  {
    v1 = *(_QWORD *)this;
    *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 16) = *(_QWORD *)(v1 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup(this);
  }
}
