/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_ce925e2c65fa70a9c2e11950913c80c9___ @ 0x1801CFF68
 * Callers:
 *     _lambda_10d04f2f2676f3bcd785d385c5de414a_::operator() @ 0x1801D0810 (_lambda_10d04f2f2676f3bcd785d385c5de414a_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E0A90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ce925e2c65fa70a9c2e11950913c80c9_____lambda_ce925e2c65fa70a9c2e11950913c80c9___ @ 0x1801CFDEC (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_c.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_ce925e2c65fa70a9c2e11950913c80c9___(
        IUnknown *punk,
        __int64 a2,
        __int128 *a3)
{
  HRESULT v6; // eax
  int v7; // edi
  void *v8; // rbx
  __int64 (__fastcall *v9)(void *, __int64, __int64 *); // rdi
  int v10; // eax
  volatile signed __int32 *v11; // rbx
  void *ppvOut; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(
         punk,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &ppvOut);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v16 = 0LL;
    v8 = ppvOut;
    v9 = *(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppvOut + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    v10 = v9(v8, a2, &v16);
    v7 = v10;
    if ( v10 >= 0 )
    {
      Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ce925e2c65fa70a9c2e11950913c80c9_____lambda_ce925e2c65fa70a9c2e11950913c80c9___(
        &v14,
        a3);
      v11 = v14;
      if ( v14 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *))(*(_QWORD *)v16 + 24LL))(v16, v14);
        if ( v7 >= 0 )
          v7 = 0;
      }
      else
      {
        v7 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x57,
          (int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
          (const char *)0x8007000ELL);
      }
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v7;
}
