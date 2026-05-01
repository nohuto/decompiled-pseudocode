/*
 * XREFs of SdbGetBinaryTagData @ 0x180098160
 * Callers:
 *     SdbpGetRegistryMatchingAttributes @ 0x18009B2F4 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18009295C (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x1800987CC (SdbpGetMappedTagData.c)
 */

__int64 __fastcall SdbGetBinaryTagData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
    return SdbpGetMappedTagData(a1, v2);
  SdbGetTagFromTagID(a1, v2);
  AslLogCallPrintf(1LL);
  return 0LL;
}
