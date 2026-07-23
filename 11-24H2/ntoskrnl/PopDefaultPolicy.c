/*
 * XREFs of PopDefaultPolicy @ 0x140746F64
 * Callers:
 *     PopResetCurrentPolicies @ 0x140A61C7C (PopResetCurrentPolicies.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PopDefaultPolicy(_DWORD *a1)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  memset_0(a1, 0, 0xE8uLL);
  v2 = a1 + 29;
  *a1 = 1;
  a1[10] = 1;
  a1[23] = 1;
  v3 = 4LL;
  a1[17] = 2;
  a1[18] = 4;
  a1[19] = 2;
  do
  {
    *v2 = 2;
    v2 += 6;
    --v3;
  }
  while ( v3 );
  result = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  a1[1] = 6;
  *(_QWORD *)(a1 + 5) = 0LL;
  a1[4] = 2;
  *((_QWORD *)a1 + 4) = 0LL;
  a1[7] = 0;
  return result;
}
