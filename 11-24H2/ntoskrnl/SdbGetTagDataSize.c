/*
 * XREFs of SdbGetTagDataSize @ 0x1409479E0
 * Callers:
 *     KsepDbReadKData @ 0x14073C88C (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140802B2C (SdbQueryDataExTagID.c)
 *     SdbpGetMatchingTextAttributes @ 0x140804F78 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14080519C (SdbpGetRegistryMatchingAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x140808408 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x1408087D4 (SdbpMergeAreTagValuesEqual.c)
 *     SdbpGetFirstIndexedRecord @ 0x1409451F0 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextTagId @ 0x140946EF0 (SdbpGetNextTagId.c)
 *     SdbpReadTagData @ 0x140947920 (SdbpReadTagData.c)
 *     SdbpGetNextIndexedRecord @ 0x140A73568 (SdbpGetNextIndexedRecord.c)
 *     SdbpGetIndex @ 0x140A75FE8 (SdbpGetIndex.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x140483CB4 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 *     SdbpReadMappedData @ 0x140947C10 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagDataSize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v6; // ebx
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  v6 = SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000;
  if ( !(unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
  {
    switch ( v6 )
    {
      case 4096:
        v7 = 0;
        break;
      case 8192:
        v7 = 1;
        break;
      case 12288:
        v7 = 2;
        break;
      default:
        if ( v6 != 0x4000 )
        {
          if ( v6 == 20480 )
          {
            v7 = 8;
            break;
          }
          if ( v6 != 24576 )
          {
            v9 = 0;
            if ( !(unsigned int)SdbpReadMappedData(a1, (unsigned int)(v4 + 2), &v9, 4LL) )
              AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 364, (unsigned int)"Error reading size data");
            v7 = v9;
            break;
          }
        }
        v7 = 4;
        break;
    }
    if ( v7 + v4 >= v7 && v7 + v4 <= *(_DWORD *)(a1 + 20) )
      return v7;
    AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 375, (unsigned int)"Error reading size data");
    return 0x20000000;
  }
  switch ( v6 )
  {
    case 36864:
LABEL_3:
      v9 = 0;
      if ( (unsigned int)SdbpReadMappedData(a1, (unsigned int)(v4 + 2), &v9, 4LL) )
      {
        v7 = v9;
      }
      else
      {
        v7 = 0x20000000;
        AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 311, (unsigned int)"Error reading size data [%x]");
      }
      goto LABEL_5;
    case 16384:
      goto LABEL_11;
    case 12288:
      v7 = 2;
      goto LABEL_5;
    case 24576:
LABEL_11:
      v7 = 4;
      goto LABEL_5;
    case 4096:
      v7 = 0;
LABEL_5:
      if ( v7 + v4 >= v7 && v7 + v4 <= *(_DWORD *)(a1 + 20) )
        return v7;
      AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 329, (unsigned int)"Error reading size data [%x]");
      return 0x20000000;
    case 8192:
      v7 = 1;
      goto LABEL_5;
    case 20480:
      v7 = 8;
      goto LABEL_5;
    case 28672:
    case 32768:
      goto LABEL_3;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 318, (unsigned int)"Invalid TAG_TYPE encountered TAG: [0x%x]");
  return 0x20000000LL;
}
