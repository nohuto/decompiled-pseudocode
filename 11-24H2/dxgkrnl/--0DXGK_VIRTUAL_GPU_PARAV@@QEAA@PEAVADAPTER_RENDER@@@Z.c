/*
 * XREFs of ??0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x140215CC8
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x140215DF0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 * Callees:
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x140186B78 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 *     ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z @ 0x14020C6B0 (--0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z.c)
 */

DXGK_VIRTUAL_GPU_PARAV *__fastcall DXGK_VIRTUAL_GPU_PARAV::DXGK_VIRTUAL_GPU_PARAV(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct ADAPTER_RENDER *a2)
{
  __int64 v2; // r10
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r10
  DXGK_VIRTUAL_GPU_PARAV *result; // rax

  DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(this, a2, 1);
  *(_QWORD *)v2 = &DXGK_VIRTUAL_GPU_PARAV::`vftable';
  *(_BYTE *)(v2 + 173) = 0;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE(v2 + 176, 0);
  *(_QWORD *)(v3 + 72) = v4;
  *(_QWORD *)(v3 + 80) = v4;
  *(_DWORD *)(v3 + 96) = -1;
  *(_DWORD *)(v3 + 88) = v4;
  *(_DWORD *)(v3 + 92) = 72;
  *(_BYTE *)(v3 + 104) = v4;
  *(_QWORD *)(v5 + 288) = v4;
  *(_QWORD *)(v5 + 296) = v4;
  *(_DWORD *)(v5 + 304) = v4;
  *(_DWORD *)(v5 + 308) = 25;
  *(_DWORD *)(v5 + 312) = -1;
  *(_QWORD *)(v5 + 336) = v4;
  *(_QWORD *)(v5 + 344) = 0LL;
  *(_OWORD *)(v5 + 352) = 0LL;
  *(_DWORD *)(v5 + 368) = 1;
  *(_DWORD *)(v5 + 384) = 0;
  *(_QWORD *)(v5 + 328) = v5 + 320;
  *(_QWORD *)(v5 + 320) = v5 + 320;
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v5 + 16) + 24LL));
  *(_DWORD *)(v5 + 384) |= 1u;
  result = (DXGK_VIRTUAL_GPU_PARAV *)v5;
  *(_QWORD *)(v5 + 376) = -1LL;
  return result;
}
