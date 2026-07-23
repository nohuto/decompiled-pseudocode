/*
 * XREFs of PiDrvDbOverlayCopyKeys @ 0x1407350DC
 * Callers:
 *     PiDrvDbOverlayCopyKeys @ 0x1407350DC (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x140735670 (PiDrvDbOverlayNodeHive.c)
 * Callees:
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryKey @ 0x1406A7670 (ZwQueryKey.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407350DC (PiDrvDbOverlayCopyKeys.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x14097D774 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegEnumValue @ 0x14097E5DC (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14097EF98 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegCreateKey @ 0x140A49664 (_PnpCtxRegCreateKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbOverlayCopyKeys(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  BOOL v10; // esi
  void *Pool2; // rdi
  unsigned int v12; // r13d
  void *v13; // r15
  int InfoKey; // ebx
  int Key; // eax
  int v16; // ecx
  unsigned int v17; // esi
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int i; // r12d
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // r13d
  __int64 v24; // rsi
  unsigned int j; // r14d
  __int64 v26; // rdx
  __int16 v27; // ax
  __int64 v28; // rax
  HANDLE v29; // rdx
  int v30; // eax
  unsigned int v31; // r12d
  ULONG_PTR v32; // r14
  unsigned int v34; // [rsp+40h] [rbp-71h] BYREF
  unsigned int v35; // [rsp+44h] [rbp-6Dh] BYREF
  int v36; // [rsp+48h] [rbp-69h]
  unsigned int v37; // [rsp+4Ch] [rbp-65h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-61h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v41; // [rsp+68h] [rbp-49h]
  int v42; // [rsp+6Ch] [rbp-45h] BYREF
  int v43; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v44; // [rsp+74h] [rbp-3Dh] BYREF
  HANDLE v45; // [rsp+78h] [rbp-39h] BYREF
  __int64 v46; // [rsp+80h] [rbp-31h]
  PVOID P; // [rsp+88h] [rbp-29h]
  __int64 v48; // [rsp+90h] [rbp-21h]
  __int64 KeyInformation; // [rsp+98h] [rbp-19h] BYREF
  int v50; // [rsp+A0h] [rbp-11h]

  v46 = a6;
  v41 = a7;
  v10 = 0;
  Pool2 = 0LL;
  v48 = a8;
  KeyHandle = 0LL;
  KeyInformation = 0LL;
  v12 = 0;
  v50 = 0;
  v13 = 0LL;
  v45 = 0LL;
  P = 0LL;
  Handle = 0LL;
  v42 = 0;
  v43 = 0;
  v34 = 0;
  v37 = 0;
  v36 = 0;
  v35 = 0;
  v44 = 0;
  ResultLength = 0;
  InfoKey = PnpCtxRegOpenKey(0, a1, a2, 8, 131097, (__int64)&KeyHandle);
  if ( InfoKey >= 0 )
  {
    if ( ZwQueryKey(KeyHandle, KeyFlagsInformation, &KeyInformation, 0xCu, &ResultLength) >= 0 )
    {
      if ( (KeyInformation & 0x200000000LL) != 0 )
      {
        InfoKey = -2147483603;
        goto LABEL_81;
      }
      v10 = (KeyInformation & 0x100000000LL) != 0;
    }
    Key = PnpCtxRegCreateKey(0, a3, a4, v10, 393247, 0LL, (__int64)&v45, (__int64)&v43);
    v17 = 0;
    InfoKey = Key;
    if ( Key >= 0 )
    {
      if ( (int)PnpCtxRegQueryInfoKey(v16, (_DWORD)KeyHandle, 0, (unsigned int)&v34, 0LL, (__int64)&v37, (__int64)&v35) >= 0 )
      {
        v19 = v37;
        if ( v34 > v37 )
          v19 = v34;
        v12 = 2 * v19 + 2;
        v36 = v12;
        if ( 2 * v19 != -2 )
        {
          Pool2 = (void *)ExAllocatePool2(0x100uLL, v12, 0x62647050u);
          if ( !Pool2 )
          {
            InfoKey = -1073741670;
            goto LABEL_81;
          }
        }
      }
      if ( (!v35 || (v13 = (void *)ExAllocatePool2(0x100uLL, v35, 0x62647050u)) != 0LL)
        && (!v46 || !v41 || (P = (PVOID)ExAllocatePool2(0x100uLL, 8LL * v41, 0x62647050u)) != 0LL) )
      {
        for ( i = 0; ; ++i )
        {
          v34 = v12 >> 1;
          v37 = i;
          v21 = PnpCtxRegEnumKey(v18, KeyHandle, i, Pool2, &v34);
          if ( v21 == -2147483622 )
          {
            if ( InfoKey >= 0 )
            {
              v31 = v35;
              while ( 1 )
              {
                v34 = v12 >> 1;
                v35 = v31;
                v21 = PnpCtxRegEnumValue(v22, KeyHandle, v17, Pool2, &v34, &v44, v13, &v35);
                if ( v21 == -2147483622 )
                  break;
                if ( v21 == -1073741789 )
                {
                  if ( v34 > v12 >> 1 )
                  {
                    v12 = 2 * v34;
                    if ( Pool2 )
                      ExFreePoolWithTag(Pool2, 0);
                    Pool2 = (void *)ExAllocatePool2(0x100uLL, v12, 0x62647050u);
                    if ( !Pool2 )
                      goto LABEL_55;
                  }
                  v32 = v35;
                  if ( v35 > v31 )
                  {
                    v31 = v35;
                    if ( v13 )
                      ExFreePoolWithTag(v13, 0);
                    v13 = (void *)ExAllocatePool2(0x100uLL, v32, 0x62647050u);
                    if ( !v13 )
                      goto LABEL_15;
                  }
                  --v17;
                }
                else
                {
                  if ( v21 < 0 )
                    goto LABEL_74;
                  if ( v43 != 2
                    || (ResultLength = 0,
                        (unsigned int)PnpCtxRegQueryValue(v22, v45, Pool2, 0LL, 0LL, &ResultLength) != -1073741789) )
                  {
                    InfoKey = PnpCtxRegSetValue(v22, v45, Pool2, v44, v13, v35);
                    if ( InfoKey < 0 )
                      goto LABEL_75;
                  }
                }
                ++v17;
              }
            }
            goto LABEL_75;
          }
          if ( v21 != -1073741789 )
            break;
          v12 = 2 * v34;
          v36 = 2 * v34;
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0);
          Pool2 = (void *)ExAllocatePool2(0x100uLL, v12, 0x62647050u);
          if ( !Pool2 )
          {
LABEL_55:
            InfoKey = -1073741670;
            goto LABEL_77;
          }
          --i;
LABEL_54:
          ;
        }
        if ( v21 < 0 )
          goto LABEL_74;
        v18 = v46;
        v23 = 0;
        if ( v46 )
        {
          v24 = v34;
          if ( v34 )
          {
            for ( j = 0; j < v41; ++j )
            {
              if ( !wcsnicmp(*(const wchar_t **)(v18 + 8LL * j), (const wchar_t *)Pool2, (unsigned int)(v24 - 1)) )
              {
                v26 = *(_QWORD *)(v46 + 8LL * j) + 2 * v24;
                v27 = *(_WORD *)(v26 - 2);
                if ( !v27 )
                {
                  LODWORD(v24) = 0;
                  break;
                }
                if ( v27 == 92 && P )
                {
                  v28 = v23++;
                  *((_QWORD *)P + v28) = v26;
                }
              }
              v18 = v46;
            }
            i = v37;
            if ( !(_DWORD)v24 )
            {
              v17 = 0;
              goto LABEL_53;
            }
          }
          v17 = 0;
        }
        if ( !v48 )
          goto LABEL_47;
        v21 = PnpCtxRegOpenKey(0, v48, (_DWORD)Pool2, 0, 131097, (__int64)&Handle);
        if ( v21 == -1073741772 )
        {
          Handle = 0LL;
LABEL_53:
          v12 = v36;
          goto LABEL_54;
        }
        if ( v21 < 0 )
        {
LABEL_74:
          InfoKey = v21;
          goto LABEL_75;
        }
        InfoKey = PnpCtxRegQueryInfoKey(v18, (_DWORD)Handle, (unsigned int)&v42, 0, 0LL, 0LL, 0LL);
        if ( InfoKey < 0 )
          goto LABEL_75;
        if ( v42 )
        {
LABEL_47:
          v29 = Handle;
        }
        else
        {
          ZwClose(Handle);
          v29 = 0LL;
          Handle = 0LL;
        }
        v30 = PiDrvDbOverlayCopyKeys(
                (_DWORD)KeyHandle,
                (_DWORD)Pool2,
                (_DWORD)v45,
                (_DWORD)Pool2,
                0,
                (unsigned __int64)P & -(__int64)(v23 != 0),
                v23,
                (__int64)v29);
        InfoKey = v30;
        if ( v30 == -2147483603 )
        {
          InfoKey = 0;
        }
        else if ( v30 < 0 )
        {
          goto LABEL_75;
        }
        goto LABEL_53;
      }
LABEL_15:
      InfoKey = -1073741670;
LABEL_75:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
LABEL_77:
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
  }
LABEL_81:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v45 )
    ZwClose(v45);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)InfoKey;
}
