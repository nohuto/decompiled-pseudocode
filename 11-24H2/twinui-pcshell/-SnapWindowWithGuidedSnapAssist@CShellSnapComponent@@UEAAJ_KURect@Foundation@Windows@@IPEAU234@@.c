/*
 * XREFs of ?SnapWindowWithGuidedSnapAssist@CShellSnapComponent@@UEAAJ_KURect@Foundation@Windows@@IPEAU234@@Z @ 0x1805A0DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x1800CCC28 (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x1800CCC68 (-get@-$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AX.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SnapWindowWithGuidedSnapAssist_@CSnapComponentTelemetry@@QEBAX_KAEAURect@Foundation@Windows@@H@Z @ 0x1805A0ED8 (-SnapWindowWithGuidedSnapAssist_@CSnapComponentTelemetry@@QEBAX_KAEAURect@Foundation@Windows@@H@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShellSnapComponent::SnapWindowWithGuidedSnapAssist(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v9; // rcx
  CSnapComponentTelemetry *v10; // rcx
  int v11; // ebx
  __int64 v12; // rdx
  float v14; // xmm1_4
  float v15; // xmm0_4
  int v16; // eax
  float v17; // xmm1_4
  _DWORD v18[4]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( CSnapComponentTelemetry::IsEnabled(a1) )
  {
    wil::details::static_lazy<CSnapComponentTelemetry>::get(
      v9,
      (void (__cdecl *)())_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
    CSnapComponentTelemetry::SnapWindowWithGuidedSnapAssist_(v10, a2, (struct Windows::Foundation::Rect *)a3, a4);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 464) + 48LL))(
          *(_QWORD *)(a1 + 464),
          a4,
          a5);
  if ( v11 < 0 )
  {
    v12 = 840LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v14 = *(float *)(a3 + 4);
  v15 = *(float *)a3 + *(float *)(a3 + 8);
  v18[0] = (int)*(float *)a3;
  v16 = (int)v14;
  v17 = v14 + *(float *)(a3 + 12);
  v18[1] = v16;
  v18[2] = (int)v15;
  v18[3] = (int)v17;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD))(*(_QWORD *)(a1 + 8) + 24LL))(
          a1 + 8,
          (int)a2,
          v18,
          0LL);
  if ( v11 < 0 )
  {
    v12 = 843LL;
    goto LABEL_5;
  }
  return 0LL;
}
