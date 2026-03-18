/*
 * XREFs of SepDeleteLogonSessionClaims @ 0x140A64964
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140A64520 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x140AD8BA4 (SepDeReferenceLogonSession.c)
 * Callees:
 *     SepDeleteClaimAttributes @ 0x140A77774 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepDeleteLogonSessionClaims(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 120);
  if ( v2 )
  {
    result = SepDeleteClaimAttributes(v2);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return result;
}
