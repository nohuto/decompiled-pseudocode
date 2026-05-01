/*
 * XREFs of wistd::__function::__func__lambda_00f17e8f9cdc6e60e0c1a7e4e1826712__void___cdecl(void)_::operator() @ 0x1801B5220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall wistd::__function::__func__lambda_00f17e8f9cdc6e60e0c1a7e4e1826712__void___cdecl_void__::operator()(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+48h] [rbp+10h]

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 664LL);
  v10 = v2;
  AcquireSRWLockShared(v2);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v4 + 680) )
  {
    do
    {
      v9 = 0LL;
      v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(v4 + 672) + 8 * v3);
      v6 = **v5;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
      v7 = v6(v5, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &v9);
      if ( v7 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2B,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
      ++v3;
      v4 = *(_QWORD *)(a1 + 8);
    }
    while ( v3 < *(_QWORD *)(v4 + 680) );
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
}
