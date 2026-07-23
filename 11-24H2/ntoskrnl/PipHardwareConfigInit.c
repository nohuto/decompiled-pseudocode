/*
 * XREFs of PipHardwareConfigInit @ 0x140C22B44
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeQueryBootTimeValues @ 0x14048F0BC (KeQueryBootTimeValues.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1406A8F90 (ZwDeleteValueKey.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140717BB4 (PipHardwareConfigClearStartOverrides.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x140717D5C (PipHardwareConfigTriggerRespecialize.c)
 *     _PnpCtxRegQueryKeyPathName @ 0x140818098 (_PnpCtxRegQueryKeyPathName.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlStringFromGUID @ 0x1409A2C00 (RtlStringFromGUID.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     IopCreateRegistryKeyEx @ 0x140A6AFFC (IopCreateRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     PipHardwareConfigExists @ 0x140C22A04 (PipHardwareConfigExists.c)
 */

__int64 __fastcall PipHardwareConfigInit(GUID *Guid)
{
  HANDLE v2; // r15
  int v3; // eax
  void *v4; // rsi
  int CachedContextBaseKey; // ebx
  HANDLE v6; // r12
  int v7; // eax
  HANDLE v8; // rdi
  NTSTATUS RegistryValue; // r14d
  int v10; // eax
  int v11; // r14d
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // r14d
  bool v15; // r14
  __int64 Data; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD *v18; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING v19; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  void *v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER v23; // [rsp+78h] [rbp-90h] BYREF
  HANDLE v24; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-78h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v28[528]; // [rsp+A8h] [rbp-60h] BYREF

  LODWORD(Data) = -1;
  *(_QWORD *)&ValueName.Length = 4063292LL;
  v23.QuadPart = 0LL;
  v27 = 0LL;
  LODWORD(v22) = 0;
  v24 = 0LL;
  Handle = 0LL;
  v2 = 0LL;
  KeyHandle = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  ValueName.Buffer = L"\\Registry\\Machine\\System\\Setup";
  v3 = IopCreateRegistryKeyEx(&v21, 0LL, &ValueName, 0xF003Fu, 0, 0LL);
  v4 = v21;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v4 )
  {
    *(_DWORD *)&ValueName.Length = 1703960;
    ValueName.Buffer = L"Respecialize";
    ZwDeleteValueKey(v4, &ValueName);
  }
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 15, &KeyHandle);
  if ( CachedContextBaseKey >= 0 )
  {
    CachedContextBaseKey = RtlStringFromGUID(Guid, &PnpCurrentHardwareConfigurationGuidString);
    if ( CachedContextBaseKey >= 0 )
    {
      v6 = KeyHandle;
      v19.Buffer = L"LastConfig";
      *(_DWORD *)&v19.Length = 1441812;
      CachedContextBaseKey = ZwSetValueKey(
                               KeyHandle,
                               &v19,
                               0,
                               1u,
                               PnpCurrentHardwareConfigurationGuidString.Buffer,
                               PnpCurrentHardwareConfigurationGuidString.Length + 2);
      if ( CachedContextBaseKey >= 0 )
      {
        v7 = IopCreateRegistryKeyEx(&Handle, v6, &PnpCurrentHardwareConfigurationGuidString, 0xF003Fu, 0, (ULONG *)&v22);
        v8 = Handle;
        CachedContextBaseKey = v7;
        if ( v7 >= 0 )
        {
          RegistryValue = IopGetRegistryValue(Handle, L"Id", 0, &v18);
          CachedContextBaseKey = -1073741823;
          if ( RegistryValue >= 0 )
          {
            if ( v18[1] == 4 && v18[3] == 4 )
              LODWORD(Data) = *(_DWORD *)((char *)v18 + (unsigned int)v18[2]);
            else
              RegistryValue = -1073741823;
            ExFreePoolWithTag(v18, 0);
            if ( RegistryValue >= 0 )
              goto LABEL_25;
          }
          LODWORD(Data) = 0;
          if ( IopGetRegistryValue(v6, L"LastId", 0, &v18) >= 0 )
          {
            if ( v18[1] == 4 && v18[3] == 4 )
              LODWORD(Data) = *(_DWORD *)((char *)v18 + (unsigned int)v18[2]) + 1;
            ExFreePoolWithTag(v18, 0);
          }
          v10 = Data;
          v11 = Data - 1;
          if ( (_DWORD)Data != (_DWORD)Data - 1 )
          {
            do
            {
              v12 = PipHardwareConfigExists(v6, v10) == 0;
              v10 = Data;
              if ( v12 )
                break;
              v10 = Data + 1;
              LODWORD(Data) = v10;
            }
            while ( v10 != v11 );
            if ( v10 != v11 )
            {
              *(_DWORD *)&v19.Length = 917516;
              v19.Buffer = L"LastId";
              ZwSetValueKey(v6, &v19, 0, 4u, &Data, 4u);
              v19.Buffer = L"Id";
              *(_DWORD *)&v19.Length = 393220;
              CachedContextBaseKey = ZwSetValueKey(v8, &v19, 0, 4u, &Data, 4u);
              if ( CachedContextBaseKey >= 0 )
              {
LABEL_25:
                PnpCurrentHardwareConfigurationIndex = Data;
                KeQueryBootTimeValues(&Handle, &v23, &v27);
                v23.QuadPart -= v27;
                v19.Buffer = L"LastUse";
                *(_DWORD *)&v19.Length = 1048590;
                ZwSetValueKey(v8, &v19, 0, 3u, &v23, 8u);
                v19.Buffer = (wchar_t *)L"Current";
                *(_DWORD *)&v19.Length = 1048590;
                CachedContextBaseKey = IopCreateRegistryKeyEx(&v24, v6, &v19, 0xF003Fu, 3u, 0LL);
                if ( CachedContextBaseKey < 0
                  || (LODWORD(v21) = 260,
                      CachedContextBaseKey = PnpCtxRegQueryKeyPathName(v13, (__int64)v8, (__int64)v28, (__int64)&v21),
                      CachedContextBaseKey < 0) )
                {
                  v2 = v24;
                }
                else
                {
                  v2 = v24;
                  CachedContextBaseKey = ZwSetValueKey(v24, &CmSymbolicLinkValueName, 0, 6u, v28, 2 * (_DWORD)v21 - 2);
                  if ( CachedContextBaseKey >= 0 )
                  {
                    if ( InitSafeBootMode
                      || IopGetRegistryValue(v8, L"Reset", 0, &v18) >= 0
                      && (v18[1] != 4 || v18[3] != 4
                        ? (v14 = 0)
                        : (v14 = *(_DWORD *)((char *)v18 + (unsigned int)v18[2])),
                          ExFreePoolWithTag(v18, 0),
                          v14) )
                    {
                      if ( (int)PipHardwareConfigClearStartOverrides((unsigned int)Data) >= 0 )
                      {
                        *(_DWORD *)&ValueName.Length = 786442;
                        ValueName.Buffer = L"Reset";
                        ZwDeleteValueKey(v8, &ValueName);
                      }
                    }
                    if ( v4 )
                    {
                      if ( (_DWORD)v22 == 1 )
                        goto LABEL_49;
                      v15 = 0;
                      if ( IopGetRegistryValue(v4, L"RespecializeStarted", 0, &v18) >= 0 )
                      {
                        if ( v18[1] == 4 && v18[3] == 4 )
                          v15 = *(_DWORD *)((char *)v18 + (unsigned int)v18[2]) == 1;
                        ExFreePoolWithTag(v18, 0);
                        if ( v15 )
                          goto LABEL_49;
                      }
                      if ( IopGetRegistryValue(v8, L"Respecialize", 0, &v18) >= 0 )
                      {
                        if ( v18[1] == 4 && v18[3] == 4 )
                          v15 = *(_DWORD *)((char *)v18 + (unsigned int)v18[2]) == 1;
                        ExFreePoolWithTag(v18, 0);
                        if ( v15 )
                        {
LABEL_49:
                          if ( (int)PipHardwareConfigTriggerRespecialize(v4) >= 0 )
                          {
                            *(_DWORD *)&ValueName.Length = 1703960;
                            ValueName.Buffer = L"Respecialize";
                            ZwDeleteValueKey(v8, &ValueName);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( v8 )
          ZwClose(v8);
        if ( v2 )
          ZwClose(v2);
      }
    }
  }
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)CachedContextBaseKey;
}
