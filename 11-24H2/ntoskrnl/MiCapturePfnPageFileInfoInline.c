/*
 * XREFs of MiCapturePfnPageFileInfoInline @ 0x14036D370
 * Callers:
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiAbandonPrivatePfn @ 0x14036D268 (MiAbandonPrivatePfn.c)
 *     MiSetPagesModified @ 0x140492C90 (MiSetPagesModified.c)
 * Callees:
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 */

__int64 __fastcall MiCapturePfnPageFileInfoInline(__int64 a1, int a2, int a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( (v4 & 4) != 0 )
  {
    if ( a2 )
      *(_QWORD *)(a1 + 16) &= ~4uLL;
    if ( !a3 )
      MiClearPageFileReservation(&v4);
    return v4;
  }
  else if ( a3 && (v4 & 2) != 0 )
  {
    return v4;
  }
  else
  {
    return 0LL;
  }
}
