/*
 * XREFs of PiDevCfgQueryIncludedDriverNode @ 0x140728A48
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1409C7B64 (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x1404BBB34 (PnpDuplicateUnicodeString.c)
 *     PnpValidateRegistryMultiSz @ 0x1404CBA24 (PnpValidateRegistryMultiSz.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x1405A3B64 (Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1405A3BF8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     PiDevCfgGetDriverPackageId @ 0x1409C9F54 (PiDevCfgGetDriverPackageId.c)
 *     RtlCreateUnicodeString @ 0x1409D2A00 (RtlCreateUnicodeString.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x140A7D63C (PiDevCfgOpenDriverConfiguration.c)
 *     PiDevCfgFreeDriverNode @ 0x140ABF4A0 (PiDevCfgFreeDriverNode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverNode(
        __int64 a1,
        const wchar_t *a2,
        const wchar_t *a3,
        int a4,
        __int64 *a5)
{
  const WCHAR *v6; // r14
  int v8; // ebx
  unsigned int *v9; // r13
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  const wchar_t *v14; // rdx
  int v15; // eax
  int DriverPackageId; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 Pool2; // rax
  __int64 v21; // rsi
  int RegistryValue; // eax
  wchar_t *i; // rdi
  wchar_t v25; // ax
  char v26; // r14
  int DriverConfigurationKeyScope; // eax
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // rax
  HANDLE KeyHandle; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v32; // [rsp+48h] [rbp-18h]
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+48h] BYREF
  int v35; // [rsp+B8h] [rbp+58h]

  v35 = a4;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v6 = a2;
  UnicodeString.Buffer = 0LL;
  Handle = 0LL;
  v8 = 0;
  KeyHandle = 0LL;
  v9 = 0LL;
  v32 = 0LL;
  if ( !a2 )
  {
    v14 = *(const wchar_t **)(a1 + 96);
    if ( !v14 || wcsicmp(a3, v14) )
    {
      v15 = PiDevCfgOpenDriverConfiguration(*(_QWORD *)(a1 + 16), a3, &KeyHandle);
      v8 = v15;
      if ( v15 == -1073741772 )
      {
        v8 = 0;
      }
      else if ( v15 < 0 )
      {
        goto LABEL_47;
      }
    }
    if ( KeyHandle )
    {
      v6 = *(const WCHAR **)(a1 + 48);
      goto LABEL_5;
    }
    v6 = *(const WCHAR **)(a1 + 360);
    if ( v6 )
    {
      if ( *v6 )
      {
        while ( 1 )
        {
          DriverPackageId = PiDevCfgGetDriverPackageId(v6, &UnicodeString);
          v8 = DriverPackageId;
          if ( DriverPackageId == -1073741772 )
            goto LABEL_35;
          if ( DriverPackageId < 0 )
            goto LABEL_47;
          v17 = PnpOpenObjectRegKey(PiPnpRtlCtx, UnicodeString.Buffer, 8, 131097, 0, (__int64)&Handle);
          v8 = v17;
          if ( v17 == -1073741772 )
            goto LABEL_35;
          if ( v17 < 0 )
            goto LABEL_47;
          v18 = PiDevCfgOpenDriverConfiguration(Handle, a3, &KeyHandle);
          v8 = v18;
          if ( v18 < 0 )
          {
            if ( v18 != -1073741772 )
              goto LABEL_47;
            ZwClose(Handle);
            Handle = 0LL;
            RtlFreeAnsiString(&UnicodeString);
            v19 = -1LL;
            do
              ++v19;
            while ( v6[v19] );
            v6 += v19 + 1;
            if ( *v6 )
              continue;
          }
          goto LABEL_37;
        }
      }
      if ( v8 < 0 )
        goto LABEL_47;
LABEL_37:
      if ( KeyHandle )
      {
LABEL_38:
        Pool2 = ExAllocatePool2(0x100uLL, 0x1C8uLL, 0x63647050u);
        v21 = Pool2;
        if ( !Pool2 )
          goto LABEL_39;
        *(_DWORD *)(Pool2 + 184) = 32;
        if ( !(unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
        {
          *(_QWORD *)(v21 + 232) = v21 + 224;
          *(_QWORD *)(v21 + 224) = v21 + 224;
        }
        *(_QWORD *)(v21 + 216) = v21 + 208;
        *(_QWORD *)(v21 + 208) = v21 + 208;
        *(_QWORD *)(v21 + 392) = v21 + 384;
        *(_QWORD *)(v21 + 384) = v21 + 384;
        if ( RtlCreateUnicodeString((PUNICODE_STRING)(v21 + 40), v6)
          && PnpDuplicateUnicodeString(v21 + 56, (__int64)&UnicodeString)
          && RtlCreateUnicodeString((PUNICODE_STRING)(v21 + 88), a3) )
        {
          *(_DWORD *)(v21 + 104) = v35;
          RegistryValue = IopGetRegistryValue(KeyHandle);
          v9 = v32;
          v8 = RegistryValue;
          if ( RegistryValue == -1073741772 )
          {
            v8 = 0;
LABEL_75:
            *(_QWORD *)(v21 + 16) = Handle;
            *(_QWORD *)(v21 + 32) = KeyHandle;
            Handle = 0LL;
            KeyHandle = 0LL;
            *a5 = v21;
LABEL_45:
            if ( v9 )
              ExFreePoolWithTag(v9, 0);
            goto LABEL_47;
          }
          if ( RegistryValue >= 0 )
          {
            if ( PnpValidateRegistryMultiSz(v32) )
            {
              for ( i = (wchar_t *)((char *)v9 + v9[2]); *i; i += v30 + 1 )
              {
                v25 = *i;
                if ( *i == 42 && !i[1] )
                {
                  *(_DWORD *)(v21 + 104) = -1;
                  goto LABEL_75;
                }
                v26 = 1;
                if ( v25 == 43 )
                {
                  ++i;
                }
                else if ( v25 == 45 )
                {
                  ++i;
                  v26 = 0;
                }
                DriverConfigurationKeyScope = PiDevCfgGetDriverConfigurationKeyScope(i);
                v28 = *(_DWORD *)(v21 + 104);
                if ( v26 )
                  v29 = DriverConfigurationKeyScope | v28;
                else
                  v29 = ~DriverConfigurationKeyScope & v28;
                v30 = -1LL;
                *(_DWORD *)(v21 + 104) = v29;
                do
                  ++v30;
                while ( i[v30] );
              }
              goto LABEL_75;
            }
            v8 = -1073741823;
          }
        }
        else
        {
          v8 = -1073741670;
        }
        PiDevCfgFreeDriverNode(v21);
        goto LABEL_45;
      }
    }
    v8 = -1073740654;
    goto LABEL_49;
  }
  if ( wcsicmp(a2, *(const wchar_t **)(a1 + 48)) )
  {
    v12 = PiDevCfgGetDriverPackageId(v6, &UnicodeString);
    v8 = v12;
    if ( v12 != -1073741772 )
    {
      if ( v12 < 0 )
        goto LABEL_47;
      v13 = PnpOpenObjectRegKey(PiPnpRtlCtx, UnicodeString.Buffer, 8, 131097, 0, (__int64)&Handle);
      v8 = v13;
      if ( v13 != -1073741772 )
      {
        if ( v13 < 0 )
          goto LABEL_47;
        v11 = PiDevCfgOpenDriverConfiguration(Handle, a3, &KeyHandle);
        v8 = v11;
        if ( v11 != -1073741772 )
          goto LABEL_7;
LABEL_14:
        v8 = -1073740654;
        goto LABEL_47;
      }
    }
LABEL_35:
    v8 = -1073740655;
    goto LABEL_47;
  }
  v10 = PiDevCfgOpenDriverConfiguration(*(_QWORD *)(a1 + 16), a3, &KeyHandle);
  v8 = v10;
  if ( v10 == -1073741772 )
    goto LABEL_14;
  if ( v10 < 0 )
    goto LABEL_47;
LABEL_5:
  if ( PnpDuplicateUnicodeString((__int64)&UnicodeString, a1 + 56) )
  {
    v11 = PnpCtxRegOpenKey(PiPnpRtlCtx, *(_QWORD *)(a1 + 16), 0, 0, 131097, (__int64)&Handle);
    v8 = v11;
LABEL_7:
    if ( v11 < 0 )
      goto LABEL_47;
    goto LABEL_38;
  }
LABEL_39:
  v8 = -1073741670;
LABEL_47:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_49:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v8;
}
