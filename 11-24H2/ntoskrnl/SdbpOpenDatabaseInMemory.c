/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x140943708
 * Callers:
 *     SdbpOpenCompressedDatabase @ 0x1408077D4 (SdbpOpenCompressedDatabase.c)
 *     SdbInitDatabaseInMemory @ 0x140944DCC (SdbInitDatabaseInMemory.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x140483CB4 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpValidateRootTagSizes @ 0x1408027B0 (SdbpValidateRootTagSizes.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     SdbpReadMappedData @ 0x140947C10 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140AA8F10 (SdbpValidateAndApplyCompatFlags.c)
 */

__int64 __fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  const char *v10; // r9
  int v11; // r8d
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]

  v12 = 0LL;
  v13 = 0;
  v6 = AslAlloc(a1, 2688LL);
  v7 = v6;
  if ( !v6 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 2644, (unsigned int)"Failed to allocate DB structure");
    return 0LL;
  }
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)v6 = 0LL;
  *(_DWORD *)(v6 + 20) = a2;
  *(_QWORD *)(v6 + 8) = a1;
  *(_DWORD *)(v6 + 24) |= 1u;
  if ( !(unsigned int)SdbpReadMappedData(v6, 0LL, &v12, 12LL) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 2655, (unsigned int)"Can't read database header");
LABEL_5:
    AslFree(v8);
    return 0LL;
  }
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
    && v13 != 1717724275
    && (a3 & 2) == 0 )
  {
    v10 = "Magic does not match a valid value: [0x%lx]";
    v11 = 2661;
LABEL_11:
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", v11, (_DWORD)v10);
    goto LABEL_5;
  }
  if ( !(unsigned int)SdbpValidateAndApplyCompatFlags(v7, &v12, a3) )
    goto LABEL_5;
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
    && (int)SdbpValidateRootTagSizes(v7) < 0 )
  {
    v10 = "SdbpValidateAndApplyCompatFlags failed [%x]";
    v11 = 2673;
    goto LABEL_11;
  }
  return v7;
}
