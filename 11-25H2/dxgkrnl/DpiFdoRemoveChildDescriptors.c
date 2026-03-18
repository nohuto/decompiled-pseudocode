/*
 * XREFs of DpiFdoRemoveChildDescriptors @ 0x14023E500
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x14023A950 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 *     DpiFdoEnumChildDevices @ 0x14040701C (DpiFdoEnumChildDevices.c)
 * Callees:
 *     DpiFdoRemoveChildDescriptor @ 0x14023E4B8 (DpiFdoRemoveChildDescriptor.c)
 */

void __fastcall DpiFdoRemoveChildDescriptors(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *i; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3440), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3544), Executive, 0, 0, 0LL);
  for ( i = (_QWORD *)(v1 + 3600); (_QWORD *)*i != i; DpiFdoRemoveChildDescriptor(v1, (_QWORD *)(*i - 32LL)) )
    ;
  KeReleaseMutex((PRKMUTEX)(v1 + 3544), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3440));
  KeLeaveCriticalRegion();
}
