/*
 * XREFs of ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1400E5DB0
 * Callers:
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1400A48D0 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@.c)
 *     ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@@Z @ 0x1400A5E70 (-TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_D.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D7700 (-ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@.c)
 *     ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1400E58C4 (-TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_D.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

struct _MDL *__fastcall VidMmGetMDLForRange(struct VIDMM_GLOBAL_ALLOC *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx

  if ( (*((_DWORD *)a1 + 7) & 0x14000) != 0 )
    return (struct _MDL *)*((_QWORD *)a1 + 51);
  v4 = *((_QWORD *)a1 + 31);
  if ( v4 )
    return (struct _MDL *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**((_QWORD **)a1 + 30) + 96LL))(
                            *((_QWORD *)a1 + 30),
                            v4,
                            a2,
                            a3);
  else
    return *(struct _MDL **)(*((_QWORD *)a1 + 6) + 80LL);
}
