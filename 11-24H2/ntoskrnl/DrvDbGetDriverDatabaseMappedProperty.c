/*
 * XREFs of DrvDbGetDriverDatabaseMappedProperty @ 0x140924EA0
 * Callers:
 *     DrvDbGetDriverDatabaseCompositeMappedPropertyKeys @ 0x14082226C (DrvDbGetDriverDatabaseCompositeMappedPropertyKeys.c)
 *     DrvDbDispatchDriverDatabase @ 0x1408BB400 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbLoadDatabaseNode @ 0x140927C38 (DrvDbLoadDatabaseNode.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140925BB0 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     DrvDbFindDatabaseNode @ 0x140928D98 (DrvDbFindDatabaseNode.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A85194 (DrvDbOpenDriverDatabaseRegKey.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _BYTE *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int DatabaseNode; // ebx
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r10d
  unsigned int i; // edx
  __int64 v17; // r8
  __int64 (**v18)[3]; // r15
  unsigned int j; // edx
  __int64 (**v20)[3]; // r9
  __int64 *v21; // r8
  __int64 v22; // rdi
  int v23; // edx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int k; // edx
  int v29; // eax
  __int64 v30; // rax
  void *v31; // rcx
  unsigned int v32; // eax
  size_t v33; // r8
  const wchar_t *v34; // rdx
  _BYTE *v35; // rdx
  bool v36; // cf
  __int64 v37; // rax
  __int64 v38; // rax
  char v39; // cl
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  size_t v45; // rax
  __int64 (**v46)[3]; // r9
  __int64 *v47; // r8
  __int64 v48; // rcx
  __int64 v49; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  Handle = 0LL;
  v49 = 0LL;
  *a5 = 0;
  *a8 = 0;
  DatabaseNode = 0;
  v12 = 0LL;
  v13 = wcsicmp(a2, L"*");
  LODWORD(v14) = 0;
  if ( !v13 )
  {
    DatabaseNode = -1073741637;
    goto LABEL_22;
  }
  v15 = *(_DWORD *)(a4 + 16);
  if ( v15 == 2 )
  {
    v27 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v27 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v27 )
    {
      *a5 = 18;
      v30 = -1LL;
      do
        ++v30;
      while ( a2[v30] );
      v31 = a6;
      v32 = 2 * v30 + 2;
      *a8 = v32;
      if ( !a6 || a7 < v32 )
        goto LABEL_46;
      v33 = v32;
      v34 = a2;
      goto LABEL_45;
    }
  }
  for ( i = 0; i < 8; ++i )
  {
    v17 = off_140E0A430[i];
    if ( *(_DWORD *)(v17 + 16) == v15 )
    {
      v14 = *(_QWORD *)v17 - *(_QWORD *)a4;
      if ( *(_QWORD *)v17 == *(_QWORD *)a4 )
        v14 = *(_QWORD *)(v17 + 8) - *(_QWORD *)(a4 + 8);
      if ( !v14 )
      {
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v49);
        if ( DatabaseNode < 0 )
          goto LABEL_22;
        v25 = *(_DWORD *)(a4 + 16);
        switch ( v25 )
        {
          case 5:
            v26 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
              v26 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v26 )
            {
              v35 = a6;
              *a5 = 17;
              *a8 = 1;
              if ( a6 && a7 )
              {
                v36 = *(_QWORD *)(v49 + 96) != 0LL;
LABEL_89:
                *v35 = -v36;
                goto LABEL_22;
              }
LABEL_46:
              DatabaseNode = -1073741789;
            }
            goto LABEL_22;
          case 6:
            v37 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
              v37 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v37 )
            {
              *a5 = 17;
              *a8 = 1;
              if ( a6 && a7 )
              {
                *a6 = (*(_QWORD *)(a1 + 48) != v49) - 1;
                goto LABEL_22;
              }
              goto LABEL_46;
            }
            goto LABEL_22;
          case 7:
            v38 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
              v38 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v38 )
              goto LABEL_22;
            v35 = a6;
            *a5 = 17;
            *a8 = 1;
            if ( !a6 || !a7 )
              goto LABEL_46;
            v39 = *(_DWORD *)(v49 + 64) & 4;
            goto LABEL_88;
          case 11:
            v40 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
              v40 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v40 )
            {
              *a5 = 7;
              *a8 = 4;
              if ( a6 && a7 >= 4 )
              {
                *(_DWORD *)a6 = *(_DWORD *)(a1 + 12);
                goto LABEL_22;
              }
              goto LABEL_46;
            }
            goto LABEL_22;
          case 15:
            v41 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_LoadStatus;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_LoadStatus )
              v41 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v41 )
            {
              *a5 = 24;
              *a8 = 4;
              if ( a6 && a7 >= 4 )
              {
                *(_DWORD *)a6 = *(_DWORD *)(v49 + 160);
                goto LABEL_22;
              }
              goto LABEL_46;
            }
            goto LABEL_22;
          case 23:
            v42 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Extended;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Extended )
              v42 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v42 )
              goto LABEL_22;
            v35 = a6;
            *a5 = 17;
            *a8 = 1;
            if ( !a6 || !a7 )
              goto LABEL_46;
            v39 = *(_DWORD *)(v49 + 64) & 0x10;
LABEL_88:
            v36 = v39 != 0;
            goto LABEL_89;
        }
        if ( v25 != 24 )
          goto LABEL_22;
        v43 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_ParentNode;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_ParentNode )
          v43 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v43 )
          goto LABEL_22;
        v44 = v49;
        if ( !*(_QWORD *)(v49 + 32) )
        {
          DatabaseNode = -1073741772;
          goto LABEL_22;
        }
        *a5 = 18;
        v45 = (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(v44 + 32) + 16LL) + 2;
        *a8 = v45;
        v31 = a6;
        if ( !a6 || a7 < (unsigned int)v45 )
          goto LABEL_46;
        v33 = v45;
        v34 = *(const wchar_t **)(*(_QWORD *)(v44 + 32) + 24LL);
LABEL_45:
        memmove(v31, v34, v33);
        goto LABEL_22;
      }
    }
  }
  v18 = 0LL;
  for ( j = 0; j < 0xC; ++j )
  {
    LODWORD(v14) = 5 * j;
    v20 = &off_14000C600 + 5 * j;
    v21 = (__int64 *)*v20;
    if ( LODWORD((**v20)[2]) == v15 )
    {
      v14 = *v21 - *(_QWORD *)a4;
      if ( *v21 == *(_QWORD *)a4 )
        v14 = v21[1] - *(_QWORD *)(a4 + 8);
      if ( !v14 )
      {
        v18 = &off_14000C600 + 5 * j;
        break;
      }
    }
  }
  if ( v18 )
  {
    v22 = a1;
    goto LABEL_17;
  }
  v18 = 0LL;
  for ( k = 0; k < 4; ++k )
  {
    v46 = &off_14000C7E0 + 5 * k;
    v47 = (__int64 *)*v46;
    if ( LODWORD((**v46)[2]) == v15 )
    {
      v48 = *v47 - *(_QWORD *)a4;
      if ( *v47 == *(_QWORD *)a4 )
        v48 = v47[1] - *(_QWORD *)(a4 + 8);
      if ( !v48 )
      {
        v18 = &off_14000C7E0 + 5 * k;
        break;
      }
    }
  }
  if ( !v18 )
  {
    DatabaseNode = -1073741802;
    goto LABEL_22;
  }
  v22 = a1;
  DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v49);
  if ( DatabaseNode >= 0 )
  {
    v12 = v49;
LABEL_17:
    if ( a3 && (!v12 || (*(_DWORD *)(v12 + 64) & 0x10) == 0)
      || (!v12 || (*(_DWORD *)(v12 + 64) & 0x10) == 0
        ? (v29 = DrvDbOpenDriverDatabaseRegKey(v22, a2, 1LL, 0LL))
        : (v29 = DrvDbOpenObjectRegKey(v22, *(_QWORD *)(v22 + 40), 1, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL, 0LL)),
          DatabaseNode = v29,
          v29 >= 0) )
    {
      v23 = a3;
      if ( Handle )
        v23 = (int)Handle;
      DatabaseNode = DrvDbGetRegValueMappedProperty(v14, v23, (int)v18, (int)a5, a6, a7, (__int64)a8);
    }
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DatabaseNode;
}
