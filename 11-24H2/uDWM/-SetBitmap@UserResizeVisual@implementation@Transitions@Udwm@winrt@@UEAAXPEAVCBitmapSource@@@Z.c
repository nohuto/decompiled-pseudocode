/*
 * XREFs of ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x1800EB800
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180006C2C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004BB08 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094FF0 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800950D4 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800EB38C (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800EBAEC (-UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::SetBitmap(
        CBaseObject **this,
        struct tagSIZE *a2)
{
  struct CImage **v2; // rsi
  struct tagSIZE v5; // rbx
  CVisual *v6; // rcx
  struct CVisual *v7; // rdx
  struct tagSIZE v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 10;
  wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(this + 10);
  CImage::Create(v2);
  CImage::SetBitmapSource(*v2, (struct CBitmapSource *)a2);
  v5 = a2[3];
  v6 = *v2;
  v8 = v5;
  CVisual::SetSize(v6, &v8);
  if ( v5.cx < 64 )
    winrt::Udwm::Transitions::implementation::UserResizeVisual::AddIconPlate((winrt::Udwm::Transitions::implementation::UserResizeVisual *)this);
  winrt::Udwm::Transitions::implementation::UserResizeVisual::UpdateIconPosition((winrt::Udwm::Transitions::implementation::UserResizeVisual *)this);
  if ( this[7] )
    v7 = this[6];
  else
    v7 = *v2;
  CContainerVisual::AddChild(*((CContainerVisual **)this[5] + 32), v7);
}
