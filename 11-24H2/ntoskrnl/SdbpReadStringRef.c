/*
 * XREFs of SdbpReadStringRef @ 0x140947F50
 * Callers:
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpReadTagData @ 0x140947920 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, a2, (__int64)&v5, 4u) )
      return v5;
    AslLogCallPrintf(1LL, (__int64)"SdbpReadStringRef");
  }
  else
  {
    SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(1LL, (__int64)"SdbpReadStringRef");
  }
  return 0LL;
}
