/*
 * XREFs of IoOpenDeviceInterfaceRegistryKey @ 0x140AA8710
 * Callers:
 *     DifIoOpenDeviceInterfaceRegistryKeyWrapper @ 0x14061D900 (DifIoOpenDeviceInterfaceRegistryKeyWrapper.c)
 *     IoWMISuggestInstanceName @ 0x140794980 (IoWMISuggestInstanceName.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PnpUnicodeStringToWstrFree @ 0x140956510 (PnpUnicodeStringToWstrFree.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095A430 (_CmOpenDeviceInterfaceRegKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1409B2C54 (IopApplyMutableTagToRegistryKey.c)
 *     PnpUnicodeStringToWstr @ 0x1409D04B0 (PnpUnicodeStringToWstr.c)
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
