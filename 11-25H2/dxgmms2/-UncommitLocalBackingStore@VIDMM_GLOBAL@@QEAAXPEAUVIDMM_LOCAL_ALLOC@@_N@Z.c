/*
 * XREFs of ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400CCC64
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1400CBC98 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@H@Z @ 0x1400CCA54 (-CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1400F39C8 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FDCE0 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD300 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD320 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::UncommitLocalBackingStore(VIDMM_GLOBAL *this, struct VIDMM_LOCAL_ALLOC *a2, char a3)
{
  VIDMM_PROCESS *v3; // r15
  __int64 v5; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  VIDMM_PROCESS *v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 CurrentProcess; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v20; // rax
  int v21; // eax
  struct _KAPC_STATE v22; // [rsp+50h] [rbp-68h] BYREF
  VIDMM_PROCESS *v23; // [rsp+80h] [rbp-38h]

  v3 = (VIDMM_PROCESS *)*((_QWORD *)a2 + 1);
  v5 = *(_QWORD *)a2;
  v23 = v3;
  VIDMM_PROCESS::SafeAttach(v3, &v22);
  v10 = *(unsigned int *)(v5 + 28);
  if ( (v10 & 0x4000) == 0
    && ((v10 & 0x88000) != 0x88000 || (v20 = *((_QWORD *)v3 + 4)) == 0 || (*(_DWORD *)(v20 + 408) & 0x100) == 0)
    && (v10 & 0x800) == 0
    && ((v10 & 0x80000) != 0 || (**(_DWORD **)(v5 + 376) & 0x40000) != 0) )
  {
    if ( a3 )
    {
      v17 = *((_QWORD *)a2 + 2);
      if ( v17 )
      {
        CurrentProcess = PsGetCurrentProcess(557056LL, v10, v8, v9);
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(CurrentProcess, v17);
      }
    }
  }
  v11 = *(unsigned int *)(v5 + 28);
  v12 = **(unsigned int **)(v5 + 376);
  if ( (v11 & 0x80000) != 0 )
  {
    if ( (v12 & 0x400000) == 0 && *((_QWORD *)a2 + 11) )
    {
      v15 = PsGetCurrentProcess(v12, v11, v8, v9);
      WdLogSingleEntry2(4LL, *((_QWORD *)a2 + 11), v15);
      v16 = *((_QWORD *)a2 + 11);
      WdLogGlobalForLineNumber = 27907;
      ObCloseHandle((HANDLE)v16, (v16 & 0xFFFFFFFF80000000uLL) == 0);
      *((_QWORD *)a2 + 11) = 0LL;
    }
  }
  else if ( (v12 & 8) == 0 && (v12 & 0x20000) == 0 && (v12 & 0x10) == 0 && (v12 & 0x20) == 0 )
  {
    v13 = *(_QWORD *)(v5 + 232);
    if ( v13 )
    {
      if ( a3 )
      {
        if ( (v11 & 0x200000) != 0 && (*(_BYTE *)(v5 + 36) & 1) != 0 )
        {
          v21 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(v5 + 224) + 48LL))(
                  *(_QWORD *)(v5 + 224),
                  this,
                  v13,
                  3LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  0);
          if ( (int)(v21 + 0x80000000) >= 0 && v21 != -1073741558 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v21, 0LL);
            WdLogGlobalForLineNumber = 195;
          }
          *(_BYTE *)(v5 + 36) &= ~1u;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 224) + 24LL))(
          *(_QWORD *)(v5 + 224),
          *(_QWORD *)(v5 + 232));
        *(_QWORD *)(v5 + 232) = 0LL;
      }
    }
  }
  v14 = (VIDMM_PROCESS *)(304LL * (*(_WORD *)(v5 + 24) & 0x3F));
  _InterlockedAdd64(
    (volatile signed __int64 *)((char *)v14
                              + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 2)
                                                      + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                                          + 16LL)
                              + 232),
    -*(_QWORD *)(*(_QWORD *)v5 + 16LL));
  *((_QWORD *)a2 + 2) = 0LL;
  VIDMM_PROCESS::SafeDetach(v14, &v22);
}
