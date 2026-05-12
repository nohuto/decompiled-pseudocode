/*
 * XREFs of NvmeAdapterGetStorageStackProperty @ 0x14019A048
 * Callers:
 *     NvmeAdapterStorageQueryProperty @ 0x14019D454 (NvmeAdapterStorageQueryProperty.c)
 * Callees:
 *     Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledDeviceUsageNoInline @ 0x1400CB6AC (Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NvmeAdapterGetStorageStackProperty(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v3; // eax
  unsigned int v7; // edx
  int IsEnabledDeviceUsageNoInline; // eax
  int v10; // r8d
  int v11; // eax

  v3 = *a3;
  if ( *a3 >= 8 )
  {
    *a2 = 12;
    a2[1] = 12;
    if ( v3 < 0xC )
    {
      *a3 = 8;
      return 0LL;
    }
    IsEnabledDeviceUsageNoInline = Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledDeviceUsageNoInline();
    v7 = 0;
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000;
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( v10 || (*(_BYTE *)(a1 + 416) & 0x40) != 0 )
        v11 = 2;
      else
        v11 = 1;
    }
    else
    {
      v11 = (v10 != 0) + 1;
    }
    a2[2] = v11;
  }
  else
  {
    v7 = -1073741789;
  }
  *a3 = 12;
  return v7;
}
