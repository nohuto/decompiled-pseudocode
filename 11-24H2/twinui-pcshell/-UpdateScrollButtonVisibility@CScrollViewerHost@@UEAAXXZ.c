/*
 * XREFs of ?UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ @ 0x1804CAB90
 * Callers:
 *     <none>
 * Callees:
 *     ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804CAC68 (-_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804CAEB0 (-_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollViewerHost::UpdateScrollButtonVisibility(CScrollViewerHost *this)
{
  char v2; // al
  CScrollViewerHost *v3; // rcx

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 64LL))(*((_QWORD *)this + 30));
  v3 = (CScrollViewerHost *)((char *)this - 208);
  if ( v2 )
  {
    CScrollViewerHost::_LayoutWithScrollButtons(v3);
    (*(void (__fastcall **)(CScrollViewerHost *))(*(_QWORD *)this + 40LL))(this);
  }
  else
  {
    CScrollViewerHost::_LayoutWithoutScrollButtons(v3);
  }
}
