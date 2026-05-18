/*
 * XREFs of sub_18006CFDC @ 0x18006CFDC
 * Callers:
 *     sub_18006CFA0 @ 0x18006CFA0 (sub_18006CFA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006CFDC(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  a1[1] = 0LL;
  *a1 = result;
  return result;
}
