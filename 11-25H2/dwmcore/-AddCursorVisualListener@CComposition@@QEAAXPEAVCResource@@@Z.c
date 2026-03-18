/*
 * XREFs of ?AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180206CD0
 * Callers:
 *     ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180206B4C (--0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800C529C (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x18013C654 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?EnsureVisualTree@CursorVisualData@CComposition@@QEAAXXZ @ 0x18026594C (-EnsureVisualTree@CursorVisualData@CComposition@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@details@wil@@QEAA_NXZ @ 0x180266714 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@deta.c)
 */

void __fastcall CComposition::AddCursorVisualListener(CComposition *this, struct CResource *a2)
{
  CGlobalComposition *v2; // rsi
  CResource *v3; // rdi
  char *v4; // rbx
  CResource **v5; // r14
  CResource **v6; // rbp
  CExcludeVisualReference *v7; // rbx
  CExcludeVisualReference *v8; // rsi
  struct CResource *VisualNoRef; // rbp
  struct CResource *v10; // rax
  _BYTE *v11; // rdx
  CExcludeVisualReference **v12; // rbp
  CExcludeVisualReference **i; // rbx
  struct CResource *v14; // rax
  struct CResource *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  v2 = g_pComposition;
  v3 = a2;
  v4 = (char *)g_pComposition + 6184;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::GetImpl'::`2'::impl) )
  {
    v5 = (CResource **)*((_QWORD *)v4 + 1);
    v6 = *(CResource ***)v4;
    if ( v5 == *((CResource ***)v4 + 2) )
    {
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        (const void **)v4,
        *((_BYTE **)v4 + 1),
        &v15);
      v3 = v15;
    }
    else
    {
      *v5 = v3;
      *((_QWORD *)v4 + 1) += 8LL;
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
            CComposition::CursorVisualData::EnsureVisualTree(v7);
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
  else
  {
    v11 = (_BYTE *)*((_QWORD *)v4 + 1);
    if ( v11 == *((_BYTE **)v4 + 2) )
    {
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        (const void **)v4,
        v11,
        &v15);
      v3 = v15;
    }
    else
    {
      *(_QWORD *)v11 = v3;
      *((_QWORD *)v4 + 1) += 8LL;
    }
    v12 = (CExcludeVisualReference **)*((_QWORD *)v2 + 771);
    for ( i = (CExcludeVisualReference **)*((_QWORD *)v2 + 770); i != v12; ++i )
    {
      v14 = CExcludeVisualReference::GetVisualNoRef(*i);
      if ( v14 )
        CResource::RegisterNotifier(v3, v14);
    }
  }
}
