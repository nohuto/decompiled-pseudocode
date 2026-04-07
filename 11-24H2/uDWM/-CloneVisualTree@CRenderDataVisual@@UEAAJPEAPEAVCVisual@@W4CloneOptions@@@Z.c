/*
 * XREFs of ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18003F680
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800203D8 (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x18003E3A0 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CRenderDataVisual::CloneVisualTree(__int64 a1, CBaseObject **a2)
{
  int v4; // ebx
  __int64 v6; // rdx
  CBaseObject *v7; // rcx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v10);
  v4 = CRenderDataVisual::Create(&v10);
  if ( v4 < 0 )
  {
    v6 = 162LL;
  }
  else
  {
    v4 = CRenderDataVisual::InitializeVisualTreeClone(a1, v10);
    if ( v4 >= 0 )
    {
      *a2 = v10;
      return 0LL;
    }
    v6 = 163LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
    (const char *)(unsigned int)v4,
    v8);
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    CBaseObject::Release(v7);
  }
  return (unsigned int)v4;
}
