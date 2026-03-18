/*
 * XREFs of DrvDbSetDriverPackageMappedProperty @ 0x140813028
 * Callers:
 *     DrvDbSetDriverPackageMappedProperty @ 0x140813028 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverPackage @ 0x1409303A0 (DrvDbDispatchDriverPackage.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     DrvDbGetDriverPackageSignerName @ 0x140812604 (DrvDbGetDriverPackageSignerName.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140813028 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140813664 (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x14092F430 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x140930FB4 (DrvDbOpenDriverPackageRegKey.c)
 *     _PnpCtxRegSetValue @ 0x140950248 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegQueryValue @ 0x140953C60 (_PnpCtxRegQueryValue.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbSetDriverPackageMappedProperty(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        const wchar_t *Src,
        unsigned int a7)
{
  int v8; // r9d
  __int64 v10; // rbx
  int v11; // r10d
  wchar_t *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ebx
  unsigned int i; // edx
  __int64 (**v22)[3]; // r12
  __int64 *v23; // r8
  __int64 v24; // rcx
  int v25; // r14d
  int v26; // eax
  bool v27; // zf
  __int64 v28; // rcx
  _OWORD *v29; // rdi
  HANDLE v30; // rdx
  int v31; // eax
  size_t v32; // r8
  char *v33; // rcx
  __int64 v34; // rcx
  HANDLE v35; // rdx
  const wchar_t *v36; // rdx
  unsigned int v37; // r13d
  const wchar_t *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // eax
  HANDLE v42; // r8
  int v43; // edx
  int v44; // eax
  __int64 v45; // rax
  int v46; // r8d
  __int64 v47; // rdx
  __int64 v48; // rcx
  const wchar_t *v49; // rbx
  int v50; // r8d
  int v51; // r8d
  int v52; // edx
  int v53; // eax
  HANDLE v54; // r8
  int v55; // r8d
  int v56; // edx
  int v57; // r8d
  int v59; // [rsp+40h] [rbp-20h] BYREF
  int v60; // [rsp+44h] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  wchar_t *Pool2; // [rsp+50h] [rbp-10h]
  unsigned int v65; // [rsp+B8h] [rbp+58h] BYREF

  v8 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  v10 = a2;
  v60 = 0;
  v11 = a1;
  v59 = 0;
  v12 = 0LL;
  Pool2 = 0LL;
  v65 = 0;
  if ( v8 == 2 )
  {
    v13 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v13 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v13 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 18 )
  {
    v14 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v14 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v14 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 29 )
  {
    v15 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
      v15 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v15 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 30 )
  {
    v16 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
      v16 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v16 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 33 )
  {
    v17 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
      v17 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v17 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 40 )
  {
    v18 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Primitive;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Primitive )
      v18 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v18 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 46 )
  {
    v19 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Isolated;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Isolated )
      v19 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v19 )
      return (unsigned int)-1073741790;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= 0x26 )
      return (unsigned int)-1073741802;
    v22 = &off_14000C170 + 5 * i;
    v23 = (__int64 *)*v22;
    if ( LODWORD((**v22)[2]) == v8 )
    {
      v24 = *v23 - *(_QWORD *)a4;
      if ( *v23 == *(_QWORD *)a4 )
        v24 = v23[1] - *(_QWORD *)(a4 + 8);
      if ( !v24 )
        break;
    }
  }
  if ( !v22 )
    return (unsigned int)-1073741802;
  v25 = a5;
  if ( a5 != *((_DWORD *)v22 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v20 = DrvDbOpenDriverPackageRegKey(v11, v10, 3, 0, (__int64)&Handle, 0LL);
    if ( v20 < 0 )
      goto LABEL_115;
    v10 = a2;
  }
  v26 = *((_DWORD *)v22 + 8);
  if ( !v26 )
  {
    v36 = L"Microsoft Windows";
    v37 = a7;
    v38 = Src;
    if ( *(_DWORD *)(a4 + 16) == 7 )
    {
      v39 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
        v39 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      LODWORD(v40) = 0;
      if ( !v39 && v25 == 18 && a7 > 2 )
      {
        if ( Src )
        {
          if ( !Src[((unsigned __int64)a7 >> 1) - 1] )
          {
            v41 = wcsicmp(Src, L"Microsoft Windows");
            LODWORD(v40) = 0;
            if ( !v41 )
            {
              v42 = Handle;
              if ( a3 )
                v42 = a3;
              if ( (int)DrvDbGetDriverPackageSignerScore(a1, v10, v42, &v59) >= 0 && v59 == 218103811 )
              {
                v43 = (int)Handle;
                if ( a3 )
                  v43 = (int)a3;
                v44 = DrvDbSetRegValueMappedProperty(v40, v43, (_DWORD)v22, 0, 0LL, 0);
                v20 = 0;
                if ( v44 != -1073741275 )
                  v20 = v44;
                goto LABEL_115;
              }
              goto LABEL_110;
            }
          }
        }
      }
    }
    else
    {
      LODWORD(v40) = 0;
    }
    if ( *(_DWORD *)(a4 + 16) == 8 )
    {
      v45 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore )
        v45 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v45 )
      {
        if ( v25 == 7 )
        {
          if ( v37 == 4 && v38 )
          {
            if ( *(_DWORD *)v38 == 218103811 )
            {
              v46 = (int)Handle;
              if ( a3 )
                v46 = (int)a3;
              if ( (unsigned int)DrvDbGetDriverPackageSignerName(0LL, (__int64)v36, v46, 0LL, 0, &v65) == -1073741789
                && v65 == 18 )
              {
                Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
                v49 = Pool2;
                if ( !Pool2 )
                  goto LABEL_51;
                v50 = (int)Handle;
                if ( a3 )
                  v50 = (int)a3;
                if ( (int)DrvDbGetDriverPackageSignerName(v48, v47, v50, Pool2, 18, &v65) >= 0
                  && v65
                  && !v49[v65 - 1]
                  && !wcsicmp(v49, L"Microsoft Windows") )
                {
                  v51 = (int)Handle;
                  if ( a3 )
                    v51 = (int)a3;
                  DrvDbSetDriverPackageMappedProperty(a1, a2, v51, (int)&DEVPKEY_DriverPackage_SignerName, 0, 0LL, 0);
                }
              }
              goto LABEL_110;
            }
            goto LABEL_118;
          }
        }
        else if ( !v25 )
        {
LABEL_118:
          v54 = Handle;
          if ( a3 )
            v54 = a3;
          if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v54, &v59) >= 0 && v59 == 218103811 )
          {
            v55 = (int)Handle;
            if ( a3 )
              v55 = (int)a3;
            if ( (unsigned int)DrvDbGetDriverPackageSignerName(v40, 0LL, v55, 0LL, 0, &v65) == -1073741275 )
            {
              v56 = (int)Handle;
              if ( a3 )
                v56 = (int)a3;
              v20 = DrvDbSetRegValueMappedProperty(v40, v56, (_DWORD)v22, v25, (__int64)v38, v37);
              if ( v20 >= 0 )
              {
                v57 = (int)Handle;
                if ( a3 )
                  v57 = (int)a3;
                DrvDbSetDriverPackageMappedProperty(
                  a1,
                  a2,
                  v57,
                  (int)&DEVPKEY_DriverPackage_SignerName,
                  18,
                  (void *)L"Microsoft Windows",
                  36);
                v20 = 0;
              }
              goto LABEL_115;
            }
          }
        }
      }
    }
LABEL_110:
    v52 = (int)Handle;
    if ( a3 )
      v52 = (int)a3;
    v53 = DrvDbSetRegValueMappedProperty(v40, v52, (_DWORD)v22, v25, (__int64)v38, v37);
    v12 = Pool2;
    v20 = v53;
    goto LABEL_113;
  }
  if ( v25 )
    v27 = a7 == v26;
  else
    v27 = a7 == 0;
  if ( !v27 )
  {
    v20 = -1073741823;
    goto LABEL_115;
  }
  v65 = 48;
  v29 = (_OWORD *)ExAllocatePool2(0x100uLL);
  if ( v29 )
  {
    v30 = Handle;
    if ( a3 )
      v30 = a3;
    v31 = PnpCtxRegQueryValue(v28, v30, L"Version", &v60, v29, &v65);
    v20 = v31;
    if ( v31 == -1073741772 )
    {
      *v29 = 0LL;
      v29[1] = 0LL;
      v29[2] = 0LL;
      goto LABEL_61;
    }
    if ( v31 == -1073741789 )
    {
      v20 = -1073741595;
    }
    else if ( v31 >= 0 )
    {
      if ( v60 == 3 && v65 == 48 )
      {
LABEL_61:
        v32 = *((unsigned int *)v22 + 8);
        v33 = (char *)v29 + *((unsigned int *)v22 + 7);
        if ( v25 )
          memmove(v33, Src, v32);
        else
          memset_0(v33, 0, v32);
        v35 = Handle;
        if ( a3 )
          v35 = a3;
        v20 = PnpCtxRegSetValue(v34, v35, L"Version", 3LL, v29, 48);
        goto LABEL_68;
      }
      v20 = -1073741823;
    }
LABEL_68:
    ExFreePoolWithTag(v29, 0);
LABEL_113:
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_115;
  }
LABEL_51:
  v20 = -1073741801;
LABEL_115:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v20;
}
