/*
 * XREFs of ?UnlockWorker@?$Win32RawLockedItemBase@UtagDESKTOP@@$1?UserDereferenceObject@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x140099114
 * Callers:
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     NtUserSetDisplayConfig @ 0x140170CE0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1400991CC (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall Win32RawLockedItemBase<tagDESKTOP,&void UserDereferenceObject(void *),1,1,1>::UnlockWorker(
        ULONG_PTR BugCheckParameter2,
        char a2)
{
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( *(_QWORD *)(BugCheckParameter2 + 16) == -1LL )
  {
    if ( !a2 )
    {
      BugCheckParameter4 = PtiCurrent();
      KeBugCheckEx(0x164u, 0x12uLL, BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
    }
  }
  else
  {
    PopAndFreeW32ThreadLock();
    *(_QWORD *)(BugCheckParameter2 + 16) = -1LL;
  }
}
