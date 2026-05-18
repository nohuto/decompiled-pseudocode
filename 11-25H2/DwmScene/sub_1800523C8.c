/*
 * XREFs of sub_1800523C8 @ 0x1800523C8
 * Callers:
 *     sub_18002A5E8 @ 0x18002A5E8 (sub_18002A5E8.c)
 *     sub_1800C32E0 @ 0x1800C32E0 (sub_1800C32E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800523C8(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 12);
  return result;
}
