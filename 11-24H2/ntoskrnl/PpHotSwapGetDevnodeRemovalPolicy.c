/*
 * XREFs of PpHotSwapGetDevnodeRemovalPolicy @ 0x1408B93F0
 * Callers:
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 *     PiControlGetPropertyData @ 0x1408BAE00 (PiControlGetPropertyData.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PiHotSwapGetDetachableNode @ 0x140A7C984 (PiHotSwapGetDetachableNode.c)
 */

void __fastcall PpHotSwapGetDevnodeRemovalPolicy(__int64 a1, char a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // edi
  unsigned __int8 v8; // al
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 1;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  if ( a2 )
    v8 = *(_BYTE *)(a1 + 466);
  else
    v8 = *(_BYTE *)(a1 + 467);
  if ( v8 )
  {
    v6 = v8;
    if ( v8 != 1 && v8 != 2 && v8 != 3 )
    {
      if ( v8 == 4 || (v6 = 3, v8 != 5) )
        v6 = 2;
    }
  }
  else
  {
    PiHotSwapGetDetachableNode(a1, &v9);
    if ( v9 )
      v6 = (~*(_BYTE *)(v9 + 560) & 8 | 0x10u) >> 3;
  }
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
  *a3 = v6;
}
