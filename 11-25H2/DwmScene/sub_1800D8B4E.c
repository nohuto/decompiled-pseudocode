/*
 * XREFs of sub_1800D8B4E @ 0x1800D8B4E
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004B5BC @ 0x18004B5BC (sub_18004B5BC.c)
 */

__int64 __fastcall sub_1800D8B4E(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18004B5BC(*(void ***)(a2 + 40));
  }
  return result;
}
