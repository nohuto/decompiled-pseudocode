/*
 * XREFs of ?EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180037D98
 * Callers:
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x180035E24 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180037AAC (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb__&_::CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb__&_ @ 0x1802B65A8 (CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb__-_--CAsyncCallbackWithLambda_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CImmersiveApp::CImmersiveWindowCollection::EnsurePositionOffsetAsync(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rbx
  void *v3; // rax
  __int64 v4; // rdi
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 21) )
  {
    v2 = *((_QWORD *)this + 19);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v5[0] = v2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
    v5[1] = (__int64)this;
    v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v3 )
      v4 = CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb____::CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb____(
             v3,
             v5);
    else
      v4 = 0LL;
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 18) + 232LL))(*((_QWORD *)this + 18), v4);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
}
