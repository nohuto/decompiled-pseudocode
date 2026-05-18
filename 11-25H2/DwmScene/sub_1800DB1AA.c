/*
 * XREFs of sub_1800DB1AA @ 0x1800DB1AA
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800366CC @ 0x1800366CC (sub_1800366CC.c)
 */

__int64 __fastcall sub_1800DB1AA(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_1800366CC(*(_QWORD *)(a2 + 128));
  }
  return result;
}
