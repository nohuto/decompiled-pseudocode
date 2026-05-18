/*
 * XREFs of sub_1800523B0 @ 0x1800523B0
 * Callers:
 *     sub_1800C1260 @ 0x1800C1260 (sub_1800C1260.c)
 *     sub_1800C32E0 @ 0x1800C32E0 (sub_1800C32E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800523B0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 8);
  return result;
}
