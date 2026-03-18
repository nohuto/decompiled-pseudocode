/*
 * XREFs of SmmInitializeDmaDevices @ 0x140285770
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140285BC0 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064960 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     ?SmmIommuCreateDevice@@YAJPEAUSYSMM_ADAPTER@@PEAU_DEVICE_OBJECT@@IIPEAPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1402845D4 (-SmmIommuCreateDevice@@YAJPEAUSYSMM_ADAPTER@@PEAU_DEVICE_OBJECT@@IIPEAPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1402847C4 (-SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 */

__int64 __fastcall SmmInitializeDmaDevices(struct SYSMM_ADAPTER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int Device; // edi
  char v6; // cl
  unsigned int i; // esi
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rbp
  struct _IOMMU_DMA_DEVICE *v12; // rcx
  __int64 result; // rax

  Device = 0;
  v6 = 1;
  if ( *((_DWORD *)a1 + 8) == 2
    && ((unsigned int)SmmGetIommuInterfaceVersion() < 3
     || ((unsigned __int8)*((_DWORD *)a1 + 22) & (unsigned __int8)v6) == 0) )
  {
    v6 = 0;
  }
  if ( dword_140161528 && v6 )
  {
    for ( i = 0; ; ++i )
    {
      v8 = i;
      if ( i >= *((_DWORD *)a1 + 6) )
      {
        *((_DWORD *)a1 + 5) |= 4u;
        return (unsigned int)Device;
      }
      v9 = *((_QWORD *)a1 + 49) + 24LL * i;
      if ( *(_QWORD *)v9 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 236;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pPhysicalAdapter->DmaDevice == nullptr",
          236LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      Device = SmmIommuCreateDevice(a1, *(struct _DEVICE_OBJECT **)(v9 + 16), 0LL, a4, (struct _IOMMU_DMA_DEVICE **)v9);
      if ( Device >= 0 )
      {
        if ( (*((_DWORD *)a1 + 22) & 0x20) == 0 )
          continue;
        if ( *(_QWORD *)(v9 + 8) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 241;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"pPhysicalAdapter->DmaDevice2 == nullptr",
            241LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        Device = SmmIommuCreateDevice(
                   a1,
                   *(struct _DEVICE_OBJECT **)(v9 + 16),
                   1LL,
                   a4,
                   (struct _IOMMU_DMA_DEVICE **)(v9 + 8));
      }
      if ( Device == -1073741275 || Device == -1070268400 )
      {
        WdLogSingleEntry1(4LL, a1);
        result = 0LL;
        WdLogGlobalForLineNumber = 258;
        return result;
      }
      if ( Device < 0 )
      {
        WdLogSingleEntry1(3LL, *(_QWORD *)(v9 + 16));
        WdLogGlobalForLineNumber = 264;
        if ( i )
        {
          v10 = 0LL;
          do
          {
            v11 = *((_QWORD *)a1 + 49);
            if ( !*(_QWORD *)(v10 + v11) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 280;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"pPhysicalAdapter->DmaDevice != nullptr",
                280LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            SmmIommuDeleteDevice(*(struct _IOMMU_DMA_DEVICE **)(v10 + v11));
            v12 = *(struct _IOMMU_DMA_DEVICE **)(v10 + v11 + 8);
            *(_QWORD *)(v10 + v11) = 0LL;
            if ( v12 )
            {
              SmmIommuDeleteDevice(v12);
              *(_QWORD *)(v10 + v11 + 8) = 0LL;
            }
            v10 += 24LL;
            --v8;
          }
          while ( v8 );
        }
        return (unsigned int)Device;
      }
    }
  }
  WdLogSingleEntry1(3LL, a1);
  WdLogGlobalForLineNumber = 295;
  return (unsigned int)Device;
}
