/*
 * XREFs of sub_1800574F0 @ 0x1800574F0
 * Callers:
 *     sub_1800595F0 @ 0x1800595F0 (sub_1800595F0.c)
 *     sub_180068CE0 @ 0x180068CE0 (sub_180068CE0.c)
 *     sub_180083990 @ 0x180083990 (sub_180083990.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800574F0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(unsigned int **)(v1 + 128);
    if ( v3 )
      return *v3;
  }
  return result;
}
