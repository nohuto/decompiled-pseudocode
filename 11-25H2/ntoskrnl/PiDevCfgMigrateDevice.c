/*
 * XREFs of PiDevCfgMigrateDevice @ 0x14094DC38
 * Callers:
 *     PiDevCfgMigrateRootDevice @ 0x14071E830 (PiDevCfgMigrateRootDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x14088ED30 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1404C6B90 (PnpValidateRegistryDword.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PiDevCfgLogDeviceMigrated @ 0x1406ED37C (PiDevCfgLogDeviceMigrated.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14071D504 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140891BB0 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140891DEC (PiDevCfgQueryDeviceMigrationNode.c)
 *     _PnpCtxRegOpenKey @ 0x1408C9B94 (_PnpCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     PiDevCfgInitMigrationContext @ 0x14094E0B8 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgFreeMigrationContext @ 0x14094E288 (PiDevCfgFreeMigrationContext.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x14094E2EC (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14094EE3C (PiDevCfgSetDeviceRegProp.c)
 *     _PnpCtxRegDeleteValue @ 0x140950624 (_PnpCtxRegDeleteValue.c)
 *     _CmIsRootEnumeratedDevice @ 0x140954D08 (_CmIsRootEnumeratedDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x140955470 (PiPnpRtlSetObjectProperty.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A67ECC (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgSetObjectProperty @ 0x140A740D0 (PiDevCfgSetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgMigrateDevice(int a1, __int64 a2, unsigned __int16 *a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  int v8; // esi
  int v9; // r13d
  int inited; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int DeviceMigrationNode; // ebx
  char IsRootEnumeratedDevice; // al
  int v16; // ecx
  void *v17; // r9
  const WCHAR *v18; // rdx
  int v19; // ecx
  __int64 v20; // rcx
  const wchar_t **v21; // rdx
  int v23; // eax
  int v24; // eax
  unsigned int *v25; // rcx
  int v26; // eax
  _WORD *i; // rsi
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // [rsp+48h] [rbp-59h]
  int v31; // [rsp+58h] [rbp-49h]
  PVOID P; // [rsp+68h] [rbp-39h] BYREF
  int v33; // [rsp+70h] [rbp-31h] BYREF
  int v34; // [rsp+74h] [rbp-2Dh] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-29h] BYREF
  __int64 v36; // [rsp+80h] [rbp-21h]
  __int128 v37; // [rsp+88h] [rbp-19h] BYREF
  __int128 v38; // [rsp+98h] [rbp-9h]
  __int128 v39; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v40; // [rsp+B8h] [rbp+17h]

  v40 = 0LL;
  P = 0LL;
  Handle = 0LL;
  v36 = 0LL;
  v8 = a1;
  v34 = 0;
  v9 = 0;
  v33 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitMigrationContext(a3, a4, &v37);
  v13 = 0LL;
  DeviceMigrationNode = inited;
  if ( inited < 0 )
    goto LABEL_24;
  if ( !(_QWORD)v37 )
  {
    DeviceMigrationNode = 0;
    goto LABEL_24;
  }
  if ( (unsigned int)PnpGetObjectProperty(
                       *(_QWORD **)&PiPnpRtlCtx,
                       *(const WCHAR **)(a2 + 8),
                       1u,
                       *(void **)(a2 + 16),
                       0LL,
                       (__int64)&DEVPKEY_Device_MigrationRank,
                       &v34,
                       0LL,
                       0,
                       (__int64)&v33,
                       0) == -1073741789
    && v34 == 9
    && v33 == 8 )
  {
    goto LABEL_42;
  }
  if ( *((_QWORD *)&v37 + 1) )
  {
    DeviceMigrationNode = PiDevCfgQueryDeviceMigrationNode((__int64)&v37, *(const WCHAR **)(a2 + 8), (__int64 *)&P);
    if ( DeviceMigrationNode < 0 )
    {
      P = 0LL;
      v26 = 0;
      if ( DeviceMigrationNode != -1073741772 )
        v26 = DeviceMigrationNode;
      DeviceMigrationNode = v26;
    }
    else
    {
      *((_QWORD *)P + 23) = 0LL;
    }
  }
  if ( !P )
  {
    IsRootEnumeratedDevice = CmIsRootEnumeratedDevice(*(PCWSTR *)(a2 + 8));
    v13 = 0LL;
    if ( IsRootEnumeratedDevice )
      goto LABEL_42;
    if ( !*(_QWORD *)(a2 + 64) )
    {
LABEL_12:
      if ( P )
        goto LABEL_13;
      if ( !*((_QWORD *)&v38 + 1) )
      {
LABEL_43:
        PiDevCfgClearDeviceMigrationNode(&v37, *(_QWORD *)(a2 + 8));
        goto LABEL_24;
      }
      DeviceMigrationNode = PiDevCfgFindDeviceMigrationNode(
                              (__int64)&v37,
                              a2,
                              *((void **)&v38 + 1),
                              69665,
                              (PVOID **)&P);
      if ( DeviceMigrationNode < 0 )
      {
        P = 0LL;
        v24 = 0;
        if ( DeviceMigrationNode != -1073741275 )
          v24 = DeviceMigrationNode;
        DeviceMigrationNode = v24;
      }
LABEL_42:
      if ( !P )
        goto LABEL_43;
      goto LABEL_13;
    }
    v11 = v39;
    if ( !(_QWORD)v39 )
    {
      v23 = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, v37, (__int64)L"Locations", 0, 0x20019u, (__int64)&v39);
      v13 = 0LL;
      if ( v23 == -1073741772 )
      {
        *(_QWORD *)&v39 = 0LL;
        goto LABEL_12;
      }
      if ( v23 < 0 )
      {
LABEL_66:
        DeviceMigrationNode = v23;
        goto LABEL_24;
      }
      v11 = v39;
      if ( !(_QWORD)v39 )
        goto LABEL_12;
    }
    for ( i = *(_WORD **)(a2 + 64); *i; i += v29 + 1 )
    {
      v23 = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, v11, (__int64)i, 0, 0x20019u, (__int64)&Handle);
      if ( v23 == -1073741772 )
      {
        v13 = 0LL;
      }
      else
      {
        if ( v23 < 0 )
          goto LABEL_66;
        DeviceMigrationNode = PiDevCfgFindDeviceMigrationNode((__int64)&v37, a2, Handle, 70145, (PVOID **)&P);
        ZwClose(Handle);
        v13 = 0LL;
        if ( DeviceMigrationNode >= 0 )
          goto LABEL_72;
        P = 0LL;
        v28 = 0;
        if ( DeviceMigrationNode != -1073741275 )
          v28 = DeviceMigrationNode;
        DeviceMigrationNode = v28;
      }
      v29 = -1LL;
      do
        ++v29;
      while ( i[v29] );
      v11 = v39;
    }
    if ( DeviceMigrationNode < 0 )
      goto LABEL_24;
LABEL_72:
    v8 = a1;
    goto LABEL_12;
  }
LABEL_13:
  v16 = *((_DWORD *)P + 4);
  if ( (v16 & 1) != 0 )
  {
    DeviceMigrationNode = -1073740007;
  }
  else if ( (v16 & 2) != 0 )
  {
    DeviceMigrationNode = -1073740719;
  }
  else
  {
    if ( (int)IopGetRegistryValue(*((HANDLE *)P + 5)) >= 0 )
    {
      if ( PnpValidateRegistryDword(v36) )
        v9 = *(unsigned int *)((char *)v25 + v25[2]);
      ExFreePoolWithTag(v25, 0);
    }
    v17 = *(void **)(a2 + 16);
    v18 = *(const WCHAR **)(a2 + 8);
    v33 = 0;
    if ( (unsigned int)PnpGetObjectProperty(
                         *(_QWORD **)&PiPnpRtlCtx,
                         v18,
                         1u,
                         v17,
                         0LL,
                         (__int64)&DEVPKEY_Device_ClassGuid,
                         &v34,
                         0LL,
                         0,
                         (__int64)&v33,
                         0) != -1073741789
      || v34 != 13
      || v33 != 16 )
    {
      if ( a3 )
      {
        PiDevCfgSetDeviceRegProp(v19, a2, 9, 1, *((_QWORD *)a3 + 1), *a3 + 2);
      }
      else
      {
        LODWORD(v30) = 16;
        PiPnpRtlSetObjectProperty(
          *(_QWORD *)&PiPnpRtlCtx,
          *(_QWORD *)(a2 + 8),
          1LL,
          *(_QWORD *)(a2 + 16),
          0LL,
          &DEVPKEY_Device_ClassGuid,
          13,
          (char *)P + 80,
          v30,
          (*(_DWORD *)a2 & 1) << 17,
          v31);
      }
    }
    DeviceMigrationNode = PiDevCfgConfigureDeviceDriverConfiguration(
                            v8,
                            a2,
                            *((_QWORD *)P + 5),
                            -1,
                            0LL,
                            0LL,
                            (__int64)a5,
                            (__int64)a6);
    if ( DeviceMigrationNode >= 0 )
    {
      if ( a5 )
        *a5 |= v9;
      if ( *((_QWORD *)P + 23) )
        PnpCtxRegDeleteValue(v20, *(_QWORD *)(a2 + 16), L"ParentIdPrefix");
      PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(a2 + 8), 1, *(_QWORD *)(a2 + 16));
    }
  }
  PiDevCfgLogDeviceMigrated(a2, (__int64)P, DeviceMigrationNode);
  v21 = (const wchar_t **)P;
  if ( (*((_DWORD *)P + 4) & 1) == 0 )
  {
    PiDevCfgClearDeviceMigrationNode(&v37, *((_QWORD *)P + 4));
    v21 = (const wchar_t **)P;
  }
  if ( !v21 || wcsicmp(*(const wchar_t **)(a2 + 8), v21[4]) )
    goto LABEL_43;
LABEL_24:
  if ( P )
    PiDevCfgFreeDeviceMigrationNode((char *)P);
  PiDevCfgFreeMigrationContext(&v37, v11, v12, v13);
  return (unsigned int)DeviceMigrationNode;
}
