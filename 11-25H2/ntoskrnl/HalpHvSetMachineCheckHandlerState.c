/*
 * XREFs of HalpHvSetMachineCheckHandlerState @ 0x140548ED8
 * Callers:
 *     HalpMceInit @ 0x140B58864 (HalpMceInit.c)
 *     HalpPostSleepMP @ 0x140B58A3C (HalpPostSleepMP.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpHvSetMachineCheckHandlerState()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v1 = 0LL;
  if ( qword_140FC07B0 )
  {
    LODWORD(v1) = 1;
    BYTE4(v1) = 1;
    return guard_dispatch_icall_no_overrides(&v1);
  }
  return result;
}
