/*
 * XREFs of SdbpReadStringRef @ 0x180098AA4
 * Callers:
 *     SdbGetStringTagPtr @ 0x1800981D4 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18009295C (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180098B50 (SdbpReadTagData.c)
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
