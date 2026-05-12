/*
 * XREFs of NvmeNamespaceDirectedPowerDownRequestD3Passive @ 0x140133490
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceDirectedPowerDownRequestD3 @ 0x1401332AC (NvmeNamespaceDirectedPowerDownRequestD3.c)
 */

void __fastcall NvmeNamespaceDirectedPowerDownRequestD3Passive(PDEVICE_OBJECT DeviceObject, char *Context)
{
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)Context + 16) + 160LL), 0);
  NvmeNamespaceDirectedPowerDownRequestD3(Context);
}
