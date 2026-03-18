/*
 * XREFs of HalpTimerProfileInterrupt @ 0x14055EEE0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     KeProfileInterruptWithSource @ 0x140498080 (KeProfileInterruptWithSource.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpTimerProfileInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v1 = *(_QWORD *)(a1 + 136);
  InternalData = HalpTimerGetInternalData(HalpProfileTimer);
  guard_dispatch_icall_no_overrides(InternalData, v3, v4, v5);
  if ( HalpTimerProfilingCallback )
    guard_dispatch_icall_no_overrides(v1, v6, v7, v8);
  else
    KeProfileInterruptWithSource(v1, 0LL);
  return 1;
}
