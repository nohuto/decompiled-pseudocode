/*
 * XREFs of sub_1800DB30A @ 0x1800DB30A
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003682C @ 0x18003682C (sub_18003682C.c)
 */

__int64 __fastcall sub_1800DB30A(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_18003682C(*(_QWORD *)(a2 + 128));
  }
  return result;
}
