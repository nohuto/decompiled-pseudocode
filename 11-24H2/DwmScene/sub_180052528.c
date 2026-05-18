/*
 * XREFs of sub_180052528 @ 0x180052528
 * Callers:
 *     sub_18002A748 @ 0x18002A748 (sub_18002A748.c)
 *     sub_1800C3440 @ 0x1800C3440 (sub_1800C3440.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180052528(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 12);
  return result;
}
