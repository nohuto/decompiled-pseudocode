/*
 * XREFs of sub_180053C50 @ 0x180053C50
 * Callers:
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180053C50(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v3; // r10d
  __int64 v4; // rax
  __int64 result; // rax

  v2 = *(unsigned int *)(a1 + 400);
  if ( (_DWORD)v2 )
  {
    if ( a2 < *(_QWORD *)(a1 + 408) )
      *(_QWORD *)(a1 + 408) = a2;
    v4 = a2 + *(_QWORD *)(a1 + 416) * v2;
    v3 = v2 + 1;
    result = v4 / v3;
    *(_QWORD *)(a1 + 416) = result;
    if ( *(_QWORD *)(a1 + 424) < a2 )
      *(_QWORD *)(a1 + 424) = a2;
  }
  else
  {
    *(_QWORD *)(a1 + 408) = a2;
    v3 = 1;
    *(_QWORD *)(a1 + 416) = a2;
    *(_QWORD *)(a1 + 424) = a2;
  }
  *(_DWORD *)(a1 + 400) = v3;
  return result;
}
