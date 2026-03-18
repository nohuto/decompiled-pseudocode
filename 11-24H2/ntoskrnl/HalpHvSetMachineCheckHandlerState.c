/*
 * XREFs of HalpHvSetMachineCheckHandlerState @ 0x14054B7C8
 * Callers:
 *     HalpMceInit @ 0x140B68694 (HalpMceInit.c)
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvSetMachineCheckHandlerState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v5 = 0LL;
  if ( qword_140FC0F50 )
  {
    LODWORD(v5) = 1;
    BYTE4(v5) = 1;
    return guard_dispatch_icall_no_overrides(&v5, qword_140FC0F50, a3, a4);
  }
  return result;
}
