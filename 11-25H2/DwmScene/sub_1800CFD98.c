/*
 * XREFs of sub_1800CFD98 @ 0x1800CFD98
 * Callers:
 *     sub_1800CF540 @ 0x1800CF540 (sub_1800CF540.c)
 *     sub_1800CF73C @ 0x1800CF73C (sub_1800CF73C.c)
 * Callees:
 *     sub_1800CFE0C @ 0x1800CFE0C (sub_1800CFE0C.c)
 */

__int64 __fastcall sub_1800CFD98(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800CFE0C(v2 + 32);
  return sub_1800CFC4C(a1);
}
