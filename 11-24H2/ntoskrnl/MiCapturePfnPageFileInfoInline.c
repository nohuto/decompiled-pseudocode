/*
 * XREFs of MiCapturePfnPageFileInfoInline @ 0x140269E70
 * Callers:
 *     MiAbandonPrivatePfn @ 0x140269D68 (MiAbandonPrivatePfn.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 * Callees:
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
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
