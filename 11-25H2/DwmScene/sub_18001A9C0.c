/*
 * XREFs of sub_18001A9C0 @ 0x18001A9C0
 * Callers:
 *     sub_180017298 @ 0x180017298 (sub_180017298.c)
 *     sub_1800172F0 @ 0x1800172F0 (sub_1800172F0.c)
 *     sub_1800172FC @ 0x1800172FC (sub_1800172FC.c)
 *     sub_180038EFC @ 0x180038EFC (sub_180038EFC.c)
 *     sub_180042330 @ 0x180042330 (sub_180042330.c)
 *     sub_18004B7B8 @ 0x18004B7B8 (sub_18004B7B8.c)
 *     sub_18005AD84 @ 0x18005AD84 (sub_18005AD84.c)
 *     sub_18007A544 @ 0x18007A544 (sub_18007A544.c)
 *     sub_180085168 @ 0x180085168 (sub_180085168.c)
 *     sub_1800DA8C4 @ 0x1800DA8C4 (sub_1800DA8C4.c)
 *     sub_1800E229B @ 0x1800E229B (sub_1800E229B.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_18001A9C0(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_180010134(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
