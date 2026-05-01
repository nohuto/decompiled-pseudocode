/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___ @ 0x180294A70
 * Callers:
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x1801806F4 (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const_&_ @ 0x180294B0C (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_(__int64 *a1)
{
  _QWORD *CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const = (_QWORD *)Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const___(&v9);
  v3 = *CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const
     + 32LL;
  v4 = -*CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const;
  v5 = v3 & -(__int64)(*CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const != 0LL);
  v10 = v5;
  *CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const = 0LL;
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, v3, v4);
  }
  if ( v5 )
  {
    *a1 = v5;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"desktop\\internal\\shell\\inc\\private\\MultitaskingViewTask.h",
      (const char *)0x8007000ELL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    return 2147942414LL;
  }
}
