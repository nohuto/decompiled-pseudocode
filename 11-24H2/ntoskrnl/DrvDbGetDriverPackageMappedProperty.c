/*
 * XREFs of DrvDbGetDriverPackageMappedProperty @ 0x14092644C
 * Callers:
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140822954 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140925458 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbDispatchDriverPackage @ 0x140926230 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092644C (DrvDbGetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     wcsrchr @ 0x1404FDA40 (wcsrchr.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140925458 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140925AF4 (DrvDbGetObjectDatabaseNodeName.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140925BB0 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092644C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1409275E4 (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140A85920 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedProperty(
        __int64 *a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        __int64 (**a5)[3],
        NTSTRSAFE_PWSTR pszDest,
        unsigned int a7,
        unsigned int *a8)
{
  __int64 (**v8)[3]; // r13
  unsigned int *v9; // r15
  HANDLE v10; // r12
  __int64 *v11; // r10
  int v12; // ecx
  int v15; // ebx
  HANDLE v16; // r11
  NTSTRSAFE_PWSTR v17; // r9
  int ObjectDatabaseNodeName; // eax
  int v19; // r8d
  int v20; // eax
  unsigned int v21; // eax
  NTSTRSAFE_PWSTR v22; // rcx
  char v23; // al
  wchar_t *Pool2; // rax
  wchar_t *v25; // r14
  int v26; // r8d
  int DriverPackageMappedProperty; // eax
  __int64 v28; // rcx
  int v29; // r8d
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r9
  wchar_t *v33; // rdx
  unsigned __int64 i; // rcx
  __int64 v35; // r10
  int v36; // ecx
  unsigned int v37; // eax
  NTSTRSAFE_PWSTR v38; // rcx
  size_t v39; // r8
  wchar_t *v40; // rdx
  wchar_t *v41; // rax
  wchar_t *v42; // r9
  __int64 v43; // rdx
  unsigned int v44; // eax
  int v45; // eax
  bool v46; // zf
  __int64 v47; // rax
  __int64 v48; // r8
  unsigned int v49; // edx
  __int64 v50; // rdx
  NTSTRSAFE_PWSTR v51; // rcx
  unsigned int v52; // edx
  int v53; // eax
  char v54; // dl
  NTSTRSAFE_PWSTR v55; // rax
  int v56; // eax
  int v57; // r8d
  int v58; // eax
  int v59; // r8d
  int v60; // eax
  int v61; // eax
  int v62; // eax
  unsigned int v63; // edx
  __int64 (**j)[3]; // r9
  __int64 *v65; // r8
  __int64 v67; // rcx
  __int64 (**v68)[3]; // rsi
  __int64 v69; // rcx
  HANDLE v70; // rdx
  int v71; // eax
  unsigned int v72; // eax
  int RegValueMappedProperty; // eax
  int v74; // r8d
  wchar_t *v75; // rcx
  unsigned int pcchRemaining; // [rsp+28h] [rbp-89h]
  HANDLE v77; // [rsp+58h] [rbp-59h] BYREF
  wchar_t v78[2]; // [rsp+60h] [rbp-51h] BYREF
  wchar_t v79[2]; // [rsp+64h] [rbp-4Dh] BYREF
  wchar_t v80[2]; // [rsp+68h] [rbp-49h] BYREF
  wchar_t v81[2]; // [rsp+6Ch] [rbp-45h] BYREF
  wchar_t *v82; // [rsp+70h] [rbp-41h] BYREF
  int v83; // [rsp+78h] [rbp-39h] BYREF
  NTSTRSAFE_PWSTR v84; // [rsp+80h] [rbp-31h] BYREF
  __int128 v85; // [rsp+88h] [rbp-29h] BYREF
  __int64 v86; // [rsp+98h] [rbp-19h]
  HANDLE Handle; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v88; // [rsp+A8h] [rbp-9h]
  int v90; // [rsp+100h] [rbp+4Fh]
  wchar_t v91; // [rsp+110h] [rbp+5Fh] BYREF

  v90 = (int)a2;
  v8 = a5;
  v9 = a8;
  v10 = a3;
  v86 = 0LL;
  v11 = a1;
  v77 = 0LL;
  *(_DWORD *)a5 = 0;
  *v9 = 0;
  v12 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  LODWORD(v82) = 0;
  v15 = 0;
  *(_DWORD *)v80 = 0;
  v16 = 0LL;
  *(_DWORD *)v78 = 0;
  *(_DWORD *)v79 = 0;
  *(_DWORD *)v81 = 0;
  v83 = 0;
  v84 = 0LL;
  LOBYTE(v91) = 0;
  v85 = 0LL;
  if ( v12 == 2 )
  {
    if ( *(_QWORD *)a4 == DEVPKEY_NODE && *(_QWORD *)(a4 + 8) == 0xAFF7382B37DAFF89uLL )
    {
      v17 = pszDest;
      pcchRemaining = a7 >> 1;
      *(_DWORD *)v8 = 18;
      ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName((int)v11, 2, (int)a2, v17, pcchRemaining, v9);
      v15 = ObjectDatabaseNodeName;
      if ( (int)(ObjectDatabaseNodeName + 0x80000000) < 0 || ObjectDatabaseNodeName == -1073741789 )
        *v9 *= 2;
      goto LABEL_246;
    }
    goto LABEL_199;
  }
  if ( v12 != 18 )
  {
    if ( v12 == 33 )
    {
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL )
      {
        if ( !a3 )
        {
          v15 = DrvDbOpenDriverPackageRegKey((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&v77, 0LL);
          if ( v15 < 0 )
            goto LABEL_246;
        }
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x412uLL, 0x42444450u);
        v82 = Pool2;
        v25 = Pool2;
        if ( Pool2 )
        {
          v26 = (int)v77;
          if ( v10 )
            v26 = (int)v10;
          DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                          (int)a1,
                                          (int)a2,
                                          v26,
                                          (int)&DEVPKEY_DriverPackage_ProviderName,
                                          (int)v8,
                                          Pool2,
                                          1042,
                                          (__int64)v9);
          v15 = DriverPackageMappedProperty;
          if ( DriverPackageMappedProperty == -1073741789 )
            goto LABEL_217;
          if ( DriverPackageMappedProperty >= 0 )
          {
            if ( *(_DWORD *)v8 != 18 )
              goto LABEL_226;
            if ( *v9 - 2 > 0x206 )
              goto LABEL_226;
            v28 = (*v9 >> 1) - 1;
            v88 = (unsigned int)v28;
            if ( v25[v28] )
              goto LABEL_226;
            v29 = (int)v77;
            v30 = 2 * v28;
            LODWORD(a8) = 2 * v28;
            if ( v10 )
              v29 = (int)v10;
            LODWORD(a5) = 1040 - v30;
            v84 = &v25[(unsigned int)v28 + 1];
            v15 = DrvDbGetDriverPackageMappedProperty(
                    (int)a1,
                    v90,
                    v29,
                    (int)&DEVPKEY_DriverPackage_OriginalInfName,
                    (int)v8,
                    v84,
                    1040 - v30,
                    (__int64)v9);
            if ( v15 == -1073741275 )
            {
              v31 = (int)v77;
              if ( v10 )
                v31 = (int)v10;
              v15 = DrvDbGetDriverPackageMappedProperty(
                      (int)a1,
                      v90,
                      v31,
                      (int)&DEVPKEY_DriverPackage_DriverInfName,
                      (int)v8,
                      v84,
                      (int)a5,
                      (__int64)v9);
            }
            if ( v15 == -1073741789 )
            {
              v15 = -1073741595;
            }
            else if ( v15 >= 0 )
            {
              if ( *(_DWORD *)v8 == 18 && *v9 - 2 <= 0x206 )
              {
                v25 = v82;
                v32 = v88;
                v33 = v82;
                v82[v88] = 45;
                for ( i = *v33; (_WORD)i; i = *v33 )
                {
                  if ( (unsigned __int16)i <= 0x3Au && (v35 = 0x400200100000000LL, _bittest64(&v35, i))
                    || (_WORD)i == 126 )
                  {
                    *v33 = 95;
                  }
                  ++v33;
                }
                v36 = (_DWORD)a8 + 2;
                v25[v32] = 45;
                *(_DWORD *)v8 = 18;
                v37 = *v9 + v36;
                *v9 = v37;
                v38 = pszDest;
                if ( pszDest && a7 >= v37 )
                {
                  v39 = v37;
                  v40 = v25;
LABEL_224:
                  memmove(v38, v40, v39);
                  goto LABEL_227;
                }
LABEL_225:
                v15 = -1073741789;
                goto LABEL_227;
              }
              v15 = -1073741823;
            }
            v25 = v82;
          }
LABEL_227:
          ExFreePoolWithTag(v25, 0);
          goto LABEL_246;
        }
        goto LABEL_34;
      }
      goto LABEL_199;
    }
    if ( v12 == 42 )
    {
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_UniqueId && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL )
      {
        v41 = wcsrchr(a2, 0x5Fu);
        v42 = v41;
        if ( !v41 )
        {
          v15 = -1073741773;
          goto LABEL_246;
        }
        v43 = -1LL;
        do
          ++v43;
        while ( v41[v43 + 1] );
        *(_DWORD *)v8 = 18;
        v44 = *v9 + 2 + 2 * v43;
        *v9 = v44;
        if ( pszDest && a7 >= v44 )
        {
          memmove(pszDest, v42 + 1, v44);
          goto LABEL_246;
        }
        goto LABEL_75;
      }
LABEL_199:
      v63 = 0;
      for ( j = &off_14000C880; ; j += 5 )
      {
        v65 = (__int64 *)*j;
        if ( LODWORD((**j)[2]) == v12 && *v65 == *(_QWORD *)a4 && v65[1] == *(_QWORD *)(a4 + 8) )
          break;
        if ( ++v63 >= 0x29 )
          return (unsigned int)-1073741802;
      }
      v67 = 5LL * v63;
      a5 = &off_14000C880 + 5 * v63;
      if ( !a5 )
        return (unsigned int)-1073741802;
      if ( !v10 )
      {
        v15 = DrvDbOpenDriverPackageRegKey((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&v77, 0LL);
        if ( v15 < 0 )
          goto LABEL_246;
        v16 = v77;
      }
      v68 = a5;
      if ( *((_DWORD *)a5 + 8) )
      {
        LODWORD(a5) = 48;
        v25 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x30uLL, 0x42444450u);
        if ( v25 )
        {
          v70 = v77;
          if ( v10 )
            v70 = v10;
          v71 = PnpCtxRegQueryValue(v69, v70, L"Version", &v82, v25, (unsigned int *)&a5);
          v15 = v71;
          if ( v71 == -1073741772 )
          {
            v15 = -1073741275;
            goto LABEL_227;
          }
          if ( v71 == -1073741789 )
          {
LABEL_217:
            v15 = -1073741595;
            goto LABEL_227;
          }
          if ( v71 < 0 )
            goto LABEL_227;
          if ( (_DWORD)v82 == 3 && (_DWORD)a5 == 48 )
          {
            v38 = pszDest;
            *(_DWORD *)v8 = *((_DWORD *)v68 + 2);
            v72 = *((_DWORD *)v68 + 8);
            *v9 = v72;
            if ( v38 && a7 >= v72 )
            {
              v39 = *((unsigned int *)v68 + 8);
              v40 = (wchar_t *)((char *)v25 + *((unsigned int *)v68 + 7));
              goto LABEL_224;
            }
            goto LABEL_225;
          }
LABEL_226:
          v15 = -1073741823;
          goto LABEL_227;
        }
LABEL_34:
        v15 = -1073741801;
        goto LABEL_246;
      }
      if ( v10 )
        v16 = v10;
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v67, v16, (__int64)a5, v8, (int *)pszDest, a7, v9);
      v15 = RegValueMappedProperty;
      if ( RegValueMappedProperty != -1073741275
        && (RegValueMappedProperty && RegValueMappedProperty != -1073741789 || *(_DWORD *)v8 != 18 || *v9 != 2)
        || *(_DWORD *)(a4 + 16) != 7
        || *(_QWORD *)a4 != *(_QWORD *)&DEVPKEY_DriverPackage_SignerName
        || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL )
      {
        goto LABEL_246;
      }
      v74 = (int)v77;
      if ( v10 )
        v74 = (int)v10;
      if ( (int)DrvDbGetDriverPackageSignerScore((int)a1, v90, v74, (wchar_t *)&v83) < 0 || v83 != 218103811 )
        goto LABEL_246;
      v75 = pszDest;
      v15 = 0;
      *(_DWORD *)v8 = 18;
      *v9 = 36;
      if ( v75 && a7 >= 0x24 )
      {
        RtlStringCchCopyExW(v75, (unsigned __int64)a7 >> 1, L"Microsoft Windows", 0LL, 0LL, 0x800u);
        goto LABEL_246;
      }
LABEL_245:
      v15 = -1073741789;
      goto LABEL_246;
    }
    if ( v12 == 29
      && *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations
      && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL )
    {
      goto LABEL_82;
    }
    switch ( v12 )
    {
      case 30:
        if ( *(_QWORD *)a4 != DEVPKEY_DriverPackage_ConfigurationScopes || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL )
          goto LABEL_199;
LABEL_82:
        if ( !a3 )
        {
          v15 = DrvDbOpenDriverPackageRegKey((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&v77, 0LL);
          if ( v15 < 0 )
            goto LABEL_246;
          v10 = v77;
          v11 = a1;
        }
        v45 = PnpCtxRegOpenKey(*v11, (__int64)v10, (__int64)L"Configurations", 0, 9u, (__int64)&Handle);
        v15 = v45;
        if ( v45 != -1073741772 )
        {
          if ( v45 < 0 )
            goto LABEL_246;
          v46 = *(_DWORD *)(a4 + 16) == 30;
          *(_WORD *)((char *)&v86 + 1) = 0;
          BYTE3(v86) = 0;
          *(_QWORD *)&v85 = pszDest;
          HIDWORD(v85) = 0;
          HIDWORD(v86) = 0;
          if ( !v46
            || *(_QWORD *)a4 != DEVPKEY_DriverPackage_ConfigurationScopes
            || (v47 = *(_QWORD *)(a4 + 8), LOBYTE(v86) = 1, v47 != 0xBADB47CC74A2E194uLL) )
          {
            LOBYTE(v86) = 0;
          }
          if ( pszDest )
            DWORD2(v85) = a7 >> 1;
          else
            DWORD2(v85) = 0;
          v15 = PnpCtxRegEnumKeyWithCallback(*a1, Handle, DrvDbGetConfigurationSubKeyCallback, &v85);
          if ( v15 < 0 )
          {
            if ( v86 < 0 )
              v15 = HIDWORD(v86);
            goto LABEL_246;
          }
          if ( HIDWORD(v85) )
          {
            v48 = v85;
            v49 = HIDWORD(v85) + 1;
            v15 = HIDWORD(v86);
            *(_DWORD *)v8 = 8210;
            HIDWORD(v85) = v49;
            *v9 = 2 * v49;
            if ( v48 && 2 * (unsigned __int64)v49 <= a7 )
            {
              *(_WORD *)(v48 + 2LL * (v49 - 1)) = 0;
              goto LABEL_246;
            }
            goto LABEL_75;
          }
        }
        goto LABEL_98;
      case 32:
        if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_DriverPackageId && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL )
        {
          *(_DWORD *)v8 = 18;
          v50 = -1LL;
          do
            ++v50;
          while ( a2[v50] );
          v51 = pszDest;
          v52 = 2 * v50 + 2;
          *v9 = v52;
          if ( v51 && a7 >= v52 )
            memmove(v51, a2, v52);
          else
            return (unsigned int)-1073741789;
          return (unsigned int)v15;
        }
        goto LABEL_199;
      case 38:
        if ( *(_QWORD *)a4 != DEVPKEY_DriverPackage_Integrated || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL )
          goto LABEL_199;
        if ( !a3 )
        {
          v15 = DrvDbOpenObjectRegKey((_DWORD)v11, 0, 2, (_DWORD)a2, 1, 0, (__int64)&v77, 0LL, (__int64)&v84);
          if ( v15 < 0 )
            goto LABEL_246;
          LODWORD(v10) = (_DWORD)v77;
          LODWORD(v11) = (_DWORD)a1;
        }
        v53 = DrvDbGetDriverPackageMappedProperty(
                (int)v11,
                (int)a2,
                (int)v10,
                (int)&DEVPKEY_DriverPackage_Inbox,
                (int)v8,
                &v91,
                1,
                (__int64)v9);
        v15 = v53;
        if ( v53 == -1073741789 )
        {
          v54 = -1;
          v15 = 0;
          LOBYTE(v91) = -1;
        }
        else
        {
          if ( v53 == -1073741275 )
          {
            v15 = 0;
LABEL_131:
            LOBYTE(v91) = 0;
            v54 = 0;
LABEL_132:
            v55 = pszDest;
            *(_DWORD *)v8 = 17;
            *v9 = 1;
            if ( v55 && a7 )
            {
              *(_BYTE *)v55 = v54;
              goto LABEL_246;
            }
            goto LABEL_245;
          }
          if ( v53 < 0 )
            goto LABEL_246;
          if ( *(_DWORD *)v8 == 17 && *v9 == 1 )
          {
            v54 = v91;
          }
          else
          {
            v54 = -1;
            LOBYTE(v91) = -1;
          }
          if ( !v54 )
            goto LABEL_132;
        }
        if ( !v77 )
        {
          v15 = DrvDbOpenObjectRegKey((_DWORD)a1, 0, 2, v90, 1, 0, (__int64)&v77, 0LL, (__int64)&v84);
          if ( v15 < 0 )
            goto LABEL_246;
          v54 = v91;
        }
        if ( (*((_DWORD *)v84 + 16) & 0x10) == 0 )
          goto LABEL_132;
        goto LABEL_131;
      case 40:
        if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Primitive && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL )
        {
          if ( !a3 )
          {
            v15 = DrvDbOpenDriverPackageRegKey((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&v77, 0LL);
            if ( v15 < 0 )
              goto LABEL_246;
            LODWORD(v10) = (_DWORD)v77;
            LODWORD(v11) = (_DWORD)a1;
          }
          v56 = DrvDbGetDriverPackageMappedProperty(
                  (int)v11,
                  (int)a2,
                  (int)v10,
                  (int)&DEVPKEY_DriverPackage_PrimitiveFlags,
                  (int)v8,
                  v79,
                  4,
                  (__int64)v9);
          v15 = v56;
          if ( v56 == -1073741789 || v56 == -1073741275 )
          {
            v15 = 0;
          }
          else
          {
            if ( v56 < 0 )
              goto LABEL_246;
            if ( *(_DWORD *)v8 == 7 && *v9 == 4 )
            {
              v21 = *(_DWORD *)v79;
              goto LABEL_20;
            }
          }
          v21 = -1;
          *(_DWORD *)v79 = -1;
          goto LABEL_20;
        }
        goto LABEL_199;
    }
    if ( v12 != 46 )
    {
      if ( (v12 != 53
         || *(_QWORD *)a4 != DEVPKEY_DriverPackage_KernelMode
         || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL)
        && (v12 != 54 || *(_QWORD *)a4 != DEVPKEY_DriverPackage_UserMode || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL) )
      {
        goto LABEL_199;
      }
      if ( !a3 )
      {
        v15 = DrvDbOpenDriverPackageRegKey((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&v77, 0LL);
        if ( v15 < 0 )
          goto LABEL_246;
        LODWORD(v10) = (_DWORD)v77;
        LODWORD(v11) = (_DWORD)a1;
      }
      v61 = DrvDbGetDriverPackageMappedProperty(
              (int)v11,
              (int)a2,
              (int)v10,
              (int)&DEVPKEY_DriverPackage_ExecutionModes,
              (int)v8,
              v81,
              4,
              (__int64)v9);
      v15 = v61;
      if ( v61 >= 0 )
      {
        if ( *(_DWORD *)v8 == 7 && *v9 == 4 )
        {
          v22 = pszDest;
          *(_DWORD *)v8 = 17;
          *v9 = 1;
          if ( v22 && a7 )
          {
            if ( *(_DWORD *)(a4 + 16) == 53
              && *(_QWORD *)a4 == DEVPKEY_DriverPackage_KernelMode
              && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL )
            {
              v62 = v81[0] & 0xFF0;
            }
            else
            {
              v62 = *(_DWORD *)v81 & 0xFFF000;
            }
            *(_DWORD *)v81 = v62;
            v23 = -(v62 != 0);
LABEL_23:
            *(_BYTE *)v22 = v23;
            goto LABEL_246;
          }
LABEL_75:
          v15 = -1073741789;
          goto LABEL_246;
        }
      }
      else if ( v61 != -1073741789 )
      {
        goto LABEL_246;
      }
LABEL_98:
      v15 = -1073741275;
      goto LABEL_246;
    }
    if ( *(_QWORD *)a4 != DEVPKEY_DriverPackage_Isolated || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL )
      goto LABEL_199;
    if ( !a3 )
    {
      v15 = DrvDbOpenDriverPackageRegKey((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&v77, 0LL);
      if ( v15 < 0 )
        goto LABEL_246;
      LODWORD(a3) = (_DWORD)v77;
      LODWORD(v11) = (_DWORD)a1;
    }
    v15 = DrvDbGetDriverPackageMappedProperty(
            (int)v11,
            (int)a2,
            (int)a3,
            (int)&DEVPKEY_DriverPackage_IsolatedOverride,
            (int)v8,
            pszDest,
            a7,
            (__int64)v9);
    if ( (int)(v15 + 0x80000000) < 0 || v15 == -1073741789 )
      goto LABEL_246;
    v57 = (int)v77;
    if ( v10 )
      v57 = (int)v10;
    v58 = DrvDbGetDriverPackageMappedProperty(
            (int)a1,
            v90,
            v57,
            (int)&DEVPKEY_DriverPackage_IsolationFlags,
            (int)v8,
            v78,
            4,
            (__int64)v9);
    v15 = v58;
    if ( v58 == -1073741789 )
      goto LABEL_160;
    if ( v58 != -1073741275 )
    {
      if ( v58 < 0 )
        goto LABEL_246;
      if ( *(_DWORD *)v8 == 7 && *v9 == 4 )
      {
        v21 = *(_DWORD *)v78;
        goto LABEL_20;
      }
      goto LABEL_161;
    }
    v59 = (int)v77;
    if ( v10 )
      v59 = (int)v10;
    v60 = DrvDbGetDriverPackageMappedProperty(
            (int)a1,
            v90,
            v59,
            (int)&DEVPKEY_DriverPackage_StatusFlags,
            (int)v8,
            v78,
            4,
            (__int64)v9);
    v15 = v60;
    if ( v60 == -1073741789 )
    {
LABEL_160:
      v15 = 0;
    }
    else
    {
      if ( v60 == -1073741275 )
      {
        v21 = 0;
        v15 = 0;
        goto LABEL_162;
      }
      if ( v60 < 0 )
        goto LABEL_246;
      if ( *(_DWORD *)v8 == 7 && *v9 == 4 )
      {
        v21 = *(_DWORD *)v78 & 0x8000100F;
        goto LABEL_162;
      }
    }
LABEL_161:
    v21 = -1;
LABEL_162:
    *(_DWORD *)v78 = v21;
    goto LABEL_20;
  }
  if ( *(_QWORD *)a4 != DEVPKEY_DriverPackage_Configurable || *(_QWORD *)(a4 + 8) != 0xBADB47CC74A2E194uLL )
    goto LABEL_199;
  if ( a3 )
    goto LABEL_13;
  v15 = DrvDbOpenDriverPackageRegKey((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&v77, 0LL);
  if ( v15 >= 0 )
  {
    LODWORD(a3) = (_DWORD)v77;
    LODWORD(v11) = (_DWORD)a1;
LABEL_13:
    v15 = DrvDbGetDriverPackageMappedProperty(
            (int)v11,
            (int)a2,
            (int)a3,
            (int)&DEVPKEY_DriverPackage_ConfigurableOverride,
            (int)v8,
            pszDest,
            a7,
            (__int64)v9);
    if ( (int)(v15 + 0x80000000) < 0 || v15 == -1073741789 )
      goto LABEL_246;
    v19 = (int)v77;
    if ( v10 )
      v19 = (int)v10;
    v20 = DrvDbGetDriverPackageMappedProperty(
            (int)a1,
            v90,
            v19,
            (int)&DEVPKEY_DriverPackage_ConfigurableFlags,
            (int)v8,
            v80,
            4,
            (__int64)v9);
    v15 = v20;
    if ( v20 == -1073741789 )
    {
      v15 = 0;
LABEL_19:
      v21 = -1;
      *(_DWORD *)v80 = -1;
      goto LABEL_20;
    }
    if ( v20 < 0 )
      goto LABEL_246;
    if ( *(_DWORD *)v8 != 7 || *v9 != 4 )
      goto LABEL_19;
    v21 = *(_DWORD *)v80;
LABEL_20:
    v22 = pszDest;
    *(_DWORD *)v8 = 17;
    *v9 = 1;
    if ( !v22 || !a7 )
      goto LABEL_245;
    v23 = (v21 != 0) - 1;
    goto LABEL_23;
  }
LABEL_246:
  if ( Handle )
    ZwClose(Handle);
  if ( v77 )
    ZwClose(v77);
  return (unsigned int)v15;
}
