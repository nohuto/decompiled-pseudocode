/*
 * XREFs of SepDuplicateLogonSessionReference @ 0x1404361D0
 * Callers:
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 * Callees:
 *     SepReferenceLogonSession @ 0x140A25A7C (SepReferenceLogonSession.c)
 */

__int64 __fastcall SepDuplicateLogonSessionReference(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 200) & 0x20) != 0 )
  {
    result = SepReferenceLogonSession(a2 + 24, a1 + 216);
    if ( (int)result < 0 )
    {
      *(_DWORD *)(a1 + 200) |= 0x20u;
      *(_QWORD *)(a1 + 216) = 0LL;
    }
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 216);
    *(_QWORD *)(a1 + 216) = v3;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 32)) <= 1 )
      __fastfail(0xEu);
    return 0LL;
  }
  return result;
}
