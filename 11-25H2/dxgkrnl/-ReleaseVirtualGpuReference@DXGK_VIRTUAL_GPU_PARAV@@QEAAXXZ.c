/*
 * XREFs of ?ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x1403968EC
 * Callers:
 *     ?DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x14020FDF0 (-DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAUDXGK_VIRTUAL_GPU@@@Z.c)
 *     ?VmBusProcessPacket@@YAXPEAX@Z @ 0x140396200 (-VmBusProcessPacket@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(DXGK_VIRTUAL_GPU_PARAV *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 92, 0xFFFFFFFF) == 1 )
  {
    if ( this )
      (**(void (__fastcall ***)(DXGK_VIRTUAL_GPU_PARAV *, __int64))this)(this, 1LL);
  }
}
