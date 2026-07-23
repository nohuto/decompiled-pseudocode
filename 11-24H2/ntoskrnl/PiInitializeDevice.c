/*
 * XREFs of PiInitializeDevice @ 0x14073293C
 * Callers:
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x1404B9B64 (PpDevNodeInsertIntoTree.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PnpAllocateDeviceInstancePath @ 0x140722320 (PnpAllocateDeviceInstancePath.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x140727D40 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x14072B9FC (IopCreateRootEnumeratedDeviceObject.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B4E80 (PnpUnicodeStringToWstrFree.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B6E6C (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PipAllocateDeviceNode @ 0x140979B04 (PipAllocateDeviceNode.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14097B294 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PnpSetPlugPlayEvent @ 0x14097B3B0 (PnpSetPlugPlayEvent.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     PnpConcatenateUnicodeStrings @ 0x1409BB878 (PnpConcatenateUnicodeStrings.c)
 *     PnpUnicodeStringToWstr @ 0x1409C5120 (PnpUnicodeStringToWstr.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140A80A64 (PnpMapDeviceObjectToDeviceInstance.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiInitializeDevice(const UNICODE_STRING *a1)
{
  WCHAR *Pool2; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _DEVICE_OBJECT *v4; // rax
  struct _DEVICE_OBJECT *v5; // rsi
  __int64 v6; // r14
  int DeviceInstancePath; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 Length; // r15
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  __int16 v16; // ax
  __int64 FailedInstallProblemStatus; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+40h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-21h] BYREF
  PDEVICE_OBJECT v24; // [rsp+50h] [rbp-19h] BYREF
  __int64 v25; // [rsp+58h] [rbp-11h] BYREF
  PVOID P; // [rsp+60h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-1h] BYREF
  int v29; // [rsp+D8h] [rbp+6Fh] BYREF
  int v30; // [rsp+E0h] [rbp+77h] BYREF
  int v31; // [rsp+E8h] [rbp+7Fh] BYREF

  v31 = 0;
  Pool2 = 0LL;
  v29 = 0;
  v30 = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  P = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  Handle = 0LL;
  PpDevNodeLockTree(1LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(a1, 1131441744LL);
  v24 = v4;
  v5 = v4;
  if ( v4 )
  {
    ObfDereferenceObjectWithTag(v4, 0x43706E50u);
    v6 = v22;
    DeviceInstancePath = 0;
LABEL_10:
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    goto LABEL_11;
  }
  v8 = PnpUnicodeStringToWstr(&v22, 0LL, a1);
  v6 = v22;
  DeviceInstancePath = v8;
  if ( v8 < 0
    || (DeviceInstancePath = PiPnpRtlBeginOperation(&P, v9, v10), DeviceInstancePath < 0)
    || (DeviceInstancePath = CmOpenDeviceRegKey(PiPnpRtlCtx, v6, 16, 0, 983103, 0, (__int64)&Handle, 0LL),
        DeviceInstancePath < 0) )
  {
LABEL_8:
    if ( v5 )
      IoDeleteDevice(v5);
    goto LABEL_10;
  }
  *(_DWORD *)&DestinationString.Length = 0;
  v29 = 512;
  DestinationString.Buffer = 0LL;
  Length = 0;
  Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL, 0x200uLL, 0x20207050u);
  if ( !Pool2 )
  {
    DeviceInstancePath = -1073741670;
    goto LABEL_8;
  }
  if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v6, (_DWORD)Handle, 5, (__int64)&v30, (__int64)Pool2, (__int64)&v29, 0) >= 0
    && v30 == 1
    && v29 )
  {
    if ( RtlInitUnicodeStringEx(&DestinationString, Pool2) >= 0 )
    {
      Length = DestinationString.Length;
    }
    else
    {
      *(_DWORD *)&DestinationString.Length = 0;
      Length = 0;
      DestinationString.Buffer = 0LL;
    }
  }
  v13 = IopCreateRootEnumeratedDeviceObject(&v24);
  v5 = v24;
  DeviceInstancePath = v13;
  if ( v13 < 0 )
    goto LABEL_8;
  v24->Flags |= 0x1000u;
  v14 = PipAllocateDeviceNode(v5, &v25);
  v15 = v25;
  if ( !v25 )
  {
    if ( v14 == -1073740946 )
      v14 = -1073741670;
    DeviceInstancePath = v14;
    if ( v14 >= 0 )
      goto LABEL_10;
    goto LABEL_8;
  }
  PipSetDevNodeFlags(v25, 17LL);
  PipSetDevNodeState(v15, 772);
  v29 = 4;
  if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v6, (_DWORD)Handle, 11, (__int64)&v30, (__int64)&v31, (__int64)&v29, 0) >= 0 )
  {
    if ( v30 == 4 && v29 == 4 )
    {
      v16 = v31;
    }
    else
    {
      v16 = 0;
      v31 = 0;
    }
    if ( (v16 & 0x20) != 0 )
    {
      FailedInstallProblemStatus = 0LL;
      v18 = 18LL;
LABEL_43:
      PipSetDevNodeProblem(v15, v18, FailedInstallProblemStatus);
      goto LABEL_44;
    }
    if ( (v16 & 0x2000) != 0 )
    {
      FailedInstallProblemStatus = 0LL;
      v18 = 16LL;
      goto LABEL_43;
    }
    if ( (v16 & 0x40) != 0 )
    {
      FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(v6, (int)Handle);
      v18 = 28LL;
      goto LABEL_43;
    }
  }
LABEL_44:
  DeviceInstancePath = PnpAllocateDeviceInstancePath(v15, (unsigned int)a1->Length + 2);
  if ( DeviceInstancePath < 0 )
    goto LABEL_8;
  RtlCopyUnicodeString((PUNICODE_STRING)(v15 + 40), a1);
  if ( !Length || (int)PnpConcatenateUnicodeStrings((PUNICODE_STRING)(v15 + 56), &DestinationString) < 0 )
  {
    *(_DWORD *)(v15 + 56) = 0;
    *(_QWORD *)(v15 + 64) = 0LL;
  }
  DeviceInstancePath = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(v15 + 32), v15 + 40);
  if ( DeviceInstancePath < 0 )
    goto LABEL_8;
  PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, v15);
  PsReferenceSiloContext(v5);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  PnpQueryAndSaveDeviceNodeCapabilities(v15);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v19, *(_QWORD *)(v15 + 48), 1LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v20, *(_QWORD *)(v15 + 48), 14LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v21, *((_QWORD *)IopRootDeviceNode + 6), 15LL);
  PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, *(_QWORD *)(v15 + 32));
LABEL_11:
  PpDevNodeUnlockTree(1LL);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation(P);
  if ( v6 )
    PnpUnicodeStringToWstrFree(v6, a1);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)DeviceInstancePath;
}
