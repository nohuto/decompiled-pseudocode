/*
 * XREFs of ArbSortArbitrationList @ 0x1400BD9CC
 * Callers:
 *     ArbTestAllocation @ 0x1400BD880 (ArbTestAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArbSortArbitrationList(__int64 **a1)
{
  __int64 *v2; // rdx
  char v3; // cl
  __int64 *v4; // r8
  __int64 **v5; // rcx
  __int64 v6; // rax

  do
  {
    v2 = *a1;
    v3 = 1;
    if ( *a1 == (__int64 *)a1 )
      break;
    do
    {
      v4 = (__int64 *)*v2;
      if ( (__int64 **)*v2 == a1 )
        break;
      if ( v2[6] > v4[6] )
      {
        v5 = (__int64 **)v2[1];
        v6 = *v4;
        *v5 = v4;
        *(_QWORD *)(v6 + 8) = v2;
        *v2 = v6;
        v2[1] = (__int64)v4;
        v4[1] = (__int64)v5;
        v3 = 0;
        *v4 = (__int64)v2;
      }
      v2 = (__int64 *)*v2;
    }
    while ( v2 != (__int64 *)a1 );
  }
  while ( !v3 );
  return 0LL;
}
