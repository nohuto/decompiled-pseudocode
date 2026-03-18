/*
 * XREFs of MiFreeForkMappingPte @ 0x1406F0174
 * Callers:
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiUnmapSinglePage @ 0x1404CA490 (MiUnmapSinglePage.c)
 */

char __fastcall MiFreeForkMappingPte(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 )
  {
    LOBYTE(v1) = MiUnmapSinglePage(*(_QWORD *)(a1 + 56));
  }
  else if ( *(_BYTE *)(a1 + 192) )
  {
    LOBYTE(v1) = MiDeleteUltraThreadContext(a1 + 72);
  }
  return v1;
}
