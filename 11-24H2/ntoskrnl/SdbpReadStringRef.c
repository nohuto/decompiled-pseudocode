/*
 * XREFs of SdbpReadStringRef @ 0x140960490
 * Callers:
 *     SdbGetStringTagPtr @ 0x14095FA98 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpReadTagData @ 0x14095FE60 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1409600B0 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, a2, (__int64)&v5, 4u) )
      return v5;
    AslLogCallPrintf(1LL, (__int64)"SdbpReadStringRef", 639LL, (__int64)"Error reading data");
  }
  else
  {
    SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(1LL, (__int64)"SdbpReadStringRef", 634LL, (__int64)"TagID 0x%08X, Tag %04X not STRINGREF type");
  }
  return 0LL;
}
