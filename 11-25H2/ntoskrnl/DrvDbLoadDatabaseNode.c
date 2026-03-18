/*
 * XREFs of DrvDbLoadDatabaseNode @ 0x140931608
 * Callers:
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408127F4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenContext @ 0x140813828 (DrvDbOpenContext.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140930D80 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A84448 (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408140A8 (DrvDbGetSecurityDescriptor.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140814430 (DrvDbInitializeDatabaseNodeVersion.c)
 *     _PnpCtxRegOpenKey @ 0x1408C9B94 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C9F0C (_PnpCtxGetCachedContextBaseKey.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14092EF8C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbUnloadDatabaseNode @ 0x1409317DC (DrvDbUnloadDatabaseNode.c)
 *     PiDrvDbNodeActionCallback @ 0x140931920 (PiDrvDbNodeActionCallback.c)
 *     _PnpCtxRegCreateTree @ 0x140931C40 (_PnpCtxRegCreateTree.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbLoadDatabaseNode(__int64 *a1, __int64 a2)
{
  int v2; // eax
  int CachedContextBaseKey; // ebx
  __int64 v4; // rsi
  void *v5; // r13
  __int64 (__fastcall *v6)(int, int, int, int, __int64, __int64); // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v15; // r12
  int v16; // edx
  int v17; // edx
  int v18; // eax
  void *SecurityDescriptor; // rax
  __int64 v20; // r8
  _DWORD *v21; // rbx
  const wchar_t *v22; // rdx
  int DriverDatabaseMappedProperty; // eax
  int v24; // ecx
  unsigned int *v25; // rsi
  unsigned int *v26; // rax
  int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  _QWORD v30[2]; // [rsp+40h] [rbp-10h] BYREF
  int v31; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v32; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_DWORD *)(a2 + 64);
  CachedContextBaseKey = 0;
  v33 = 0LL;
  v4 = 0LL;
  v32 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v30[0] = 0LL;
  v31 = 1;
  if ( (v2 & 0x21) == 0 )
  {
    v6 = *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64))(a2 + 80);
    if ( v6 )
    {
      v33 = a2 + 96;
      v9 = *(_QWORD *)(a2 + 88);
      v10 = *(_QWORD *)(a2 + 24);
      if ( v6 == PiDrvDbNodeActionCallback )
        v11 = PiDrvDbNodeActionCallback((int)a1, v10, 1, 1, (__int64)&v33, v9);
      else
        v11 = guard_dispatch_icall_no_overrides(a1);
      if ( v11 == -1073741822 )
      {
        v6 = 0LL;
      }
      else if ( v11 < 0 )
      {
        CachedContextBaseKey = v11;
LABEL_10:
        if ( v6 == PiDrvDbNodeActionCallback )
          v13 = PiDrvDbNodeActionCallback((int)a1, *(_QWORD *)(a2 + 24), 1, 2, (__int64)&v33, *(_QWORD *)(a2 + 88));
        else
          v13 = guard_dispatch_icall_no_overrides(a1);
        if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741822 && !CachedContextBaseKey )
          CachedContextBaseKey = v13;
        goto LABEL_13;
      }
    }
    if ( !*(_QWORD *)(a2 + 96) )
    {
      v17 = *(_DWORD *)(a2 + 40);
      if ( v17 )
      {
        CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*a1, v17, v30);
        if ( CachedContextBaseKey < 0 )
          goto LABEL_9;
        v4 = v30[0];
      }
      CachedContextBaseKey = PnpCtxRegOpenKey(*a1, v4, *(_QWORD *)(a2 + 56), 0, 0x2000000u, a2 + 96);
      if ( CachedContextBaseKey < 0 )
      {
LABEL_9:
        if ( !v6 )
          goto LABEL_13;
        goto LABEL_10;
      }
    }
LABEL_8:
    v12 = *(_DWORD *)(a2 + 64);
    if ( (v12 & 8) != 0 )
      goto LABEL_9;
    v20 = *(_QWORD *)(a2 + 96);
    v21 = (_DWORD *)(a2 + 68);
    v22 = *(const wchar_t **)(a2 + 24);
    *(_DWORD *)(a2 + 64) = v12 | 8;
    DriverDatabaseMappedProperty = DrvDbGetDriverDatabaseMappedProperty(
                                     (__int64)a1,
                                     v22,
                                     v20,
                                     (__int64)DEVPKEY_DriverDatabase_Version,
                                     &v31,
                                     (_BYTE *)(a2 + 68),
                                     4u,
                                     &v32);
    if ( DriverDatabaseMappedProperty == -1073741275 )
    {
      v24 = *((_DWORD *)a1 + 2);
      if ( (unsigned int)(v24 - 1) <= 0xFFFFFFFD )
      {
        *v21 = v24;
        DrvDbInitializeDatabaseNodeVersion(a1, a2);
        goto LABEL_47;
      }
    }
    else if ( DriverDatabaseMappedProperty >= 0 )
    {
      if ( v31 != 7 || v32 != 4 )
        *v21 = -1;
LABEL_47:
      v25 = (unsigned int *)(a2 + 72);
      CachedContextBaseKey = DrvDbGetDriverDatabaseMappedProperty(
                               (__int64)a1,
                               *(const wchar_t **)(a2 + 24),
                               *(_QWORD *)(a2 + 96),
                               (__int64)DEVPKEY_DriverDatabase_SchemaVersion,
                               &v31,
                               (_BYTE *)(a2 + 72),
                               4u,
                               &v32);
      if ( CachedContextBaseKey < 0 )
      {
        *v25 = 0;
        CachedContextBaseKey = 0;
      }
      else
      {
        v26 = (unsigned int *)(a2 + 72);
        if ( v31 == 7 )
        {
          if ( v32 == 4 )
            goto LABEL_52;
          v26 = (unsigned int *)(a2 + 72);
        }
        *v25 = -1;
        v25 = v26;
      }
LABEL_52:
      v27 = *(_DWORD *)(a2 + 68);
      if ( v27 && (v27 == -1 || (v28 = v27 & 0xFFFF0000, v28 < 0x6020000) || v28 > ((_DWORD)a1[1] & 0xFFFF0000))
        || (v29 = *v25, *v25 == -1)
        || v29 >= 0x10001 && HIWORD(v29) != 1 )
      {
        DrvDbUnloadDatabaseNode(a1, a2);
        *(_DWORD *)(a2 + 64) |= 4u;
        CachedContextBaseKey = -1073740697;
      }
      goto LABEL_9;
    }
    *v21 = 0;
    goto LABEL_47;
  }
  v15 = a2 + 96;
  if ( *(_QWORD *)(a2 + 96) )
    goto LABEL_13;
  v16 = *(_DWORD *)(a2 + 40);
  if ( v16 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*a1, v16, v30);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_13;
    v4 = v30[0];
  }
  v18 = PnpCtxRegOpenKey(*a1, v4, *(_QWORD *)(a2 + 56), 0, 0x2000000u, v15);
  CachedContextBaseKey = v18;
  if ( v18 != -1073741772 )
  {
    if ( v18 < 0 )
      goto LABEL_13;
    goto LABEL_8;
  }
  SecurityDescriptor = DrvDbGetSecurityDescriptor();
  v5 = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    CachedContextBaseKey = -1073741595;
    goto LABEL_13;
  }
  CachedContextBaseKey = PnpCtxRegCreateTree(
                           *a1,
                           v4,
                           *(_QWORD *)(a2 + 56),
                           0LL,
                           0x2000000,
                           SecurityDescriptor,
                           v15,
                           0LL);
  if ( CachedContextBaseKey >= 0 )
  {
    DrvDbInitializeDatabaseNodeVersion(a1, a2);
    goto LABEL_8;
  }
LABEL_13:
  *(_DWORD *)(a2 + 160) = CachedContextBaseKey;
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)CachedContextBaseKey;
}
