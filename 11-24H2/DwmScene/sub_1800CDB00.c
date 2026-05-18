/*
 * XREFs of sub_1800CDB00 @ 0x1800CDB00
 * Callers:
 *     sub_1800CD140 @ 0x1800CD140 (sub_1800CD140.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800CDB00(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 256);
  return v1 == 4318
      && (*(_DWORD *)(a1 + 260) == 1028
       || *(_DWORD *)(a1 + 260) == 1058
       || *(_DWORD *)(a1 + 260) == 1060
       || *(_DWORD *)(a1 + 260) == 1764)
      || v1 == 32902 && (*(_DWORD *)(a1 + 260) == 66 || *(_DWORD *)(a1 + 260) == 70);
}
