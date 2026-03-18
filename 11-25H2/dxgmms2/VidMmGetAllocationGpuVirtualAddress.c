/*
 * XREFs of VidMmGetAllocationGpuVirtualAddress @ 0x1400FCAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z @ 0x140038E04 (-VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z.c)
 */

__int64 __fastcall VidMmGetAllocationGpuVirtualAddress(const struct VIDMM_ALLOC *a1, char a2, int a3)
{
  if ( a2 )
    return *((_QWORD *)a1 + 18);
  else
    return VidMmGetAllocGpuVirtualAddress(a1, a3);
}
