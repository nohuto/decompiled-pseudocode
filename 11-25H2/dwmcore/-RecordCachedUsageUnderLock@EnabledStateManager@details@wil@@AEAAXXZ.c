/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18022B670
 * Callers:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x18022B59C (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18022B614 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1802E8C60 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18022DAEC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_RecordCachedUsage @ 0x180260B7C (wil_details_RecordCachedUsage.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int *v4; // rsi
  unsigned int *v6; // rbx
  const char *v7; // [rsp+20h] [rbp-8h]

  v4 = (unsigned int *)*((_QWORD *)this + 7);
  v6 = (unsigned int *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)((char *)v4 - (char *)v6) >= 0x10 )
  {
    while ( v6 != v4 )
    {
      wil_details_RecordCachedUsage(*v6, *((_QWORD *)v6 + 1));
      v6 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, a4, v7);
  }
}
