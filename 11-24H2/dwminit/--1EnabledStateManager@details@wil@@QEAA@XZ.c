/*
 * XREFs of ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180004AB4
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800116B0 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180007364 (-ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180009FD0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::EnabledStateManager::~EnabledStateManager(struct _TP_TIMER **this)
{
  struct _TP_TIMER *v2; // rcx
  __int64 v3; // rdx
  void (*v4)(void); // rax
  struct _TP_TIMER *v5; // rdi
  HANDLE ProcessHeap; // rax
  struct _TP_TIMER *v7; // rdi
  HANDLE v8; // rax
  struct _TP_TIMER *v9; // rbx

  *(_DWORD *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 2,
    0LL);
  wil::details::EnabledStateManager::ProcessShutdown((wil::details::EnabledStateManager *)this);
  v2 = this[13];
  v3 = g_wil_details_internalUnsubscribeFeatureStateChangeNotification;
  if ( v2 )
  {
    if ( g_wil_details_internalUnsubscribeFeatureStateChangeNotification )
    {
      ((void (__fastcall *)(struct _TP_TIMER *, __int64))g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(
        v2,
        g_wil_details_internalUnsubscribeFeatureStateChangeNotification);
    }
    else
    {
      v4 = (void (*)(void))g_wil_details_apiUnsubscribeFeatureStateChangeNotification;
      if ( !g_wil_details_apiUnsubscribeFeatureStateChangeNotification )
        goto LABEL_8;
      ((void (__fastcall *)(struct _TP_TIMER *, _QWORD))g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(
        v2,
        0LL);
    }
    v3 = g_wil_details_internalUnsubscribeFeatureStateChangeNotification;
  }
  v4 = (void (*)(void))g_wil_details_apiUnsubscribeFeatureStateChangeNotification;
LABEL_8:
  if ( !this[12] )
    goto LABEL_13;
  if ( v3 )
  {
    v4 = (void (*)(void))v3;
  }
  else if ( !v4 )
  {
    goto LABEL_13;
  }
  v4();
LABEL_13:
  v5 = this[11];
  this[11] = 0LL;
  if ( v5 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
  }
  v7 = this[7];
  this[7] = 0LL;
  if ( v7 )
  {
    v8 = GetProcessHeap();
    HeapFree(v8, 0, v7);
  }
  v9 = this[2];
  if ( v9 )
  {
    SetThreadpoolTimer(v9, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v9, 1);
    CloseThreadpoolTimer(v9);
  }
}
