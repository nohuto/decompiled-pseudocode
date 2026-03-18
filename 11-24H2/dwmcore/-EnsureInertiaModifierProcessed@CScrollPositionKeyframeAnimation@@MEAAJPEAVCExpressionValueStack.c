/*
 * XREFs of ?EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180216140
 * Callers:
 *     <none>
 * Callees:
 *     ?HasValue@CExpressionValue@@QEBA_NXZ @ 0x180012614 (-HasValue@CExpressionValue@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1800DE90C (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4ModifierType@1@W4ScrollAxis@@PEAVCExpressionValue@@@Z @ 0x180223834 (-TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4Modifie.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?ReplaceLastKeyframeValueConstant@CKeyframeAnimation@@IEAAXPEAVCExpressionValue@@@Z @ 0x18029EB8C (-ReplaceLastKeyframeValueConstant@CKeyframeAnimation@@IEAAXPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CScrollPositionKeyframeAnimation::EnsureInertiaModifierProcessed(
        CScrollPositionKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3)
{
  char v3; // al
  int v8; // r14d
  int v9; // esi
  float v10; // xmm0_4
  bool HasValue; // di
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  int v15; // xmm0_4
  unsigned __int8 v16; // dl
  int v17; // xmm0_4
  __int64 v18; // [rsp+30h] [rbp-D0h]
  int v19; // [rsp+38h] [rbp-C8h]
  _DWORD v20[16]; // [rsp+40h] [rbp-C0h] BYREF
  CPathData *v21; // [rsp+80h] [rbp-80h] BYREF
  int v22; // [rsp+88h] [rbp-78h]
  _DWORD v23[16]; // [rsp+90h] [rbp-70h] BYREF
  CPathData *v24; // [rsp+D0h] [rbp-30h] BYREF
  int v25; // [rsp+D8h] [rbp-28h]
  __int64 v26; // [rsp+E0h] [rbp-20h] BYREF
  int v27; // [rsp+E8h] [rbp-18h]
  CPathData *v28; // [rsp+120h] [rbp+20h] BYREF
  int v29; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v3 = *((_BYTE *)this + 712);
  if ( (v3 & 4) != 0 )
    return 0LL;
  *((_BYTE *)this + 712) = v3 | 4;
  memset_0(v23, 0, sizeof(v23));
  v24 = 0LL;
  v8 = 0;
  v25 = 0;
  memset_0(v20, 0, sizeof(v20));
  v9 = 0;
  LODWORD(v10) = *((_DWORD *)this + 180) & _xmm;
  v21 = 0LL;
  v22 = 0;
  if ( v10 >= 0.0000011920929 )
  {
    v12 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, a3, 0LL, 0, v23);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 93LL;
      goto LABEL_16;
    }
    v8 = v25;
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 181) & _xmm) < 0.0000011920929 )
    goto LABEL_5;
  v12 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, a3, 0LL, 1, v20);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v9 = v22;
LABEL_5:
    HasValue = CExpressionValue::HasValue((CExpressionValue *)v23);
    if ( HasValue || CExpressionValue::HasValue((CExpressionValue *)v20) )
    {
      CScrollPositionKeyframeAnimation::GetNaturalEndpoint((__int64)this);
      if ( HasValue && v8 == 18 )
      {
        v15 = v23[0];
        *((_BYTE *)this + 712) |= 8u;
        LODWORD(v18) = v15;
      }
      if ( CExpressionValue::HasValue((CExpressionValue *)v20) && v9 == 18 )
      {
        v17 = v20[0];
        *((_BYTE *)this + 712) |= v16;
        HIDWORD(v18) = v17;
      }
      if ( (v16 & *((_BYTE *)this + 712)) != 0 )
      {
        memset_0(&v26, 0, 0x40uLL);
        v28 = 0LL;
        v26 = v18;
        v29 = 52;
        v27 = v19;
        CKeyframeAnimation::ReplaceLastKeyframeValueConstant(this, (struct CExpressionValue *)&v26);
        Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v28);
      }
    }
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v24);
    return 0LL;
  }
  v14 = 103LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v24);
  return v13;
}
