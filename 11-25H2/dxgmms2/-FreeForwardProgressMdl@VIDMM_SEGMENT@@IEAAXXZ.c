/*
 * XREFs of ?FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ @ 0x14009CC38
 * Callers:
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x14009C104 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14004BCA0 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400FF540 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

void __fastcall VIDMM_SEGMENT::FreeForwardProgressMdl(VIDMM_SEGMENT *this)
{
  struct _MDL *v2; // rbx
  unsigned __int64 LogicalAddress; // rax
  void *v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  struct _MDL *v8; // rcx

  if ( *(_BYTE *)(*((_QWORD *)this + 3) + 40107LL) )
  {
    v2 = (struct _MDL *)*((_QWORD *)this + 38);
    LogicalAddress = VidMmiGetLogicalAddress(*((void **)this + 66), 0LL);
    SysMmUnmapIommuRange(
      *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 224LL),
      LogicalAddress,
      v2,
      0);
    v4 = (void *)*((_QWORD *)this + 66);
    if ( v4 )
      SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 224LL), v4);
  }
  v5 = *((_QWORD *)this + 37);
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 38);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 6))(v5, v6);
    *((_QWORD *)this + 37) = 0LL;
  }
  v8 = (struct _MDL *)*((_QWORD *)this + 38);
  if ( v8 )
  {
    MmFreePagesFromMdl(v8);
    ExFreePoolWithTag(*((PVOID *)this + 38), 0);
    *((_QWORD *)this + 38) = 0LL;
  }
}
