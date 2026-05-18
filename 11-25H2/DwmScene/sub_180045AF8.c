/*
 * XREFs of sub_180045AF8 @ 0x180045AF8
 * Callers:
 *     sub_180048A70 @ 0x180048A70 (sub_180048A70.c)
 * Callees:
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_180045B9C @ 0x180045B9C (sub_180045B9C.c)
 *     sub_180045F1C @ 0x180045F1C (sub_180045F1C.c)
 */

__int64 __fastcall sub_180045AF8(__int64 a1, __int64 a2)
{
  int v4; // r10d
  int v5; // r8d
  int v6; // r9d
  __int64 result; // rax

  *(_DWORD *)(a1 + 300) = *(_DWORD *)(a2 + 204);
  v4 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 120) = v4;
  v5 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 112) = v5;
  *(_DWORD *)(a1 + 116) = v5;
  *(_DWORD *)(a1 + 124) = v4;
  *(_WORD *)(a1 + 308) = *(_WORD *)(a2 + 112);
  sub_18001C99C(&stru_1801B82E8, 3);
  result = *(unsigned int *)(a2 + 28);
  if ( (result & 0x800) != 0 )
    result = sub_180045F1C(a1, *(_DWORD *)(a1 + 116), *(_DWORD *)(a1 + 124), v6, *(_DWORD *)(a2 + 28));
  if ( *(_DWORD *)(a1 + 120) )
    return sub_180045B9C(a1, a2);
  return result;
}
