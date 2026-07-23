/*
 * XREFs of ?KiInitializeProcessConcurrencyCount@@YAXPEAT_KI_PROCESS_CONCURRENCY_COUNT@@K@Z @ 0x14046E9EC
 * Callers:
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405BDC84 (KeSetExpectedConcurrencyCountProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeProcessConcurrencyCount(union _KI_PROCESS_CONCURRENCY_COUNT *a1, unsigned int a2)
{
  unsigned int v2; // eax

  a1->AllFields = 0;
  if ( a2 > KeMaximumProcessors )
    v2 = (KeMaximumProcessors << 18) - 1;
  else
    v2 = a2 << 18;
  a1->AllFields = v2;
}
