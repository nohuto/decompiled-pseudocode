/*
 * XREFs of ?StaticShellReadyWNFCallback@BroadcastDVRComponent@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18029EC80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5e3513c216c4aa17901f526f5b36627d___ @ 0x18029ECF8 (Windows--Internal--ComTaskPool--QueueTask__lambda_5e3513c216c4aa17901f526f5b36627d___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::StaticShellReadyWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        unsigned int *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( a4 )
    (*(void (__fastcall **)(unsigned int *, __int64, struct _WNF_TYPE_ID *))(*(_QWORD *)a4 + 8LL))(a4, a2, a3);
  v8 = a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
  Windows::Internal::ComTaskPool::QueueTask__lambda_5e3513c216c4aa17901f526f5b36627d___(v6, v5, a4[60], &v8);
  if ( v8 )
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v8 + 16LL))(v8);
  (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a4 + 16LL))(a4);
  return 0LL;
}
