/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___ @ 0x1802ADAC0
 * Callers:
 *     ?ReloadKnownGameList@IsGameManager@@UEAAXXZ @ 0x18010B540 (-ReloadKnownGameList@IsGameManager@@UEAAXXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v3);
    v4[2] = 0LL;
    if ( v4 + 2 != a2 )
    {
      v4[2] = *a2;
      *a2 = 0LL;
    }
    *v4 = &off_18072E338;
  }
  else
  {
    v4 = 0LL;
  }
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
