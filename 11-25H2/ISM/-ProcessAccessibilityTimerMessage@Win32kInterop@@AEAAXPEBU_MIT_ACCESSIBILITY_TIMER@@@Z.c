/*
 * XREFs of ?ProcessAccessibilityTimerMessage@Win32kInterop@@AEAAXPEBU_MIT_ACCESSIBILITY_TIMER@@@Z @ 0x1800EF770
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call @ 0x1800F0B30 (std--_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESS_ea_1800F0B30.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Win32kInterop::ProcessAccessibilityTimerMessage(
        Win32kInterop *this,
        const struct _MIT_ACCESSIBILITY_TIMER *a2)
{
  int v3; // ebx
  __int64 *v5; // r14
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 (*)(), _QWORD, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *((_DWORD *)a2 + 1) & 2;
  v5 = (__int64 *)((char *)this + 8 * (unsigned __int16)(*(_WORD *)a2 - 1) + 504);
  if ( *v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v5 + 96LL))(*v5);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v5);
  }
  if ( !v3 )
  {
    v6 = *((_QWORD *)this + 62);
    v7 = *(__int64 (__fastcall **)(__int64, __int64 (*)(), _QWORD, __int64 *))(*(_QWORD *)v6 + 144LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v5);
    v8 = v7(v6, lambda_dc6b4baf3ce8e698d0113e7b0a7480ab_::_lambda_invoker_cdecl_, *(int *)a2, v5);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2AD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v8,
        v11);
    v9 = 10000 * *((_DWORD *)a2 + 2);
    if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
    {
      v10 = 0LL;
    }
    else
    {
      v10 = 10000 * *((_DWORD *)a2 + 2);
      v9 = 0LL;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)*v5 + 80LL))(*v5, v9, v10);
  }
}
