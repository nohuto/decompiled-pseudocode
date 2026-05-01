/*
 * XREFs of _lambda_7e7f8cd3e685741244f76c8bd4111764_::operator() @ 0x1801AA288
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___::RunTask @ 0x1804A1F00 (CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z @ 0x1801AA494 (-AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18029D428 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x18029D468 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_7e7f8cd3e685741244f76c8bd4111764_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int (__fastcall *v5)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v6)(__int64, __int64, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // esi
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v22; // [rsp+50h] [rbp+20h] BYREF

  if ( ((*(_DWORD *)a1 - 40) & 0xFFFFFFF9) != 0 || (v4 = 5, *(_DWORD *)a1 == 46) )
    v4 = 6;
  v22 = 0LL;
  v5 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  if ( v5(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v22) < 0 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v7 = v6(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v22);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC9,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
        (const char *)(unsigned int)v7);
      v20 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    else
    {
      v9 = ((unsigned int)(*(_DWORD *)a1 - 44) <= 1) | 2;
      if ( v4 != 6 )
        v9 = (unsigned int)(*(_DWORD *)a1 - 44) <= 1;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v22 + 48LL))(
              v22,
              *(_QWORD *)(a1 + 8),
              v9,
              *(_QWORD *)(a1 + 16));
      v8 = v10;
      if ( v10 >= 0 )
      {
        if ( MultitaskingViewTelemetry::IsEnabled(v12, v11) )
        {
          wil::details::static_lazy<MultitaskingViewTelemetry>::get(
            v13,
            _lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
          MultitaskingViewTelemetry::AltTabInvoked_(v19, v9);
        }
        goto LABEL_10;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD5,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
        (const char *)(unsigned int)v10);
      v18 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    return v8;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 56LL))(v22, v4);
  v8 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
      (const char *)(unsigned int)v16);
    v17 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return v8;
  }
LABEL_10:
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 0LL;
}
