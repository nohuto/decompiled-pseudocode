/*
 * XREFs of HalpHvGetMachineCheckContext @ 0x140548FA4
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14053D48C (HalpMcaPopulateErrorData.c)
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x1405484A0 (HalpHvMceConsumedMemoryErrorRecovery.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvGetMachineCheckContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h]

  v4 = 0;
  v5 = 0;
  if ( !qword_140FC1198 )
    return 3221225473LL;
  result = guard_dispatch_icall_no_overrides(a1, &v4);
  *(_DWORD *)a2 = v4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = v5;
  return result;
}
