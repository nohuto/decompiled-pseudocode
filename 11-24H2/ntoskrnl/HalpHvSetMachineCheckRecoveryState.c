/*
 * XREFs of HalpHvSetMachineCheckRecoveryState @ 0x1405490C8
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x140552D6C (HalpMemoryErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x140552E18 (HalpMemoryErrorDeferredRecovery.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvSetMachineCheckRecoveryState(int a1)
{
  __int64 result; // rax
  int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  result = 0LL;
  if ( qword_140FC11B0 )
  {
    v3 = a1;
    v2 = 2;
    return guard_dispatch_icall_no_overrides(&v2, qword_140FC11B0);
  }
  return result;
}
