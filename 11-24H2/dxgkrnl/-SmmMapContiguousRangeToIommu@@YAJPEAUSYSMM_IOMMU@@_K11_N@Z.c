/*
 * XREFs of ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x14005E6C8
 * Callers:
 *     SmmMapNonPagedObjectToIommu @ 0x14003A2E8 (SmmMapNonPagedObjectToIommu.c)
 *     ?SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z @ 0x140094EC4 (-SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z.c)
 *     ?SysMmMapIommuContiguousRange@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z @ 0x140094F00 (-SysMmMapIommuContiguousRange@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z.c)
 * Callees:
 *     ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003AEBC (-SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 *     ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003B450 (-SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 *     Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledDeviceUsageNoInline @ 0x140095010 (Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall SmmMapContiguousRangeToIommu(
        struct SYSMM_IOMMU *a1,
        __int64 a2,
        struct _MDL *a3,
        SIZE_T a4,
        bool a5)
{
  unsigned __int64 v8; // rbx
  SIZE_T v9; // r14
  unsigned int v10; // r12d
  PMDL Mdl; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _MDL *v14; // rdi
  struct _MDL *v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // rdx
  unsigned int j; // r14d
  __int64 v20; // rdx
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rdi
  __int64 i; // r14
  __int64 v24; // r14
  struct _MDL v26; // [rsp+20h] [rbp-40h] BYREF
  struct _MDL *v27; // [rsp+50h] [rbp-10h]
  int v29; // [rsp+B8h] [rbp+58h]

  v8 = 0LL;
  v9 = a4 >> 12;
  v10 = 0;
  Mdl = MmCreateMdl(0LL, 0LL, a4);
  v14 = Mdl;
  if ( Mdl )
  {
    v15 = Mdl + 1;
    if ( (_DWORD)v9 )
    {
      v16 = (unsigned int)v9;
      do
      {
        v15->Next = a3;
        a3 = (struct _MDL *)((char *)a3 + 1);
        v15 = (struct _MDL *)((char *)v15 + 8);
        --v16;
      }
      while ( v16 );
    }
    v10 = SmmMapMdlToIommu(a1, a2, v14, a5);
    ExFreePoolWithTag(v14, 0);
  }
  else
  {
    v26.Next = 0LL;
    *(_DWORD *)&v26.Size = 56;
    v26.StartVa = 0LL;
    *(_QWORD *)&v26.ByteCount = 4096LL;
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledDeviceUsageNoInline(
                         v13,
                         v12) )
    {
      v21 = (unsigned int)v9;
      v22 = 0LL;
      if ( (_DWORD)v9 )
      {
        for ( i = a2; ; i += 4096LL )
        {
          v27 = (struct _MDL *)((char *)a3 + v22);
          v29 = SmmMapMdlToIommu(a1, i & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64), &v26, a5);
          v10 = v29;
          if ( v29 < 0 )
            break;
          if ( ++v22 >= v21 )
            return v10;
        }
        if ( v22 )
        {
          v24 = a2;
          do
          {
            v27 = (struct _MDL *)((char *)a3 + v8);
            SmmUnmapMdlFromIommu(a1, v24 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64), &v26, a5);
            ++v8;
            v24 += 4096LL;
          }
          while ( v8 < v22 );
          return (unsigned int)v29;
        }
      }
    }
    else
    {
      v17 = 0;
      if ( (_DWORD)v9 )
      {
        while ( 1 )
        {
          v27 = (struct _MDL *)((char *)a3 + v17);
          v18 = a2 ? a2 + (v17 << 12) : 0LL;
          v10 = SmmMapMdlToIommu(a1, v18, &v26, a5);
          if ( (v10 & 0x80000000) != 0 )
            break;
          if ( ++v17 >= (unsigned int)v9 )
            return v10;
        }
        for ( j = 0; j < v17; a3 = (struct _MDL *)((char *)a3 + 1) )
        {
          v27 = a3;
          if ( a2 )
            v20 = a2 + (j << 12);
          else
            v20 = 0LL;
          SmmUnmapMdlFromIommu(a1, v20, &v26, a5);
          ++j;
        }
      }
    }
  }
  return v10;
}
