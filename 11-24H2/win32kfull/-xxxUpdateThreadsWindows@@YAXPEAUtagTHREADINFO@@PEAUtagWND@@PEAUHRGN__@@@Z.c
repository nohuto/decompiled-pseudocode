/*
 * XREFs of ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x140032130
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     xxxUpdateWindows @ 0x1402166C8 (xxxUpdateWindows.c)
 * Callees:
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400321FC (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1400322B0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall xxxUpdateThreadsWindows(struct tagTHREADINFO *a1, struct tagWND *a2, HRGN a3)
{
  struct tagTHREADINFO *v6; // rax
  struct tagWND *v7; // rdi
  struct tagTHREADINFO *v8; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+20h] [rbp-18h] BYREF
  struct tagWND *v10; // [rsp+28h] [rbp-10h]

  v6 = PtiCurrent();
  v7 = 0LL;
  BugCheckParameter3 = *((_QWORD *)v6 + 57);
  *((_QWORD *)v6 + 57) = &BugCheckParameter3;
  v10 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      v10 = a2;
      HMLockObject(a2);
      if ( v7 )
        HMUnlockObject(v7);
      if ( *((struct tagTHREADINFO **)a2 + 2) == a1 )
        xxxInternalUpdateWindow(a2, 1u);
      else
        xxxUpdateOtherThreadsWindows(a2, a3);
      a2 = (struct tagWND *)*((_QWORD *)a2 + 11);
      if ( !a2 )
        break;
      v7 = v10;
    }
  }
  v8 = PtiCurrent();
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v8, (ULONG_PTR)&BugCheckParameter3);
}
