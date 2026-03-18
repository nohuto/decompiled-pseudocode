/*
 * XREFs of ACPIBusIrpEject @ 0x14009B680
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpInvokeDispatchRoutine @ 0x1400B7334 (ACPIIrpInvokeDispatchRoutine.c)
 */

__int64 __fastcall ACPIBusIrpEject(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // [rsp+20h] [rbp-18h]

  v4 = 0;
  return ACPIIrpInvokeDispatchRoutine(a1, a2, a3, ACPIBusAndFilterIrpEject, v4);
}
