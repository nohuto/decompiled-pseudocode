/*
 * XREFs of PiCMDeleteDeviceWorker @ 0x140724ED4
 * Callers:
 *     PiSwIrpCleanup @ 0x140724800 (PiSwIrpCleanup.c)
 *     PiCMDeleteDevice @ 0x140AC08A4 (PiCMDeleteDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140487C78 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     ZwPlugPlayControl @ 0x14069D8E0 (ZwPlugPlayControl.c)
 *     _CmDeleteDevice @ 0x140808398 (_CmDeleteDevice.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     _CmIsRootDevice @ 0x140932574 (_CmIsRootDevice.c)
 *     _CmIsRootEnumeratedDevice @ 0x140954D08 (_CmIsRootEnumeratedDevice.c)
 *     _CmValidateDeviceName @ 0x14095AE80 (_CmValidateDeviceName.c)
 *     _CmGetDeviceStatus @ 0x1409A9004 (_CmGetDeviceStatus.c)
 *     PpDevNodeLockTree @ 0x140A060F0 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0AA84 (PpDevNodeUnlockTree.c)
 *     PpDeviceRegistration @ 0x140A46B4C (PpDeviceRegistration.c)
 *     PiQueueDeviceRequest @ 0x140AB40E8 (PiQueueDeviceRequest.c)
 */

__int64 __fastcall PiCMDeleteDeviceWorker(PCWSTR SourceString)
{
  NTSTATUS inited; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r9
  struct _KTHREAD *v7; // rax
  __int64 v8; // r9
  PVOID P; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  UNICODE_STRING v12; // [rsp+58h] [rbp+Fh] BYREF
  UNICODE_STRING PnPControlData; // [rsp+68h] [rbp+1Fh] BYREF
  __int128 v14; // [rsp+78h] [rbp+2Fh]
  __int64 v15; // [rsp+88h] [rbp+3Fh]
  int v16; // [rsp+B8h] [rbp+6Fh] BYREF
  int v17; // [rsp+C0h] [rbp+77h] BYREF
  int v18; // [rsp+C8h] [rbp+7Fh] BYREF

  v16 = 0;
  v18 = 0;
  P = 0LL;
  v17 = 0;
  DestinationString = 0LL;
  v15 = 0LL;
  PnPControlData = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  inited = CmValidateDeviceName(SourceString, SourceString);
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( (unsigned __int8)CmIsRootDevice(SourceString) )
    return (unsigned int)-1073741811;
  inited = PiPnpRtlBeginOperation(&P, v3, v4);
  if ( inited >= 0 )
  {
    if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, (_DWORD)SourceString, 0, (unsigned int)&v16, (__int64)&v18, (__int64)&v17) >= 0
      && (v16 & 2) != 0 )
    {
      if ( (v16 & 0x2001) == 1 )
      {
        inited = -1073741808;
        goto LABEL_20;
      }
      inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
      if ( inited >= 0 )
      {
        PpDevNodeLockTree(3LL);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        LOBYTE(v6) = 1;
        PpDeviceRegistration(&DestinationString, 0LL, 0LL, v6);
        inited = CmDeleteDevice(PiPnpRtlCtx);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        PpDevNodeUnlockTree(3LL);
        if ( inited >= 0 )
        {
          if ( RtlInitUnicodeStringEx(&PnPControlData, SourceString) >= 0 )
          {
            *(_QWORD *)&v14 = 0x4000000000001LL;
            ZwPlugPlayControl(PlugPlayControlDeviceStatus, &PnPControlData, 0x28u);
          }
LABEL_18:
          if ( RtlInitUnicodeStringEx(&v12, SourceString) >= 0 )
            PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&v12.Length);
        }
      }
    }
    else
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
      if ( inited >= 0 )
      {
        PpDevNodeLockTree(3LL);
        v7 = KeGetCurrentThread();
        --v7->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        LOBYTE(v8) = 1;
        PpDeviceRegistration(&DestinationString, 0LL, 0LL, v8);
        inited = CmDeleteDevice(PiPnpRtlCtx);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        PpDevNodeUnlockTree(3LL);
        if ( inited >= 0 )
        {
          if ( (unsigned __int8)CmIsRootEnumeratedDevice(SourceString)
            && RtlInitUnicodeStringEx(&DestinationString, L"HTREE\\ROOT\\0") >= 0 )
          {
            PiQueueDeviceRequest(&DestinationString, 8LL, 1LL);
          }
          goto LABEL_18;
        }
      }
    }
  }
LABEL_20:
  if ( P )
    PiPnpRtlEndOperation(P);
  return (unsigned int)inited;
}
