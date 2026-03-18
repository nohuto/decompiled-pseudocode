/*
 * XREFs of PpDevCfgProcessDevices @ 0x140721110
 * Callers:
 *     PnpBootPhaseComplete @ 0x14070E4C4 (PnpBootPhaseComplete.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PnpRequestDeviceAction @ 0x14046E128 (PnpRequestDeviceAction.c)
 *     _CmDeleteDevice @ 0x140808398 (_CmDeleteDevice.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     _CmGetDeviceStatus @ 0x1409A9004 (_CmGetDeviceStatus.c)
 *     PpDevNodeLockTree @ 0x140A060F0 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0AA84 (PpDevNodeUnlockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140A3E3F0 (PipForDeviceNodeSubtree.c)
 *     PpDeviceRegistration @ 0x140A46B4C (PpDeviceRegistration.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 PpDevCfgProcessDevices()
{
  UNICODE_STRING *v0; // rbx
  char v1; // si
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  int v10; // [rsp+30h] [rbp-20h]
  _QWORD P[2]; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF
  __int64 v14; // [rsp+90h] [rbp+40h] BYREF
  PVOID v15; // [rsp+98h] [rbp+48h] BYREF

  v15 = 0LL;
  v12 = 0;
  v0 = (UNICODE_STRING *)P;
  LODWORD(v14) = 0;
  v1 = 0;
  LODWORD(v13) = 0;
  P[1] = P;
  P[0] = P;
  if ( (HIBYTE(NlsMbCodePageTag) & 2) != 0 )
  {
    v2 = PipForDeviceNodeSubtree(IopRootDeviceNode, PiDevCfgProcessDeviceCallback, P);
    if ( v2 < 0 )
      goto LABEL_15;
    v0 = (UNICODE_STRING *)P[0];
    if ( (_QWORD *)P[0] != P )
    {
      v2 = PiPnpRtlBeginOperation(&v15, v3, v4);
      if ( v2 >= 0 )
      {
        for ( i = (_QWORD *)P[0]; i != P; i = (_QWORD *)*i )
        {
          if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, i[3], 0, (unsigned int)&v12, (__int64)&v14, (__int64)&v13, v10) < 0
            || (v12 & 2) == 0 )
          {
            PpDevNodeLockTree(3LL);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            LOBYTE(v7) = 1;
            PpDeviceRegistration(i + 2, 0LL, 0LL, v7);
            if ( (int)CmDeleteDevice(PiPnpRtlCtx) >= 0 )
              v1 = 1;
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegion();
            PpDevNodeUnlockTree(3LL);
          }
        }
        PiPnpRtlEndOperation(v15);
        if ( v1 )
          PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 8u, 0, 0LL, 0LL, 0LL, 0LL);
      }
      goto LABEL_15;
    }
  }
  else
  {
    v2 = 0;
  }
  while ( v0 != (UNICODE_STRING *)P )
  {
    if ( (_QWORD *)v0->Buffer != P
      || (v8 = *(_QWORD *)&v0->Length, *(UNICODE_STRING **)(*(_QWORD *)&v0->Length + 8LL) != v0) )
    {
      __fastfail(3u);
    }
    P[0] = *(_QWORD *)&v0->Length;
    *(_QWORD *)(v8 + 8) = P;
    RtlFreeAnsiString(v0 + 1);
    ExFreePoolWithTag(v0, 0);
LABEL_15:
    v0 = (UNICODE_STRING *)P[0];
  }
  return (unsigned int)v2;
}
