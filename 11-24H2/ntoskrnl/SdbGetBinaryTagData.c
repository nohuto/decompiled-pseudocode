/*
 * XREFs of SdbGetBinaryTagData @ 0x140805AFC
 * Callers:
 *     SdbpGetRegistryMatchingAttributes @ 0x140804A5C (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x14095FA14 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x1409600B0 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetBinaryTagData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // r8
  __int64 v7; // r9

  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) == 0x9000 )
    return SdbpGetMappedTagData(a1, v4);
  SdbGetTagFromTagID(a1, v4, v6, v7);
  AslLogCallPrintf(1, (unsigned int)"SdbGetBinaryTagData", 1035, (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type");
  return 0LL;
}
