/*
 * XREFs of ??$QueueTask@V_lambda_dff7b450e7eee25fd5a246545de8ddb9_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_dff7b450e7eee25fd5a246545de8ddb9_@@@Z @ 0x1800A077C
 * Callers:
 *     ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x1800A02B8 (-_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_dff7b450e7eee25fd5a246545de8ddb9_>(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  unsigned int v7; // edi

  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v5);
    *v6 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_dff7b450e7eee25fd5a246545de8ddb9_>::`vftable';
  }
  v7 = SHTaskPoolQueueTask(3LL, a2, a3);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v7;
}
