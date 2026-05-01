/*
 * XREFs of ??0GuidedSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@AEBV?$shared_ptr@VSnapAssistState@@@std@@@Z @ 0x1802B9E94
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18011CD10 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180019118 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x180144550 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall GuidedSnapAssistViewController::GuidedSnapAssistViewController(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64),
        __int64 a5,
        _QWORD *a6)
{
  const char *v10; // r9
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64); // rdi
  __int64 v12; // rcx
  int v13; // eax
  int v15[4]; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  XamlBaseViewController::XamlBaseViewController((_QWORD *)(a1 + 8));
  *(_QWORD *)a1 = &GuidedSnapAssistViewController::`vftable';
  *(_QWORD *)(a1 + 8) = &GuidedSnapAssistViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  *(_QWORD *)(a1 + 16) = &GuidedSnapAssistViewController::`vftable'{for `IXamlMultitaskingViewController'};
  *(_QWORD *)(a1 + 24) = &GuidedSnapAssistViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  *(_QWORD *)(a1 + 32) = &GuidedSnapAssistViewController::`vftable'{for `Platform::Object's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 40) = &GuidedSnapAssistViewController::`vftable'{for `__abi_IUnknown's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 48) = &GuidedSnapAssistViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 152) = &GuidedSnapAssistViewController::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 160) = &GuidedSnapAssistViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    (_QWORD *)(a1 + 168),
    a3);
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)v15 = 0LL;
  v15[2] = 0;
  *(_OWORD *)(a1 + 320) = *(_OWORD *)v15;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_OWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_BYTE *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0LL;
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>((_QWORD *)(a1 + 384), a6);
  if ( !*(_QWORD *)(a1 + 168) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2C,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\guidedsnapassistviewcontroller.cpp",
      v10);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 72),
    a5);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 56),
    a2);
  v11 = **a4;
  v12 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = v11(a4, &GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f, a1 + 80);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x31,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\guidedsnapassistviewcontroller.cpp",
      (const char *)(unsigned int)v13,
      0);
  return a1;
}
