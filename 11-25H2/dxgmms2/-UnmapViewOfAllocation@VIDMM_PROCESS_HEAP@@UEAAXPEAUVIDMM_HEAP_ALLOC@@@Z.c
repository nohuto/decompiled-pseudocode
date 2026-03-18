/*
 * XREFs of ?UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400A2A20
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400C0960 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocation(VIDMM_PROCESS_HEAP *this, struct VIDMM_HEAP_ALLOC *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  void *v5; // rsi
  void *v6; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v8; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v10; // rcx

  v3 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess() != v3 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  v4 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 2) != 0 )
  {
    v5 = (void *)*((_QWORD *)a2 + 11);
    if ( (v4 & 1) != 0 )
    {
      v6 = (void *)*((_QWORD *)a2 + 4);
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
      VidMmUnmapViewAsync(CurrentProcess, v6, v5);
    }
    else
    {
      v8 = PsGetCurrentProcess();
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, void *))VirtualMemoryInterface + 4))(v8, v5);
    }
    *(_DWORD *)a2 &= ~2u;
LABEL_13:
    *((_QWORD *)a2 + 11) = 0LL;
    return;
  }
  if ( (v4 & 4) != 0 )
  {
    if ( (v4 & 1) != 0 )
      VidMmUnmapViewAsync(0LL, *((PVOID *)a2 + 4), *((void **)a2 + 11));
    else
      MmUnmapViewInSystemSpace(*((PVOID *)a2 + 11));
    *(_DWORD *)a2 &= ~4u;
    goto LABEL_13;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 2481;
  DxgkLogInternalTriageEvent(v10, 0x40000LL);
}
