/*
 * XREFs of RtlAddAuditAccessAceEx @ 0x14077FDC0
 * Callers:
 *     LocalGetAclForString @ 0x140865750 (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x14091DA10 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAuditAccessAceEx(int a1, int a2, int a3, int a4, void *Src, char a6, char a7)
{
  int v7; // eax
  int v8; // r8d

  v7 = a3 | 0x40;
  if ( !a6 )
    v7 = a3;
  v8 = v7 | 0x80;
  if ( !a7 )
    v8 = v7;
  return RtlpAddKnownAce(a1, a2, v8, a4, Src, 2);
}
