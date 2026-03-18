/*
 * XREFs of ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00B354C
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C005E540 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00605C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C00A7F48 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00A1B48 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00B53D8 (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall FreeBrushMemory(unsigned int *BugCheckParameter2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = BugCheckParameter2[36];
  if ( (_DWORD)v2 )
  {
    if ( (_DWORD)v2 != 1 )
      KeBugCheckEx(0x164u, 0x19uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v2) + 24) + 6504LL) + 24LL);
    if ( v4 )
      NSInstrumentation::CTypeIsolation<49152,192>::Free(v4, BugCheckParameter2);
  }
  else
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v2) + 24) + 6504LL) + 16LL);
    if ( v3 )
      NSInstrumentation::CTypeIsolation<40960,160>::Free(v3, BugCheckParameter2);
  }
}
