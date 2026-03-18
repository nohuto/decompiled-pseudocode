/*
 * XREFs of KiAbCrossThreadRelease @ 0x1403D86A8
 * Callers:
 *     KeAbCrossThreadRelease @ 0x1403D8674 (KeAbCrossThreadRelease.c)
 *     KeAbCrossThreadDelete @ 0x1405C3BDC (KeAbCrossThreadDelete.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14025CEE0 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x140340980 (KiAbThreadRemoveBoostsSlow.c)
 */

__int64 __fastcall KiAbCrossThreadRelease(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v6; // r8
  __int64 result; // rax

  KiAbEntryRemoveFromTree((__int64 *)a2, a2, a3);
  v6 = *(unsigned int *)(a2 + 80);
  *(_DWORD *)(a2 + 80) = 0;
  *(_BYTE *)(a2 + 10) = 0;
  if ( (_DWORD)v6 )
    KiAbThreadRemoveBoostsSlow(a3, a1, v6, 0LL);
  *(_QWORD *)a2 = 0LL;
  result = 88LL * (*(_BYTE *)(a2 + 8) & 0x3F);
  _InterlockedOr16((volatile signed __int16 *)(a2 - result - 6), (unsigned __int8)(1 << (*(_BYTE *)(a2 + 8) & 0x3F)));
  return result;
}
