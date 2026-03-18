/*
 * XREFs of ?SmmIommuCreateDevice@@YAJPEAUSYSMM_ADAPTER@@PEAU_DEVICE_OBJECT@@IIPEAPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14027D264
 * Callers:
 *     SmmInitializeDmaDevices @ 0x14027E400 (SmmInitializeDmaDevices.c)
 * Callees:
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1400511E8 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1400577CC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064D40 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmmIommuCreateDevice(
        struct SYSMM_ADAPTER *a1,
        struct _DEVICE_OBJECT *a2,
        __int64 a3,
        __int64 a4,
        struct _IOMMU_DMA_DEVICE **a5)
{
  unsigned int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // r10
  __int128 *v8; // rcx
  int v9; // eax
  __int128 **v10; // rdx
  __int64 result; // rax
  struct _IOMMU_DMA_DEVICE *v12; // rdx
  __int128 *v13; // [rsp+20h] [rbp-60h] BYREF
  __int128 *v14; // [rsp+28h] [rbp-58h]
  int v15; // [rsp+30h] [rbp-50h]
  __int64 v16; // [rsp+34h] [rbp-4Ch]
  int v17; // [rsp+3Ch] [rbp-44h]
  __int128 v18; // [rsp+40h] [rbp-40h] BYREF
  __int128 v19; // [rsp+50h] [rbp-30h]
  __int128 v20; // [rsp+60h] [rbp-20h] BYREF
  __int128 v21; // [rsp+70h] [rbp-10h]

  if ( SmmUseIommuV3Interface() )
  {
    v16 = 0LL;
    v14 = (__int128 *)&v13;
    v8 = (__int128 *)&v13;
    v17 = 0;
    v13 = (__int128 *)&v13;
    v9 = *(_DWORD *)(v6 + 88);
    v15 = 0;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    if ( (v9 & 8) != 0 )
    {
      LODWORD(v19) = 3;
      *(_QWORD *)&v18 = &v13;
      v8 = &v18;
      DWORD2(v19) = 1;
      *((_QWORD *)&v18 + 1) = &v13;
      v14 = &v18;
      v13 = &v18;
    }
    if ( *(_DWORD *)(v6 + 32) == 2 )
    {
      LODWORD(v21) = 1;
      *((_QWORD *)&v21 + 1) = v5 | 0x100000000LL;
      if ( *((__int128 ***)v8 + 1) != &v13 )
        __fastfail(3u);
      *(_QWORD *)&v20 = v8;
      *((_QWORD *)&v20 + 1) = &v13;
      *((_QWORD *)v8 + 1) = &v20;
      v13 = &v20;
    }
    v10 = &v13;
    return ((__int64 (__fastcall *)(__int64, __int128 **, struct _IOMMU_DMA_DEVICE **))qword_14015E5C0)(v7, v10, a5);
  }
  if ( SmmUseIommuV2Interface() )
    return ((__int64 (__fastcall *)(__int64, __int128 **, struct _IOMMU_DMA_DEVICE **))qword_14015E5C0)(v7, v10, a5);
  result = (unsigned int)SmmGetIommuInterfaceVersion() >= 3 ? 0xC0000001 : 0;
  *a5 = v12;
  return result;
}
