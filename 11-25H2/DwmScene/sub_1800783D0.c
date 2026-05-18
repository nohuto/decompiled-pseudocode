/*
 * XREFs of sub_1800783D0 @ 0x1800783D0
 * Callers:
 *     sub_180040670 @ 0x180040670 (sub_180040670.c)
 *     sub_180047150 @ 0x180047150 (sub_180047150.c)
 *     sub_180056CE0 @ 0x180056CE0 (sub_180056CE0.c)
 *     sub_18008BD00 @ 0x18008BD00 (sub_18008BD00.c)
 * Callees:
 *     sub_18001B3DC @ 0x18001B3DC (sub_18001B3DC.c)
 */

bool __fastcall sub_1800783D0(__int64 a1, __int64 a2)
{
  return !sub_18001B3DC(a2 + 24, a1 + 24)
      && *(_BYTE *)(a2 + 72) == *(_BYTE *)(a1 + 72)
      && *(_DWORD *)(a2 + 76) == *(_DWORD *)(a1 + 76);
}
