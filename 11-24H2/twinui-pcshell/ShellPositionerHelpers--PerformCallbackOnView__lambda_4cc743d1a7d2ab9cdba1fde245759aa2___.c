/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_4cc743d1a7d2ab9cdba1fde245759aa2___ @ 0x18030F6E8
 * Callers:
 *     ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014CDD0 (-GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002CCD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_4cc743d1a7d2ab9cdba1fde245759aa2_____lambda_4cc743d1a7d2ab9cdba1fde245759aa2___ @ 0x18030F648 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_4cc743d1a7d2ab9cdba1fde245759aa2___(
        IUnknown *punk,
        __int64 a2,
        _OWORD *a3)
{
  HRESULT v6; // eax
  unsigned int v7; // ebx
  void *v8; // rbx
  __int64 (__fastcall *v9)(void *, __int64, __int64 *); // rdi
  int v10; // eax
  volatile signed __int32 *v11; // rbx
  int v12; // edi
  void *ppvOut; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v15; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(
         punk,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &ppvOut);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (int)"desktop\\internal\\shell\\inc\\private\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v6);
    goto LABEL_11;
  }
  v17 = 0LL;
  v8 = ppvOut;
  v9 = *(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppvOut + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  v10 = v9(v8, a2, &v17);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (int)"desktop\\internal\\shell\\inc\\private\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v10);
LABEL_5:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    goto LABEL_11;
  }
  Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_4cc743d1a7d2ab9cdba1fde245759aa2_____lambda_4cc743d1a7d2ab9cdba1fde245759aa2___(
    &v15,
    a3);
  v11 = v15;
  if ( !v15 )
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (int)"desktop\\internal\\shell\\inc\\private\\ShellPositionerHelpers.h",
      (const char *)0x8007000ELL);
    goto LABEL_5;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *))(*(_QWORD *)v17 + 24LL))(v17, v15);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  if ( v12 >= 0 )
    v7 = 0;
  else
    v7 = v12;
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return v7;
}
