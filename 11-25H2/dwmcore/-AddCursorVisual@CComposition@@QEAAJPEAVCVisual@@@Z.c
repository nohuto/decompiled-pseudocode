/*
 * XREFs of ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180198818
 * Callers:
 *     ?Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1801985F0 (-Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x18029A83C (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18013B730 (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z @ 0x18013B7A8 (--0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCExcludeVisualReference@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@QEAV21@AEAPEAVCExcludeVisualReference@@@Z @ 0x18020E5B0 (--$_Emplace_reallocate@AEAPEAVCExcludeVisualReference@@@-$vector@V-$unique_ptr@VCExcludeVisualRe.c)
 *     ?FindCursorVisual@CComposition@@QEAAPEAVCExcludeVisualReference@@PEBVCVisual@@@Z @ 0x18023C5DC (-FindCursorVisual@CComposition@@QEAAPEAVCExcludeVisualReference@@PEBVCVisual@@@Z.c)
 *     ??$_Emplace_reallocate@UCursorVisualData@CComposition@@@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@AEAAPEAUCursorVisualData@CComposition@@QEAU23@$$QEAU23@@Z @ 0x1802646BC (--$_Emplace_reallocate@UCursorVisualData@CComposition@@@-$vector@UCursorVisualData@CComposition@.c)
 *     ??0CursorVisualData@CComposition@@QEAA@$$QEAU01@@Z @ 0x180264AE0 (--0CursorVisualData@CComposition@@QEAA@$$QEAU01@@Z.c)
 *     ??1CursorVisualData@CComposition@@QEAA@XZ @ 0x18026547C (--1CursorVisualData@CComposition@@QEAA@XZ.c)
 *     ?EnsureVisualTree@CursorVisualData@CComposition@@QEAAXXZ @ 0x18026594C (-EnsureVisualTree@CursorVisualData@CComposition@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@details@wil@@QEAA_NXZ @ 0x180266714 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@deta.c)
 */

__int64 __fastcall CComposition::AddCursorVisual(CComposition *this, struct CVisual *a2)
{
  __int64 v4; // rax
  CResource **v5; // rsi
  CResource **i; // rbx
  int v7; // eax
  unsigned int v8; // esi
  struct CExcludeVisualReference **v10; // rdx
  CResource **v11; // rsi
  CResource **j; // rbx
  _BYTE v13[24]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CExcludeVisualReference *v16; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::GetImpl'::`2'::impl) )
  {
    if ( !CComposition::FindCursorVisual(this, a2) )
    {
      CExcludeVisualReference::CExcludeVisualReference((CExcludeVisualReference *)v13, a2);
      v4 = *((_QWORD *)this + 774);
      v14 = 0LL;
      if ( *((_QWORD *)this + 773) != v4 )
        CComposition::CursorVisualData::EnsureVisualTree((CComposition::CursorVisualData *)v13);
      if ( *((_QWORD *)this + 768) == *((_QWORD *)this + 769) )
      {
        std::vector<CComposition::CursorVisualData>::_Emplace_reallocate<CComposition::CursorVisualData>(
          (char *)this + 6136,
          *((_QWORD *)this + 768),
          v13);
      }
      else
      {
        CComposition::CursorVisualData::CursorVisualData(*((_QWORD *)this + 768), v13);
        *((_QWORD *)this + 768) += 32LL;
      }
      v5 = (CResource **)*((_QWORD *)this + 774);
      for ( i = (CResource **)*((_QWORD *)this + 773); i != v5; ++i )
        CResource::RegisterNotifier(*i, a2);
      CComposition::CursorVisualData::~CursorVisualData((CComposition::CursorVisualData *)v13);
    }
  }
  else if ( !CComposition::FindCursorVisual(this, a2) )
  {
    v16 = 0LL;
    v7 = CExcludeVisualReference::Create(a2, &v16);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E5,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\composition.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    v10 = (struct CExcludeVisualReference **)*((_QWORD *)this + 771);
    if ( v10 == *((struct CExcludeVisualReference ***)this + 772) )
    {
      std::vector<std::unique_ptr<CExcludeVisualReference>>::_Emplace_reallocate<CExcludeVisualReference * &>(
        (char *)this + 6160,
        v10,
        &v16);
    }
    else
    {
      *v10 = v16;
      *((_QWORD *)this + 771) += 8LL;
    }
    v11 = (CResource **)*((_QWORD *)this + 774);
    for ( j = (CResource **)*((_QWORD *)this + 773); j != v11; ++j )
      CResource::RegisterNotifier(*j, a2);
  }
  return 0LL;
}
