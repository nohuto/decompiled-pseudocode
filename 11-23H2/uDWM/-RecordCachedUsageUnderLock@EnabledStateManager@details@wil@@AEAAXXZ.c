/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000889C
 * Callers:
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180008844 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18005C490 (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x18009A6BC (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000890C (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_RecordCachedUsage @ 0x18005EC30 (wil_details_RecordCachedUsage.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  unsigned int *v2; // rsi
  unsigned int *v3; // rbx
  const char *v4; // [rsp+20h] [rbp-8h]

  v2 = (unsigned int *)*((_QWORD *)this + 7);
  v3 = (unsigned int *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)((char *)v2 - (char *)v3) >= 0x10 )
  {
    while ( v3 != v2 )
    {
      wil_details_RecordCachedUsage((wil::details *)*v3);
      v3 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, 0, v4);
  }
}
