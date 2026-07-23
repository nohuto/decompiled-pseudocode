/*
 * XREFs of PipMigratePnpState @ 0x140C235F4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     _PnpCtxCloseMachine @ 0x140817930 (_PnpCtxCloseMachine.c)
 *     _PnpCtxOpenMachine @ 0x140817DD0 (_PnpCtxOpenMachine.c)
 *     _PnpCtxRegCopyTree @ 0x14081800C (_PnpCtxRegCopyTree.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 *     _CmGetMatchingDeviceList @ 0x1409AA61C (_CmGetMatchingDeviceList.c)
 *     _PnpCtxRegCloseKey @ 0x140A1004C (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegCreateKey @ 0x140A49664 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140A85920 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 PipMigratePnpState()
{
  PERESOURCE *v0; // rdi
  int v1; // eax
  __int64 v2; // rcx
  int CachedContextBaseKey; // ebx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-79h]
  __int64 v14; // [rsp+28h] [rbp-71h]
  void *v15; // [rsp+40h] [rbp-59h] BYREF
  void *v16; // [rsp+48h] [rbp-51h] BYREF
  void *v17; // [rsp+50h] [rbp-49h] BYREF
  int v18; // [rsp+58h] [rbp-41h] BYREF
  __int64 Source2; // [rsp+60h] [rbp-39h] BYREF
  PERESOURCE *v20; // [rsp+68h] [rbp-31h] BYREF
  void *v21; // [rsp+70h] [rbp-29h] BYREF
  void *v22; // [rsp+78h] [rbp-21h]
  void *v23; // [rsp+80h] [rbp-19h] BYREF
  __int64 v24; // [rsp+88h] [rbp-11h] BYREF
  __int64 Source1; // [rsp+90h] [rbp-9h] BYREF
  __int128 v26; // [rsp+98h] [rbp-1h] BYREF
  unsigned int v27; // [rsp+100h] [rbp+67h] BYREF
  int v28; // [rsp+108h] [rbp+6Fh] BYREF
  int v29; // [rsp+110h] [rbp+77h] BYREF
  int v30; // [rsp+118h] [rbp+7Fh] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v0 = 0LL;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v15 = 0LL;
  Source1 = 0LL;
  Source2 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v18 = 0;
  v26 = 0LL;
  v1 = PnpCtxRegOpenKey(
         *(__int64 *)&PiPnpRtlCtx,
         2147483650LL,
         (__int64)L"System\\Setup\\Upgrade\\PnP",
         0,
         0x2001Fu,
         (__int64)&v16);
  CachedContextBaseKey = v1;
  if ( v1 == -1073741772 )
    goto LABEL_2;
  if ( v1 >= 0 )
  {
    v27 = 4;
    v4 = PnpCtxRegQueryValue(v2, v16, L"MigrationStatus", &v28, &v29, &v27);
    CachedContextBaseKey = v4;
    if ( v4 != -1073741772 )
    {
      if ( v4 < 0 )
        goto LABEL_43;
      if ( v28 != 4 || v27 != 4 )
        goto LABEL_42;
    }
    v5 = PnpCtxRegOpenKey(
           *(__int64 *)&PiPnpRtlCtx,
           (__int64)v16,
           (__int64)L"CurrentControlSet",
           0,
           0x2001Fu,
           (__int64)&v17);
    CachedContextBaseKey = v5;
    if ( v5 == -1073741772 )
    {
LABEL_2:
      CachedContextBaseKey = 0;
      goto LABEL_43;
    }
    if ( v5 >= 0 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)v17,
                               (__int64)L"Control\\DeviceMigration",
                               0,
                               0x20019u,
                               (__int64)&v15);
      if ( CachedContextBaseKey >= 0 )
      {
        v27 = 8;
        CachedContextBaseKey = PnpCtxRegQueryValue(v2, v15, L"MigrationTime", &v28, &Source2, &v27);
        if ( CachedContextBaseKey >= 0 )
        {
          if ( v28 == 3 && v27 == 8 )
          {
            PnpCtxRegCloseKey(v2, v15);
            v15 = 0LL;
            CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, &v24);
            if ( CachedContextBaseKey < 0 )
              goto LABEL_43;
            v6 = v24;
            CachedContextBaseKey = PnpCtxRegCreateKey(
                                     *(__int64 *)&PiPnpRtlCtx,
                                     v24,
                                     (int)L"Control\\DeviceMigration",
                                     0,
                                     131078,
                                     0LL);
            if ( CachedContextBaseKey < 0 )
              goto LABEL_43;
            v27 = 8;
            v7 = PnpCtxRegQueryValue(v2, v15, L"MigrationTime", &v28, &Source1, &v27);
            CachedContextBaseKey = v7;
            if ( v7 == -1073741772 )
              goto LABEL_22;
            if ( v7 < 0 )
              goto LABEL_43;
            if ( v28 == 3 && v27 == 8 )
            {
              if ( RtlCompareMemory(&Source1, &Source2, 8uLL) == 8 )
              {
                CachedContextBaseKey = -1073741791;
                goto LABEL_43;
              }
LABEL_22:
              v29 = 259;
              CachedContextBaseKey = PnpCtxRegSetValue(v2, v16, (__int64)L"MigrationStatus", 4LL, (__int64)&v29, 4u);
              if ( CachedContextBaseKey >= 0 )
              {
                CachedContextBaseKey = PnpCtxRegSetValue(v2, v15, (__int64)L"MigrationTime", 3LL, (__int64)&Source2, 8u);
                if ( CachedContextBaseKey >= 0 )
                {
                  v27 = 4;
                  CachedContextBaseKey = PnpCtxRegQueryValue(v2, v16, L"TargetVersion", &v28, &v30, &v27);
                  if ( CachedContextBaseKey >= 0 )
                  {
                    if ( v28 == 4 && v27 == 4 )
                    {
                      if ( (v30 & 0xFFFF0000) == 0xA000000 )
                      {
                        CachedContextBaseKey = PnpCtxRegCopyTree(v8, (int)v17, 0, v6, 0LL);
                        if ( CachedContextBaseKey >= 0 )
                        {
                          if ( (int)PnpCtxRegOpenKey(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      (__int64)v16,
                                      (__int64)L"Policies",
                                      0,
                                      0x20019u,
                                      (__int64)&v23) < 0
                            || (CachedContextBaseKey = PnpCtxRegCreateKey(
                                                         *(__int64 *)&PiPnpRtlCtx,
                                                         -2147483646,
                                                         (int)L"System\\DriverDatabase\\Policies",
                                                         0,
                                                         131078,
                                                         0LL),
                                CachedContextBaseKey >= 0)
                            && (CachedContextBaseKey = PnpCtxRegCopyTree(v8, (int)v23, 0, (int)v22, 0LL),
                                CachedContextBaseKey >= 0) )
                          {
                            v9 = PnpCtxRegOpenKey(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   (__int64)v17,
                                   (__int64)L"Services",
                                   0,
                                   0x20019u,
                                   (__int64)&v21);
                            CachedContextBaseKey = v9;
                            if ( v9 == -1073741772
                              || v9 >= 0
                              && (*(_QWORD *)&v26 = v6,
                                  CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(
                                                           *(__int64 *)&PiPnpRtlCtx,
                                                           v21,
                                                           (__int64)PipMigrateServiceCallback,
                                                           (__int64)&v26),
                                  CachedContextBaseKey >= 0) )
                            {
                              v11 = PnpCtxOpenMachine(v8, 0, v10, -1, v13, v14, (__int64 *)&v20);
                              v0 = v20;
                              CachedContextBaseKey = v11;
                              if ( v11 >= 0 )
                              {
                                CachedContextBaseKey = CmGetMatchingDeviceList(
                                                         (__int64)v20,
                                                         (__int64)&PipMigrateResetDeviceCallback,
                                                         0LL,
                                                         0LL,
                                                         0,
                                                         &v18,
                                                         0);
                                if ( CachedContextBaseKey == -1073741789 )
                                  CachedContextBaseKey = 0;
                              }
                            }
                          }
                        }
                      }
                      else
                      {
                        CachedContextBaseKey = -1073741735;
                      }
                    }
                    else
                    {
                      CachedContextBaseKey = -1073741823;
                    }
                  }
                  v29 = CachedContextBaseKey;
                  PnpCtxRegSetValue(v8, v16, (__int64)L"MigrationStatus", 4LL, (__int64)&v29, 4u);
                  if ( v0 )
                    PnpCtxCloseMachine(v0);
                }
              }
              goto LABEL_43;
            }
          }
LABEL_42:
          CachedContextBaseKey = -1073741823;
        }
      }
    }
  }
LABEL_43:
  if ( v21 )
    PnpCtxRegCloseKey(v2, v21);
  if ( v22 )
    PnpCtxRegCloseKey(v2, v22);
  if ( v23 )
    PnpCtxRegCloseKey(v2, v23);
  if ( v15 )
    PnpCtxRegCloseKey(v2, v15);
  if ( v17 )
    PnpCtxRegCloseKey(v2, v17);
  if ( v16 )
    PnpCtxRegCloseKey(v2, v16);
  if ( *((_QWORD *)&v26 + 1) )
    PnpCtxRegCloseKey(v2, *((void **)&v26 + 1));
  return (unsigned int)CachedContextBaseKey;
}
