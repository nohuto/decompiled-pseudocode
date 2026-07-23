/*
 * XREFs of PiDevCfgEnforceDevicePolicy @ 0x140A6C2F8
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x140728F98 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140729008 (PiDevCfgQueryPolicyStringList.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgEnforceDevicePolicy(__int64 a1, __int64 a2, const wchar_t *a3)
{
  BOOL v3; // r12d
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  char v9; // r15
  unsigned int v10; // ebx
  int v11; // eax
  _WORD *v12; // rdi
  int v13; // eax
  wchar_t *v14; // rsi
  __int64 v15; // rax
  const wchar_t *i; // rdi
  __int64 v17; // rax
  int v18; // eax
  wchar_t *v19; // rdi
  int v20; // eax
  wchar_t *v21; // r13
  __int64 v22; // r12
  const wchar_t **v23; // r14
  const wchar_t *v24; // rsi
  wchar_t *v25; // r12
  char v26; // r14
  const wchar_t *j; // rdi
  __int64 v28; // rax
  const wchar_t *k; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  wchar_t *v33; // r14
  int v34; // eax
  wchar_t *v35; // rsi
  const wchar_t *m; // rdi
  __int64 v37; // rax
  const wchar_t *n; // rdi
  __int64 v39; // rax
  char v40; // al
  PVOID v41; // rcx
  unsigned int v42; // eax
  char v43; // [rsp+28h] [rbp-79h]
  char v44; // [rsp+29h] [rbp-78h]
  char v45; // [rsp+2Ah] [rbp-77h]
  char v46; // [rsp+2Bh] [rbp-76h]
  char v47; // [rsp+2Ch] [rbp-75h]
  HANDLE Handle; // [rsp+30h] [rbp-71h] BYREF
  PVOID P; // [rsp+38h] [rbp-69h] BYREF
  UNICODE_STRING v50; // [rsp+40h] [rbp-61h] BYREF
  BOOL v51; // [rsp+50h] [rbp-51h]
  wchar_t *Str1; // [rsp+58h] [rbp-49h] BYREF
  __int64 v53; // [rsp+60h] [rbp-41h] BYREF
  const wchar_t **v54; // [rsp+68h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-31h] BYREF
  wchar_t *v56; // [rsp+78h] [rbp-29h] BYREF
  wchar_t *v57; // [rsp+80h] [rbp-21h] BYREF
  PVOID v58; // [rsp+88h] [rbp-19h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-11h] BYREF
  bool v62; // [rsp+120h] [rbp+7Fh] BYREF

  *(_QWORD *)&v50.Length = 8913030LL;
  Handle = 0LL;
  v50.Buffer = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\DeviceInstall";
  P = 0LL;
  ObjectAttributes.ObjectName = &v50;
  Str1 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v62 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 == -1073741772 )
  {
    if ( !PnpBootMode )
    {
LABEL_3:
      v7 = 0;
      goto LABEL_4;
    }
    *(_DWORD *)&v50.Length = 6422624;
    v50.Buffer = L"\\Registry\\Machine\\System\\DriverDatabase\\Policies";
    v6 = IopOpenRegistryKeyEx(&KeyHandle, 0LL, &v50, 0x20019u);
  }
  if ( v6 < 0 )
    goto LABEL_3;
  v50.Buffer = L"Restrictions";
  *(_DWORD *)&v50.Length = 1703960;
  if ( IopOpenRegistryKeyEx(&Handle, KeyHandle, &v50, 0x20019u) < 0 )
    goto LABEL_3;
  LOBYTE(v3) = 0;
  v9 = 0;
  v51 = v3;
  v43 = 0;
  v46 = 0;
  v45 = 0;
  v44 = 0;
  v47 = 0;
  v10 = 1;
  if ( (int)PiDevCfgQueryPolicyEnabled(Handle, (__int64)L"AllowDenyLayered", &v62) >= 0 )
  {
    LOBYTE(v3) = v62;
    v51 = v62;
  }
  if ( (int)PiDevCfgQueryPolicyEnabled(Handle, (__int64)L"DenyRemovableDevices", &v62) >= 0
    && v62
    && (*(_BYTE *)(a1 + 560) & 0x10) != 0 )
  {
    v9 = 1;
  }
  v11 = PiDevCfgQueryPolicyStringList(Handle, L"AllowDeviceClasses", &P);
  v12 = P;
  if ( v11 < 0 )
    v12 = 0LL;
  P = v12;
  v13 = PiDevCfgQueryPolicyStringList(Handle, L"DenyDeviceClasses", &Str1);
  v14 = Str1;
  if ( v13 < 0 )
    v14 = 0LL;
  v58 = v14;
  if ( a3 )
  {
    if ( v12 )
    {
      while ( *v12 )
      {
        if ( !wcsicmp(v12, a3) )
        {
          v43 = 1;
          break;
        }
        v15 = -1LL;
        do
          ++v15;
        while ( v12[v15] );
        v12 += v15 + 1;
      }
    }
    else if ( !v14 )
    {
      goto LABEL_40;
    }
    if ( v14 )
    {
      for ( i = v14; *i; i += v17 + 1 )
      {
        if ( !wcsicmp(i, a3) )
        {
          v46 = 1;
          v9 = 1;
          break;
        }
        v17 = -1LL;
        do
          ++v17;
        while ( i[v17] );
      }
    }
  }
LABEL_40:
  v18 = PiDevCfgQueryPolicyStringList(Handle, L"AllowDeviceIDs", &v53);
  v19 = (wchar_t *)v53;
  if ( v18 < 0 )
    v19 = 0LL;
  Str1 = v19;
  v20 = PiDevCfgQueryPolicyStringList(Handle, L"DenyDeviceIDs", &v54);
  v21 = (wchar_t *)v54;
  if ( v20 < 0 )
    v21 = 0LL;
  if ( v19 )
  {
    LODWORD(v19) = 0;
  }
  else if ( !v21 )
  {
    goto LABEL_78;
  }
  v22 = 2LL;
  v23 = (const wchar_t **)(a2 + 48);
  v53 = 2LL;
  v54 = (const wchar_t **)(a2 + 48);
  do
  {
    v24 = *v23;
    if ( *v23 && *v24 )
    {
      v25 = Str1;
      v26 = v44;
      do
      {
        if ( v25 && !v26 )
        {
          for ( j = v25; *j; j += v28 + 1 )
          {
            if ( !wcsicmp(j, v24) )
            {
              v26 = 1;
              v43 = 1;
              break;
            }
            v28 = -1LL;
            do
              ++v28;
            while ( j[v28] );
          }
          LODWORD(v19) = 0;
        }
        if ( v21 && !v45 )
        {
          for ( k = v21; *k; k += v30 + 1 )
          {
            if ( !wcsicmp(k, v24) )
            {
              v45 = 1;
              v9 = 1;
              break;
            }
            v30 = -1LL;
            do
              ++v30;
            while ( k[v30] );
          }
          LODWORD(v19) = 0;
        }
        v31 = -1LL;
        do
          ++v31;
        while ( v24[v31] );
        v24 += v31 + 1;
      }
      while ( *v24 );
      v22 = v53;
      v44 = v26;
      v23 = v54;
    }
    v23 += 2;
    --v22;
    v54 = v23;
    v53 = v22;
  }
  while ( v22 );
  LOBYTE(v3) = v51;
LABEL_78:
  v32 = PiDevCfgQueryPolicyStringList(Handle, L"AllowInstanceIDs", &v56);
  v33 = v56;
  if ( v32 < 0 )
    v33 = 0LL;
  v34 = PiDevCfgQueryPolicyStringList(Handle, L"DenyInstanceIDs", &v57);
  v35 = v57;
  if ( v34 < 0 )
    v35 = 0LL;
  if ( v33 )
  {
    for ( m = v33; *m; m += v37 + 1 )
    {
      if ( !wcsicmp(m, *(const wchar_t **)(a2 + 8)) )
      {
        v47 = 1;
        v43 = 1;
        break;
      }
      v37 = -1LL;
      do
        ++v37;
      while ( m[v37] );
    }
    LODWORD(v19) = 0;
  }
  else if ( !v35 )
  {
    goto LABEL_102;
  }
  if ( v35 )
  {
    for ( n = v35; *n; n += v39 + 1 )
    {
      if ( !wcsicmp(n, *(const wchar_t **)(a2 + 8)) )
      {
        v40 = 1;
        LODWORD(v19) = 0;
        goto LABEL_113;
      }
      v39 = -1LL;
      do
        ++v39;
      while ( n[v39] );
    }
    LODWORD(v19) = 0;
  }
LABEL_102:
  if ( v9 )
  {
    v40 = 0;
LABEL_113:
    if ( !v3 || v43 == (_BYTE)v19 )
    {
      v41 = P;
LABEL_126:
      v7 = -1073740959;
      goto LABEL_127;
    }
    if ( v40 )
    {
      v10 = (unsigned int)v19;
    }
    else if ( v45 == (_BYTE)v19 )
    {
      v10 = 3 - (v46 != 0);
    }
    if ( v47 == (_BYTE)v19 )
      v42 = 2 - (v44 != 0);
    else
      v42 = (unsigned int)v19;
    v7 = v42 >= v10 ? 0xC0000361 : 0;
LABEL_124:
    v41 = P;
    goto LABEL_127;
  }
  if ( v43 || v3 || (int)PiDevCfgQueryPolicyEnabled(Handle, (__int64)L"DenyUnspecified", &v62) < 0 || !v62 )
  {
    v7 = 0;
    goto LABEL_124;
  }
  v41 = P;
  if ( (a3 || !P) && (!PnpSetupInProgress || !PnpSetupUpgradeInProgress) )
    goto LABEL_126;
  v7 = 0;
LABEL_127:
  if ( v41 )
    ExFreePoolWithTag(v41, 0);
  if ( v58 )
    ExFreePoolWithTag(v58, 0);
  if ( Str1 )
    ExFreePoolWithTag(Str1, 0);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
LABEL_4:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v7;
}
