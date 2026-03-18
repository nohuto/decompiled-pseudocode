/*
 * XREFs of ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x18003AF7C
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x180033910 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x180036520 (-ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x18003BAAC (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Try_emplace@AEBQEBVCVisualTree@@$$V@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@_N@1@AEBQEBVCVisualTree@@@Z @ 0x18003BB3C (--$_Try_emplace@AEBQEBVCVisualTree@@$$V@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedSha.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProjectedShadowCaster::UpdateVisualProperty(
        CProjectedShadowCaster *this,
        const struct CVisualTree *a2)
{
  __int64 v3; // rbx
  CGlobalComposition *CurrentFrameId; // rax
  float v5; // xmm0_4
  __int64 v6; // rcx
  struct CVisualTree *v7; // r8
  __int64 v8; // rax
  char v9; // dl
  char v10; // si
  bool v11; // al
  __int128 v12; // xmm0
  char v13[8]; // [rsp+20h] [rbp-40h] BYREF
  struct CVisualTree *v14; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF

  v14 = a2;
  v3 = *(_QWORD *)std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::_Try_emplace<CVisualTree const * const &,>(
                    (char *)this + 88,
                    v15,
                    &v14);
  CurrentFrameId = GetCurrentFrameId();
  if ( *(CGlobalComposition **)(v3 + 48) != CurrentFrameId )
  {
    *(_QWORD *)(v3 + 48) = CurrentFrameId;
    v13[0] = 0;
    v5 = CProjectedShadowCaster::ComputeEffectiveAlpha(this, (CVisual **)v14, (bool *)v13);
    v6 = *((_QWORD *)this + 9);
    v7 = v14;
    v8 = v6;
    v9 = 0;
    while ( v6 && (*(_BYTE *)(v6 + 106) & 0x40) != 0 && (*(_BYTE *)(v6 + 106) & 1) == 0 )
    {
      if ( v6 == *((_QWORD *)v14 + 9) )
      {
        v9 = 1;
        break;
      }
      if ( v8 )
      {
        v8 = *(_QWORD *)(v8 + 88);
        if ( v8 )
        {
          if ( v6 == v8 )
            break;
          v8 = *(_QWORD *)(v8 + 88);
          if ( v6 == v8 )
            break;
        }
      }
      v6 = *(_QWORD *)(v6 + 88);
    }
    v10 = 0;
    v11 = v13[0];
    if ( *(float *)(v3 + 40) != v5 || *(_BYTE *)(v3 + 56) != v13[0] || *(_BYTE *)(v3 + 57) != v9 )
    {
      *(float *)(v3 + 40) = v5;
      v10 = 1;
      *(_BYTE *)(v3 + 56) = v11;
      *(_BYTE *)(v3 + 57) = v9;
      v7 = v14;
    }
    v13[0] = 0;
    CProjectedShadowCaster::CalculateCasterBounds((__int64)this, (__int64)&v16, v7, v13);
    if ( *(_BYTE *)(v3 + 76) == v13[0]
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 60) - *(float *)&v16) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 64) - *((float *)&v16 + 1)) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 68) - *((float *)&v16 + 2)) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 72) - *((float *)&v16 + 3)) & _xmm) <= 0.0000011920929 )
    {
      if ( !v10 )
        return;
    }
    else
    {
      v12 = v16;
      *(_BYTE *)(v3 + 76) = v13[0];
      *(_OWORD *)(v3 + 60) = v12;
      Microsoft::WRL::ComPtr<CShadowMaskProducer>::InternalRelease(v3 + 80);
    }
    (*(void (__fastcall **)(CProjectedShadowCaster *, _QWORD, CProjectedShadowCaster *))(*(_QWORD *)this + 80LL))(
      this,
      0LL,
      this);
    CProjectedShadowCaster::RequestRedraw(this);
  }
}
