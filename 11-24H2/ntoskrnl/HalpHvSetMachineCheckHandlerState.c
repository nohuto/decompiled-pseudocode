/*
 * XREFs of HalpHvSetMachineCheckHandlerState @ 0x140549088
 * Callers:
 *     HalpMceInit @ 0x140B6D2D4 (HalpMceInit.c)
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpHvSetMachineCheckHandlerState()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v1 = 0LL;
  if ( qword_140FC11B0 )
  {
    LODWORD(v1) = 1;
    BYTE4(v1) = 1;
    return guard_dispatch_icall_no_overrides(&v1, qword_140FC11B0);
  }
  return result;
}
