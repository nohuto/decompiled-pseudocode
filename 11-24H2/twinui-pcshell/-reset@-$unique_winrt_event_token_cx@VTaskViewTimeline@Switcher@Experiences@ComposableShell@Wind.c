/*
 * XREFs of ?reset@?$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x1802BFD1C
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180115058 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ??1?$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x1802BFCF4 (--1-$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsI.c)
 *     ??4?$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C92D4 (--4-$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsI.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18003FC58 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??R_lambda_a4d0d0877f62cc01b2b88c73646041c4_@@QEBA@XZ @ 0x1806BA360 (--R_lambda_a4d0d0877f62cc01b2b88c73646041c4_@@QEBA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewTimeline>::reset(
        _QWORD *a1)
{
  void (__fastcall *v2)(_QWORD); // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int128 v5; // [rsp+20h] [rbp-18h]
  _QWORD *v6; // [rsp+40h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (void (__fastcall *)(_QWORD))a1[4];
    if ( v2 )
    {
      v2(*a1);
    }
    else
    {
      v6 = a1;
      v3 = _lambda_a4d0d0877f62cc01b2b88c73646041c4_::operator()(&v6);
      v4 = __abi_winrt_ptr_ctor(v3);
      __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
      if ( v4 )
        ((void (__fastcall *)(__int64, _QWORD))a1[2])(v4 + *((int *)a1 + 6), *a1);
      __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
    }
    *a1 = 0LL;
    Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 1));
    *(_QWORD *)&v5 = 0LL;
    DWORD2(v5) = 0;
    *((_OWORD *)a1 + 1) = v5;
    a1[4] = 0LL;
  }
}
