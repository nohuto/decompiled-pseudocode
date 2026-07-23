/*
 * XREFs of XmBtOp @ 0x140574290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall XmBtOp(unsigned int *a1)
{
  __int64 result; // rax

  result = a1[4];
  a1[4] = result ^ ((unsigned __int8)result ^ (unsigned __int8)(a1[26] >> a1[27])) & 1;
  return result;
}
