/*
 * XREFs of ?UnmapExternal@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAX@Z @ 0x140107568
 * Callers:
 *     ?UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z @ 0x140107510 (-UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400C0960 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::UnmapExternal(VIDMM_RECYCLE_MULTIRANGE *this, void *a2)
{
  int v3; // r8d
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  void *v9; // rbx
  struct _EPROCESS *CurrentProcess; // rax

  v3 = dword_1400814E4;
  if ( (unsigned __int64)qword_1400812D8 > 0x53333333 )
    v3 = dword_1400814D4;
  v5 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
  v6 = (unsigned int)(v3 << 20);
  if ( v5 > (unsigned int)v6 )
  {
    v9 = *(void **)(*((_QWORD *)this + 10) + 56LL);
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5, a2, v6, this);
    VidMmUnmapViewAsync(CurrentProcess, v9, a2);
  }
  else
  {
    v7 = PsGetCurrentProcess(v5, a2, v6, this);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, void *))VirtualMemoryInterface + 4))(v7, a2);
  }
}
