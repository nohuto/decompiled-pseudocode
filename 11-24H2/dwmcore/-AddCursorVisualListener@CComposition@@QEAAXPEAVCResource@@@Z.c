/*
 * XREFs of ?AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022FE0C
 * Callers:
 *     ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1802344A8 (--0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?UpdateCursorListenerRegistration@CCompositionMagnifierBrush@@AEAAXXZ @ 0x1802973A8 (-UpdateCursorListenerRegistration@CCompositionMagnifierBrush@@AEAAXXZ.c)
 * Callees:
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180097238 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800DEA80 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?EnsureVisualTree@CursorVisualData@@QEAAXXZ @ 0x18025A9C8 (-EnsureVisualTree@CursorVisualData@@QEAAXXZ.c)
 */

void __fastcall CComposition::AddCursorVisualListener(CComposition *this, struct CResource *a2)
{
  CGlobalComposition *v2; // rbp
  CResource *v3; // rsi
  const void **v4; // rcx
  _QWORD *v5; // rdi
  _QWORD *v6; // r14
  CExcludeVisualReference *v7; // rbx
  CExcludeVisualReference *v8; // rbp
  struct CResource *VisualNoRef; // rdi
  struct CResource *v10; // rax
  struct CResource *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = g_pComposition;
  v3 = a2;
  v4 = (const void **)((char *)g_pComposition + 6160);
  v5 = (_QWORD *)*((_QWORD *)g_pComposition + 771);
  v6 = (_QWORD *)*((_QWORD *)g_pComposition + 770);
  if ( v5 == *((_QWORD **)g_pComposition + 772) )
  {
    std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
      v4,
      *((_BYTE **)g_pComposition + 771),
      &v11);
    v3 = v11;
  }
  else
  {
    *v5 = a2;
    v4[1] = (char *)v4[1] + 8;
  }
  v7 = (CExcludeVisualReference *)*((_QWORD *)v2 + 767);
  v8 = (CExcludeVisualReference *)*((_QWORD *)v2 + 768);
  if ( v7 != v8 )
  {
    if ( v6 == v5 )
    {
      do
      {
        VisualNoRef = CExcludeVisualReference::GetVisualNoRef(v7);
        if ( VisualNoRef )
        {
          CursorVisualData::EnsureVisualTree(v7);
          CResource::RegisterNotifier(v3, VisualNoRef);
        }
        v7 = (CExcludeVisualReference *)((char *)v7 + 32);
      }
      while ( v7 != v8 );
    }
    else
    {
      do
      {
        v10 = CExcludeVisualReference::GetVisualNoRef(v7);
        if ( v10 )
          CResource::RegisterNotifier(v3, v10);
        v7 = (CExcludeVisualReference *)((char *)v7 + 32);
      }
      while ( v7 != v8 );
    }
  }
}
