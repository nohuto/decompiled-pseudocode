/*
 * XREFs of ?UnlockWorker@?$Win32RawLockedItemBase@UCPointerInputFrame@@$0A@$0A@$00$00@@AEAAX_N0@Z @ 0x14010EEF4
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140205FD0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall Win32RawLockedItemBase<CPointerInputFrame,0,0,1,1>::UnlockWorker(_QWORD *BugCheckParameter2, char a2)
{
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( BugCheckParameter2[2] == -1LL )
  {
    if ( !a2 )
    {
      BugCheckParameter4 = PtiCurrent((__int64)BugCheckParameter2);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
    }
  }
  else
  {
    *((_QWORD *)PtiCurrent((__int64)BugCheckParameter2) + 48) = *BugCheckParameter2;
    BugCheckParameter2[2] = -1LL;
  }
}
