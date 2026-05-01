/*
 * XREFs of SdbpReadStringRef @ 0x180098644
 * Callers:
 *     SdbGetStringTagPtr @ 0x180097D74 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x1800924FC (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1800986F0 (SdbpReadTagData.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) != 0x6000 )
  {
    SdbGetTagFromTagID(a1, v2);
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  if ( !(unsigned int)SdbpReadTagData(a1, v2, &v5, 4LL) )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  return v5;
}
