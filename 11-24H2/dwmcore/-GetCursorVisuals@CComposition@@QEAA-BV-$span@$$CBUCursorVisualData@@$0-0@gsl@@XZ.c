/*
 * XREFs of ?GetCursorVisuals@CComposition@@QEAA?BV?$span@$$CBUCursorVisualData@@$0?0@gsl@@XZ @ 0x180295DF4
 * Callers:
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180097238 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800B708C (-terminate@details@gsl@@YAXXZ.c)
 *     ?erase@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@@Z @ 0x18025C968 (-erase@-$vector@UCursorVisualData@@V-$allocator@UCursorVisualData@@@std@@@std@@QEAA-AV-$_Vector_.c)
 */

gsl::details **__fastcall CComposition::GetCursorVisuals(__int64 a1, gsl::details **a2)
{
  CExcludeVisualReference *v2; // rbx
  CExcludeVisualReference **v3; // r14
  CExcludeVisualReference *v6; // rdi
  gsl::details *v7; // rcx
  gsl::details **v8; // rax
  gsl::details *v9; // rcx
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(CExcludeVisualReference **)(a1 + 6144);
  v3 = (CExcludeVisualReference **)(a1 + 6136);
  while ( 1 )
  {
    v6 = *v3;
    if ( v2 == *v3 )
      break;
    v2 = (CExcludeVisualReference *)((char *)v2 - 32);
    if ( !CExcludeVisualReference::GetVisualNoRef(v2) )
      std::vector<CursorVisualData>::erase((__int64)v3, &v12, (__int64)v2);
  }
  gsl::details::extent_type<-1>::extent_type<-1>(v11, (__int64)(*(_QWORD *)(a1 + 6144) - (_QWORD)v6) >> 5);
  if ( v11[0] == -1 || !v6 && v11[0] )
  {
    gsl::details::terminate(v7);
    __debugbreak();
  }
  v8 = (gsl::details **)gsl::details::extent_type<-1>::extent_type<-1>(&v12, v11[0]);
  v9 = *v8;
  *a2 = *v8;
  a2[1] = v6;
  if ( v9 == (gsl::details *)-1LL || !v6 && v9 )
  {
    gsl::details::terminate(v9);
    JUMPOUT(0x180295EB8LL);
  }
  return a2;
}
