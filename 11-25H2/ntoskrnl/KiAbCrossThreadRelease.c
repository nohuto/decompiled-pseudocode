/*
 * XREFs of KiAbCrossThreadRelease @ 0x140407818
 * Callers:
 *     KeAbCrossThreadRelease @ 0x1404077E4 (KeAbCrossThreadRelease.c)
 *     KeAbCrossThreadDelete @ 0x1405BFAFC (KeAbCrossThreadDelete.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14029BB60 (KiAbThreadRemoveBoostsSlow.c)
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 */

__int64 __fastcall KiAbCrossThreadRelease(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  int v7; // r8d
  __int64 result; // rax

  KiAbEntryRemoveFromTree((char *)a2, a2, a3, a4);
  v7 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 80) = 0;
  *(_BYTE *)(a2 + 10) = 0;
  if ( v7 )
    KiAbThreadRemoveBoostsSlow(a3, a1, v7, 0LL);
  *(_QWORD *)a2 = 0LL;
  result = 88LL * (*(_BYTE *)(a2 + 8) & 0x3F);
  _InterlockedOr16((volatile signed __int16 *)(a2 - result - 6), (unsigned __int8)(1 << (*(_BYTE *)(a2 + 8) & 0x3F)));
  return result;
}
