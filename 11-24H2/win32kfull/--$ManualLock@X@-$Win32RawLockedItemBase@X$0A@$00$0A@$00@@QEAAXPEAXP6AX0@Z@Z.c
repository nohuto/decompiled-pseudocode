/*
 * XREFs of ??$ManualLock@X@?$Win32RawLockedItemBase@X$0A@$00$0A@$00@@QEAAXPEAXP6AX0@Z@Z @ 0x1401DA0FC
 * Callers:
 *     NtUserfnDDEINIT @ 0x1401D9EC0 (NtUserfnDDEINIT.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void (__fastcall *__fastcall Win32RawLockedItemBase<void,0,1,0,1>::ManualLock<void>(
        _QWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3))(void *)
{
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v5; // rax
  void (__fastcall *result)(void *); // rax

  if ( BugCheckParameter2[2] != -1LL )
  {
    BugCheckParameter4 = PtiCurrent((__int64)BugCheckParameter2, BugCheckParameter3);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  v5 = PtiCurrent((__int64)BugCheckParameter2, BugCheckParameter3);
  *BugCheckParameter2 = *((_QWORD *)v5 + 48);
  *((_QWORD *)v5 + 48) = BugCheckParameter2;
  result = DDEImpDecRefInitWorker;
  BugCheckParameter2[2] = DDEImpDecRefInitWorker;
  BugCheckParameter2[1] = BugCheckParameter3;
  return result;
}
