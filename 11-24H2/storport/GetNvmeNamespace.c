/*
 * XREFs of GetNvmeNamespace @ 0x14006B1C0
 * Callers:
 *     RaFlushDFxQueue @ 0x14006C134 (RaFlushDFxQueue.c)
 *     RaInsertDFxQueue @ 0x14006C220 (RaInsertDFxQueue.c)
 *     RaProcessDFxPendingIrp @ 0x14006C468 (RaProcessDFxPendingIrp.c)
 *     RaProcessDFxQueuedRequests @ 0x14006C9C0 (RaProcessDFxQueuedRequests.c)
 *     NvmeNamespaceDereferenceDeviceObject @ 0x1400FDD70 (NvmeNamespaceDereferenceDeviceObject.c)
 *     NvmeNamespaceStartBypassIo @ 0x1401128A0 (NvmeNamespaceStartBypassIo.c)
 *     NvmeNamespaceSetDevicePowerDownCompletion @ 0x1401350F0 (NvmeNamespaceSetDevicePowerDownCompletion.c)
 *     NvmeRegisterPerfStates @ 0x1401369C4 (NvmeRegisterPerfStates.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall GetNvmeNamespace(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_DWORD **)(a1 + 64);
    if ( *v2 == 1314278989 )
      return v2;
  }
  return result;
}
