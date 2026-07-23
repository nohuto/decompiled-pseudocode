/*
 * XREFs of PiGetDeviceDepth @ 0x1408B9C2C
 * Callers:
 *     PiControlGetDeviceDepth @ 0x1408B90D0 (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceDepth @ 0x140A7A54C (PiCMGetDeviceDepth.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 */

__int64 __fastcall PiGetDeviceDepth(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v8; // rax

  *a2 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = -1073741810;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  v6 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 1131441744LL);
  v7 = (void *)v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
    if ( v8 )
    {
      v5 = 0;
      *a2 = *(_DWORD *)(v8 + 152);
    }
    ObfDereferenceObjectWithTag(v7, 0x43706E50u);
  }
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
  return v5;
}
