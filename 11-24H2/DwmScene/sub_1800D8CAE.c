/*
 * XREFs of sub_1800D8CAE @ 0x1800D8CAE
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004B71C @ 0x18004B71C (sub_18004B71C.c)
 */

__int64 __fastcall sub_1800D8CAE(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18004B71C(*(void ***)(a2 + 40));
  }
  return result;
}
