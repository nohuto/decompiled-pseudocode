/*
 * XREFs of HalpHvGetMachineCheckContext @ 0x140548DF4
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14053D35C (HalpMcaPopulateErrorData.c)
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x1405482F0 (HalpHvMceConsumedMemoryErrorRecovery.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvGetMachineCheckContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !qword_140FC0798 )
    return 3221225473LL;
  result = guard_dispatch_icall_no_overrides(a1);
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  return result;
}
