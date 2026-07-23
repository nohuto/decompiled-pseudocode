/*
 * XREFs of RtlpValidCompoundAce @ 0x18011D14C
 * Callers:
 *     RtlValidAcl @ 0x1800194E0 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidCompoundAce(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  bool result; // al

  result = a1
        && (v1 = *(unsigned __int16 *)(a1 + 2), ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v1)
        && (unsigned int)v1 >= 0x18
        && *(_WORD *)(a1 + 8) == 1
        && *(_BYTE *)(a1 + 12) == 1
        && *(_BYTE *)(a1 + 13) <= 0xFu
        && (v2 = 4LL * *(unsigned __int8 *)(a1 + 13) + 8, v1 >= 4 * (unsigned __int64)*(unsigned __int8 *)(a1 + 13) + 32)
        && *(_BYTE *)(v2 + a1 + 12) == 1
        && (v3 = *(unsigned __int8 *)(v2 + a1 + 13), (unsigned __int8)v3 <= 0xFu)
        && v1 >= 4 * (unsigned __int64)*(unsigned __int8 *)(a1 + 13) + 28 + 4 * v3;
  return result;
}
