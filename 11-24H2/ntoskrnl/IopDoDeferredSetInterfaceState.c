/*
 * XREFs of IopDoDeferredSetInterfaceState @ 0x1408B24D0
 * Callers:
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     PipProcessStartPhase2 @ 0x1408B23C8 (PipProcessStartPhase2.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1404A3504 (PpMarkDeviceStackExtensionFlag.c)
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopDoDeferredSetInterfaceState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  void **v4; // rdi
  char *v5; // rbx
  void **v6; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 16, 0);
  v4 = (void **)(a1 + 608);
  while ( 1 )
  {
    v5 = (char *)*v4;
    if ( *v4 == v4 )
      break;
    if ( *((void ***)v5 + 1) != v4 || (v6 = *(void ***)v5, *(char **)(*(_QWORD *)v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    LOBYTE(v3) = 1;
    IopProcessSetInterfaceState(v5 + 16, v3, 0LL);
    ExFreePoolWithTag(*((PVOID *)v5 + 3), 0);
    ExFreePoolWithTag(v5, 0);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  return 0LL;
}
