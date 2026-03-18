/*
 * XREFs of ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801986F8
 * Callers:
 *     ?Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1801985F0 (-Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 *     ?UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z @ 0x18026F710 (-UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800C529C (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18013C54C (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@details@wil@@QEAA_NXZ @ 0x180266714 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@deta.c)
 *     ?erase@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@@Z @ 0x180266908 (-erase@-$vector@UCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CComposition@@@st.c)
 */

void __fastcall CComposition::RemoveCursorVisual(CComposition *this, struct CVisual *a2)
{
  CExcludeVisualReference *v4; // rbx
  struct CVisual *VisualNoRef; // rax
  struct CVisual *v6; // rsi
  CResource **v7; // r14
  CResource **i; // rsi
  CExcludeVisualReference **v9; // rbx
  struct CVisual *v10; // rax
  struct CVisual *v11; // rsi
  CResource **v12; // r14
  CResource **j; // rsi
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::GetImpl'::`2'::impl) )
  {
    v4 = (CExcludeVisualReference *)*((_QWORD *)this + 768);
    while ( v4 != *((CExcludeVisualReference **)this + 767) )
    {
      v4 = (CExcludeVisualReference *)((char *)v4 - 32);
      VisualNoRef = CExcludeVisualReference::GetVisualNoRef(v4);
      v6 = VisualNoRef;
      if ( VisualNoRef == a2 || !VisualNoRef )
      {
        std::vector<CComposition::CursorVisualData>::erase((char *)this + 6136, &v14, v4);
        if ( v6 == a2 )
        {
          v7 = (CResource **)*((_QWORD *)this + 774);
          for ( i = (CResource **)*((_QWORD *)this + 773); i != v7; ++i )
            CResource::UnRegisterNotifierInternal(*i, a2);
        }
      }
    }
  }
  else
  {
    v9 = (CExcludeVisualReference **)*((_QWORD *)this + 771);
    while ( v9 != *((CExcludeVisualReference ***)this + 770) )
    {
      v10 = CExcludeVisualReference::GetVisualNoRef(*--v9);
      v11 = v10;
      if ( v10 == a2 || !v10 )
      {
        std::vector<std::unique_ptr<CExcludeVisualReference>>::erase((__int64)this + 6160, &v14, (__int64)v9);
        if ( v11 == a2 )
        {
          v12 = (CResource **)*((_QWORD *)this + 774);
          for ( j = (CResource **)*((_QWORD *)this + 773); j != v12; ++j )
            CResource::UnRegisterNotifierInternal(*j, a2);
        }
      }
    }
  }
}
