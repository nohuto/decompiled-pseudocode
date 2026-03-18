/*
 * XREFs of ?LockHeapAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400A3430
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400C3EE8 (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVID.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::LockHeapAllocation(
        VIDMM_PROCESS_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        enum _LOCK_OPERATION a6,
        struct VIDMM_SEGMENT *a7,
        unsigned __int8 a8)
{
  struct _MDL *v9; // rax

  v9 = VidMmiProbeAndLockAllocation(a3, a4, a5, a6, a7, 0LL);
  if ( !v9 )
    return 3223191809LL;
  if ( a8 )
    *((_QWORD *)a2 + 13) = v9;
  else
    *((_QWORD *)a2 + 12) = v9;
  return 0LL;
}
