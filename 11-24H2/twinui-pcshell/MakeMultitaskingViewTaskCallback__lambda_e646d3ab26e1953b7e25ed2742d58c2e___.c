/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e___ @ 0x180550A34
 * Callers:
 *     ?DismissTaskViewInRemote@CVirtualDesktopManager@@UEAAXPEAUIVirtualDesktop@@@Z @ 0x180553610 (-DismissTaskViewInRemote@CVirtualDesktopManager@@UEAAXPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e_____lambda_e646d3ab26e1953b7e25ed2742d58c2e__const_&_ @ 0x18055064C (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d5.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e_(__int64 *a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD *CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e_____lambda_e646d3ab26e1953b7e25ed2742d58c2e__const; // r8
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  *a1 = 0LL;
  CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e_____lambda_e646d3ab26e1953b7e25ed2742d58c2e__const = Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e_____lambda_e646d3ab26e1953b7e25ed2742d58c2e__const___(&v10, a2);
  v5 = -*CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e_____lambda_e646d3ab26e1953b7e25ed2742d58c2e__const;
  v6 = (*CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e_____lambda_e646d3ab26e1953b7e25ed2742d58c2e__const
      + 32LL) & -(__int64)(*CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e_____lambda_e646d3ab26e1953b7e25ed2742d58c2e__const != 0LL);
  v11 = v6;
  *CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e_____lambda_e646d3ab26e1953b7e25ed2742d58c2e__const = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, v5);
  }
  if ( v6 )
  {
    v11 = 0LL;
    *a1 = v6;
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"desktop\\internal\\shell\\inc\\private\\MultitaskingViewTask.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return v3;
}
