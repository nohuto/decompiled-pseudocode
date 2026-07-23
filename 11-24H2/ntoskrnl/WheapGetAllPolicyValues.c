/*
 * XREFs of WheapGetAllPolicyValues @ 0x1407C919C
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x14065DE1C (WheapWmiExecutePolicyManagementMethod.c)
 * Callees:
 *     WheapGetPolicyValue @ 0x1407C91E0 (WheapGetPolicyValue.c)
 */

__int64 __fastcall WheapGetAllPolicyValues(_DWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int i; // r8d
  int v6; // r8d
  __int64 v7; // r9

  if ( a2 < 0x58 )
    return 3221225507LL;
  *a1 = 22;
  for ( i = 0; i < 0x16; i = v6 + 1 )
  {
    result = WheapGetPolicyValue(i, a3);
    if ( (int)result < 0 )
      break;
    a3 = v7 + 4;
  }
  return result;
}
