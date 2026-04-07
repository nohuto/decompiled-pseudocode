/*
 * XREFs of ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104808
 * Callers:
 *     ??1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1801040D8 (--1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_::_Do_call @ 0x180104B60 (std--_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_--_Do_call.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18004C100 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800A23F0 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800A3D0C (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::Unload(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        __int64 a2,
        __int64 a3)
{
  CTopLevelWindow3D *v4; // rcx

  v4 = (CTopLevelWindow3D *)*((_QWORD *)this + 9);
  if ( *((_QWORD *)v4 + 42) )
  {
    CTopLevelWindow3D::StopAnimation(v4, a2, a3);
    CVisual::SetOpacity(*(CVisual **)(*(_QWORD *)(*((_QWORD *)this + 9) + 336LL) + 440LL), 1.0);
  }
  if ( *((_QWORD *)this + 21) )
    std::_Func_class<void,>::operator()((__int64)this + 112);
  if ( *((_QWORD *)this + 10) )
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((CBaseObject **)this + 10);
}
