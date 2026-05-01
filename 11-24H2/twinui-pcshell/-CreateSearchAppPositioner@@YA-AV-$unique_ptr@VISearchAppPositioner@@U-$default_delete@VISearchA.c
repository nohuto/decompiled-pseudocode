/*
 * XREFs of ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x180243D04
 * Callers:
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@9@3V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@9@@Z @ 0x1803BF520 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewC.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U?$default_delete@UAsyncEventWorkItemBase@details@wil@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017021C (--4-$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U-$default_delete@UAsyncEventWorkItemBase@d.c)
 *     ?reset@?$unique_ptr@VCThreadRefHost@@U?$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAAXPEAVCThreadRefHost@@@Z @ 0x18018A030 (-reset@-$unique_ptr@VCThreadRefHost@@U-$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAAXPEA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801B1A24 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreateSearchAppPositioner(_QWORD *a1, __int64 a2, char a3, __int64 a4)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rax
  __int64 (__fastcall ***v10)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, __int64); // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SRTest>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SRTest>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v6 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    *v6 = &SearchBoxOnTaskbarSearchAppPositionerConfig::`vftable';
    v6[1] = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6 + 1);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v11 = (__int64 (__fastcall ***)(_QWORD, __int64))v6;
    *v7 = &SearchBoxOnTaskbarSearchAppPositioner::`vftable';
    v7[1] = 0LL;
    wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
      (void (__fastcall ****)(_QWORD, __int64))v7 + 1,
      &v11);
    wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(&v11, 0LL);
    v6 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(
    &v10,
    (__int64 (__fastcall ***)(_QWORD, __int64))v7);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *, __int64))*v6)(v6, 1LL);
  v8 = v10;
  v10 = 0LL;
  *a1 = v8;
  wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(&v10, 0LL);
  return a1;
}
