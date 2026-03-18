/*
 * XREFs of MiCapturePfnPageFileInfoInline @ 0x1402CB93C
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiAbandonPrivatePfn @ 0x1402CC258 (MiAbandonPrivatePfn.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 * Callees:
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 */

__int64 __fastcall MiCapturePfnPageFileInfoInline(__int64 a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v5 = v3;
  if ( (v3 & 4) != 0 )
  {
    if ( a2 )
      *(_QWORD *)(a1 + 16) &= ~4uLL;
    if ( !a3 )
      MiClearPageFileReservation(&v5);
    return v5;
  }
  else if ( a3 && (v3 & 2) != 0 )
  {
    return v3;
  }
  else
  {
    return 0LL;
  }
}
