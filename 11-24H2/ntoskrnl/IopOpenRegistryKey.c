/*
 * XREFs of IopOpenRegistryKey @ 0x140A71460
 * Callers:
 *     IopAllowRemoteDASD @ 0x1404C4890 (IopAllowRemoteDASD.c)
 *     IopInitializeOfflineCrashDump @ 0x140591AF4 (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x140591D0C (IopIsBitlockerOn.c)
 *     IopReadDumpRegistry @ 0x140591DB0 (IopReadDumpRegistry.c)
 *     IoInitializeLiveDump @ 0x1405949C8 (IoInitializeLiveDump.c)
 *     IopLiveDumpInitRegistrySettings @ 0x140598764 (IopLiveDumpInitRegistrySettings.c)
 *     SecureDump_ReadRegistry @ 0x14059F5A8 (SecureDump_ReadRegistry.c)
 *     IopInitializeDumpPolicySettings @ 0x14070ECB4 (IopInitializeDumpPolicySettings.c)
 *     IopCopyBootLogRegistryToFile @ 0x14070FA0C (IopCopyBootLogRegistryToFile.c)
 *     IopSymlinkQueryEnabledClasses @ 0x14071372C (IopSymlinkQueryEnabledClasses.c)
 *     pIoQueryDeviceDescription @ 0x1407138CC (pIoQueryDeviceDescription.c)
 *     IopBootLog @ 0x140A728F8 (IopBootLog.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     IopSafebootDriverLoad @ 0x140AB4A18 (IopSafebootDriverLoad.c)
 * Callees:
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
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
