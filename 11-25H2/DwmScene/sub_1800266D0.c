/*
 * XREFs of sub_1800266D0 @ 0x1800266D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180026B60 @ 0x180026B60 (sub_180026B60.c)
 *     sub_180027AB4 @ 0x180027AB4 (sub_180027AB4.c)
 */

__int64 __fastcall sub_1800266D0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = sub_180027AB4(a1, *(unsigned int *)(*a2 + 244LL));
  if ( !(_BYTE)result )
    return sub_180026B60(a1, *a2);
  return result;
}
