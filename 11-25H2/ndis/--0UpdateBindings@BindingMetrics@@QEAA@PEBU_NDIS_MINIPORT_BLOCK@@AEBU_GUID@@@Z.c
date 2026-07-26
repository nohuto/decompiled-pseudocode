/*
 * XREFs of ??0UpdateBindings@BindingMetrics@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x140070560
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015DC00 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ??0BaseMetric@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x1400705F0 (--0BaseMetric@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z.c)
 */

BindingMetrics::UpdateBindings *__fastcall BindingMetrics::UpdateBindings::UpdateBindings(
        BindingMetrics::UpdateBindings *this,
        const struct _NDIS_MINIPORT_BLOCK *a2,
        const struct _GUID *a3)
{
  BindingMetrics::UpdateBindings *result; // rax

  BindingMetrics::BaseMetric::BaseMetric(this, 0LL, a2, a3);
  result = this;
  *((_QWORD *)this + 6) = 0LL;
  return result;
}
