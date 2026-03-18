/*
 * XREFs of HalpHvSetMachineCheckRecoveryState @ 0x14054B808
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x14055542C (HalpMemoryErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1405554D8 (HalpMemoryErrorDeferredRecovery.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvSetMachineCheckRecoveryState(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+3Ch] [rbp+14h]

  result = 0LL;
  if ( qword_140FC0F50 )
  {
    v6 = a1;
    v5 = 2;
    return guard_dispatch_icall_no_overrides(&v5, qword_140FC0F50, a3, a4);
  }
  return result;
}
