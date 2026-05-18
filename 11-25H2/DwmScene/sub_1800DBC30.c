/*
 * XREFs of sub_1800DBC30 @ 0x1800DBC30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E9CC @ 0x18005E9CC (sub_18005E9CC.c)
 */

__int64 __fastcall sub_1800DBC30(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 104) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    return sub_18005E9CC(*(_QWORD *)(a2 + 800));
  }
  return result;
}
