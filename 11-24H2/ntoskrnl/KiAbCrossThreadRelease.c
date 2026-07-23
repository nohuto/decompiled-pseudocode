/*
 * XREFs of KiAbCrossThreadRelease @ 0x1402F2188
 * Callers:
 *     KeAbCrossThreadRelease @ 0x1402F2154 (KeAbCrossThreadRelease.c)
 *     KeAbCrossThreadDelete @ 0x1405C11AC (KeAbCrossThreadDelete.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14028D4F0 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14031FE60 (KiAbThreadRemoveBoostsSlow.c)
 */

__int64 __fastcall KiAbCrossThreadRelease(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  int v6; // r8d
  __int64 result; // rax

  KiAbEntryRemoveFromTree((char *)a2, a2, a3, a4);
  v6 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 80) = 0;
  *(_BYTE *)(a2 + 10) = 0;
  if ( v6 )
    KiAbThreadRemoveBoostsSlow(a3);
  *(_QWORD *)a2 = 0LL;
  result = 88LL * (*(_BYTE *)(a2 + 8) & 0x3F);
  _InterlockedOr16((volatile signed __int16 *)(a2 - result - 6), (unsigned __int8)(1 << (*(_BYTE *)(a2 + 8) & 0x3F)));
  return result;
}
