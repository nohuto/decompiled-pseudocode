/*
 * XREFs of PiDrvDbResolveFilePathKeyValues @ 0x1407368E0
 * Callers:
 *     PiDrvDbResolveKeyFilePaths @ 0x140736F4C (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140737084 (PiDrvDbResolveNodeFilePaths.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiDevCfgAppendMultiSz @ 0x140726258 (PiDevCfgAppendMultiSz.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140735ED4 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1407371F4 (PiDrvDbResolveSystemFilePath.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     _PnpCtxRegEnumValue @ 0x14097E5DC (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14097EF98 (_PnpCtxRegQueryInfoKey.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbResolveFilePathKeyValues(
        int a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        const UNICODE_STRING *a4)
{
  char v4; // si
  unsigned int v6; // r13d
  void *v7; // r15
  ULONG_PTR v8; // r12
  _WORD *v9; // r14
  UNICODE_STRING *v10; // rdi
  int v11; // eax
  int appended; // ebx
  BOOLEAN v14; // al
  int v15; // ecx
  __int64 v16; // rcx
  unsigned int v17; // esi
  int v18; // eax
  unsigned int v19; // r13d
  unsigned __int64 v20; // rax
  const wchar_t *v21; // r13
  const WCHAR *v22; // rdi
  unsigned int *v23; // rsi
  __int64 v24; // rcx
  const WCHAR *v25; // rdi
  unsigned __int64 v26; // rax
  unsigned __int16 v27; // ax
  int v28; // r12d
  int v29; // eax
  unsigned __int16 Length; // ax
  const void **p_UnicodeString; // rdx
  int v32; // eax
  unsigned int v33; // ecx
  const WCHAR *v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v39; // [rsp+4Ch] [rbp-75h]
  unsigned int v40; // [rsp+50h] [rbp-71h]
  const WCHAR *v41; // [rsp+58h] [rbp-69h] BYREF
  unsigned int v42; // [rsp+60h] [rbp-61h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-59h] BYREF
  int v44; // [rsp+78h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-41h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-29h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-21h]
  __int64 Pool2; // [rsp+A8h] [rbp-19h]
  UNICODE_STRING v50; // [rsp+B0h] [rbp-11h] BYREF
  UNICODE_STRING v51; // [rsp+C0h] [rbp-1h] BYREF
  PVOID P; // [rsp+D0h] [rbp+Fh]

  v4 = a2;
  Handle = 0LL;
  v38 = 0;
  LODWORD(v41) = 0;
  v40 = 0;
  Pool2 = 0LL;
  DestinationString = 0LL;
  v6 = 0;
  v39 = 0;
  v7 = 0LL;
  v48 = 0LL;
  LODWORD(v8) = 0;
  KeyHandle = 0LL;
  v9 = 0LL;
  P = 0LL;
  v50 = 0LL;
  v44 = 0;
  v10 = a3;
  UnicodeString = 0LL;
  v51 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v51, 0LL);
  v11 = PnpCtxRegOpenKey(0, a1, (unsigned int)L"Setup\\ResolveFilePaths", 0, 131097, (__int64)&Handle);
  appended = v11;
  if ( v11 == -1073741772 )
  {
    LODWORD(v10) = 0;
LABEL_3:
    appended = (int)v10;
    goto LABEL_4;
  }
  if ( v11 >= 0 )
  {
    appended = PiDrvDbQuerySystemPathWin32(v10, &DestinationString);
    if ( appended < 0 )
    {
      appended = 0;
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    if ( (v4 & 2) != 0 )
    {
      if ( v10 && (v14 = RtlEqualUnicodeString(v10, &PiDrvDbSystemRootNt, 1u), v10 = 0LL, !v14)
        || (UNICODE_STRING *)DestinationString.Buffer != v10
        && !RtlEqualUnicodeString(&DestinationString, &PiDrvDbSystemRootWin32, 1u) )
      {
LABEL_21:
        if ( (int)PnpCtxRegQueryInfoKey(v15, (_DWORD)Handle, 0, 0, (__int64)v10, (__int64)&v38, (__int64)&v41) >= 0 )
        {
          v8 = (unsigned int)v41;
          v39 = (unsigned int)v41;
          v6 = 2 * v38 + 2;
          v40 = v6;
          if ( 2 * v38 != -2 )
          {
            Pool2 = ExAllocatePool2(0x100uLL, v6, 0x62647050u);
            v7 = (void *)Pool2;
            if ( !Pool2 )
            {
              appended = -1073741670;
              goto LABEL_4;
            }
          }
          if ( (_DWORD)v8 )
          {
            v48 = ExAllocatePool2(0x100uLL, v8, 0x62647050u);
            v9 = (_WORD *)v48;
            if ( !v48 )
            {
LABEL_27:
              appended = -1073741670;
LABEL_87:
              if ( v7 )
                ExFreePoolWithTag(v7, 0);
LABEL_89:
              if ( v9 )
                ExFreePoolWithTag(v9, 0);
              goto LABEL_4;
            }
          }
        }
        v17 = (unsigned int)v10;
LABEL_29:
        v42 = v17;
        LODWORD(v41) = v6 >> 1;
        v38 = v8;
        v18 = PnpCtxRegEnumValue(v16, Handle, v17, v7, &v41, &v44, v9, &v38);
        if ( v18 == -2147483622 )
          goto LABEL_87;
        if ( v18 == -1073741789 )
        {
          if ( (unsigned int)v41 > v6 >> 1 )
          {
            v19 = 2 * (_DWORD)v41;
            v40 = 2 * (_DWORD)v41;
            if ( v7 )
              ExFreePoolWithTag(v7, 0);
            Pool2 = ExAllocatePool2(0x100uLL, v19, 0x62647050u);
            v7 = (void *)Pool2;
            if ( !Pool2 )
            {
              appended = -1073741670;
              goto LABEL_89;
            }
          }
          if ( v38 <= (unsigned int)v8 )
            goto LABEL_39;
          v8 = v38;
          v39 = v38;
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          v48 = ExAllocatePool2(0x100uLL, v8, 0x62647050u);
          v9 = (_WORD *)v48;
          if ( v48 )
          {
LABEL_39:
            --v17;
            goto LABEL_84;
          }
          goto LABEL_27;
        }
        if ( v18 < 0 )
          goto LABEL_86;
        if ( v44 != 7 )
          goto LABEL_84;
        if ( v38 < 4 )
          goto LABEL_84;
        v20 = (unsigned __int64)v38 >> 1;
        if ( v9[v20 - 1] )
          goto LABEL_84;
        if ( v9[v20 - 2] )
          goto LABEL_84;
        v18 = PnpCtxRegOpenKey(0, a1, (_DWORD)v7, 0, 131103, (__int64)&KeyHandle);
        if ( v18 == -1073741772 )
          goto LABEL_84;
        if ( v18 < 0 )
        {
LABEL_86:
          appended = v18;
          goto LABEL_87;
        }
        v21 = v9;
        if ( !*v9 )
          goto LABEL_83;
        while ( 1 )
        {
          v22 = &word_140AEDAC0;
          if ( wcsicmp(v21, L" ") )
            v22 = v21;
          v41 = v22;
          if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
            break;
LABEL_79:
          v37 = -1LL;
          do
            ++v37;
          while ( v21[v37] );
          v21 += v37 + 1;
          if ( !*v21 )
          {
LABEL_82:
            v9 = (_WORD *)v48;
            v7 = (void *)Pool2;
            v17 = v42;
            LODWORD(v8) = v39;
LABEL_83:
            ZwClose(KeyHandle);
            if ( appended < 0 )
              goto LABEL_87;
LABEL_84:
            v6 = v40;
            ++v17;
            goto LABEL_29;
          }
        }
        v23 = (unsigned int *)P;
        if ( *((_DWORD *)P + 1) == 1 || *((_DWORD *)P + 1) == 2 )
        {
          v33 = *((_DWORD *)P + 3);
          v34 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
          if ( v33 - 3 > 0xFFFB || v34[((unsigned __int64)v33 >> 1) - 1] )
            goto LABEL_78;
          RtlInitUnicodeString(&v50, v34);
          UnicodeString.Length = 0;
          v35 = PiDrvDbResolveSystemFilePath(
                  &v50,
                  a2,
                  a3,
                  (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
                  a4,
                  &UnicodeString);
          appended = v35;
          if ( v35 == -1073741275 || v35 == -1073741637 )
          {
            appended = 0;
            goto LABEL_78;
          }
          if ( v35 < 0 )
            goto LABEL_78;
          v32 = PnpCtxRegSetValue(
                  v36,
                  KeyHandle,
                  v22,
                  v23[1],
                  UnicodeString.Buffer,
                  (unsigned int)UnicodeString.Length + 2);
        }
        else
        {
          if ( *((_DWORD *)P + 1) != 7 )
            goto LABEL_78;
          v24 = *((unsigned int *)P + 3);
          v25 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
          if ( (unsigned int)(v24 - 4) > 0xFFFA )
            goto LABEL_78;
          v26 = (unsigned __int64)(unsigned int)v24 >> 1;
          if ( v25[v26 - 1] || v25[v26 - 2] )
            goto LABEL_78;
          v27 = 0;
          v28 = 0;
          v51.Length = 0;
          if ( *v25 )
          {
            while ( 1 )
            {
              RtlInitUnicodeString(&v50, v25);
              UnicodeString.Length = 0;
              v29 = PiDrvDbResolveSystemFilePath(
                      &v50,
                      a2,
                      a3,
                      (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
                      a4,
                      &UnicodeString);
              appended = v29;
              if ( v29 == -1073741275 || v29 == -1073741637 )
              {
                Length = 0;
                UnicodeString.Length = 0;
              }
              else
              {
                if ( v29 < 0 )
                  break;
                Length = UnicodeString.Length;
                ++v28;
              }
              p_UnicodeString = (const void **)&UnicodeString;
              if ( !Length )
                p_UnicodeString = (const void **)&v50;
              appended = PiDevCfgAppendMultiSz(&v51, p_UnicodeString, 0LL, 1);
              if ( appended < 0 )
                break;
              v25 += ((unsigned __int64)v50.Length >> 1) + 1;
              if ( !*v25 )
              {
                v27 = v51.Length;
                goto LABEL_68;
              }
            }
LABEL_78:
            ExFreePoolWithTag(v23, 0);
            if ( appended < 0 )
              goto LABEL_82;
            goto LABEL_79;
          }
LABEL_68:
          if ( !v28 )
            goto LABEL_78;
          v32 = PnpCtxRegSetValue(v24, KeyHandle, v41, v23[1], v51.Buffer, v27);
        }
        appended = v32;
        goto LABEL_78;
      }
    }
    else
    {
      v10 = 0LL;
    }
    if ( (v4 & 1) == 0
      || !a4
      || (UNICODE_STRING *)DestinationString.Buffer == v10
      || RtlEqualUnicodeString(a4, &DestinationString, 1u) )
    {
      goto LABEL_3;
    }
    goto LABEL_21;
  }
LABEL_4:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v51);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)appended;
}
