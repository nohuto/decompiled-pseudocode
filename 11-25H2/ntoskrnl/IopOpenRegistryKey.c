/*
 * XREFs of IopOpenRegistryKey @ 0x140A74FB0
 * Callers:
 *     IopAllowRemoteDASD @ 0x1404CB634 (IopAllowRemoteDASD.c)
 *     IopInitializeOfflineCrashDump @ 0x1405912D0 (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x1405914E8 (IopIsBitlockerOn.c)
 *     IopReadDumpRegistry @ 0x14059158C (IopReadDumpRegistry.c)
 *     IoInitializeLiveDump @ 0x14059433C (IoInitializeLiveDump.c)
 *     IopLiveDumpInitRegistrySettings @ 0x1405980D4 (IopLiveDumpInitRegistrySettings.c)
 *     SecureDump_ReadRegistry @ 0x14059EE88 (SecureDump_ReadRegistry.c)
 *     IopInitializeDumpPolicySettings @ 0x140705024 (IopInitializeDumpPolicySettings.c)
 *     IopCopyBootLogRegistryToFile @ 0x140705D7C (IopCopyBootLogRegistryToFile.c)
 *     IopSymlinkQueryEnabledClasses @ 0x140709A9C (IopSymlinkQueryEnabledClasses.c)
 *     pIoQueryDeviceDescription @ 0x140709C3C (pIoQueryDeviceDescription.c)
 *     IopBootLog @ 0x140A76824 (IopBootLog.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 *     IopSafebootDriverLoad @ 0x140AB556C (IopSafebootDriverLoad.c)
 *     IopLoadUnloadDriver @ 0x140ABFF10 (IopLoadUnloadDriver.c)
 * Callees:
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKey(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4, char a5)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+88h] [rbp+18h] BYREF

  ObjectAttributes.ObjectName = a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  Disposition = 0;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( a5 )
    return ZwCreateKey(a1, a4, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
  else
    return ZwOpenKey(a1, a4, &ObjectAttributes);
}
