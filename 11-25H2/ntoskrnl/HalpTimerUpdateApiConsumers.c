/*
 * XREFs of HalpTimerUpdateApiConsumers @ 0x14055EDF8
 * Callers:
 *     HalpPrepareForBugcheck @ 0x140548440 (HalpPrepareForBugcheck.c)
 *     HalpRestoreHvEnlightenment @ 0x140549110 (HalpRestoreHvEnlightenment.c)
 *     HalpSaveAndDisableEnlightenment @ 0x1405494B0 (HalpSaveAndDisableEnlightenment.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpTimerUpdateApiConsumers()
{
  char result; // al
  _QWORD *v1; // rbx
  char v2; // di

  result = HalpDisableInterrupts();
  v1 = (_QWORD *)HalpTimerHvApicCallbackList;
  v2 = result;
  while ( v1 )
  {
    result = guard_dispatch_icall_no_overrides(5LL);
    v1 = (_QWORD *)*v1;
  }
  if ( v2 )
    _enable();
  return result;
}
