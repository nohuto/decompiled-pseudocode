/*
 * XREFs of ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x1800BFD48
 * Callers:
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1800BFAAC (--1CCaptureRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800C529C (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     __std_find_trivial_8 @ 0x18025BDA0 (__std_find_trivial_8.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@details@wil@@QEAA_NXZ @ 0x180266714 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@deta.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall CComposition::RemoveCursorVisualListener(CComposition *this, struct CResource *a2)
{
  CGlobalComposition *v2; // rbx
  __int64 trivial_8; // rax
  __int64 *v5; // rsi
  __int64 *i; // rdi
  struct CResource *VisualNoRef; // rax
  CExcludeVisualReference **v8; // rdi
  CExcludeVisualReference **j; // rbx
  struct CResource *v10; // rax

  v2 = g_pComposition;
  trivial_8 = _std_find_trivial_8(*((_QWORD *)g_pComposition + 773), *((_QWORD *)g_pComposition + 774), a2);
  memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), *((_QWORD *)v2 + 774) - (trivial_8 + 8));
  *((_QWORD *)v2 + 774) -= 8LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::GetImpl'::`2'::impl) )
  {
    v5 = (__int64 *)*((_QWORD *)v2 + 768);
    for ( i = (__int64 *)*((_QWORD *)v2 + 767); i != v5; i += 4 )
    {
      VisualNoRef = CExcludeVisualReference::GetVisualNoRef((CExcludeVisualReference *)i);
      if ( VisualNoRef )
        CResource::UnRegisterNotifierInternal(a2, VisualNoRef);
      if ( *((_QWORD *)v2 + 773) == *((_QWORD *)v2 + 774) )
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(i + 3);
    }
  }
  else
  {
    v8 = (CExcludeVisualReference **)*((_QWORD *)v2 + 771);
    for ( j = (CExcludeVisualReference **)*((_QWORD *)v2 + 770); j != v8; ++j )
    {
      v10 = CExcludeVisualReference::GetVisualNoRef(*j);
      if ( v10 )
        CResource::UnRegisterNotifierInternal(a2, v10);
    }
  }
}
