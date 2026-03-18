/*
 * XREFs of ?UnlockWorker@?$Win32RawLockedItemBase@VCInputDest@@$0A@$00$0A@$00@@AEAAX_N0@Z @ 0x1400D1134
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140205FD0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400D11B0 (PopAndFreeAlwaysW32ThreadLock.c)
 */

void __fastcall Win32RawLockedItemBase<CInputDest,0,1,0,1>::UnlockWorker(ULONG_PTR BugCheckParameter2, char a2)
{
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( *(_QWORD *)(BugCheckParameter2 + 16) == -1LL )
  {
    if ( !a2 )
    {
      BugCheckParameter4 = PtiCurrent(BugCheckParameter2);
      KeBugCheckEx(0x164u, 0x12uLL, BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
    }
  }
  else
  {
    PopAndFreeAlwaysW32ThreadLock();
    *(_QWORD *)(BugCheckParameter2 + 16) = -1LL;
  }
}
