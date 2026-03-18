/*
 * XREFs of PiDevCfgQueryIncludedDriverNode @ 0x14072AC78
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140A7E6CC (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x1404C0414 (PnpDuplicateUnicodeString.c)
 *     PnpValidateRegistryMultiSz @ 0x1404D2868 (PnpValidateRegistryMultiSz.c)
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1405A6C08 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     RtlCreateUnicodeString @ 0x140833010 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     _PnpCtxRegOpenKey @ 0x1408C7AFC (_PnpCtxRegOpenKey.c)
 *     _PnpOpenObjectRegKey @ 0x1408CD438 (_PnpOpenObjectRegKey.c)
 *     PiDevCfgGetDriverPackageId @ 0x1409977D8 (PiDevCfgGetDriverPackageId.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x140A82B1C (PiDevCfgOpenDriverConfiguration.c)
 *     PiDevCfgFreeDriverNode @ 0x140A9EB68 (PiDevCfgFreeDriverNode.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverNode(
        __int64 a1,
        const wchar_t *a2,
        const wchar_t *a3,
        int a4,
        __int64 *a5)
{
  const WCHAR *v8; // rsi
  int v9; // ebx
  unsigned int *v10; // r12
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  const wchar_t *v15; // rdx
  int v16; // eax
  int DriverPackageId; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 Pool2; // rax
  __int64 v22; // rdi
  UNICODE_STRING *v23; // rcx
  _QWORD *v24; // rax
  int RegistryValue; // eax
  wchar_t *i; // rsi
  wchar_t v28; // dx
  int v29; // ecx
  char v30; // r14
  int DriverConfigurationKeyScope; // eax
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // rax
  HANDLE KeyHandle; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v36; // [rsp+48h] [rbp-18h]
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+38h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v8 = a2;
  UnicodeString.Buffer = 0LL;
  v9 = 0;
  Handle = 0LL;
  v10 = 0LL;
  KeyHandle = 0LL;
  v36 = 0LL;
  if ( !a2 )
  {
    v15 = *(const wchar_t **)(a1 + 96);
    if ( !v15 || wcsicmp(a3, v15) )
    {
      v16 = PiDevCfgOpenDriverConfiguration(*(_QWORD *)(a1 + 16), a3, &KeyHandle);
      v9 = v16;
      if ( v16 == -1073741772 )
      {
        v9 = 0;
      }
      else if ( v16 < 0 )
      {
        goto LABEL_45;
      }
    }
    if ( !KeyHandle )
    {
      v8 = *(const WCHAR **)(a1 + 360);
      if ( !v8 )
        goto LABEL_26;
      while ( *v8 )
      {
        DriverPackageId = PiDevCfgGetDriverPackageId(v8, &UnicodeString);
        v9 = DriverPackageId;
        if ( DriverPackageId == -1073741772 )
          goto LABEL_9;
        if ( DriverPackageId < 0 )
          goto LABEL_45;
        v18 = PnpOpenObjectRegKey(PiPnpRtlCtx, UnicodeString.Buffer, 8, 131097, 0, (__int64)&Handle);
        v9 = v18;
        if ( v18 == -1073741772 )
          goto LABEL_9;
        if ( v18 < 0 )
          goto LABEL_45;
        v19 = PiDevCfgOpenDriverConfiguration(Handle, a3, &KeyHandle);
        v9 = v19;
        if ( v19 >= 0 )
          goto LABEL_38;
        if ( v19 != -1073741772 )
          goto LABEL_45;
        v9 = 0;
        ZwClose(Handle);
        Handle = 0LL;
        RtlFreeAnsiString(&UnicodeString);
        v20 = -1LL;
        do
          ++v20;
        while ( v8[v20] );
        v8 += v20 + 1;
      }
      if ( v9 < 0 )
        goto LABEL_45;
LABEL_38:
      if ( !KeyHandle )
      {
LABEL_26:
        v9 = -1073740654;
        goto LABEL_47;
      }
LABEL_39:
      Pool2 = ExAllocatePool2(0x100uLL);
      v22 = Pool2;
      if ( !Pool2 )
        goto LABEL_7;
      *(_DWORD *)(Pool2 + 184) = 32;
      v23 = (UNICODE_STRING *)(Pool2 + 40);
      v24 = (_QWORD *)(Pool2 + 224);
      v24[1] = v24;
      *v24 = v24;
      *(_QWORD *)(v22 + 216) = v22 + 208;
      *(_QWORD *)(v22 + 208) = v22 + 208;
      *(_QWORD *)(v22 + 392) = v22 + 384;
      *(_QWORD *)(v22 + 384) = v22 + 384;
      if ( RtlCreateUnicodeString(v23, v8)
        && PnpDuplicateUnicodeString(v22 + 56, (__int64)&UnicodeString)
        && RtlCreateUnicodeString((PUNICODE_STRING)(v22 + 88), a3) )
      {
        *(_DWORD *)(v22 + 104) = a4;
        RegistryValue = IopGetRegistryValue(KeyHandle);
        v10 = v36;
        v9 = RegistryValue;
        if ( RegistryValue == -1073741772 )
        {
          v9 = 0;
LABEL_73:
          *(_QWORD *)(v22 + 16) = Handle;
          *(_QWORD *)(v22 + 32) = KeyHandle;
          Handle = 0LL;
          KeyHandle = 0LL;
          *a5 = v22;
          goto LABEL_43;
        }
        if ( RegistryValue >= 0 )
        {
          if ( !PnpValidateRegistryMultiSz(v36) )
          {
            v9 = -1073741823;
            goto LABEL_42;
          }
          for ( i = (wchar_t *)((char *)v10 + v10[2]); ; i += v34 + 1 )
          {
            v28 = *i;
            if ( !*i )
              goto LABEL_73;
            v29 = v28 - 42;
            if ( v28 == 42 )
              v29 = i[1];
            if ( !v29 )
            {
              *(_DWORD *)(v22 + 104) = -1;
              goto LABEL_73;
            }
            v30 = 1;
            if ( v28 != 43 )
            {
              if ( v28 != 45 )
                goto LABEL_66;
              v30 = 0;
            }
            ++i;
LABEL_66:
            DriverConfigurationKeyScope = PiDevCfgGetDriverConfigurationKeyScope(i);
            v32 = *(_DWORD *)(v22 + 104);
            if ( v30 )
              v33 = DriverConfigurationKeyScope | v32;
            else
              v33 = ~DriverConfigurationKeyScope & v32;
            *(_DWORD *)(v22 + 104) = v33;
            v34 = -1LL;
            do
              ++v34;
            while ( i[v34] );
          }
        }
      }
      else
      {
        v9 = -1073741670;
      }
LABEL_42:
      PiDevCfgFreeDriverNode(v22);
LABEL_43:
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      goto LABEL_45;
    }
    v8 = *(const WCHAR **)(a1 + 48);
LABEL_6:
    if ( !PnpDuplicateUnicodeString((__int64)&UnicodeString, a1 + 56) )
    {
LABEL_7:
      v9 = -1073741670;
      goto LABEL_45;
    }
    v14 = PnpCtxRegOpenKey(PiPnpRtlCtx, *(_QWORD *)(a1 + 16), 0, 0, 131097, (__int64)&Handle);
    v9 = v14;
LABEL_23:
    if ( v14 >= 0 )
      goto LABEL_39;
    goto LABEL_45;
  }
  if ( !wcsicmp(a2, *(const wchar_t **)(a1 + 48)) )
  {
    v11 = PiDevCfgOpenDriverConfiguration(*(_QWORD *)(a1 + 16), a3, &KeyHandle);
    v9 = v11;
    if ( v11 == -1073741772 )
    {
LABEL_4:
      v9 = -1073740654;
      goto LABEL_45;
    }
    if ( v11 < 0 )
      goto LABEL_45;
    goto LABEL_6;
  }
  v12 = PiDevCfgGetDriverPackageId(v8, &UnicodeString);
  v9 = v12;
  if ( v12 == -1073741772 )
    goto LABEL_9;
  if ( v12 < 0 )
    goto LABEL_45;
  v13 = PnpOpenObjectRegKey(PiPnpRtlCtx, UnicodeString.Buffer, 8, 131097, 0, (__int64)&Handle);
  v9 = v13;
  if ( v13 == -1073741772 )
  {
LABEL_9:
    v9 = -1073740655;
    goto LABEL_45;
  }
  if ( v13 >= 0 )
  {
    v14 = PiDevCfgOpenDriverConfiguration(Handle, a3, &KeyHandle);
    v9 = v14;
    if ( v14 == -1073741772 )
      goto LABEL_4;
    goto LABEL_23;
  }
LABEL_45:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_47:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v9;
}
