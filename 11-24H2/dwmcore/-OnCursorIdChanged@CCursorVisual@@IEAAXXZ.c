/*
 * XREFs of ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x18029079C
 * Callers:
 *     ?SetCursorId@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_K@Z @ 0x1802787CC (-SetCursorId@-$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_K@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800F3A90 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18019E0EC (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x1801FFBEC (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 *     ?UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z @ 0x1802636C0 (-UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z.c)
 *     ?TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z @ 0x1802B05C0 (-TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z.c)
 */

void __fastcall CCursorVisual::OnCursorIdChanged(CCursorVisual *this)
{
  struct CCursorState **v1; // rbx
  CCursorManager *v3; // rcx
  unsigned __int64 v4; // r9
  CComposition *v5; // rbx
  CCursorVisual *v6; // rdx
  _QWORD *v7; // rax
  struct CVisual *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (struct CCursorState **)((char *)this + 704);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 88);
  CComposition::GetFrameTargetTime(*((CComposition **)this + 3));
  if ( CCursorManager::TryClaimCursorState(v3, *((_QWORD *)this + 85), this, v4, v1) )
  {
    v5 = (CComposition *)*((_QWORD *)this + 3);
    v6 = this;
    v8 = this;
    v7 = (_QWORD *)*((_QWORD *)v5 + 817);
    if ( v7 == *((_QWORD **)v5 + 818) )
    {
      std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(
        (_QWORD *)v5 + 816,
        *((_BYTE **)v5 + 817),
        &v8);
      v6 = v8;
    }
    else
    {
      *v7 = this;
      *((_QWORD *)v5 + 817) += 8LL;
    }
    CComposition::AddCursorVisual(v5, v6);
    *((_BYTE *)this + 744) = 1;
  }
  else if ( *((_BYTE *)this + 744) )
  {
    CGlobalComposition::UnregisterCursorVisual(*((CGlobalComposition **)this + 3), this);
    *((_BYTE *)this + 744) = 0;
  }
}
