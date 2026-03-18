/*
 * XREFs of ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022FFC4
 * Callers:
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x18022010C (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ?UnregisterCursorListener@CCompositionMagnifierBrush@@AEAAXXZ @ 0x180297380 (-UnregisterCursorListener@CCompositionMagnifierBrush@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180097238 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     __std_find_trivial_8 @ 0x180250770 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall CComposition::RemoveCursorVisualListener(CComposition *this, struct CResource *a2)
{
  CGlobalComposition *v2; // rdi
  __int64 trivial_8; // rax
  __int64 *v5; // rsi
  __int64 *i; // rbx
  struct CResource *VisualNoRef; // rax

  v2 = g_pComposition;
  trivial_8 = _std_find_trivial_8(*((_QWORD *)g_pComposition + 770), *((_QWORD *)g_pComposition + 771), a2);
  memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), *((_QWORD *)v2 + 771) - (trivial_8 + 8));
  *((_QWORD *)v2 + 771) -= 8LL;
  v5 = (__int64 *)*((_QWORD *)v2 + 768);
  for ( i = (__int64 *)*((_QWORD *)v2 + 767); i != v5; i += 4 )
  {
    VisualNoRef = CExcludeVisualReference::GetVisualNoRef((CExcludeVisualReference *)i);
    if ( VisualNoRef )
      CResource::UnRegisterNotifierInternal(a2, VisualNoRef);
    if ( *((_QWORD *)v2 + 770) == *((_QWORD *)v2 + 771) )
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(i + 3);
  }
}
