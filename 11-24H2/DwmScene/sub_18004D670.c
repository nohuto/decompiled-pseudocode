/*
 * XREFs of sub_18004D670 @ 0x18004D670
 * Callers:
 *     sub_18004C1A0 @ 0x18004C1A0 (sub_18004C1A0.c)
 *     sub_18004CA78 @ 0x18004CA78 (sub_18004CA78.c)
 *     sub_1800C6FD0 @ 0x1800C6FD0 (sub_1800C6FD0.c)
 *     sub_1800C7DC0 @ 0x1800C7DC0 (sub_1800C7DC0.c)
 *     sub_1800C9AB0 @ 0x1800C9AB0 (sub_1800C9AB0.c)
 *     sub_1800C9D10 @ 0x1800C9D10 (sub_1800C9D10.c)
 *     sub_1800C9F70 @ 0x1800C9F70 (sub_1800C9F70.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18004D670(__int64 a1)
{
  return *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) && *(_DWORD *)(a1 + 32) == *(_DWORD *)(a1 + 24);
}
