/*
 * XREFs of DllCanUnloadNow @ 0x18018DC80
 * Callers:
 *     <none>
 * Callees:
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x1801627B8 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x18017DC90 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     WINRT_IMPL_InterlockedFlushSList @ 0x1801CEFAD (WINRT_IMPL_InterlockedFlushSList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  __int64 *v0; // rax
  RTL_SRWLOCK *v1; // rdx
  PSLIST_ENTRY v4; // r8
  struct _SLIST_ENTRY *Next; // r9
  struct _SLIST_ENTRY *v6; // rsi
  __int128 v7; // rt0
  unsigned __int8 v8; // tt

  v0 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  if ( !Microsoft::WRL::Details::TerminateMap((Microsoft::WRL::Details *)v0, v1, 0LL)
    || `winrt::get_module_lock'::`2'::s_lock )
  {
    return 1;
  }
  v4 = WINRT_IMPL_InterlockedFlushSList(&`winrt::impl::get_factory_cache'::`2'::cache);
  if ( v4 )
  {
    do
    {
      Next = v4[-1].Next;
      v6 = v4->Next;
      if ( Next )
      {
        v7 = (unsigned __int64)v4[-1].Next;
        v8 = _InterlockedCompareExchange128((volatile signed __int64 *)&v4[-1], 0LL, 0LL, (signed __int64 *)&v7);
        if ( v8 != 0 )
          ((void (__fastcall *)(struct _SLIST_ENTRY *))Next->Next[1].Next)(Next);
      }
      v4 = v6;
    }
    while ( v6 );
  }
  return 0;
}
