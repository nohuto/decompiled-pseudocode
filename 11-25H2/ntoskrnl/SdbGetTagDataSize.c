/*
 * XREFs of SdbGetTagDataSize @ 0x1408257B0
 * Callers:
 *     KsepDbReadKData @ 0x14073293C (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1407F253C (SdbQueryDataExTagID.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407F4BE4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1407F4E08 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x1407F8158 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x1407F8524 (SdbpMergeAreTagValuesEqual.c)
 *     SdbpGetNextTagId @ 0x140824A14 (SdbpGetNextTagId.c)
 *     SdbpReadTagData @ 0x1408256F0 (SdbpReadTagData.c)
 *     SdbpGetFirstIndexedRecord @ 0x14082B2A0 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x14082C3B0 (SdbpGetNextIndexedRecord.c)
 *     SdbpGetIndex @ 0x140A7B9C8 (SdbpGetIndex.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404F1DD0 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetTagFromTagID @ 0x140825934 (SdbGetTagFromTagID.c)
 *     SdbpReadMappedData @ 0x1408259D4 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
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
    case 24576:
LABEL_11:
      v7 = 4;
      goto LABEL_5;
    case 28672:
    case 32768:
      goto LABEL_3;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 318, (unsigned int)"Invalid TAG_TYPE encountered TAG: [0x%x]");
  return 0x20000000LL;
}
