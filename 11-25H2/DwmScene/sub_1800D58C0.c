/*
 * XREFs of sub_1800D58C0 @ 0x1800D58C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800172B8 @ 0x1800172B8 (sub_1800172B8.c)
 */

__int64 __fastcall sub_1800D58C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_1800172B8(*(__int64 (__fastcall *****)(_QWORD, __int64))(a2 + 120));
  }
  return result;
}
