/*
 * XREFs of PpDevCfgProcessDevices @ 0x14072B0A4
 * Callers:
 *     PnpBootPhaseComplete @ 0x140718154 (PnpBootPhaseComplete.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     _CmDeleteDevice @ 0x1408189D8 (_CmDeleteDevice.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     _CmGetDeviceStatus @ 0x1408BA218 (_CmGetDeviceStatus.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PpDeviceRegistration @ 0x1409BAF3C (PpDeviceRegistration.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140A39170 (PipForDeviceNodeSubtree.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  if ( (PiDevCfgMode & 2) != 0 )
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
