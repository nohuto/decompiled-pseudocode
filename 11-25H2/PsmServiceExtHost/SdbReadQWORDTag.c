/*
 * XREFs of SdbReadQWORDTag @ 0x1800981C4
 * Callers:
 *     SdbpCheckAllAttributes @ 0x180096ABC (SdbpCheckAllAttributes.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180099014 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009AFA4 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x1800924FC (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1800986F0 (SdbpReadTagData.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    v7 = SdbpReadTagData(a1, v4, &v9, 8LL);
    v8 = v9;
    if ( !v7 )
      return a3;
    return v8;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(1LL);
    return a3;
  }
}
