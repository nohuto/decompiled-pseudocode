/*
 * XREFs of ?SetIterations@UpdateBindings@BindingMetrics@@QEAAX_K@Z @ 0x14006F050
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015F2C0 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BindingMetrics::UpdateBindings::SetIterations(BindingMetrics::UpdateBindings *this, __int64 a2)
{
  *((_QWORD *)this + 6) = a2;
}
