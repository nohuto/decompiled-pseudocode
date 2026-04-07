/*
 * XREFs of ?CloneVisualTree@CSpriteVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800D8B60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000C2A0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CSpriteVisual@@SAJPEAPEAV1@@Z @ 0x1800D8C10 (-Create@CSpriteVisual@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpriteVisual::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // r8d
  CBaseObject *v10; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v6 = CSpriteVisual::Create(&v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = a3;
    v10 = v13;
    v6 = CVisual::InitializeVisualTreeClone(a1, (__int64 *)v13, v9);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v13 = 0LL;
      *a2 = v10;
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 66LL;
  }
  else
  {
    v8 = 64LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
    (const char *)(unsigned int)v6);
LABEL_7:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
  return v7;
}
