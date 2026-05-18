/*
 * XREFs of sub_1800CD9A0 @ 0x1800CD9A0
 * Callers:
 *     sub_1800CCFE0 @ 0x1800CCFE0 (sub_1800CCFE0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800CD9A0(__int64 a1)
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
