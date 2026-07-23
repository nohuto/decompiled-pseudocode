/*
 * XREFs of LdrpTargetCompare @ 0x18010E4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpTargetCompare(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  result = (unsigned int)(*a2 - *a3);
  if ( a1 && (int)result >= 0 && *a1 < (unsigned int)a3 )
    *a1 = (_DWORD)a3;
  return result;
}
