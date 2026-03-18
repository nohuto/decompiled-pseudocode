/*
 * XREFs of HalpTimerUpdateApiConsumers @ 0x1405616F8
 * Callers:
 *     HalpPrepareForBugcheck @ 0x14054AD30 (HalpPrepareForBugcheck.c)
 *     HalpRestoreHvEnlightenment @ 0x14054BA00 (HalpRestoreHvEnlightenment.c)
 *     HalpSaveAndDisableEnlightenment @ 0x14054BDA0 (HalpSaveAndDisableEnlightenment.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpTimerUpdateApiConsumers()
{
  char result; // al
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rbx
  char v5; // di

  result = HalpDisableInterrupts();
  v4 = (_QWORD *)HalpTimerHvApicCallbackList;
  v5 = result;
  while ( v4 )
  {
    result = guard_dispatch_icall_no_overrides(5LL, v1, v2, v3);
    v4 = (_QWORD *)*v4;
  }
  if ( v5 )
    _enable();
  return result;
}
