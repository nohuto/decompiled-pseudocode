/*
 * XREFs of SepDeleteLogonSessionSidValues @ 0x1407931DC
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140A64520 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x140AD8BA4 (SepDeReferenceLogonSession.c)
 * Callees:
 *     SepDereferenceSidValuesBlock @ 0x140793210 (SepDereferenceSidValuesBlock.c)
 */

__int64 __fastcall SepDeleteLogonSessionSidValues(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 128);
  if ( v2 )
  {
    result = SepDereferenceSidValuesBlock(v2);
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  return result;
}
