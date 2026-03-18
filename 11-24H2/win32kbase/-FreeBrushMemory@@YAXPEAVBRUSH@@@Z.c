/*
 * XREFs of ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1400407C8
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x14000D150 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x14000D300 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x140085DA8 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14003ED3C (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x140040864 (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall FreeBrushMemory(unsigned int *BugCheckParameter2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 *v4; // rcx

  v2 = BugCheckParameter2[36];
  if ( (_DWORD)v2 )
  {
    if ( (_DWORD)v2 != 1 )
      KeBugCheckEx(0x164u, 0x19uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v2) + 88) + 4272LL) + 24LL);
    if ( v3 )
      NSInstrumentation::CTypeIsolation<49152,192>::Free(v3, BugCheckParameter2);
  }
  else
  {
    v4 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v2) + 88) + 4272LL) + 16LL);
    if ( v4 )
      NSInstrumentation::CTypeIsolation<40960,160>::Free(v4, BugCheckParameter2);
  }
}
