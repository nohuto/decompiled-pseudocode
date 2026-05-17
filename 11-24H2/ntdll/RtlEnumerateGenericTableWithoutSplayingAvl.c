/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1800E9D20
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x1800F5780 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     RealSuccessor @ 0x1800E9D90 (RealSuccessor.c)
 */

__int64 __fastcall RtlEnumerateGenericTableWithoutSplayingAvl(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // r9
  __int64 v5; // rcx
  __int64 i; // rcx

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  if ( *a2 )
  {
    v3 = RealSuccessor(*a2, a2, a3, a2);
    if ( v3 )
      *v4 = v3;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 16);
    for ( i = *(_QWORD *)(v3 + 8); i; i = *(_QWORD *)(i + 8) )
      v3 = i;
    *a2 = v3;
  }
  v5 = v3 + 32;
  if ( !v3 )
    return 0LL;
  return v5;
}
