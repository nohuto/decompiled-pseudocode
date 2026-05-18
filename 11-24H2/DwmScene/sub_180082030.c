/*
 * XREFs of sub_180082030 @ 0x180082030
 * Callers:
 *     sub_180081CAC @ 0x180081CAC (sub_180081CAC.c)
 * Callees:
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 */

__int64 __fastcall sub_180082030(__int64 a1, __int64 a2)
{
  sub_1800133F4(a1, a2);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_BYTE *)(a1 + 40) = *(_BYTE *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  return a1;
}
