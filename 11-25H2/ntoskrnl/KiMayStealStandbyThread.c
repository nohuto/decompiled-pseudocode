/*
 * XREFs of KiMayStealStandbyThread @ 0x14032E5D0
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiMayStealStandbyThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  return (!a2 || *(_BYTE *)(a1 + 35337) == *(_BYTE *)(a2 + 35337))
      && (v2 = *(_QWORD *)(a1 + 16)) != 0
      && v2 != *(_QWORD *)(a1 + 24)
      && v2 != *(_QWORD *)(a1 + 14392)
      && v2 != *(_QWORD *)(a1 + 36480)
      && (**(_BYTE **)(a1 + 56) & 0x7Fu) >= 0x10;
}
