/*
 * XREFs of DrvDbLoadDatabaseNode @ 0x140927C38
 * Callers:
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140822E34 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenContext @ 0x140823D90 (DrvDbOpenContext.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409273B0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A85194 (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     DrvDbGetSecurityDescriptor @ 0x140824610 (DrvDbGetSecurityDescriptor.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140824998 (DrvDbInitializeDatabaseNodeVersion.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140924EA0 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbUnloadDatabaseNode @ 0x140927E0C (DrvDbUnloadDatabaseNode.c)
 *     PiDrvDbNodeActionCallback @ 0x140927F50 (PiDrvDbNodeActionCallback.c)
 *     _PnpCtxRegCreateTree @ 0x140928268 (_PnpCtxRegCreateTree.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v13; // rdx
  int v14; // eax
  __int64 v16; // r12
  int v17; // edx
  int v18; // edx
  int v19; // eax
  void *SecurityDescriptor; // rax
  __int64 v21; // r8
  _DWORD *v22; // rbx
  const wchar_t *v23; // rdx
  int DriverDatabaseMappedProperty; // eax
  int v25; // ecx
  unsigned int *v26; // rsi
  unsigned int *v27; // rax
  int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  _QWORD v31[2]; // [rsp+40h] [rbp-10h] BYREF
  int v32; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v33; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_DWORD *)(a2 + 64);
  CachedContextBaseKey = 0;
  v34 = 0LL;
  v4 = 0LL;
  v33 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v31[0] = 0LL;
  v32 = 1;
  if ( (v2 & 0x21) == 0 )
  {
    v6 = *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64))(a2 + 80);
    if ( v6 )
    {
      v34 = a2 + 96;
      v9 = *(_QWORD *)(a2 + 88);
      v10 = *(_QWORD *)(a2 + 24);
      if ( v6 == PiDrvDbNodeActionCallback )
        v11 = PiDrvDbNodeActionCallback((int)a1, v10, 1, 1, (__int64)&v34, v9);
      else
        v11 = guard_dispatch_icall_no_overrides(a1, v10);
      if ( v11 == -1073741822 )
      {
        v6 = 0LL;
      }
      else if ( v11 < 0 )
      {
        CachedContextBaseKey = v11;
LABEL_10:
        v13 = *(_QWORD *)(a2 + 24);
        if ( v6 == PiDrvDbNodeActionCallback )
          v14 = PiDrvDbNodeActionCallback((int)a1, v13, 1, 2, (__int64)&v34, *(_QWORD *)(a2 + 88));
        else
          v14 = guard_dispatch_icall_no_overrides(a1, v13);
        if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741822 && !CachedContextBaseKey )
          CachedContextBaseKey = v14;
        goto LABEL_13;
      }
    }
    if ( !*(_QWORD *)(a2 + 96) )
    {
      v18 = *(_DWORD *)(a2 + 40);
      if ( v18 )
      {
        CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*a1, v18, v31);
        if ( CachedContextBaseKey < 0 )
          goto LABEL_9;
        v4 = v31[0];
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
    v21 = *(_QWORD *)(a2 + 96);
    v22 = (_DWORD *)(a2 + 68);
    v23 = *(const wchar_t **)(a2 + 24);
    *(_DWORD *)(a2 + 64) = v12 | 8;
    DriverDatabaseMappedProperty = DrvDbGetDriverDatabaseMappedProperty(
                                     (__int64)a1,
                                     v23,
                                     v21,
                                     (__int64)DEVPKEY_DriverDatabase_Version,
                                     &v32,
                                     (_BYTE *)(a2 + 68),
                                     4u,
                                     &v33);
    if ( DriverDatabaseMappedProperty == -1073741275 )
    {
      v25 = *((_DWORD *)a1 + 2);
      if ( (unsigned int)(v25 - 1) <= 0xFFFFFFFD )
      {
        *v22 = v25;
        DrvDbInitializeDatabaseNodeVersion(a1, a2);
        goto LABEL_47;
      }
    }
    else if ( DriverDatabaseMappedProperty >= 0 )
    {
      if ( v32 != 7 || v33 != 4 )
        *v22 = -1;
LABEL_47:
      v26 = (unsigned int *)(a2 + 72);
      CachedContextBaseKey = DrvDbGetDriverDatabaseMappedProperty(
                               (__int64)a1,
                               *(const wchar_t **)(a2 + 24),
                               *(_QWORD *)(a2 + 96),
                               (__int64)DEVPKEY_DriverDatabase_SchemaVersion,
                               &v32,
                               (_BYTE *)(a2 + 72),
                               4u,
                               &v33);
      if ( CachedContextBaseKey < 0 )
      {
        *v26 = 0;
        CachedContextBaseKey = 0;
      }
      else
      {
        v27 = (unsigned int *)(a2 + 72);
        if ( v32 == 7 )
        {
          if ( v33 == 4 )
            goto LABEL_52;
          v27 = (unsigned int *)(a2 + 72);
        }
        *v26 = -1;
        v26 = v27;
      }
LABEL_52:
      v28 = *(_DWORD *)(a2 + 68);
      if ( v28 && (v28 == -1 || (v29 = v28 & 0xFFFF0000, v29 < 0x6020000) || v29 > ((_DWORD)a1[1] & 0xFFFF0000))
        || (v30 = *v26, *v26 == -1)
        || v30 >= 0x10001 && HIWORD(v30) != 1 )
      {
        DrvDbUnloadDatabaseNode(a1, a2);
        *(_DWORD *)(a2 + 64) |= 4u;
        CachedContextBaseKey = -1073740697;
      }
      goto LABEL_9;
    }
    *v22 = 0;
    goto LABEL_47;
  }
  v16 = a2 + 96;
  if ( *(_QWORD *)(a2 + 96) )
    goto LABEL_13;
  v17 = *(_DWORD *)(a2 + 40);
  if ( v17 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*a1, v17, v31);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_13;
    v4 = v31[0];
  }
  v19 = PnpCtxRegOpenKey(*a1, v4, *(_QWORD *)(a2 + 56), 0, 0x2000000u, v16);
  CachedContextBaseKey = v19;
  if ( v19 != -1073741772 )
  {
    if ( v19 < 0 )
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
                           v16,
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
