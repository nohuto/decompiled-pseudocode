/*
 * XREFs of IopWriteAllocatedResourcesToRegistry @ 0x140A886D8
 * Callers:
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceLists @ 0x1407281A4 (PnpBuildCmResourceLists.c)
 *     PnpRestoreResourcesInternal @ 0x140728630 (PnpRestoreResourcesInternal.c)
 *     IopLegacyResourceAllocation @ 0x140830B88 (IopLegacyResourceAllocation.c)
 *     PnpReleaseResourcesInternal @ 0x140A88334 (PnpReleaseResourcesInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14069CD20 (ZwDeleteValueKey.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall IopWriteAllocatedResourcesToRegistry(__int64 a1, void *a2, ULONG a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  NTSTATUS v8; // eax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  ValueName = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v7 = CmOpenDeviceRegKey(
         *(__int64 *)&PiPnpRtlCtx,
         *(const WCHAR **)(a1 + 48),
         19,
         0,
         983103,
         1,
         (__int64)&KeyHandle,
         0LL);
  if ( v7 >= 0 )
  {
    ValueName.Buffer = L"AllocConfig";
    *(_DWORD *)&ValueName.Length = 1572886;
    if ( a2 )
      v8 = ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, a2, a3);
    else
      v8 = ZwDeleteValueKey(KeyHandle, &ValueName);
    v7 = v8;
    ZwClose(KeyHandle);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
