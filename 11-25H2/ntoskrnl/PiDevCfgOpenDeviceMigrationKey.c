/*
 * XREFs of PiDevCfgOpenDeviceMigrationKey @ 0x14071E924
 * Callers:
 *     PiDevCfgMigrateRootDevice @ 0x14071E830 (PiDevCfgMigrateRootDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C9F0C (_PnpCtxGetCachedContextBaseKey.c)
 *     IopOpenRegistryKeyEx @ 0x140A3E608 (IopOpenRegistryKeyEx.c)
 */

__int64 __fastcall PiDevCfgOpenDeviceMigrationKey(PCWSTR SourceString, __int64 a2, __int64 a3)
{
  int CachedContextBaseKey; // ebx
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+28h] BYREF

  v7 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 4LL, &v7);
  if ( CachedContextBaseKey >= 0 )
  {
    DestinationString.Buffer = L"Control\\DeviceMigration\\Devices";
    *(_DWORD *)&DestinationString.Length = 4194366;
    CachedContextBaseKey = IopOpenRegistryKeyEx(&Handle, v7, &DestinationString, 131097LL);
    if ( CachedContextBaseKey >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      CachedContextBaseKey = IopOpenRegistryKeyEx(a3, Handle, &DestinationString, 131097LL);
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}
