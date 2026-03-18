/*
 * XREFs of ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x18016D360
 * Callers:
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016AED0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18016C070 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ @ 0x18016CC00 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--_lambda_invoker_cdecl_.c)
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::operator() @ 0x18016CFB0 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--operator().c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800B70A0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?IsOfType@CPrimitiveGroupDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x1800B9690 (-IsOfType@CPrimitiveGroupDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800B96F0 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?EnumerateBrushes@CMultiPrimitiveDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18016BF90 (-EnumerateBrushes@CMultiPrimitiveDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18016D520 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x1801E3490 (-IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?IsOfType@CVirtualSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x1802026A8 (-IsOfType@CVirtualSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListWorker(
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a1)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  bool (__fastcall *v4)(__int64, int); // rax
  char v5; // al
  int DrawListPrimitive; // eax
  unsigned int v7; // ebx
  int v9; // ebp
  char *v10; // r14
  CMultiPrimitiveDrawListBrush *v11; // rsi
  __int64 (__fastcall *v12)(CNineGridDrawListBrush *, const struct CDrawingContext *, int (*)(const struct CDrawListBrush *, void *), void *); // r10
  const struct CDrawingContext *v13; // rdx
  int v14; // eax
  unsigned int v15; // edi

  for ( i = *((_DWORD *)a1 + 46); i < *((_DWORD *)a1 + 44); ++i )
  {
    v3 = *((_QWORD *)a1 + i + 17);
    if ( v3 )
    {
      v4 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v3 + 8LL);
      if ( (char *)v4 == (char *)&CMultiPrimitiveDrawListBrush::IsOfType )
      {
        v5 = CVirtualSurfaceDrawListBrush::IsOfType(v3, 3LL);
      }
      else if ( (char *)v4 == (char *)CNineGridDrawListBrush::IsOfType )
      {
        v5 = CNineGridDrawListBrush::IsOfType(v3, 3LL);
      }
      else
      {
        v5 = v4 == CPrimitiveGroupDrawListBrush::IsOfType ? CPrimitiveGroupDrawListBrush::IsOfType(v3, 3) : v4(v3, 3);
      }
      if ( v5 )
        break;
    }
  }
  if ( i == *((_DWORD *)a1 + 44) )
  {
    DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(*(CBrushDrawListGenerator **)a1, a1);
    v7 = DrawListPrimitive;
    if ( DrawListPrimitive >= 0 )
      return 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawListPrimitive, 0x166u, 0LL);
    return v7;
  }
  else
  {
    v9 = *((_DWORD *)a1 + 46);
    v10 = (char *)a1 + 8 * i;
    v11 = (CMultiPrimitiveDrawListBrush *)*((_QWORD *)v10 + 17);
    *((_DWORD *)a1 + 46) = i;
    v12 = *(__int64 (__fastcall **)(CNineGridDrawListBrush *, const struct CDrawingContext *, int (*)(const struct CDrawListBrush *, void *), void *))(*(_QWORD *)v11 + 32LL);
    v13 = **(const struct CDrawingContext ***)a1;
    if ( v12 == CMultiPrimitiveDrawListBrush::EnumerateBrushes )
    {
      v14 = CMultiPrimitiveDrawListBrush::EnumerateBrushes(
              v11,
              v13,
              (int (*)(const struct CDrawListBrush *, void *))lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_,
              a1);
    }
    else if ( v12 == CPrimitiveGroupDrawListBrush::EnumerateBrushes )
    {
      v14 = CPrimitiveGroupDrawListBrush::EnumerateBrushes(
              v11,
              v13,
              (int (*)(const struct CDrawListBrush *, void *))lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_,
              a1);
    }
    else if ( v12 == CNineGridDrawListBrush::EnumerateBrushes )
    {
      v14 = CNineGridDrawListBrush::EnumerateBrushes(
              v11,
              v13,
              (int (*)(const struct CDrawListBrush *, void *))lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_,
              a1);
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(CMultiPrimitiveDrawListBrush *, const struct CDrawingContext *, __int64 (__fastcall *)(__int64 **, unsigned int *, __int64), struct CBrushDrawListGenerator::GenerateDrawListParameters *))(*(_QWORD *)v11 + 32LL))(
              v11,
              v13,
              lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_,
              a1);
    }
    *((_QWORD *)v10 + 17) = v11;
    v15 = v14;
    *((_DWORD *)a1 + 46) = v9;
    if ( v14 >= 0 )
      return 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x1A6u, 0LL);
    return v15;
  }
}
