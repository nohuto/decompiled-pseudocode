/*
 * XREFs of ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@@@Z @ 0x18022D698
 * Callers:
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x18021D26C (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?ReleaseD3D12Resources@CDeviceManager@@QEAAXXZ @ 0x1802C115C (-ReleaseD3D12Resources@CDeviceManager@@QEAAXXZ.c)
 *     ?GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1802C3964 (-GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAsyncTask<CD3DDevice::D3D12Resources>::WaitForResult(__int64 a1, _QWORD *a2)
{
  WaitForThreadpoolWorkCallbacks(*(PTP_WORK *)a1, 0);
  *a2 = a1 + 72;
  return *(unsigned int *)(a1 + 96);
}
