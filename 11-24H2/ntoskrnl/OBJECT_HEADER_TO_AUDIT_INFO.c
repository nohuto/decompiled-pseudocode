/*
 * XREFs of OBJECT_HEADER_TO_AUDIT_INFO @ 0x14040ED00
 * Callers:
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ObpAuditObjectAccess @ 0x140863834 (ObpAuditObjectAccess.c)
 *     ObpSetObjectAuditInfo @ 0x14086B968 (ObpSetObjectAuditInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_AUDIT_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 0x20) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x3F];
  else
    return 0LL;
}
