/*
 * XREFs of IopInitializeCrashDump @ 0x14070EAE0
 * Callers:
 *     IoConfigureCrashDump @ 0x14058DDD4 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14070E5F8 (IoInitializeCrashDump.c)
 *     IopInitCrashDumpRegCallback @ 0x140C1EA90 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x1404D19BC (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopLoadCrashdumpDriver @ 0x1404D1D14 (IopLoadCrashdumpDriver.c)
 *     SecureDump_GetSecureDumpSettings @ 0x1404F4998 (SecureDump_GetSecureDumpSettings.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x14059116C (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopReadDumpRegistry @ 0x140591DB0 (IopReadDumpRegistry.c)
 *     IopInitializeRemovePagesArray @ 0x14059DB8C (IopInitializeRemovePagesArray.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14070AAE8 (FsRtlIssueFileNotificationFsctl.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

char __fastcall IopInitializeCrashDump(__int64 Handle, __int128 *a2)
{
  int CrashdumpDriver; // eax
  __int64 v6; // rdx
  int v7; // eax
  HANDLE v8; // rcx
  __int64 v9; // rdx
  __int128 v10; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-30h] BYREF
  char v12; // [rsp+60h] [rbp-10h]
  __int16 v13; // [rsp+61h] [rbp-Fh]
  char v14; // [rsp+63h] [rbp-Dh]
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  LODWORD(Object) = 0;
  *(_QWORD *)&v10 = 0LL;
  DWORD2(v10) = 0;
  if ( ForceDumpDisabled || !AllowCrashDump )
    return 0;
  IopReadDumpRegistry(Handle, &Object);
  if ( CrashdmpImageEntry && CrashdmpDumpBlock && CrashdmpInitialized || !(_DWORD)Object )
    return 1;
  if ( CrashdmpImageEntry || (CrashdumpDriver = IopLoadCrashdumpDriver(), CrashdumpDriver >= 0) )
  {
    if ( (int)SecureDump_GetSecureDumpSettings((__int64)&v10) < 0 )
      return 0;
    if ( (_BYTE)v10 )
    {
      if ( !qword_140E66078 )
        return 0;
      v11[3] = *(_QWORD *)((char *)&v10 + 4);
      v12 = BYTE1(v10);
      v11[1] = SecureDump_Get_SecureDumpHeader;
      v11[2] = SecureDump_Encrypt_DmpData;
      v11[0] = 40LL;
      v13 = 0;
      v14 = 0;
      if ( (int)guard_dispatch_icall_no_overrides(v11, v6) < 0 )
        return 0;
    }
    v10 = *a2;
    v7 = guard_dispatch_icall_no_overrides(Handle, &CrashdmpDumpBlock);
    if ( v7 < 0 )
    {
      CrashdmpDumpBlock = 0LL;
      IopDumpTraceInitializeCrashDumpFailure(v7);
      return 0;
    }
    CrashdmpInitialized = 1;
    v8 = *(HANDLE *)(CrashdmpDumpBlock + 1352);
    if ( !v8 )
    {
      if ( !Handle )
      {
LABEL_23:
        if ( *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 && *(_QWORD *)(CrashdmpDumpBlock + 8) )
        {
          if ( UseRemovePagesArray )
            IopInitializeRemovePagesArray();
        }
        return 1;
      }
      v8 = (HANDLE)Handle;
    }
    Object = 0LL;
    if ( ObReferenceObjectByHandle(v8, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
    {
      FsRtlIssueFileNotificationFsctl((PFILE_OBJECT)Object, v9, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE);
      ObfDereferenceObject(Object);
    }
    goto LABEL_23;
  }
  IopDumpTraceLoadCrashDumpDriverFailure(CrashdumpDriver);
  return 0;
}
