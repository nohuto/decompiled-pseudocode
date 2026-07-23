/*
 * XREFs of PiDrvDbOverlayNodeHive @ 0x140735670
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x140737564 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407350DC (PiDrvDbOverlayCopyKeys.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x14097D774 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegCreateKey @ 0x140A49664 (_PnpCtxRegCreateKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbOverlayNodeHive(__int64 a1, const wchar_t *a2, int a3)
{
  __int64 v6; // rdi
  int v7; // r8d
  int Key; // ebx
  wchar_t **v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // edi
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  void *Pool2; // r14
  unsigned int v19; // r15d
  __int64 i; // r8
  __int64 v21; // rcx
  int v22; // edi
  int v23; // esi
  int v24; // r8d
  int v25; // eax
  int v27; // [rsp+20h] [rbp-89h]
  int v28; // [rsp+20h] [rbp-89h]
  int v29; // [rsp+40h] [rbp-69h] BYREF
  int v30; // [rsp+44h] [rbp-65h] BYREF
  int v31; // [rsp+48h] [rbp-61h] BYREF
  int v32; // [rsp+4Ch] [rbp-5Dh] BYREF
  HANDLE v33; // [rsp+50h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-51h] BYREF
  HANDLE v35; // [rsp+60h] [rbp-49h] BYREF
  HANDLE v36; // [rsp+68h] [rbp-41h] BYREF
  HANDLE v37; // [rsp+70h] [rbp-39h] BYREF
  HANDLE v38; // [rsp+78h] [rbp-31h] BYREF
  _QWORD v39[8]; // [rsp+80h] [rbp-29h] BYREF

  v38 = 0LL;
  memset_0(v39, 0, sizeof(v39));
  v36 = 0LL;
  v35 = 0LL;
  LODWORD(v6) = 0;
  v33 = 0LL;
  v37 = 0LL;
  Handle = 0LL;
  v31 = 0;
  v32 = 0;
  v30 = 0;
  if ( wcsicmp(a2, L"SYSTEM") )
  {
    if ( !wcsicmp(a2, L"SOFTWARE") && (*(_DWORD *)(a1 + 492) & 0x20) == 0 )
      goto LABEL_3;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 492);
    if ( (v7 & 0x10) == 0 )
    {
LABEL_3:
      Key = 0;
      goto LABEL_50;
    }
    v9 = off_140B3DFD8;
    do
    {
      v10 = (__int64)*v9++;
      v11 = (unsigned int)v6;
      v6 = (unsigned int)(v6 + 1);
      v39[v11] = v10;
    }
    while ( (unsigned int)v6 < 4 );
    if ( (v7 & 0xC0) != 0 )
    {
      v12 = PnpCtxRegOpenKey(0, a3, (unsigned int)L"ControlSet001\\Services", 0, 131097, (__int64)&v33);
      Key = v12;
      if ( v12 == -1073741772 )
      {
        v33 = 0LL;
      }
      else if ( v12 < 0 )
      {
        goto LABEL_50;
      }
    }
    v39[v6] = L"ControlSet001\\Services";
    LODWORD(v6) = v6 + 1;
  }
  v13 = (unsigned int)v6;
  v14 = v6 + 1;
  v39[v13] = L"Setup\\ResolveFilePaths";
  v15 = PnpCtxRegOpenKey(
          0,
          -2147483646,
          (unsigned int)L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\DriverHiveOverlays",
          0,
          131097,
          (__int64)&v36);
  Key = v15;
  if ( v15 == -1073741772 )
  {
    v36 = 0LL;
  }
  else
  {
    if ( v15 < 0 )
      goto LABEL_50;
    v16 = PnpCtxRegOpenKey(0, (_DWORD)v36, (_DWORD)a2, 0, 131097, (__int64)&v35);
    Key = v16;
    if ( v16 == -1073741772 )
    {
      v35 = 0LL;
    }
    else if ( v16 < 0 )
    {
      goto LABEL_50;
    }
  }
  Key = PnpCtxRegOpenKey(0, -2147483646, (_DWORD)a2, 0, 131103, (__int64)&v38);
  if ( Key >= 0 )
  {
    Key = PiDrvDbOverlayCopyKeys(a3, 0, (int)v38, 0, v27, (__int64)v39, v14, (__int64)v35);
    if ( Key >= 0 )
    {
      if ( v33 )
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x208uLL, 0x62647050u);
        if ( !Pool2 )
        {
          Key = -1073741670;
          goto LABEL_50;
        }
        v19 = 0;
        for ( i = 0LL; ; i = v19 )
        {
          v29 = 260;
          v25 = PnpCtxRegEnumKey(v17, v33, i, Pool2, &v29);
          if ( v25 == -2147483622 )
          {
LABEL_49:
            ExFreePoolWithTag(Pool2, 0);
            goto LABEL_50;
          }
          if ( v25 < 0 || (int)PnpCtxRegOpenKey(0, (_DWORD)v33, (_DWORD)Pool2, 0, 131097, (__int64)&Handle) < 0 )
            goto LABEL_47;
          v29 = 4;
          if ( (int)PnpCtxRegQueryValue(v17, Handle, L"Type", &v30, &v31, &v29) < 0 || v30 != 4 || v29 != 4 )
            break;
          v29 = 4;
          if ( (int)PnpCtxRegQueryValue(v21, Handle, L"Start", &v30, &v32, &v29) < 0 || v30 != 4 || v29 != 4 )
          {
            v22 = v31;
LABEL_36:
            v32 = 0;
            v23 = 0;
            goto LABEL_37;
          }
          v22 = v31;
          v23 = v32;
LABEL_37:
          ZwClose(Handle);
          if ( !v22 )
            goto LABEL_47;
          if ( (v22 & 0xB) == 0 || v23 == 2 )
          {
            if ( (*(_DWORD *)(a1 + 492) & 0x80u) == 0 )
              goto LABEL_47;
          }
          else if ( (*(_DWORD *)(a1 + 492) & 0x40) == 0 )
          {
            goto LABEL_47;
          }
          v24 = (int)v37;
          if ( !v37 )
          {
            Key = PnpCtxRegCreateKey(
                    0,
                    (_DWORD)v38,
                    (unsigned int)L"ControlSet001\\Services",
                    0,
                    131103,
                    0LL,
                    (__int64)&v37,
                    0LL);
            if ( Key < 0 )
              goto LABEL_49;
            v24 = (int)v37;
          }
          Key = PiDrvDbOverlayCopyKeys((int)v33, (int)Pool2, v24, (int)Pool2, v28, 0LL, 0, 0LL);
          if ( Key < 0 )
            goto LABEL_49;
LABEL_47:
          ++v19;
        }
        v22 = 0;
        v31 = 0;
        goto LABEL_36;
      }
    }
  }
LABEL_50:
  if ( v35 )
    ZwClose(v35);
  if ( v36 )
    ZwClose(v36);
  if ( v33 )
    ZwClose(v33);
  if ( v37 )
    ZwClose(v37);
  if ( v38 )
    ZwClose(v38);
  return (unsigned int)Key;
}
