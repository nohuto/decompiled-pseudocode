/*
 * XREFs of sub_180052510 @ 0x180052510
 * Callers:
 *     sub_1800C13C0 @ 0x1800C13C0 (sub_1800C13C0.c)
 *     sub_1800C3440 @ 0x1800C3440 (sub_1800C3440.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180052510(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 8);
  return result;
}
