/*
 * XREFs of IoOpenDeviceInterfaceRegistryKey @ 0x140AA8C70
 * Callers:
 *     DifIoOpenDeviceInterfaceRegistryKeyWrapper @ 0x140627E80 (DifIoOpenDeviceInterfaceRegistryKeyWrapper.c)
 *     IoWMISuggestInstanceName @ 0x1407A3E60 (IoWMISuggestInstanceName.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B4E80 (PnpUnicodeStringToWstrFree.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1408C8EE4 (_CmOpenDeviceInterfaceRegKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1409B6214 (IopApplyMutableTagToRegistryKey.c)
 *     PnpUnicodeStringToWstr @ 0x1409C5120 (PnpUnicodeStringToWstr.c)
 */

NTSTATUS __stdcall IoOpenDeviceInterfaceRegistryKey(
        PUNICODE_STRING SymbolicLinkName,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceInterfaceRegKey)
{
  WCHAR *v6; // rdi
  NTSTATUS v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r9
  WCHAR *v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0LL;
  v6 = 0LL;
  if ( SymbolicLinkName && SymbolicLinkName->Buffer && SymbolicLinkName->Length )
  {
    v7 = PnpUnicodeStringToWstr(&v11, 0LL, &SymbolicLinkName->Length);
    if ( v7 < 0 )
    {
      v6 = v11;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v6 = v11;
      v7 = CmOpenDeviceInterfaceRegKey(
             *(_QWORD **)&PiPnpRtlCtx,
             v11,
             0x32u,
             v9,
             DesiredAccess,
             1,
             DeviceInterfaceRegKey,
             0LL);
      if ( v7 >= 0 && DeviceInterfaceRegKey )
        IopApplyMutableTagToRegistryKey(*DeviceInterfaceRegKey);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v7 = -1073741811;
  }
  PnpUnicodeStringToWstrFree(v6, (__int64)SymbolicLinkName);
  return v7;
}
