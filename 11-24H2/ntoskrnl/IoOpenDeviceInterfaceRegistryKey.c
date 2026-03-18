/*
 * XREFs of IoOpenDeviceInterfaceRegistryKey @ 0x140AADBF0
 * Callers:
 *     DifIoOpenDeviceInterfaceRegistryKeyWrapper @ 0x1406298C0 (DifIoOpenDeviceInterfaceRegistryKeyWrapper.c)
 *     IoWMISuggestInstanceName @ 0x1407A3D50 (IoWMISuggestInstanceName.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B7510 (PnpUnicodeStringToWstrFree.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1408CB4B4 (_CmOpenDeviceInterfaceRegKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1409CAFD4 (IopApplyMutableTagToRegistryKey.c)
 *     PnpUnicodeStringToWstr @ 0x1409D52F0 (PnpUnicodeStringToWstr.c)
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
