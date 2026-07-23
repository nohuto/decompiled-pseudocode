/*
 * XREFs of SepDuplicateTokenClaims @ 0x140A56584
 * Callers:
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 * Callees:
 *     SepDuplicateClaimAttributes @ 0x140A565F0 (SepDuplicateClaimAttributes.c)
 */

__int64 __fastcall SepDuplicateTokenClaims(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 result; // rax
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = (_QWORD *)(a1 + 1096);
  if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 && *v2 )
  {
    result = SepDuplicateClaimAttributes(*v2, &v7);
    v5 = result;
    if ( (int)result >= 0 )
    {
      v6 = v7;
      *(_DWORD *)(a2 + 200) |= 0x8000u;
      *(_QWORD *)(a2 + 1096) = v6;
      return v5;
    }
  }
  else
  {
    *(_QWORD *)(a2 + 1096) = *v2;
    return 0LL;
  }
  return result;
}
