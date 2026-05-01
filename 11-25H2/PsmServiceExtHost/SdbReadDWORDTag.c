/*
 * XREFs of SdbReadDWORDTag @ 0x180098128
 * Callers:
 *     SdbpApphelpExeInfo @ 0x180095104 (SdbpApphelpExeInfo.c)
 *     SdbpReadApphelpDisplayResources @ 0x180095978 (SdbpReadApphelpDisplayResources.c)
 *     SdbpCheckAllAttributes @ 0x180096ABC (SdbpCheckAllAttributes.c)
 *     InitOnceScanIndexes @ 0x180097310 (InitOnceScanIndexes.c)
 *     SdbpFindMatchingDWORD @ 0x180097BA4 (SdbpFindMatchingDWORD.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180099014 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckContainment @ 0x180099370 (SdbpCheckContainment.c)
 *     SdbpCheckOSKind @ 0x18009AA40 (SdbpCheckOSKind.c)
 *     SdbpCheckRuntimePlatform @ 0x18009AB10 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetMatchingTextAttributes @ 0x18009AD58 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009AFA4 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x1800924FC (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1800986F0 (SdbpReadTagData.c)
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
