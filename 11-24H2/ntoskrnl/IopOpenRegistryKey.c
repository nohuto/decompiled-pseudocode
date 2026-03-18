/*
 * XREFs of IopOpenRegistryKey @ 0x140A77340
 * Callers:
 *     IopAllowRemoteDASD @ 0x1404CB370 (IopAllowRemoteDASD.c)
 *     IopInitializeOfflineCrashDump @ 0x140594AD0 (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x140594CE8 (IopIsBitlockerOn.c)
 *     IopReadDumpRegistry @ 0x140594D8C (IopReadDumpRegistry.c)
 *     IoInitializeLiveDump @ 0x140597A4C (IoInitializeLiveDump.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14059B7E4 (IopLiveDumpInitRegistrySettings.c)
 *     SecureDump_ReadRegistry @ 0x1405A2668 (SecureDump_ReadRegistry.c)
 *     IopInitializeDumpPolicySettings @ 0x140711124 (IopInitializeDumpPolicySettings.c)
 *     IopCopyBootLogRegistryToFile @ 0x140711E7C (IopCopyBootLogRegistryToFile.c)
 *     IopSymlinkQueryEnabledClasses @ 0x140715B9C (IopSymlinkQueryEnabledClasses.c)
 *     pIoQueryDeviceDescription @ 0x140715D3C (pIoQueryDeviceDescription.c)
 *     IopBootLog @ 0x140A785F8 (IopBootLog.c)
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 *     IopSafebootDriverLoad @ 0x140AB9958 (IopSafebootDriverLoad.c)
 * Callees:
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1406A67B0 (ZwCreateKey.c)
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
