/*
 * XREFs of ?UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x1800B33F0
 * Callers:
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1800B30D4 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x1800B32F4 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800B3D8C (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_820239a8925460678c838e86e23650d6___1_IInspectable___IInspectable___::Invoke @ 0x180681450 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_180681450.c)
 * Callees:
 *     ??$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x180023AFC (--$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x1800B243C (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B3FB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall CSingleViewShellExperience::UnboostPriority(__int64 a1, int a2)
{
  int v3; // eax
  HSTRING v4; // rcx
  const WCHAR *StringRawBuffer; // rax
  HSTRING v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF
  const WCHAR *v13; // [rsp+50h] [rbp+18h] BYREF
  PCWSTR v14; // [rsp+58h] [rbp+20h] BYREF

  v12 = a2;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_5;
    if ( !*(_BYTE *)(a1 + 140) )
      goto LABEL_5;
    *(_BYTE *)(a1 + 140) = 0;
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v3 >= 0 )
      goto LABEL_5;
    v9 = 1243LL;
LABEL_10:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v9,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_5;
  }
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    a1 + 144,
    0LL);
  CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1);
  if ( *(_BYTE *)(a1 + 141) )
  {
    v8 = *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 141) = 0;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 128LL))(v8, a1);
    if ( v3 < 0 )
    {
      v9 = 1234LL;
      goto LABEL_10;
    }
  }
LABEL_5:
  v4 = *(HSTRING *)(a1 + 16);
  v11 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(v4, 0LL);
  v6 = *(HSTRING *)(a1 + 8);
  v13 = StringRawBuffer;
  v14 = WindowsGetStringRawBuffer(v6, 0LL);
  return SingleViewExperienceTelemetry::OnPriorityUnboostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,int,bool &>(
           &v14,
           &v13,
           &v12,
           (char *)(a1 + 141),
           &v11,
           (char *)(a1 + 140));
}
