/*
 * XREFs of PspSetRateControlJobPreCallback @ 0x140778720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PspSetEffectiveRateControlJob @ 0x140777F38 (PspSetEffectiveRateControlJob.c)
 */

void __fastcall PspSetRateControlJobPreCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8

  PspSetEffectiveRateControlJob(a1, *(_QWORD *)(a2 + 24));
  if ( *v3 )
    guard_dispatch_icall_no_overrides(v2, v3[2]);
}
