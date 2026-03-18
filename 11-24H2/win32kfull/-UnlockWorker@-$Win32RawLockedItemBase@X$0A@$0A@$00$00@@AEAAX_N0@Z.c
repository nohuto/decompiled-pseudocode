/*
 * XREFs of ?UnlockWorker@?$Win32RawLockedItemBase@X$0A@$0A@$00$00@@AEAAX_N0@Z @ 0x1401D50F4
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall Win32RawLockedItemBase<void,0,0,1,1>::UnlockWorker(_QWORD *BugCheckParameter2, __int64 a2)
{
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( BugCheckParameter2[2] == -1LL )
  {
    if ( !(_BYTE)a2 )
    {
      BugCheckParameter4 = PtiCurrent((__int64)BugCheckParameter2, a2);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
    }
  }
  else
  {
    *((_QWORD *)PtiCurrent((__int64)BugCheckParameter2, a2) + 48) = *BugCheckParameter2;
    BugCheckParameter2[2] = -1LL;
  }
}
