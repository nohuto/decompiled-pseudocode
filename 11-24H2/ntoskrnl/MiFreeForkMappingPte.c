/*
 * XREFs of MiFreeForkMappingPte @ 0x1406F9B9C
 * Callers:
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiUnmapSinglePage @ 0x1404C39B0 (MiUnmapSinglePage.c)
 */

unsigned __int64 __fastcall MiFreeForkMappingPte(__int64 a1)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 56);
  if ( result )
    return MiUnmapSinglePage(*(_QWORD *)(a1 + 56));
  if ( *(_BYTE *)(a1 + 192) )
    return MiDeleteUltraThreadContext(a1 + 72);
  return result;
}
