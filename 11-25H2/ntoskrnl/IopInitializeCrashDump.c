/*
 * XREFs of IopInitializeCrashDump @ 0x140704E50
 * Callers:
 *     IoConfigureCrashDump @ 0x14058D584 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x140704968 (IoInitializeCrashDump.c)
 *     IopInitCrashDumpRegCallback @ 0x140C0B880 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x1404D94EC (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopLoadCrashdumpDriver @ 0x1404D9844 (IopLoadCrashdumpDriver.c)
 *     SecureDump_GetSecureDumpSettings @ 0x1404F4548 (SecureDump_GetSecureDumpSettings.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x140590950 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopReadDumpRegistry @ 0x14059158C (IopReadDumpRegistry.c)
 *     IopInitializeRemovePagesArray @ 0x14059D47C (IopInitializeRemovePagesArray.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140701068 (FsRtlIssueFileNotificationFsctl.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

char __fastcall IopInitializeCrashDump(__int64 Handle, __int128 *a2)
{
  int CrashdumpDriver; // eax
  int v6; // eax
  HANDLE v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-30h] BYREF
  char v11; // [rsp+60h] [rbp-10h]
  __int16 v12; // [rsp+61h] [rbp-Fh]
  char v13; // [rsp+63h] [rbp-Dh]
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  LODWORD(Object) = 0;
  *(_QWORD *)&v9 = 0LL;
  DWORD2(v9) = 0;
  if ( ForceDumpDisabled || !AllowCrashDump )
    return 0;
  IopReadDumpRegistry(Handle, &Object);
  if ( CrashdmpImageEntry && CrashdmpDumpBlock && CrashdmpInitialized || !(_DWORD)Object )
    return 1;
  if ( CrashdmpImageEntry || (CrashdumpDriver = IopLoadCrashdumpDriver(), CrashdumpDriver >= 0) )
  {
    if ( (int)SecureDump_GetSecureDumpSettings((__int64)&v9) < 0 )
      return 0;
    if ( (_BYTE)v9 )
    {
      if ( !qword_140E65CD8 )
        return 0;
      v10[3] = *(_QWORD *)((char *)&v9 + 4);
      v11 = BYTE1(v9);
      v10[1] = SecureDump_Get_SecureDumpHeader;
      v10[2] = SecureDump_Encrypt_DmpData;
      v10[0] = 40LL;
      v12 = 0;
      v13 = 0;
      if ( (int)guard_dispatch_icall_no_overrides(v10) < 0 )
        return 0;
    }
    v9 = *a2;
    v6 = guard_dispatch_icall_no_overrides(Handle);
    if ( v6 < 0 )
    {
      CrashdmpDumpBlock = 0LL;
      IopDumpTraceInitializeCrashDumpFailure(v6);
      return 0;
    }
    CrashdmpInitialized = 1;
    v7 = *(HANDLE *)(CrashdmpDumpBlock + 1352);
    if ( !v7 )
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
      v7 = (HANDLE)Handle;
    }
    Object = 0LL;
    if ( ObReferenceObjectByHandle(v7, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
    {
      FsRtlIssueFileNotificationFsctl((PFILE_OBJECT)Object, v8, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE);
      ObfDereferenceObject(Object);
    }
    goto LABEL_23;
  }
  IopDumpTraceLoadCrashDumpDriverFailure(CrashdumpDriver);
  return 0;
}
