/*
 * XREFs of PiQueryAndAllocateBootResources @ 0x140978DA8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1406A8F90 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     IopQueryDeviceResources @ 0x140978EDC (IopQueryDeviceResources.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryAndAllocateBootResources(__int64 a1)
{
  PVOID v1; // rbx
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+90h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF
  PVOID Data; // [rsp+A0h] [rbp+50h] BYREF

  v1 = 0LL;
  v3 = 0;
  Data = 0LL;
  ValueName = 0LL;
  DataSize = 0;
  Handle = 0LL;
  if ( !*(_QWORD *)(a1 + 544) )
  {
    v3 = IopQueryDeviceResources(*(_QWORD *)(a1 + 32), 0LL, &Data, &DataSize);
    if ( v3 < 0 )
    {
      Data = 0LL;
      DataSize = 0;
    }
    else
    {
      v1 = Data;
    }
  }
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    if ( (int)CmOpenDeviceRegKey(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 48),
                20,
                0,
                983103,
                v1 != 0LL,
                (__int64)&Handle,
                0LL) < 0 )
      Handle = 0LL;
    if ( Handle && !*(_QWORD *)(a1 + 544) )
    {
      *(_DWORD *)&ValueName.Length = 1441812;
      ValueName.Buffer = (wchar_t *)L"BootConfig";
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      v1 = Data;
      if ( Data )
        ZwSetValueKey(Handle, &ValueName, 0, 8u, Data, DataSize);
      else
        ZwDeleteValueKey(Handle, &ValueName);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      if ( !v1 )
        goto LABEL_11;
      v3 = guard_dispatch_icall_no_overrides(4LL, *(_QWORD *)(a1 + 32));
      if ( v3 >= 0 )
        PipSetDevNodeFlags(a1, 64LL);
    }
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v3;
}
