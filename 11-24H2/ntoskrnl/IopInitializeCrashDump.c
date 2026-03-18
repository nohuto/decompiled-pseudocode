/*
 * XREFs of IopInitializeCrashDump @ 0x140710F50
 * Callers:
 *     IoConfigureCrashDump @ 0x140590DB4 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x140710A68 (IoInitializeCrashDump.c)
 *     IopInitCrashDumpRegCallback @ 0x140C1CA50 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x1404D856C (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopLoadCrashdumpDriver @ 0x1404D88C4 (IopLoadCrashdumpDriver.c)
 *     SecureDump_GetSecureDumpSettings @ 0x1404F70B8 (SecureDump_GetSecureDumpSettings.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x140594148 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopReadDumpRegistry @ 0x140594D8C (IopReadDumpRegistry.c)
 *     IopInitializeRemovePagesArray @ 0x1405A0C5C (IopInitializeRemovePagesArray.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14070CF48 (FsRtlIssueFileNotificationFsctl.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

char __fastcall IopInitializeCrashDump(__int64 Handle, __int128 *a2)
{
  int CrashdumpDriver; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  HANDLE v10; // rcx
  __int64 v11; // rdx
  __int128 v12; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v13[4]; // [rsp+40h] [rbp-30h] BYREF
  char v14; // [rsp+60h] [rbp-10h]
  __int16 v15; // [rsp+61h] [rbp-Fh]
  char v16; // [rsp+63h] [rbp-Dh]
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  LODWORD(Object) = 0;
  *(_QWORD *)&v12 = 0LL;
  DWORD2(v12) = 0;
  if ( ForceDumpDisabled || !AllowCrashDump )
    return 0;
  IopReadDumpRegistry(Handle, &Object);
  if ( CrashdmpImageEntry && CrashdmpDumpBlock && CrashdmpInitialized || !(_DWORD)Object )
    return 1;
  if ( CrashdmpImageEntry || (CrashdumpDriver = IopLoadCrashdumpDriver(), CrashdumpDriver >= 0) )
  {
    if ( (int)SecureDump_GetSecureDumpSettings((__int64)&v12) < 0 )
      return 0;
    if ( (_BYTE)v12 )
    {
      if ( !qword_140E65F38 )
        return 0;
      v13[3] = *(_QWORD *)((char *)&v12 + 4);
      v14 = BYTE1(v12);
      v13[1] = SecureDump_Get_SecureDumpHeader;
      v13[2] = SecureDump_Encrypt_DmpData;
      v13[0] = 40LL;
      v15 = 0;
      v16 = 0;
      if ( (int)guard_dispatch_icall_no_overrides(v13, v6, v7, v8) < 0 )
        return 0;
    }
    v12 = *a2;
    v9 = guard_dispatch_icall_no_overrides(Handle, &CrashdmpDumpBlock, &v12, v8);
    if ( v9 < 0 )
    {
      CrashdmpDumpBlock = 0LL;
      IopDumpTraceInitializeCrashDumpFailure(v9);
      return 0;
    }
    CrashdmpInitialized = 1;
    v10 = *(HANDLE *)(CrashdmpDumpBlock + 1352);
    if ( !v10 )
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
      v10 = (HANDLE)Handle;
    }
    Object = 0LL;
    if ( ObReferenceObjectByHandle(v10, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
    {
      FsRtlIssueFileNotificationFsctl(
        (PFILE_OBJECT)Object,
        v11,
        (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE);
      ObfDereferenceObject(Object);
    }
    goto LABEL_23;
  }
  IopDumpTraceLoadCrashDumpDriverFailure(CrashdumpDriver);
  return 0;
}
