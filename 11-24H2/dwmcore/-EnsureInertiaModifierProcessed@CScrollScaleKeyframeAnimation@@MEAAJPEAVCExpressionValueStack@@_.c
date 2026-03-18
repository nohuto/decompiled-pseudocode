/*
 * XREFs of ?EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18022DE90
 * Callers:
 *     <none>
 * Callees:
 *     ?HasValue@CExpressionValue@@QEBA_NXZ @ 0x180012614 (-HasValue@CExpressionValue@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4ModifierType@1@W4ScrollAxis@@PEAVCExpressionValue@@@Z @ 0x180223834 (-TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4Modifie.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?ReplaceLastKeyframeValueConstant@CKeyframeAnimation@@IEAAXPEAVCExpressionValue@@@Z @ 0x18029EB8C (-ReplaceLastKeyframeValueConstant@CKeyframeAnimation@@IEAAXPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CScrollScaleKeyframeAnimation::EnsureInertiaModifierProcessed(
        CScrollScaleKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3)
{
  char v3; // al
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  _DWORD v11[16]; // [rsp+30h] [rbp-D0h] BYREF
  CPathData *v12; // [rsp+70h] [rbp-90h] BYREF
  int v13; // [rsp+78h] [rbp-88h]
  _DWORD v14[16]; // [rsp+80h] [rbp-80h] BYREF
  CPathData *v15; // [rsp+C0h] [rbp-40h] BYREF
  int v16; // [rsp+C8h] [rbp-38h]
  _DWORD v17[16]; // [rsp+D0h] [rbp-30h] BYREF
  CPathData *v18; // [rsp+110h] [rbp+10h] BYREF
  int v19; // [rsp+118h] [rbp+18h]
  _DWORD v20[16]; // [rsp+120h] [rbp+20h] BYREF
  CPathData *v21; // [rsp+160h] [rbp+60h] BYREF
  int v22; // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v3 = *((_BYTE *)this + 712);
  if ( (v3 & 4) != 0 )
    return 0LL;
  *((_BYTE *)this + 712) = v3 | 4;
  memset_0(v17, 0, sizeof(v17));
  v18 = 0LL;
  v19 = 0;
  memset_0(v14, 0, sizeof(v14));
  v15 = 0LL;
  v16 = 0;
  memset_0(v11, 0, sizeof(v11));
  v12 = 0LL;
  v13 = 0;
  v7 = CScrollKeyframeAnimation::TryProcessInertiaModifier((__int64)this, a2, a3, 0LL, 2, v17);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 96LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v18);
    return v8;
  }
  v7 = CScrollKeyframeAnimation::TryProcessInertiaModifier((__int64)this, a2, a3, (const char *)1, 0, v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 103LL;
    goto LABEL_8;
  }
  v7 = CScrollKeyframeAnimation::TryProcessInertiaModifier((__int64)this, a2, a3, (const char *)1, 1, v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 110LL;
    goto LABEL_8;
  }
  if ( CExpressionValue::HasValue((CExpressionValue *)v17) && v19 == 18 )
  {
    memset_0(v20, 0, sizeof(v20));
    v21 = 0LL;
    v20[0] = v17[0];
    v22 = 18;
    CKeyframeAnimation::ReplaceLastKeyframeValueConstant(this, (struct CExpressionValue *)v20);
    *((_BYTE *)this + 712) |= 8u;
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v21);
  }
  if ( CExpressionValue::HasValue((CExpressionValue *)v14) )
  {
    if ( v16 == 18 )
      *((_DWORD *)this + 180) = v14[0] ^ _xmm;
    goto LABEL_17;
  }
  if ( CExpressionValue::HasValue((CExpressionValue *)v11) )
  {
LABEL_17:
    if ( CExpressionValue::HasValue((CExpressionValue *)v11) && v13 == 18 )
      *((_DWORD *)this + 181) = v11[0] ^ _xmm;
  }
  *(_QWORD *)(*((_QWORD *)this + 68) + 156LL) = *((_QWORD *)this + 90);
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v18);
  return 0LL;
}
