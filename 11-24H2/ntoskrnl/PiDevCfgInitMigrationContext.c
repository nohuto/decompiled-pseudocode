/*
 * XREFs of PiDevCfgInitMigrationContext @ 0x1409CD29C
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 * Callees:
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C5740 (_PnpCtxGetCachedNodeBaseKey.c)
 *     PiDevCfgFreeMigrationContext @ 0x1409CD46C (PiDevCfgFreeMigrationContext.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 */

__int64 __fastcall PiDevCfgInitMigrationContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rdx
  int CachedNodeBaseKey; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS v11; // eax
  HANDLE v12; // rax
  NTSTATUS v13; // eax
  HANDLE v15; // rdx
  __int64 *v16; // rsi
  int v17; // eax
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *v20; // [rsp+80h] [rbp+20h] BYREF

  v20 = 0LL;
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 40) = a1;
  *(_QWORD *)(a3 + 48) = a2;
  v5 = *(_QWORD *)&PiPnpRtlCtx;
  v18 = 0LL;
  v6 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 128LL);
  if ( !v6 )
  {
    v6 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 88LL);
    *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 128LL) = v6;
  }
  CachedNodeBaseKey = PnpCtxGetCachedNodeBaseKey(v5, v6, 4, &v20);
  if ( CachedNodeBaseKey < 0 )
    goto LABEL_8;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)&v18 + 1) = L"Control\\DeviceMigration";
  ObjectAttributes.RootDirectory = v20;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
  LODWORD(v18) = 3145774;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwOpenKey((PHANDLE)a3, 0x20019u, &ObjectAttributes);
  CachedNodeBaseKey = v11;
  if ( v11 == -1073741772 )
    return 0;
  if ( v11 < 0 )
    goto LABEL_8;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *((_QWORD *)&v18 + 1) = L"Devices";
  v12 = *(HANDLE *)a3;
  *(_QWORD *)(a3 + 8) = 0LL;
  ObjectAttributes.RootDirectory = v12;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
  LODWORD(v18) = 1048590;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwOpenKey((PHANDLE)(a3 + 8), 0x20019u, &ObjectAttributes);
  CachedNodeBaseKey = v13;
  if ( v13 == -1073741772 )
  {
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  else if ( v13 < 0 )
  {
LABEL_8:
    PiDevCfgFreeMigrationContext(a3, v7, v9, v10);
    return (unsigned int)CachedNodeBaseKey;
  }
  v15 = *(HANDLE *)a3;
  v16 = (__int64 *)(a3 + 16);
  LODWORD(v18) = 1048590;
  *((_QWORD *)&v18 + 1) = L"Classes";
  v17 = IopOpenRegistryKeyEx(a3 + 16, v15, &v18, 131097LL);
  CachedNodeBaseKey = v17;
  if ( v17 == -1073741772 )
  {
    CachedNodeBaseKey = 0;
    *v16 = 0LL;
  }
  else if ( v17 < 0 )
  {
    goto LABEL_8;
  }
  v7 = *v16;
  if ( *v16 )
  {
    if ( a1 )
    {
      CachedNodeBaseKey = IopOpenRegistryKeyEx(a3 + 24, v7, a1, 131097LL);
      if ( CachedNodeBaseKey == -1073741772 )
      {
        CachedNodeBaseKey = 0;
        *(_QWORD *)(a3 + 24) = 0LL;
        return (unsigned int)CachedNodeBaseKey;
      }
    }
    if ( CachedNodeBaseKey < 0 )
      goto LABEL_8;
  }
  return (unsigned int)CachedNodeBaseKey;
}
