/*
 * XREFs of sub_1800DBD90 @ 0x1800DBD90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005EB2C @ 0x18005EB2C (sub_18005EB2C.c)
 */

__int64 __fastcall sub_1800DBD90(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 104) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    return sub_18005EB2C(*(_QWORD *)(a2 + 800));
  }
  return result;
}
