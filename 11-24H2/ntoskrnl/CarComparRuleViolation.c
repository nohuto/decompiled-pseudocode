/*
 * XREFs of CarComparRuleViolation @ 0x1406178F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CarComparRuleViolation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // rax
  unsigned int v6; // ecx
  unsigned int v7; // edx

  if ( *(_DWORD *)a2 < *(_DWORD *)a3 )
    return 0LL;
  if ( *(_DWORD *)a2 > *(_DWORD *)a3 )
    return 1LL;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 < *(_DWORD *)(a3 + 4) )
    return 0LL;
  if ( v3 > *(_DWORD *)(a3 + 4) )
    return 1LL;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 < *(_QWORD *)(a3 + 8) )
    return 0LL;
  if ( v4 > *(_QWORD *)(a3 + 8) )
    return 1LL;
  v6 = *(_DWORD *)(a2 + 16);
  v7 = *(_DWORD *)(a3 + 16);
  if ( v6 == v7 )
    return 2LL;
  else
    return v6 > v7;
}
