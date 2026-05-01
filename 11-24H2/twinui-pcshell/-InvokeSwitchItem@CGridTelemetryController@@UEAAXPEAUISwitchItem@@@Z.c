/*
 * XREFs of ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804D8650
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18017F364 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18029D428 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x18029D468 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z @ 0x1804C0B8C (-ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z.c)
 *     ?SwitchItemInvoked_@MultitaskingViewTelemetry@@QEBAX_KIPEBG@Z @ 0x1804D8818 (-SwitchItemInvoked_@MultitaskingViewTelemetry@@QEBAX_KIPEBG@Z.c)
 *     ?_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z @ 0x1804D88D0 (-_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGridTelemetryController::InvokeSwitchItem(
        CGridTelemetryController *this,
        __int64 (__fastcall ***a2)(SwitchItemTelemetry *, GUID *, __int64 *))
{
  void **v4; // rax
  unsigned __int16 **v5; // r8
  int AppId; // eax
  wil::details::in1diag3 *v7; // rcx
  unsigned __int16 *v8; // rsi
  __int64 v9; // rcx
  MultitaskingViewTelemetry *v10; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int16 *v13; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = 0LL;
  if ( CGridTelemetryController::_GetIndexOfItem(this, (struct ISwitchItem *)a2, &v14) >= 0 )
  {
    v13 = 0LL;
    v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v13);
    AppId = SwitchItemTelemetry::ExtractAppId(a2, (struct ISwitchItem *)v4, v5);
    v7 = retaddr;
    if ( AppId < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\gridtelemetry.cpp",
        (const char *)(unsigned int)AppId);
    v8 = v13;
    if ( MultitaskingViewTelemetry::IsEnabled((__int64)v7) )
    {
      wil::details::static_lazy<MultitaskingViewTelemetry>::get(
        v9,
        (void (__cdecl *)())_lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
      MultitaskingViewTelemetry::SwitchItemInvoked_(v10, v14, 0, v8);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v13);
  }
  v11 = *((_QWORD *)this + 2);
  if ( v11 )
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(SwitchItemTelemetry *, GUID *, __int64 *)))(*(_QWORD *)v11 + 56LL))(
      v11,
      a2);
}
