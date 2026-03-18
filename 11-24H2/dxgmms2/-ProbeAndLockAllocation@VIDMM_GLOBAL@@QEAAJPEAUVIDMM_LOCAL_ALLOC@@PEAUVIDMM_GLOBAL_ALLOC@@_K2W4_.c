/*
 * XREFs of ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400C3D24
 * Callers:
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1400A48D0 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1400C3910 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1400D7E60 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@0@Z @ 0x1400D9E0C (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x140111D60 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAI.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400C3EE8 (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVID.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProbeAndLockAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_LOCAL_ALLOC *a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        enum _LOCK_OPERATION a6,
        struct VIDMM_SEGMENT *a7,
        unsigned __int8 a8)
{
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  bool v13; // bp
  _BOOL8 v14; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v16; // rbx
  __int64 v17; // rdx
  unsigned int v18; // r14d
  struct _MDL *v20; // rax
  LARGE_INTEGER v21; // [rsp+50h] [rbp-48h]

  v9 = *(_QWORD *)this;
  CurrentThread = KeGetCurrentThread();
  v13 = CurrentThread == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL);
  v14 = (**((_DWORD **)a3 + 49) & 4) == 0;
  if ( CurrentThread == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ++*(_DWORD *)(v9 + 4 * v14 + 356);
    v16 = PerformanceCounter;
  }
  else
  {
    v16 = v21;
  }
  v17 = *((_QWORD *)a3 + 31);
  if ( v17 )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, int, struct VIDMM_SEGMENT *, unsigned __int8))(**((_QWORD **)a3 + 30) + 32LL))(
            *((_QWORD *)a3 + 30),
            v17,
            a3,
            a4,
            a5,
            2,
            a7,
            a8);
    if ( v13 )
      *(_QWORD *)(v9 + 8 * v14 + 296) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v16.QuadPart;
    return v18;
  }
  else
  {
    v20 = VidMmiProbeAndLockAllocation(
            a3,
            a4,
            a5,
            (enum _LOCK_OPERATION)(~(unsigned __int8)(*((_DWORD *)a3 + 6) >> 11) & 2),
            a7,
            a2);
    if ( v20 )
    {
      if ( a8 )
        *((_QWORD *)a2 + 10) = v20;
      else
        *((_QWORD *)a2 + 9) = v20;
      if ( v13 )
        *(_QWORD *)(v9 + 8 * v14 + 296) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v16.QuadPart;
      return 0LL;
    }
    else
    {
      if ( v13 )
        *(_QWORD *)(v9 + 8 * v14 + 296) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v16.QuadPart;
      return 3223191809LL;
    }
  }
}
