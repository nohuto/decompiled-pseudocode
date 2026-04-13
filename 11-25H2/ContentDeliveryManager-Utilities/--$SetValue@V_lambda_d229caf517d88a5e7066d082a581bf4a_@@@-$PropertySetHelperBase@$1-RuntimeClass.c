/*
 * XREFs of ??$SetValue@V_lambda_d229caf517d88a5e7066d082a581bf4a_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEAAJPEB_WAEBV_lambda_d229caf517d88a5e7066d082a581bf4a_@@@Z @ 0x180082B4C
 * Callers:
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180086994 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180045870 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetValue<_lambda_d229caf517d88a5e7066d082a581bf4a_>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, PVOID, __int64, _BYTE *); // rsi
  __int64 v12; // rdi
  HSTRING_HEADER *v13; // rax
  _BYTE v15[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v18; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v19; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v18 = L"delay";
  v5 = *(_DWORD *)(a1 + 16);
  if ( (v5 & 0x80000000) == 0 )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 96LL))(
           *(_QWORD *)(a1 + 8),
           *a3,
           &v17);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v15[0] = 0;
      v16 = 0LL;
      v7 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1,
             &v16);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v10 = v16;
        v11 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v16 + 80LL);
        v12 = v17;
        v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v19, &v18, v8);
        v7 = v11(v10, v13[1].Reserved.Reserved1, v12, v15);
        v5 = v7;
        if ( v7 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
          v5 = 0;
          goto LABEL_11;
        }
        v9 = 353LL;
      }
      else
      {
        v9 = 352LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v6);
    }
LABEL_11:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x159,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
    (const char *)v5);
  return v5;
}
