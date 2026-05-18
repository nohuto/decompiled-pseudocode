/*
 * XREFs of sub_180010B74 @ 0x180010B74
 * Callers:
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_18003825C @ 0x18003825C (sub_18003825C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010B74(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = *a2;
  result = a2[1];
  a1[1] = result;
  *a2 = 0LL;
  a2[1] = 0LL;
  return result;
}
