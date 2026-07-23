/*
 * XREFs of IopReleaseDeviceResources @ 0x1409BF108
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14048D53C (PnpRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x140720DF0 (PnpDisableDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409BEDFC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x140A9C798 (PnpDriverLoadingFailed.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1406A8F90 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     IopQueryDeviceResources @ 0x140978EDC (IopQueryDeviceResources.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     IopLegacyResourceAllocation @ 0x1409BE034 (IopLegacyResourceAllocation.c)
 */

__int64 __fastcall IopReleaseDeviceResources(__int64 a1, int a2)
{
  bool v2; // zf
  _DWORD *v3; // rdi
  PVOID v6; // rbx
  char v7; // r15
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+90h] [rbp+40h] BYREF
  PVOID Data; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 416) == 0LL;
  v3 = (_DWORD *)(a1 + 396);
  ValueName = 0LL;
  if ( v2 && (*v3 & 0x80u) == 0 )
    return 0LL;
  DataSize = 0;
  v6 = 0LL;
  v7 = 0;
  Data = 0LL;
  if ( a2 && (*v3 & 1) == 0 )
  {
    if ( (int)IopQueryDeviceResources(*(void **)(a1 + 32), 0, &Data, &DataSize) >= 0 )
    {
      v6 = Data;
    }
    else
    {
      DataSize = 0;
      Data = 0LL;
    }
  }
  result = IopLegacyResourceAllocation(-1, (__int64)PnpDriverObject, *(_QWORD *)(a1 + 32), 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
    if ( a2 && (*v3 & 1) == 0 )
    {
      KeyHandle = 0LL;
      if ( v6 )
        v7 = 1;
      if ( (int)CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a1 + 48),
                  20,
                  0,
                  983103,
                  v7,
                  (__int64)&KeyHandle,
                  0LL) >= 0 )
      {
        *(_DWORD *)&ValueName.Length = 1441812;
        ValueName.Buffer = (wchar_t *)L"BootConfig";
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        v6 = Data;
        if ( Data )
          ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, Data, DataSize);
        else
          ZwDeleteValueKey(KeyHandle, &ValueName);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        ZwClose(KeyHandle);
      }
      if ( v6 )
      {
        PipSetDevNodeFlags(a1, 0x40u);
        v10 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 544) = v6;
        guard_dispatch_icall_no_overrides(4LL, v10);
      }
    }
    return 0LL;
  }
  return result;
}
