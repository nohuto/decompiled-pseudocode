/*
 * XREFs of ?UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z @ 0x1400A2B70
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400C0960 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocationExternal(
        VIDMM_PROCESS_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        void *a3)
{
  __int64 v5; // rbx
  void *v6; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v8; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  v5 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess() != v5 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v6 = (void *)*((_QWORD *)a2 + 4);
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
    VidMmUnmapViewAsync(CurrentProcess, v6, a3);
  }
  else
  {
    v8 = PsGetCurrentProcess();
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, void *))VirtualMemoryInterface + 4))(v8, a3);
  }
}
