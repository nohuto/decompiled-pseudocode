/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176___ @ 0x18054B48C
 * Callers:
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x18054D31C (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176_____lambda_02ea2976da830b140e60944cbaaa9176__const_&_ @ 0x18054B3F4 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa.c)
 */

__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176_(__int64 *a1, __int64 a2)
{
  unsigned int v3; // ebx
  _QWORD *CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176_____lambda_02ea2976da830b140e60944cbaaa9176__const; // r8
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  *a1 = 0LL;
  CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176_____lambda_02ea2976da830b140e60944cbaaa9176__const = Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176_____lambda_02ea2976da830b140e60944cbaaa9176__const___(&v10, a2);
  v5 = -*CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176_____lambda_02ea2976da830b140e60944cbaaa9176__const;
  v6 = (*CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176_____lambda_02ea2976da830b140e60944cbaaa9176__const
      + 32LL) & -(__int64)(*CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176_____lambda_02ea2976da830b140e60944cbaaa9176__const != 0LL);
  v11 = v6;
  *CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176_____lambda_02ea2976da830b140e60944cbaaa9176__const = 0LL;
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
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return v3;
}
