/*
 * XREFs of ?CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18006BE30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x18002E4B0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18006BEE8 (-InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowBorder::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v8; // rdx
  CBaseObject *v9; // rcx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v12);
  v6 = CWindowBorder::Create(&v12);
  if ( v6 < 0 )
  {
    v8 = 62LL;
  }
  else
  {
    v6 = CWindowBorder::InitializeVisualTreeClone(a1, v12, a3);
    if ( v6 >= 0 )
    {
      *a2 = v12;
      return 0LL;
    }
    v8 = 63LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)v6,
    v10);
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    CBaseObject::Release(v9);
  }
  return (unsigned int)v6;
}
