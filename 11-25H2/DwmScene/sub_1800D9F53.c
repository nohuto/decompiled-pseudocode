/*
 * XREFs of sub_1800D9F53 @ 0x1800D9F53
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 */

__int64 __fastcall sub_1800D9F53(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    return sub_1800130E0(*(_QWORD *)(a2 + 88));
  }
  return result;
}
