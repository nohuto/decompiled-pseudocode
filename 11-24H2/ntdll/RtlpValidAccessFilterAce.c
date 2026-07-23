/*
 * XREFs of RtlpValidAccessFilterAce @ 0x18011D81C
 * Callers:
 *     RtlValidAcl @ 0x1800194E0 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidAccessFilterAce(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // r8
  bool result; // al

  result = a1
        && (v2 = *(unsigned __int16 *)(a1 + 2), ((v2 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v2)
        && (unsigned int)v2 >= 0x10
        && *(_BYTE *)(a1 + 8) == 1
        && *(_BYTE *)(a1 + 9) <= 0xFu
        && (v3 = 4 * (*(unsigned __int8 *)(a1 + 9) + 2), (int)(v2 - v3 - 8) >= 6)
        && *(_DWORD *)(v3 + a1 + 8) == 2020897377;
  return result;
}
