/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x18001724C
 * Callers:
 *     ?ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180012F44 (-ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000A690 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_RecordCachedUsage @ 0x180017EA0 (wil_details_RecordCachedUsage.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(__int64 a1)
{
  unsigned int *v1; // rsi
  unsigned int *v3; // rbx

  v1 = *(unsigned int **)(a1 + 56);
  v3 = *(unsigned int **)(a1 + 48);
  if ( (unsigned __int64)((char *)v1 - (char *)v3) >= 0x10 )
  {
    while ( v3 != v1 )
    {
      wil_details_RecordCachedUsage(*v3, *((_QWORD *)v3 + 1));
      v3 += 4;
    }
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
    wil::details::WilApi_RecordFeatureUsage(0LL, 254LL, 0LL);
  }
}
