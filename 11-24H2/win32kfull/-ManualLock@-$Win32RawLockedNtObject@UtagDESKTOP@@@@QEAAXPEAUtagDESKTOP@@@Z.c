/*
 * XREFs of ?ManualLock@?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAAXPEAUtagDESKTOP@@@Z @ 0x1401A85A8
 * Callers:
 *     xxxTrackMouseMove @ 0x140255AC4 (xxxTrackMouseMove.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall Win32RawLockedNtObject<tagDESKTOP>::ManualLock(
        _QWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3)
{
  struct tagTHREADINFO *v4; // rax
  __int64 result; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( BugCheckParameter3 )
    ObfReferenceObject((PVOID)BugCheckParameter3);
  if ( BugCheckParameter2[2] != -1LL )
  {
    BugCheckParameter4 = PtiCurrent((__int64)BugCheckParameter2, BugCheckParameter3);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  v4 = PtiCurrent((__int64)BugCheckParameter2, BugCheckParameter3);
  *BugCheckParameter2 = *((_QWORD *)v4 + 48);
  *((_QWORD *)v4 + 48) = BugCheckParameter2;
  result = UserDereferenceObject;
  BugCheckParameter2[2] = UserDereferenceObject;
  BugCheckParameter2[1] = BugCheckParameter3;
  return result;
}
