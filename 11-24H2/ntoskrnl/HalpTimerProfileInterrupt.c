/*
 * XREFs of HalpTimerProfileInterrupt @ 0x14055CB10
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     KeProfileInterruptWithSource @ 0x140492A60 (KeProfileInterruptWithSource.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpTimerProfileInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 136);
  InternalData = HalpTimerGetInternalData(HalpProfileTimer);
  guard_dispatch_icall_no_overrides(InternalData, v3);
  if ( HalpTimerProfilingCallback )
    guard_dispatch_icall_no_overrides(v1, v4);
  else
    KeProfileInterruptWithSource(v1, 0LL);
  return 1;
}
