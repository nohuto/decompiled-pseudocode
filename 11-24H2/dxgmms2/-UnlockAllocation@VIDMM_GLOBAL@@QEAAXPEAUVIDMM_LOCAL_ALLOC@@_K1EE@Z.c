/*
 * XREFs of ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1400DA13C
 * Callers:
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400A5150 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400B1D24 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C1A1C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1400D7E60 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@0@Z @ 0x1400D9E0C (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400D9F00 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     UnlockChildPages @ 0x14004B858 (UnlockChildPages.c)
 *     UnmapGpadl @ 0x14004B880 (UnmapGpadl.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z @ 0x1400DA2EC (-VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z.c)
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1401102AC (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UnlockAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_LOCAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        char a6)
{
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  bool v12; // bp
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v14; // rbx
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  LARGE_INTEGER v18; // [rsp+30h] [rbp-48h]

  v6 = *(_QWORD *)this;
  CurrentThread = KeGetCurrentThread();
  v12 = CurrentThread == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL);
  if ( CurrentThread == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ++*(_DWORD *)(v6 + 364);
    v14 = PerformanceCounter;
  }
  else
  {
    v14 = v18;
  }
  v15 = *(_QWORD *)a2;
  v16 = *(_DWORD *)(*(_QWORD *)a2 + 28LL);
  if ( (v16 & 0x4000) == 0 )
  {
    if ( (v16 & 0x10000) != 0 )
    {
      if ( *(_QWORD *)(v15 + 408) )
      {
        if ( *(_DWORD *)(v15 + 448) )
        {
          UnlockChildPages(*(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL));
          IoFreeMdl(*(PMDL *)(v15 + 408));
        }
        else
        {
          UnmapGpadl();
        }
        *(_QWORD *)(v15 + 408) = 0LL;
      }
    }
    else
    {
      if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 3054LL) && a6 )
        VIDMM_GLOBAL::EnsureLockedPages(this, a2, a3, a4);
      v17 = *(_QWORD *)(v15 + 248);
      if ( v17 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, unsigned __int64, char))(**(_QWORD **)(v15 + 240)
                                                                                          + 40LL))(
          *(_QWORD *)(v15 + 240),
          v17,
          a3,
          a4,
          a5);
      }
      else if ( a5 )
      {
        VidMmiUnlockAllocation(*((PVOID *)a2 + 10));
        *((_QWORD *)a2 + 10) = 0LL;
      }
      else
      {
        VidMmiUnlockAllocation(*((PVOID *)a2 + 9));
        *((_QWORD *)a2 + 9) = 0LL;
      }
    }
  }
  if ( v12 )
    *(_QWORD *)(v6 + 312) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v14.QuadPart;
}
