/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_6cc4c21b59e262556adf8f7a290f4f55__&_ @ 0x180120838
 * Callers:
 *     ?PerformDelayedInitialization@TabletModePositioner@@UEAAJXZ @ 0x1801206C0 (-PerformDelayedInitialization@TabletModePositioner@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_6cc4c21b59e262556adf8f7a290f4f55____(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v3);
    v4[2] = *a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4 + 2);
    *v4 = (__int64)&off_18074F000;
  }
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64 *))(*v4 + 16))(v4);
  return v6;
}
