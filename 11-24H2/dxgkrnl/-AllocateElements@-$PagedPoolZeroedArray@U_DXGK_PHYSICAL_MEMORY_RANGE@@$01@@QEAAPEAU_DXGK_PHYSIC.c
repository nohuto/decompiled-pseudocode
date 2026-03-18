/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x14019BE04
 * Callers:
 *     ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x14019BFA4 (-ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z.c)
 *     DpiFdoCreateSysMmAdapter @ 0x14023D2B4 (DpiFdoCreateSysMmAdapter.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<_DXGK_PHYSICAL_MEMORY_RANGE,2>::AllocateElements(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 2 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, 16LL * a2);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x10 )
      return 0LL;
    *a1 = ExAllocatePool2(256LL, 16LL * a2, 1265072196LL);
  }
  result = *a1;
  *((_DWORD *)a1 + 10) = a2;
  return result;
}
