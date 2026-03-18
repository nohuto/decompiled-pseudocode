/*
 * XREFs of ?LockW32Process@@YAXPEAU_W32PROCESS@@PEAU?$Win32RawOptionalLockedItemAlways@U_W32PROCESS@@$0A@@@@Z @ 0x140213B1C
 * Callers:
 *     xxxWaitForInputIdle @ 0x1401F488C (xxxWaitForInputIdle.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

LONG_PTR __fastcall LockW32Process(ULONG_PTR BugCheckParameter3, _QWORD *BugCheckParameter2)
{
  struct tagTHREADINFO *v4; // rax
  LONG_PTR result; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( BugCheckParameter2[2] != -1LL )
  {
    BugCheckParameter4 = PtiCurrent(BugCheckParameter3, (__int64)BugCheckParameter2);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  v4 = PtiCurrent(BugCheckParameter3, (__int64)BugCheckParameter2);
  *BugCheckParameter2 = *((_QWORD *)v4 + 48);
  *((_QWORD *)v4 + 48) = BugCheckParameter2;
  BugCheckParameter2[2] = DereferenceW32Process;
  BugCheckParameter2[1] = BugCheckParameter3;
  result = ObfReferenceObject(*(PVOID *)BugCheckParameter3);
  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 8));
  return result;
}
