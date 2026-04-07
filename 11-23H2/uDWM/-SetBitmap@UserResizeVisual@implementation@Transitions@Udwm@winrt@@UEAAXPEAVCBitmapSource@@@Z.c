/*
 * XREFs of ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x180104550
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800354E0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180051BE4 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180054B7C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800A3D0C (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104184 (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104874 (-UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::SetBitmap(
        CBaseObject **this,
        struct tagSIZE *a2)
{
  struct CImage **v2; // rsi
  struct tagSIZE v5; // rbx
  CVisual *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct CImage *v10; // rdx
  int v11; // [rsp+20h] [rbp-18h]
  struct tagSIZE v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = this + 10;
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(this + 10);
  CImage::Create(v2);
  CImage::SetBitmapSource(*v2, (struct CBitmapSource *)a2);
  v5 = a2[3];
  v6 = *v2;
  v12 = v5;
  CVisual::SetSize(v6, &v12);
  if ( v5.cx < 64 )
    winrt::Udwm::Transitions::implementation::UserResizeVisual::AddIconPlate(
      (winrt::Udwm::Transitions::implementation::UserResizeVisual *)this,
      v7,
      v8,
      v9);
  winrt::Udwm::Transitions::implementation::UserResizeVisual::UpdateIconPosition((winrt::Udwm::Transitions::implementation::UserResizeVisual *)this);
  if ( this[7] )
    v10 = this[6];
  else
    v10 = *v2;
  VisualCollection::InsertRelative(
    (VisualCollection *)(*((_QWORD *)this[5] + 38) + 32LL),
    (unsigned __int64)v10,
    0LL,
    0,
    v11);
}
