/*
 * XREFs of ?Show@CMultitaskingViewFrame@@UEAAJXZ @ 0x1804BD960
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18029D428 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x18029D468 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?MultitaskingViewFrameShown_@MultitaskingViewTelemetry@@QEBAXIIAEBUCRect@Geometry@@@Z @ 0x1804BCEE8 (-MultitaskingViewFrameShown_@MultitaskingViewTelemetry@@QEBAXIIAEBUCRect@Geometry@@@Z.c)
 *     ?_CloakWindow@CMultitaskingViewFrame@@AEAAJ_N@Z @ 0x1804BDAD4 (-_CloakWindow@CMultitaskingViewFrame@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewFrame::Show(CMultitaskingViewFrame *this)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(__int64, GUID *, __int64 *); // rbx
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  MultitaskingViewTelemetry *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = 0LL;
  v2 = *((_QWORD *)this + 314);
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v4 = v3(v2, &GUID_b406b6c5_d8ab_475a_b797_5e5d2d5d22c4, &v16);
    if ( v4 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL))(v16);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 315) + 392LL))(*((_QWORD *)this + 315), 0LL);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EF,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
        (const char *)(unsigned int)v4);
    }
  }
  (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)this + 310) + 24LL))(*((_QWORD *)this + 310), &GUID_NULL);
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 310) + 32LL))(*((_QWORD *)this + 310), v5);
  v6 = CMultitaskingViewFrame::_CloakWindow(this, 0);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v15 = 0;
    v8 = *((_QWORD *)this + 304);
    if ( v8 )
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 24LL))(v8, &v15);
    v14 = 0;
    v9 = *((_QWORD *)this + 306);
    if ( v9 )
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 24LL))(v9, &v14);
    if ( MultitaskingViewTelemetry::IsEnabled(v9) )
    {
      wil::details::static_lazy<MultitaskingViewTelemetry>::get(
        v10,
        (void (__cdecl *)())_lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
      MultitaskingViewTelemetry::MultitaskingViewFrameShown_(
        v11,
        v15,
        v14,
        (CMultitaskingViewFrame *)((char *)this + 2552));
    }
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  return v7;
}
