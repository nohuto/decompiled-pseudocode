/*
 * XREFs of ??0PropertyStoreHelper@wil@@QEAA@PEAUIPropertyStore@@@Z @ 0x1802C705C
 * Callers:
 *     ?SetWindowAppUserModelId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x180581E64 (-SetWindowAppUserModelId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhs.c)
 *     ?DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z @ 0x18058B074 (-DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _lambda_1ac48a6b3b3cf435c7174fb01e7933ad_::operator() @ 0x18058C840 (_lambda_1ac48a6b3b3cf435c7174fb01e7933ad_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
wil::PropertyStoreHelper *__fastcall wil::PropertyStoreHelper::PropertyStoreHelper(
        wil::PropertyStoreHelper *this,
        struct IPropertyStore *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IPropertyStore *))a2->lpVtbl->AddRef)(a2);
  return this;
}
