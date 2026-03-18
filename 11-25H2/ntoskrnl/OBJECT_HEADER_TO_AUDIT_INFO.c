/*
 * XREFs of OBJECT_HEADER_TO_AUDIT_INFO @ 0x14041DC70
 * Callers:
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     ObpSetObjectAuditInfo @ 0x140919544 (ObpSetObjectAuditInfo.c)
 *     ObpAuditObjectAccess @ 0x140971330 (ObpAuditObjectAccess.c)
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
