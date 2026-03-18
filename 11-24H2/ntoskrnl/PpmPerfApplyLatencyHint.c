/*
 * XREFs of PpmPerfApplyLatencyHint @ 0x14042A41C
 * Callers:
 *     PpmPerfApplyLatencyHints @ 0x14042A3A0 (PpmPerfApplyLatencyHints.c)
 * Callees:
 *     PpmGetPerfPolicyClass @ 0x14042AA7C (PpmGetPerfPolicyClass.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfApplyLatencyHint(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 *v3; // rdi
  __int64 PerfPolicyClass; // rcx
  int v5; // r9d
  __int64 v6; // r11
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r9

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = &PpmCurrentProfile[0][61 * dword_140F0BA4C];
  PerfPolicyClass = (unsigned __int8)PpmGetPerfPolicyClass(a1);
  result = (unsigned int)(v5 - 1);
  v8 = *((unsigned __int8 *)v3 + PerfPolicyClass + 133);
  if ( (result & 0xFFFFFFFD) != 0 )
  {
    result = (unsigned int)(v5 - 5);
    if ( (unsigned int)result <= 1 || PpmPerfBoostAtGuaranteed )
      v9 = *(unsigned int *)(v1 + 24);
    else
      v9 = 100LL;
  }
  else
  {
    v9 = *(unsigned int *)(v6 + 452);
  }
  if ( (unsigned int)v8 >= (unsigned int)v9 )
    v8 = (unsigned int)v9;
  if ( (unsigned int)v8 > *(_DWORD *)(v1 + 56) )
  {
    result = guard_dispatch_icall_no_overrides(v2, v8, *(unsigned int *)(v6 + 460), v9);
    *(_DWORD *)(v1 + 56) = result;
  }
  return result;
}
