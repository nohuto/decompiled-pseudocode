/*
 * XREFs of sub_180045C58 @ 0x180045C58
 * Callers:
 *     sub_180048BD0 @ 0x180048BD0 (sub_180048BD0.c)
 * Callees:
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_180045CFC @ 0x180045CFC (sub_180045CFC.c)
 *     sub_18004607C @ 0x18004607C (sub_18004607C.c)
 */

__int64 __fastcall sub_180045C58(__int64 a1, __int64 a2)
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
  sub_18001CAFC(&stru_1801B92E8, 3);
  result = *(unsigned int *)(a2 + 28);
  if ( (result & 0x800) != 0 )
    result = sub_18004607C(a1, *(_DWORD *)(a1 + 116), *(_DWORD *)(a1 + 124), v6, *(_DWORD *)(a2 + 28));
  if ( *(_DWORD *)(a1 + 120) )
    return sub_180045CFC(a1, a2);
  return result;
}
