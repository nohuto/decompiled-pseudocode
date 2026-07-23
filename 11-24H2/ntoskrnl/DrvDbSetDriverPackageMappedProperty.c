/*
 * XREFs of DrvDbSetDriverPackageMappedProperty @ 0x140823668
 * Callers:
 *     DrvDbSetDriverPackageMappedProperty @ 0x140823668 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverPackage @ 0x140926230 (DrvDbDispatchDriverPackage.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     DrvDbGetDriverPackageSignerName @ 0x140822C44 (DrvDbGetDriverPackageSignerName.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140823668 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140823BCC (DrvDbSetRegValueMappedProperty.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140925458 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1409275E4 (DrvDbOpenDriverPackageRegKey.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 **v11; // rdx
  wchar_t *v12; // r15
  unsigned int v13; // r8d
  int v14; // r10d
  __int64 *v15; // rcx
  unsigned int v16; // ecx
  __int64 (**i)[3]; // rdx
  __int64 *v18; // r8
  int v19; // ebx
  __int64 (**v21)[3]; // r13
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rcx
  _OWORD *v25; // rdi
  HANDLE v26; // rdx
  int v27; // eax
  size_t v28; // r8
  char *v29; // rcx
  __int64 v30; // rcx
  HANDLE v31; // rdx
  const wchar_t *v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  HANDLE v35; // r8
  int v36; // edx
  int v37; // eax
  int v38; // r8d
  __int64 v39; // rdx
  __int64 v40; // rcx
  const wchar_t *v41; // rbx
  int v42; // r8d
  int v43; // r8d
  int v44; // edx
  int v45; // eax
  HANDLE v46; // r8
  int v47; // r8d
  int v48; // edx
  int v49; // r8d
  unsigned int v50; // [rsp+40h] [rbp-20h] BYREF
  int v51; // [rsp+44h] [rbp-1Ch] BYREF
  int v52; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  wchar_t *Pool2; // [rsp+58h] [rbp-8h]

  v8 = *(_DWORD *)(a4 + 16);
  v10 = a2;
  Handle = 0LL;
  v52 = 0;
  v11 = off_140E0A4F0;
  v51 = 0;
  v12 = 0LL;
  Pool2 = 0LL;
  v13 = 0;
  v50 = 0;
  v14 = a1;
  do
  {
    v15 = *v11;
    if ( *((_DWORD *)*v11 + 4) == v8 && *v15 == *(_QWORD *)a4 && v15[1] == *(_QWORD *)(a4 + 8) )
      return (unsigned int)-1073741790;
    ++v13;
    ++v11;
  }
  while ( v13 < 0xC );
  v16 = 0;
  for ( i = &off_14000C880; ; i += 5 )
  {
    v18 = (__int64 *)*i;
    if ( LODWORD((**i)[2]) == v8 && *v18 == *(_QWORD *)a4 && v18[1] == *(_QWORD *)(a4 + 8) )
      break;
    if ( ++v16 >= 0x29 )
      return (unsigned int)-1073741802;
  }
  v21 = &off_14000C880 + 5 * v16;
  if ( !v21 )
    return (unsigned int)-1073741802;
  if ( a5 != *((_DWORD *)v21 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v19 = DrvDbOpenDriverPackageRegKey(v14, v10, 3, 0, (__int64)&Handle, 0LL);
    if ( v19 < 0 )
      goto LABEL_89;
    v10 = a2;
  }
  v22 = *((_DWORD *)v21 + 8);
  if ( !v22 )
  {
    v32 = L"Microsoft Windows";
    LODWORD(v33) = 0;
    if ( *(_DWORD *)(a4 + 16) == 7
      && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName
      && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL
      && a5 == 18
      && a7 > 2 )
    {
      if ( Src )
      {
        if ( !Src[((unsigned __int64)a7 >> 1) - 1] )
        {
          v34 = wcsicmp(Src, L"Microsoft Windows");
          LODWORD(v33) = 0;
          if ( !v34 )
          {
            v35 = Handle;
            if ( a3 )
              v35 = a3;
            if ( (int)DrvDbGetDriverPackageSignerScore(a1, v10, v35, &v51) >= 0 && v51 == 218103811 )
            {
              v36 = (int)Handle;
              if ( a3 )
                v36 = (int)a3;
              v37 = DrvDbSetRegValueMappedProperty(v33, v36, (_DWORD)v21, 0, 0LL, 0);
              v19 = 0;
              if ( v37 != -1073741275 )
                v19 = v37;
              goto LABEL_89;
            }
            goto LABEL_84;
          }
        }
      }
    }
    if ( *(_DWORD *)(a4 + 16) == 8
      && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore
      && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL )
    {
      if ( a5 == 7 )
      {
        if ( a7 == 4 && Src )
        {
          if ( *(_DWORD *)Src == 218103811 )
          {
            v38 = (int)Handle;
            if ( a3 )
              v38 = (int)a3;
            if ( (unsigned int)DrvDbGetDriverPackageSignerName(0LL, (__int64)v32, v38, 0LL, 0, &v50) == -1073741789
              && v50 == 18 )
            {
              Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x24uLL, 0x42444450u);
              v41 = Pool2;
              if ( !Pool2 )
                goto LABEL_28;
              v42 = (int)Handle;
              if ( a3 )
                v42 = (int)a3;
              if ( (int)DrvDbGetDriverPackageSignerName(v40, v39, v42, Pool2, 18, &v50) >= 0
                && v50
                && !v41[v50 - 1]
                && !wcsicmp(v41, L"Microsoft Windows") )
              {
                v43 = (int)Handle;
                if ( a3 )
                  v43 = (int)a3;
                DrvDbSetDriverPackageMappedProperty(a1, a2, v43, (int)&DEVPKEY_DriverPackage_SignerName, 0, 0LL, 0);
              }
            }
            goto LABEL_84;
          }
          goto LABEL_92;
        }
      }
      else if ( !a5 )
      {
LABEL_92:
        v46 = Handle;
        if ( a3 )
          v46 = a3;
        if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v46, &v51) >= 0 && v51 == 218103811 )
        {
          v47 = (int)Handle;
          if ( a3 )
            v47 = (int)a3;
          if ( (unsigned int)DrvDbGetDriverPackageSignerName(v33, 0LL, v47, 0LL, 0, &v50) == -1073741275 )
          {
            v48 = (int)Handle;
            if ( a3 )
              v48 = (int)a3;
            v19 = DrvDbSetRegValueMappedProperty(v33, v48, (_DWORD)v21, a5, (__int64)Src, a7);
            if ( v19 >= 0 )
            {
              v49 = (int)Handle;
              if ( a3 )
                v49 = (int)a3;
              DrvDbSetDriverPackageMappedProperty(
                a1,
                a2,
                v49,
                (int)&DEVPKEY_DriverPackage_SignerName,
                18,
                (void *)L"Microsoft Windows",
                36);
              v19 = 0;
            }
            goto LABEL_89;
          }
        }
      }
    }
LABEL_84:
    v44 = (int)Handle;
    if ( a3 )
      v44 = (int)a3;
    v45 = DrvDbSetRegValueMappedProperty(v33, v44, (_DWORD)v21, a5, (__int64)Src, a7);
    v12 = Pool2;
    v19 = v45;
    goto LABEL_87;
  }
  if ( a5 )
    v23 = a7 == v22;
  else
    v23 = a7 == 0;
  if ( !v23 )
  {
    v19 = -1073741823;
    goto LABEL_89;
  }
  v50 = 48;
  v25 = (_OWORD *)ExAllocatePool2(0x100uLL, 0x30uLL, 0x42444450u);
  if ( v25 )
  {
    v26 = Handle;
    if ( a3 )
      v26 = a3;
    v27 = PnpCtxRegQueryValue(v24, v26, L"Version", &v52, v25, &v50);
    v19 = v27;
    if ( v27 == -1073741772 )
    {
      *v25 = 0LL;
      v25[1] = 0LL;
      v25[2] = 0LL;
      goto LABEL_38;
    }
    if ( v27 == -1073741789 )
    {
      v19 = -1073741595;
    }
    else if ( v27 >= 0 )
    {
      if ( v52 == 3 && v50 == 48 )
      {
LABEL_38:
        v28 = *((unsigned int *)v21 + 8);
        v29 = (char *)v25 + *((unsigned int *)v21 + 7);
        if ( a5 )
          memmove(v29, Src, v28);
        else
          memset_0(v29, 0, v28);
        v31 = Handle;
        if ( a3 )
          v31 = a3;
        v19 = PnpCtxRegSetValue(v30, v31, L"Version", 3LL, v25, 48);
        goto LABEL_45;
      }
      v19 = -1073741823;
    }
LABEL_45:
    ExFreePoolWithTag(v25, 0);
LABEL_87:
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_89;
  }
LABEL_28:
  v19 = -1073741801;
LABEL_89:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v19;
}
