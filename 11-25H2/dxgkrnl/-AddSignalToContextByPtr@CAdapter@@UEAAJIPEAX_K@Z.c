/*
 * XREFs of ?AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z @ 0x140099140
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x140347AF0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 */

__int64 __fastcall CAdapter::AddSignalToContextByPtr(CAdapter *this, __int64 a2, DXGSYNCOBJECT *a3)
{
  return DxgkSignalSynchronizationObjectFromGpuByReference(a3);
}
