/*
 * XREFs of HalpHvGetMachineCheckContext @ 0x14054B6E4
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14053FB8C (HalpMcaPopulateErrorData.c)
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x14054ABE0 (HalpHvMceConsumedMemoryErrorRecovery.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvGetMachineCheckContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF
  int v6; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v4[0] = 0LL;
  v6 = 0;
  if ( !qword_140FC0F38 )
    return 3221225473LL;
  result = guard_dispatch_icall_no_overrides(a1, &v5, v4, &v6);
  *(_DWORD *)a2 = v5;
  *(_QWORD *)(a2 + 8) = v4[0];
  *(_DWORD *)(a2 + 16) = v6;
  return result;
}
