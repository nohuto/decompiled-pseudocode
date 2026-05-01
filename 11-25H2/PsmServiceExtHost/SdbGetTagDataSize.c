/*
 * XREFs of SdbGetTagDataSize @ 0x180097E24
 * Callers:
 *     SdbpGetNextTagId @ 0x180093BB8 (SdbpGetNextTagId.c)
 *     SdbpGetFirstIndexedRecord @ 0x1800977B8 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x180097930 (SdbpGetNextIndexedRecord.c)
 *     SdbpReadTagData @ 0x1800986F0 (SdbpReadTagData.c)
 *     SdbpGetMatchingTextAttributes @ 0x18009AD58 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009AFA4 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x180091D30 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetTagFromTagID @ 0x1800924FC (SdbGetTagFromTagID.c)
 *     SdbpReadMappedData @ 0x180093DD4 (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbGetTagDataSize(__int64 a1, __int64 a2)
{
  int v2; // r14d
  int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  v4 = SdbGetTagFromTagID(a1, a2) & 0xF000;
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
  {
    switch ( v4 )
    {
      case 4096:
        v5 = 0;
        goto LABEL_19;
      case 8192:
        v5 = 1;
        goto LABEL_19;
      case 12288:
        v5 = 2;
        goto LABEL_19;
    }
    if ( v4 != 0x4000 )
    {
      if ( v4 == 20480 )
      {
        v5 = 8;
        goto LABEL_19;
      }
      if ( v4 != 24576 )
      {
        if ( ((v4 - 28672) & 0xFFFFCFFF) != 0 || v4 == 40960 )
        {
          AslLogCallPrintf(1LL);
          return 0x20000000LL;
        }
        v7 = 0;
        if ( (unsigned int)SdbpReadMappedData(a1, v2 + 2, &v7, 4u) )
        {
          v5 = v7;
        }
        else
        {
          v5 = 0x20000000;
          AslLogCallPrintf(1LL);
        }
LABEL_19:
        if ( v5 + v2 >= v5 && v5 + v2 <= *(_DWORD *)(a1 + 20) )
          return v5;
        goto LABEL_38;
      }
    }
    v5 = 4;
    goto LABEL_19;
  }
  switch ( v4 )
  {
    case 4096:
      v5 = 0;
      goto LABEL_36;
    case 8192:
      v5 = 1;
      goto LABEL_36;
    case 12288:
      v5 = 2;
      goto LABEL_36;
    case 16384:
      goto LABEL_32;
    case 20480:
      v5 = 8;
      goto LABEL_36;
    case 24576:
LABEL_32:
      v5 = 4;
      goto LABEL_36;
  }
  v7 = 0;
  if ( !(unsigned int)SdbpReadMappedData(a1, v2 + 2, &v7, 4u) )
    AslLogCallPrintf(1LL);
  v5 = v7;
LABEL_36:
  if ( v5 + v2 >= v5 && v5 + v2 <= *(_DWORD *)(a1 + 20) )
    return v5;
LABEL_38:
  AslLogCallPrintf(1LL);
  return 0x20000000;
}
