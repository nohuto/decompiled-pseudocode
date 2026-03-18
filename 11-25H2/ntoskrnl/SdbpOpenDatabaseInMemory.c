/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x14082BA08
 * Callers:
 *     SdbpOpenCompressedDatabase @ 0x1407F7524 (SdbpOpenCompressedDatabase.c)
 *     SdbInitDatabaseInMemory @ 0x14082B8E8 (SdbInitDatabaseInMemory.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404F1DD0 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpValidateRootTagSizes @ 0x1407F21B0 (SdbpValidateRootTagSizes.c)
 *     SdbpReadMappedData @ 0x1408259D4 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslFree @ 0x14082AD34 (AslFree.c)
 *     AslAlloc @ 0x14082B9C0 (AslAlloc.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140AA8ADC (SdbpValidateAndApplyCompatFlags.c)
 */

void *__fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2, unsigned int a3)
{
  _QWORD *v6; // rax
  void *v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]

  v10 = 0LL;
  v11 = 0;
  v6 = AslAlloc(a1, 0xA80uLL);
  v7 = v6;
  if ( !v6 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  *((_DWORD *)v6 + 4) = 0;
  *v6 = 0LL;
  *((_DWORD *)v6 + 5) = a2;
  v6[1] = a1;
  *((_DWORD *)v6 + 6) |= 1u;
  if ( !(unsigned int)SdbpReadMappedData((__int64)v6, 0, &v10, 0xCu)
    || (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
    && v11 != 1717724275
    && (a3 & 2) == 0 )
  {
    goto LABEL_4;
  }
  if ( !(unsigned int)SdbpValidateAndApplyCompatFlags(v7, &v10, a3) )
    goto LABEL_5;
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
    && (int)SdbpValidateRootTagSizes((__int64)v7) < 0 )
  {
LABEL_4:
    AslLogCallPrintf(1LL);
LABEL_5:
    AslFree(v8, v7);
    return 0LL;
  }
  return v7;
}
