/*
 * XREFs of DrvDbGetDriverPackageMappedProperty @ 0x1409305BC
 * Callers:
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140812314 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x14092F430 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbDispatchDriverPackage @ 0x1409303A0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1409305BC (DrvDbGetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1404209E0 (RtlStringCchCopyExW.c)
 *     wcsrchr @ 0x1404FDA00 (wcsrchr.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     _PnpCtxRegOpenKey @ 0x1408C9B94 (_PnpCtxRegOpenKey.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x14092F430 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x14092FAC4 (DrvDbGetObjectDatabaseNodeName.c)
 *     DrvDbGetRegValueMappedProperty @ 0x14092FB80 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1409305BC (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x140930FB4 (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x140953C60 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140A848FC (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedProperty(
        __int64 *a1,
        const wchar_t *a2,
        HANDLE a3,
        __int64 a4,
        __int64 (**a5)[3],
        int *pszDest,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r13
  unsigned int *v10; // r14
  unsigned int v11; // r9d
  __int64 *v12; // r10
  int v14; // r8d
  int DriverPackageMappedProperty; // ebx
  __int64 (**v17)[3]; // rdx
  __int64 *v18; // r11
  __int64 v19; // rcx
  HANDLE v20; // rcx
  __int64 (**v21)[3]; // rsi
  int RegValueMappedProperty; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  wchar_t *Pool2; // r15
  HANDLE v26; // rdx
  int v27; // eax
  NTSTRSAFE_PWSTR v28; // rcx
  unsigned int v29; // eax
  size_t v30; // r8
  wchar_t *v31; // rdx
  __int64 v33; // rax
  wchar_t *v34; // rax
  int v35; // r8d
  int v36; // eax
  __int64 v37; // rcx
  int v38; // r8d
  int v39; // edx
  int v40; // r8d
  __int64 v41; // rax
  NTSTRSAFE_PWSTR v42; // r9
  int ObjectDatabaseNodeName; // eax
  unsigned __int64 v44; // r9
  wchar_t *v45; // rdx
  unsigned __int64 i; // rcx
  __int64 v47; // r10
  int v48; // ecx
  size_t v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // r8d
  int v59; // r8d
  int v60; // eax
  unsigned int v61; // eax
  int *v62; // rcx
  wchar_t *v63; // rax
  wchar_t *v64; // r9
  __int64 v65; // rdx
  unsigned int v66; // eax
  int v67; // eax
  bool v68; // zf
  __int64 v69; // rax
  __int64 v70; // r8
  unsigned int v71; // edx
  __int64 v72; // rdx
  NTSTRSAFE_PWSTR v73; // rcx
  unsigned int v74; // edx
  int v75; // eax
  char v76; // dl
  int *v77; // rax
  int v78; // eax
  int v79; // r8d
  int v80; // r8d
  int v81; // eax
  int v82; // r8d
  int v83; // eax
  int v84; // r8d
  wchar_t *v85; // rcx
  unsigned int pcchRemaining; // [rsp+28h] [rbp-89h]
  HANDLE Handle; // [rsp+58h] [rbp-59h] BYREF
  wchar_t v88[2]; // [rsp+60h] [rbp-51h] BYREF
  wchar_t v89[2]; // [rsp+64h] [rbp-4Dh] BYREF
  wchar_t v90[4]; // [rsp+68h] [rbp-49h] BYREF
  wchar_t *v91; // [rsp+70h] [rbp-41h] BYREF
  int v92; // [rsp+78h] [rbp-39h] BYREF
  NTSTRSAFE_PWSTR v93; // [rsp+80h] [rbp-31h] BYREF
  __int128 v94; // [rsp+88h] [rbp-29h] BYREF
  __int64 v95; // [rsp+98h] [rbp-19h]
  HANDLE v96; // [rsp+A0h] [rbp-11h] BYREF
  unsigned __int64 v97; // [rsp+A8h] [rbp-9h]
  int v99; // [rsp+100h] [rbp+4Fh]
  wchar_t v100; // [rsp+110h] [rbp+5Fh] BYREF

  v99 = (int)a2;
  v8 = a5;
  v10 = a8;
  v11 = 0;
  v96 = 0LL;
  v12 = a1;
  v97 = 0LL;
  *(_DWORD *)a5 = 0;
  *v10 = 0;
  v14 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  v95 = 0LL;
  LODWORD(v91) = 0;
  DriverPackageMappedProperty = 0;
  *(_DWORD *)v90 = 0;
  *(_DWORD *)v88 = 0;
  *(_DWORD *)v89 = 0;
  v92 = 0;
  v93 = 0LL;
  LOBYTE(v100) = 0;
  v94 = 0LL;
  switch ( v14 )
  {
    case 2:
      v41 = *(_QWORD *)a4 - DEVPKEY_NODE;
      if ( *(_QWORD *)a4 == DEVPKEY_NODE )
        v41 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
      if ( !v41 )
      {
        v42 = (NTSTRSAFE_PWSTR)pszDest;
        pcchRemaining = a7 >> 1;
        *v8 = 18;
        ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName((int)a1, 2, (int)a2, v42, pcchRemaining, v10);
        DriverPackageMappedProperty = ObjectDatabaseNodeName;
        if ( (int)(ObjectDatabaseNodeName + 0x80000000) < 0 || ObjectDatabaseNodeName == -1073741789 )
          *v10 *= 2;
        goto LABEL_42;
      }
      while ( 1 )
      {
LABEL_11:
        if ( v11 >= 0x26 )
          return (unsigned int)-1073741802;
        v17 = &off_14000C170 + 5 * v11;
        v18 = (__int64 *)*v17;
        a5 = v17;
        if ( *((_DWORD *)v18 + 4) == v14 )
        {
          v19 = *v18 - *(_QWORD *)a4;
          if ( *v18 == *(_QWORD *)a4 )
            v19 = v18[1] - *(_QWORD *)(a4 + 8);
          if ( !v19 )
            break;
        }
        ++v11;
      }
      if ( !v17 )
        return (unsigned int)-1073741802;
      if ( a3 )
      {
        v20 = (HANDLE)v97;
      }
      else
      {
        DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                        (_DWORD)v12,
                                        0,
                                        2,
                                        (_DWORD)a2,
                                        1,
                                        0,
                                        (__int64)&Handle,
                                        0LL,
                                        0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_42;
        v20 = Handle;
      }
      v21 = a5;
      if ( !*((_DWORD *)a5 + 8) )
      {
        if ( a3 )
          v20 = a3;
        RegValueMappedProperty = DrvDbGetRegValueMappedProperty((__int64)v20, v20, (__int64)a5, v8, pszDest, a7, v10);
        DriverPackageMappedProperty = RegValueMappedProperty;
        if ( RegValueMappedProperty != -1073741275
          && (RegValueMappedProperty && RegValueMappedProperty != -1073741789 || *v8 != 18 || *v10 != 2)
          || *(_DWORD *)(a4 + 16) != 7 )
        {
          goto LABEL_42;
        }
        v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
          v23 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v23 )
          goto LABEL_42;
        v84 = (int)Handle;
        if ( a3 )
          v84 = (int)a3;
        if ( (int)DrvDbGetDriverPackageSignerScore((int)a1, v99, v84, (wchar_t *)&v92) < 0 || v92 != 218103811 )
          goto LABEL_42;
        v85 = (wchar_t *)pszDest;
        DriverPackageMappedProperty = 0;
        *v8 = 18;
        *v10 = 36;
        if ( v85 && a7 >= 0x24 )
        {
          RtlStringCchCopyExW(v85, (unsigned __int64)a7 >> 1, L"Microsoft Windows", 0LL, 0LL, 0x800u);
          goto LABEL_42;
        }
        goto LABEL_245;
      }
      LODWORD(a5) = 48;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        goto LABEL_95;
      v26 = Handle;
      if ( a3 )
        v26 = a3;
      v27 = PnpCtxRegQueryValue(v24, v26, L"Version", &v91, Pool2, &a5);
      DriverPackageMappedProperty = v27;
      if ( v27 == -1073741772 )
      {
        DriverPackageMappedProperty = -1073741275;
        goto LABEL_41;
      }
      if ( v27 == -1073741789 )
        goto LABEL_73;
      if ( v27 < 0 )
        goto LABEL_41;
      if ( (_DWORD)v91 == 3 && (_DWORD)a5 == 48 )
      {
        v28 = (NTSTRSAFE_PWSTR)pszDest;
        *v8 = *((_DWORD *)v21 + 2);
        v29 = *((_DWORD *)v21 + 8);
        *v10 = v29;
        if ( v28 && a7 >= v29 )
        {
          v30 = *((unsigned int *)v21 + 8);
          v31 = (wchar_t *)((char *)Pool2 + *((unsigned int *)v21 + 7));
          goto LABEL_40;
        }
        goto LABEL_90;
      }
LABEL_114:
      DriverPackageMappedProperty = -1073741823;
      goto LABEL_41;
    case 18:
      v50 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
        v50 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v50 )
        goto LABEL_11;
      if ( a3 )
      {
        v58 = (int)a3;
      }
      else
      {
        DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((_DWORD)a1, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_42;
        v58 = (int)Handle;
        LODWORD(v12) = (_DWORD)a1;
      }
      DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                      (int)v12,
                                      (int)a2,
                                      v58,
                                      (int)&DEVPKEY_DriverPackage_ConfigurableOverride,
                                      (int)v8,
                                      (NTSTRSAFE_PWSTR)pszDest,
                                      a7,
                                      (__int64)v10);
      if ( (int)(DriverPackageMappedProperty + 0x80000000) < 0 || DriverPackageMappedProperty == -1073741789 )
        goto LABEL_42;
      v59 = (int)Handle;
      if ( a3 )
        v59 = (int)a3;
      v60 = DrvDbGetDriverPackageMappedProperty(
              (int)a1,
              v99,
              v59,
              (int)&DEVPKEY_DriverPackage_ConfigurableFlags,
              (int)v8,
              v90,
              4,
              (__int64)v10);
      DriverPackageMappedProperty = v60;
      if ( v60 == -1073741789 )
      {
        DriverPackageMappedProperty = 0;
      }
      else
      {
        if ( v60 < 0 )
          goto LABEL_42;
        if ( *v8 == 7 && *v10 == 4 )
        {
          v61 = *(_DWORD *)v90;
          goto LABEL_135;
        }
      }
      v61 = -1;
      *(_DWORD *)v90 = -1;
      goto LABEL_135;
    case 33:
      v33 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
        v33 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v33 )
        goto LABEL_11;
      if ( !a3 )
      {
        DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                        (_DWORD)a1,
                                        0,
                                        2,
                                        (_DWORD)a2,
                                        1,
                                        0,
                                        (__int64)&Handle,
                                        0LL,
                                        0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_42;
      }
      v34 = (wchar_t *)ExAllocatePool2(0x100uLL);
      v91 = v34;
      Pool2 = v34;
      if ( !v34 )
      {
LABEL_95:
        DriverPackageMappedProperty = -1073741801;
        goto LABEL_42;
      }
      v35 = (int)Handle;
      if ( a3 )
        v35 = (int)a3;
      v36 = DrvDbGetDriverPackageMappedProperty(
              (int)a1,
              (int)a2,
              v35,
              (int)&DEVPKEY_DriverPackage_ProviderName,
              (int)v8,
              v34,
              1042,
              (__int64)v10);
      DriverPackageMappedProperty = v36;
      if ( v36 == -1073741789 )
      {
LABEL_73:
        DriverPackageMappedProperty = -1073741595;
        goto LABEL_41;
      }
      if ( v36 < 0 )
      {
LABEL_41:
        ExFreePoolWithTag(Pool2, 0);
LABEL_42:
        if ( v96 )
          ZwClose(v96);
        if ( Handle )
          ZwClose(Handle);
        return (unsigned int)DriverPackageMappedProperty;
      }
      if ( *v8 == 18 && *v10 - 2 <= 0x206 )
      {
        v37 = (*v10 >> 1) - 1;
        v97 = (unsigned int)v37;
        if ( !Pool2[v37] )
        {
          v38 = (int)Handle;
          v39 = 2 * v37;
          LODWORD(a8) = 2 * v37;
          if ( a3 )
            v38 = (int)a3;
          LODWORD(a5) = 1040 - v39;
          v93 = &Pool2[(unsigned int)v37 + 1];
          DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                          (int)a1,
                                          v99,
                                          v38,
                                          (int)&DEVPKEY_DriverPackage_OriginalInfName,
                                          (int)v8,
                                          v93,
                                          1040 - v39,
                                          (__int64)v10);
          if ( DriverPackageMappedProperty == -1073741275 )
          {
            v40 = (int)Handle;
            if ( a3 )
              v40 = (int)a3;
            DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                            (int)a1,
                                            v99,
                                            v40,
                                            (int)&DEVPKEY_DriverPackage_DriverInfName,
                                            (int)v8,
                                            v93,
                                            (int)a5,
                                            (__int64)v10);
          }
          if ( DriverPackageMappedProperty == -1073741789 )
          {
            DriverPackageMappedProperty = -1073741595;
            goto LABEL_72;
          }
          if ( DriverPackageMappedProperty < 0 )
          {
LABEL_72:
            Pool2 = v91;
            goto LABEL_41;
          }
          if ( *v8 != 18 || *v10 - 2 > 0x206 )
          {
            DriverPackageMappedProperty = -1073741823;
            goto LABEL_72;
          }
          Pool2 = v91;
          v44 = v97;
          v45 = v91;
          v91[v97] = 45;
          for ( i = *v45; (_WORD)i; i = *v45 )
          {
            if ( (unsigned __int16)i <= 0x3Au && (v47 = 0x400200100000000LL, _bittest64(&v47, i)) || (_WORD)i == 126 )
              *v45 = 95;
            ++v45;
          }
          v48 = (_DWORD)a8 + 2;
          Pool2[v44] = 45;
          *v8 = 18;
          v49 = *v10 + v48;
          *v10 = v49;
          v28 = (NTSTRSAFE_PWSTR)pszDest;
          if ( pszDest && a7 >= (unsigned int)v49 )
          {
            v30 = v49;
            v31 = Pool2;
LABEL_40:
            memmove(v28, v31, v30);
            goto LABEL_41;
          }
LABEL_90:
          DriverPackageMappedProperty = -1073741789;
          goto LABEL_41;
        }
      }
      goto LABEL_114;
    case 42:
      v51 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_UniqueId;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_UniqueId )
        v51 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v51 )
        goto LABEL_11;
      v63 = wcsrchr(a2, 0x5Fu);
      v64 = v63;
      if ( !v63 )
      {
        DriverPackageMappedProperty = -1073741773;
        goto LABEL_42;
      }
      v65 = -1LL;
      do
        ++v65;
      while ( v63[v65 + 1] );
      *v8 = 18;
      v66 = *v10 + 2 + 2 * v65;
      *v10 = v66;
      if ( pszDest && a7 >= v66 )
      {
        memmove(pszDest, v64 + 1, v66);
        goto LABEL_42;
      }
LABEL_146:
      DriverPackageMappedProperty = -1073741789;
      goto LABEL_42;
    case 29:
      v52 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
        v52 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v52 )
      {
LABEL_150:
        if ( !a3 )
        {
          DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey(
                                          (_DWORD)a1,
                                          (_DWORD)a2,
                                          1,
                                          0,
                                          (__int64)&Handle,
                                          0LL);
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_42;
          a3 = Handle;
          v12 = a1;
        }
        v67 = PnpCtxRegOpenKey(*v12, (__int64)a3, (__int64)L"Configurations", 0, 9u, (__int64)&v96);
        DriverPackageMappedProperty = v67;
        if ( v67 == -1073741772 )
          goto LABEL_170;
        if ( v67 < 0 )
          goto LABEL_42;
        v68 = *(_DWORD *)(a4 + 16) == 30;
        *(_WORD *)((char *)&v95 + 1) = 0;
        BYTE3(v95) = 0;
        *(_QWORD *)&v94 = pszDest;
        HIDWORD(v94) = 0;
        HIDWORD(v95) = 0;
        if ( !v68 )
          goto LABEL_159;
        v69 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
          v69 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        LOBYTE(v95) = 1;
        if ( v69 )
LABEL_159:
          LOBYTE(v95) = 0;
        if ( pszDest )
          DWORD2(v94) = a7 >> 1;
        else
          DWORD2(v94) = 0;
        DriverPackageMappedProperty = PnpCtxRegEnumKeyWithCallback(*a1, v96, DrvDbGetConfigurationSubKeyCallback, &v94);
        if ( DriverPackageMappedProperty < 0 )
        {
          if ( v95 < 0 )
            DriverPackageMappedProperty = HIDWORD(v95);
          goto LABEL_42;
        }
        if ( !HIDWORD(v94) )
        {
LABEL_170:
          DriverPackageMappedProperty = -1073741275;
          goto LABEL_42;
        }
        v70 = v94;
        v71 = HIDWORD(v94) + 1;
        DriverPackageMappedProperty = HIDWORD(v95);
        *v8 = 8210;
        HIDWORD(v94) = v71;
        *v10 = 2 * v71;
        if ( v70 && 2 * (unsigned __int64)v71 <= a7 )
        {
          *(_WORD *)(v70 + 2LL * (v71 - 1)) = 0;
          goto LABEL_42;
        }
        goto LABEL_146;
      }
      break;
  }
  if ( v14 == 30 )
  {
    v53 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
      v53 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v53 )
      goto LABEL_11;
    goto LABEL_150;
  }
  if ( v14 != 32 )
  {
    if ( v14 != 38 )
    {
      if ( v14 != 40 )
      {
        if ( v14 != 46 )
          goto LABEL_11;
        v57 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Isolated;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Isolated )
          v57 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v57 )
          goto LABEL_11;
        if ( a3 )
        {
          v79 = (int)a3;
        }
        else
        {
          DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey(
                                          (_DWORD)a1,
                                          (_DWORD)a2,
                                          1,
                                          0,
                                          (__int64)&Handle,
                                          0LL);
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_42;
          v79 = (int)Handle;
          LODWORD(v12) = (_DWORD)a1;
        }
        DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                        (int)v12,
                                        (int)a2,
                                        v79,
                                        (int)&DEVPKEY_DriverPackage_IsolatedOverride,
                                        (int)v8,
                                        (NTSTRSAFE_PWSTR)pszDest,
                                        a7,
                                        (__int64)v10);
        if ( (int)(DriverPackageMappedProperty + 0x80000000) < 0 || DriverPackageMappedProperty == -1073741789 )
          goto LABEL_42;
        v80 = (int)Handle;
        if ( a3 )
          v80 = (int)a3;
        v81 = DrvDbGetDriverPackageMappedProperty(
                (int)a1,
                v99,
                v80,
                (int)&DEVPKEY_DriverPackage_IsolationFlags,
                (int)v8,
                v88,
                4,
                (__int64)v10);
        DriverPackageMappedProperty = v81;
        if ( v81 == -1073741789 )
          goto LABEL_226;
        if ( v81 != -1073741275 )
        {
          if ( v81 < 0 )
            goto LABEL_42;
          if ( *v8 == 7 && *v10 == 4 )
          {
            v61 = *(_DWORD *)v88;
            goto LABEL_135;
          }
          goto LABEL_227;
        }
        v82 = (int)Handle;
        if ( a3 )
          v82 = (int)a3;
        v83 = DrvDbGetDriverPackageMappedProperty(
                (int)a1,
                v99,
                v82,
                (int)&DEVPKEY_DriverPackage_StatusFlags,
                (int)v8,
                v88,
                4,
                (__int64)v10);
        DriverPackageMappedProperty = v83;
        if ( v83 == -1073741789 )
        {
LABEL_226:
          DriverPackageMappedProperty = 0;
        }
        else
        {
          if ( v83 == -1073741275 )
          {
            v61 = 0;
            DriverPackageMappedProperty = 0;
LABEL_228:
            *(_DWORD *)v88 = v61;
            goto LABEL_135;
          }
          if ( v83 < 0 )
            goto LABEL_42;
          if ( *v8 == 7 && *v10 == 4 )
          {
            v61 = *(_DWORD *)v88 & 0x8000100F;
            goto LABEL_228;
          }
        }
LABEL_227:
        v61 = -1;
        goto LABEL_228;
      }
      v56 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Primitive;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Primitive )
        v56 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v56 )
        goto LABEL_11;
      if ( !a3 )
      {
        DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((_DWORD)a1, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_42;
        LODWORD(a3) = (_DWORD)Handle;
        LODWORD(v12) = (_DWORD)a1;
      }
      v78 = DrvDbGetDriverPackageMappedProperty(
              (int)v12,
              (int)a2,
              (int)a3,
              (int)&DEVPKEY_DriverPackage_PrimitiveFlags,
              (int)v8,
              v89,
              4,
              (__int64)v10);
      DriverPackageMappedProperty = v78;
      if ( v78 == -1073741789 || v78 == -1073741275 )
      {
        DriverPackageMappedProperty = 0;
      }
      else
      {
        if ( v78 < 0 )
          goto LABEL_42;
        if ( *v8 == 7 && *v10 == 4 )
        {
          v61 = *(_DWORD *)v89;
          goto LABEL_135;
        }
      }
      v61 = -1;
      *(_DWORD *)v89 = -1;
LABEL_135:
      v62 = pszDest;
      *v8 = 17;
      *v10 = 1;
      if ( v62 && a7 )
      {
        *(_BYTE *)v62 = (v61 != 0) - 1;
        goto LABEL_42;
      }
LABEL_245:
      DriverPackageMappedProperty = -1073741789;
      goto LABEL_42;
    }
    v55 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Integrated;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Integrated )
      v55 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v55 )
      goto LABEL_11;
    if ( !a3 )
    {
      DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                      (_DWORD)a1,
                                      0,
                                      2,
                                      (_DWORD)a2,
                                      1,
                                      0,
                                      (__int64)&Handle,
                                      0LL,
                                      (__int64)&v93);
      if ( DriverPackageMappedProperty < 0 )
        goto LABEL_42;
      LODWORD(a3) = (_DWORD)Handle;
      LODWORD(v12) = (_DWORD)a1;
    }
    v75 = DrvDbGetDriverPackageMappedProperty(
            (int)v12,
            (int)a2,
            (int)a3,
            (int)&DEVPKEY_DriverPackage_Inbox,
            (int)v8,
            &v100,
            1,
            (__int64)v10);
    DriverPackageMappedProperty = v75;
    if ( v75 == -1073741789 )
    {
      v76 = -1;
      DriverPackageMappedProperty = 0;
      LOBYTE(v100) = -1;
    }
    else
    {
      if ( v75 == -1073741275 )
      {
        DriverPackageMappedProperty = 0;
LABEL_196:
        LOBYTE(v100) = 0;
        v76 = 0;
LABEL_197:
        v77 = pszDest;
        *v8 = 17;
        *v10 = 1;
        if ( v77 && a7 )
        {
          *(_BYTE *)v77 = v76;
          goto LABEL_42;
        }
        goto LABEL_245;
      }
      if ( v75 < 0 )
        goto LABEL_42;
      if ( *v8 == 17 && *v10 == 1 )
      {
        v76 = v100;
      }
      else
      {
        v76 = -1;
        LOBYTE(v100) = -1;
      }
      if ( !v76 )
        goto LABEL_197;
    }
    if ( !Handle )
    {
      DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                      (_DWORD)a1,
                                      0,
                                      2,
                                      v99,
                                      1,
                                      0,
                                      (__int64)&Handle,
                                      0LL,
                                      (__int64)&v93);
      if ( DriverPackageMappedProperty < 0 )
        goto LABEL_42;
      v76 = v100;
    }
    if ( (*((_DWORD *)v93 + 16) & 0x10) == 0 )
      goto LABEL_197;
    goto LABEL_196;
  }
  v54 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_DriverPackageId;
  if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_DriverPackageId )
    v54 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v54 )
    goto LABEL_11;
  *v8 = 18;
  v72 = -1LL;
  do
    ++v72;
  while ( a2[v72] );
  v73 = (NTSTRSAFE_PWSTR)pszDest;
  v74 = 2 * v72 + 2;
  *v10 = v74;
  if ( v73 && a7 >= v74 )
    memmove(v73, a2, v74);
  else
    return (unsigned int)-1073741789;
  return (unsigned int)DriverPackageMappedProperty;
}
