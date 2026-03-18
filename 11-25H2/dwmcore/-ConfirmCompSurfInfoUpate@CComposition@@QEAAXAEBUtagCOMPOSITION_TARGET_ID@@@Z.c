/*
 * XREFs of ?ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801E7820
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x1800C6E9C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C7AC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?ConfirmRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801E78A0 (-ConfirmRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAXAEBUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::ConfirmCompSurfInfoUpate(CComposition *this, const struct tagCOMPOSITION_TARGET_ID *a2)
{
  CGlobalCompositionSurfaceInfo **v3; // rdi
  CGlobalCompositionSurfaceInfo **i; // rbx
  CGlobalCompositionSurfaceInfo *v5; // rcx
  void (__fastcall *v6)(CGlobalCompositionSurfaceInfo *__hidden, const struct tagCOMPOSITION_TARGET_ID *); // rax

  v3 = (CGlobalCompositionSurfaceInfo **)*((_QWORD *)g_pComposition + 745);
  for ( i = (CGlobalCompositionSurfaceInfo **)*((_QWORD *)g_pComposition + 744); i != v3; ++i )
  {
    v5 = *i;
    v6 = *(void (__fastcall **)(CGlobalCompositionSurfaceInfo *__hidden, const struct tagCOMPOSITION_TARGET_ID *))(*(_QWORD *)*i + 232LL);
    if ( v6 == CGlobalCompositionSurfaceInfo::ConfirmRecordedStatistics )
      CGlobalCompositionSurfaceInfo::ConfirmRecordedStatistics(v5, a2);
    else
      v6(v5, a2);
  }
}
