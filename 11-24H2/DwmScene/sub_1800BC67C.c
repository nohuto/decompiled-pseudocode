/*
 * XREFs of sub_1800BC67C @ 0x1800BC67C
 * Callers:
 *     sub_1800BD964 @ 0x1800BD964 (sub_1800BD964.c)
 *     sub_1800BED4C @ 0x1800BED4C (sub_1800BED4C.c)
 *     sub_1800C6FD0 @ 0x1800C6FD0 (sub_1800C6FD0.c)
 *     sub_1800C7DC0 @ 0x1800C7DC0 (sub_1800C7DC0.c)
 *     sub_1800C9AB0 @ 0x1800C9AB0 (sub_1800C9AB0.c)
 *     sub_1800C9D10 @ 0x1800C9D10 (sub_1800C9D10.c)
 *     sub_1800C9F70 @ 0x1800C9F70 (sub_1800C9F70.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800BC67C(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  v3 = *a2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  a1[1] = a2[1];
  result = a1;
  *a1 = v3;
  return result;
}
