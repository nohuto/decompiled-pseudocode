/*
 * XREFs of HalpTimerProfileInterrupt @ 0x14055C5E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     KeProfileInterruptWithSource @ 0x140498550 (KeProfileInterruptWithSource.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpTimerProfileInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  __int64 InternalData; // rax

  v1 = *(_QWORD *)(a1 + 136);
  InternalData = HalpTimerGetInternalData(HalpProfileTimer);
  guard_dispatch_icall_no_overrides(InternalData);
  if ( HalpTimerProfilingCallback )
    guard_dispatch_icall_no_overrides(v1);
  else
    KeProfileInterruptWithSource(v1, 0LL);
  return 1;
}
