/*
 * XREFs of SdbReadDWORDTag @ 0x180098588
 * Callers:
 *     SdbpApphelpExeInfo @ 0x180095564 (SdbpApphelpExeInfo.c)
 *     SdbpReadApphelpDisplayResources @ 0x180095DD8 (SdbpReadApphelpDisplayResources.c)
 *     SdbpCheckAllAttributes @ 0x180096F1C (SdbpCheckAllAttributes.c)
 *     InitOnceScanIndexes @ 0x180097770 (InitOnceScanIndexes.c)
 *     SdbpFindMatchingDWORD @ 0x180098004 (SdbpFindMatchingDWORD.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180099364 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckContainment @ 0x1800996C0 (SdbpCheckContainment.c)
 *     SdbpCheckOSKind @ 0x18009AD90 (SdbpCheckOSKind.c)
 *     SdbpCheckRuntimePlatform @ 0x18009AE60 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetMatchingTextAttributes @ 0x18009B0A8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009B2F4 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18009295C (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180098B50 (SdbpReadTagData.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x4000 )
  {
    v7 = SdbpReadTagData(a1, v4, &v9, 4LL);
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
