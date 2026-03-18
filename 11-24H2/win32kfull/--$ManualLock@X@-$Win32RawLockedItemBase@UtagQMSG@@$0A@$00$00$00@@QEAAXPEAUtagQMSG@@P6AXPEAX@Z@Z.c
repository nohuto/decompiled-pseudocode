/*
 * XREFs of ??$ManualLock@X@?$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@QEAAXPEAUtagQMSG@@P6AXPEAX@Z@Z @ 0x1401B3EA0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void (__fastcall *__fastcall Win32RawLockedItemBase<tagQMSG,0,1,1,1>::ManualLock<void>(
        _QWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3))(struct tagQMSG *a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  void (__fastcall *result)(struct tagQMSG *, __int64); // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( BugCheckParameter2[2] != -1LL )
  {
    BugCheckParameter4 = PtiCurrent((__int64)BugCheckParameter2, BugCheckParameter3);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  v4 = PtiCurrent((__int64)BugCheckParameter2, BugCheckParameter3);
  *BugCheckParameter2 = *((_QWORD *)v4 + 48);
  *((_QWORD *)v4 + 48) = BugCheckParameter2;
  result = FreeQEntry;
  BugCheckParameter2[2] = FreeQEntry;
  BugCheckParameter2[1] = BugCheckParameter3;
  return result;
}
