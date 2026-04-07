/*
 * XREFs of ?CloneVisualTree@CContainerVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800EC5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180020898 (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18003DF7C (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContainerVisual::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  CBaseObject *v10; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v13; // [rsp+48h] [rbp+20h] BYREF

  v13 = 0LL;
  v6 = CContainerVisual::Create(&v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = a3;
    v10 = v13;
    v6 = CContainerVisual::InitializeVisualTreeClone(a1, v13, v9);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v13 = 0LL;
      *a2 = v10;
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 209LL;
  }
  else
  {
    v8 = 208LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"clientcore\\windows\\dwm\\udwm\\containervisual.cpp",
    (const char *)(unsigned int)v6);
LABEL_7:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
  return v7;
}
