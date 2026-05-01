/*
 * XREFs of wistd::__function::__func__lambda_2e36272fe8059ce5a0d2bac675811785__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18034AD80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b82422c86d7ccda9967e06660bac40e9_____lambda_b82422c86d7ccda9967e06660bac40e9___ @ 0x180342564 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b82422c86d7cc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func__lambda_2e36272fe8059ce5a0d2bac675811785__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1,
        volatile signed __int32 *a2)
{
  unsigned int v2; // edi
  volatile signed __int32 **v3; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int32 *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v7 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(v7 + 1588);
  v3 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b82422c86d7ccda9967e06660bac40e9_____lambda_b82422c86d7ccda9967e06660bac40e9___(
         &v8,
         &v7);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v5);
  }
  result = SHTaskPoolQueueTask(3LL, 2LL, v2);
  if ( v4 )
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
  return result;
}
