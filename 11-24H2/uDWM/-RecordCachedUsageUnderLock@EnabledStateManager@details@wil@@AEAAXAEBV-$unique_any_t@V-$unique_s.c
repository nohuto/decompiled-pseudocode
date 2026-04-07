/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x18009F590
 * Callers:
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18008D000 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18009F3B8 (-ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18008437C (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_RecordCachedUsage @ 0x18008A9B4 (wil_details_RecordCachedUsage.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 48);
  if ( (unsigned __int64)(v2 - v3) >= 0x10 )
  {
    while ( v3 != v2 )
    {
      wil_details_RecordCachedUsage(*(_DWORD *)v3, *(_QWORD *)(v3 + 8));
      v3 += 16LL;
    }
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
    wil::details::WilApi_RecordFeatureUsage(0LL, 254LL, 0LL);
  }
}
