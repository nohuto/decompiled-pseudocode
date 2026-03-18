/*
 * XREFs of ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140092D78
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x140092370 (-OnPointerCursorOperation@@YAXXZ.c)
 *     NtUserSetCursorPos @ 0x140092730 (NtUserSetCursorPos.c)
 *     EditionLLMouseWheelHook @ 0x140094C70 (EditionLLMouseWheelHook.c)
 *     EditionLLMouseButtonHook @ 0x140095CD0 (EditionLLMouseButtonHook.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x14017581C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     NtUserInjectTouchInput @ 0x140243180 (NtUserInjectTouchInput.c)
 *     NtUserSendInput @ 0x1402453F0 (NtUserSendInput.c)
 *     NtUserInjectTouchpadAction @ 0x140298FF0 (NtUserInjectTouchpadAction.c)
 * Callees:
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14026B784 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        InputTraceLogging::ThreadLockedPerfRegion *this,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 *CurrentThreadNonPaged; // rax

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  if ( *(_QWORD *)this )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(this, a2);
    if ( CurrentThreadNonPaged )
      v3 = *CurrentThreadNonPaged;
    *(_QWORD *)(v3 + 384) = *(_QWORD *)(v2 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup(this);
  }
}
