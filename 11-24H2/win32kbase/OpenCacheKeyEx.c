/*
 * XREFs of OpenCacheKeyEx @ 0x1400A0010
 * Callers:
 *     InitScancodeMap @ 0x14009E260 (InitScancodeMap.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x14009E788 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     FastWriteProfileStringW @ 0x14009E940 (FastWriteProfileStringW.c)
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14009EA00 (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 *     FastWriteProfileValue @ 0x14009EEC0 (FastWriteProfileValue.c)
 *     FastGetProfileValue @ 0x14009F680 (FastGetProfileValue.c)
 *     FastGetProfileDwordEx @ 0x14009FAE0 (FastGetProfileDwordEx.c)
 *     CheckDesktopPolicy @ 0x14009FC30 (CheckDesktopPolicy.c)
 *     FastGetProfileStringW @ 0x14009FE20 (FastGetProfileStringW.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400A0F30 (xxxUpdatePerUserAccessPackSettings.c)
 *     CheckDesktopPolicyChange @ 0x1401A8240 (CheckDesktopPolicyChange.c)
 *     FastGetProfileKeysW @ 0x1401A8400 (FastGetProfileKeysW.c)
 *     InitCreateUserSubsystem @ 0x1402E4B58 (InitCreateUserSubsystem.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ApiSetEditionOpenProfileKey @ 0x1400A041C (ApiSetEditionOpenProfileKey.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1400A04A4 (-InitPreviousUserString@@YAXXZ.c)
 *     AccessCheckObject @ 0x1400A0660 (AccessCheckObject.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A07C0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void *__fastcall OpenCacheKeyEx(PCUNICODE_STRING Source, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  ACCESS_MASK v7; // r13d
  PCUNICODE_STRING v8; // r15
  __int64 v9; // r12
  int v10; // r14d
  __int64 v11; // rsi
  int v12; // eax
  NTSTATUS v13; // r15d
  const UNICODE_STRING *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // r8
  PVOID v20; // r12
  unsigned int CurrentWin32kSessionId; // eax
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  PCUNICODE_STRING v25; // [rsp+50h] [rbp-B0h]
  __int64 CurrentProcess; // [rsp+58h] [rbp-A8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Sourcea[32]; // [rsp+90h] [rbp-70h] BYREF
  char v29; // [rsp+D0h] [rbp-30h] BYREF

  v4 = (unsigned int)a2;
  v5 = 0LL;
  v25 = Source;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  KeyHandle = 0LL;
  v7 = a3;
  v8 = Source;
  CurrentProcess = PsGetCurrentProcess(Source, a2, a3, a4);
  v9 = CurrentProcess;
  if ( (unsigned int)ApiSetEditionOpenProfileKey((unsigned int)v4, v7, a4, &KeyHandle) )
    return KeyHandle;
  if ( v7 == 131097 && ((_DWORD)v4 == 23 || (_DWORD)v4 == 4) )
  {
    v10 = *a4;
  }
  else
  {
    if ( a4 && (*a4 & 0x10) != 0 )
    {
LABEL_35:
      *a4 = 0;
      return 0LL;
    }
    v10 = 1;
  }
  v11 = 16 * v4;
  while ( 1 )
  {
    *(_DWORD *)&Destination.Length = 0x2000000;
    Destination.Buffer = (PWSTR)&v29;
    if ( (v10 & 4) != 0 )
    {
      RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
      RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
      v12 = -5;
    }
    else
    {
      if ( *off_140245E40[*(unsigned int *)((char *)&unk_140245EA0 + v11)] == 77 )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
      }
      else
      {
        if ( v8 )
        {
          v15 = v8;
        }
        else
        {
          InitPreviousUserString();
          v15 = (const UNICODE_STRING *)(W32GetUserSessionState(v16) + 68080);
        }
        RtlAppendUnicodeStringToString(&Destination, v15);
      }
      if ( (v10 & 2) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
        v12 = -3;
      }
      else if ( (v10 & 8) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"Remote\\");
        CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
        RtlStringCchPrintfW(Sourcea, 0x20uLL, L"%ld\\", CurrentWin32kSessionId);
        RtlAppendUnicodeToString(&Destination, Sourcea);
        v12 = -9;
      }
      else
      {
        if ( a4 && (*a4 & 0x10) != 0 )
          goto LABEL_35;
        v12 = -2;
      }
    }
    v10 &= v12;
    RtlAppendUnicodeToString(&Destination, off_140245E40[*(unsigned int *)((char *)&unk_140245EA0 + v11)] + 1);
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)((char *)&unk_140245EA0 + v11 + 8));
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v13 = ZwOpenKey(&KeyHandle, v7, &ObjectAttributes);
    if ( v7 != 131097
      && v9 != *(_QWORD *)(W32GetUserGdiSessionState() + 40)
      && v9 != *(_QWORD *)(W32GetUserSessionState(v17) + 68632) )
    {
      if ( v13 < 0 )
        goto LABEL_13;
      Object = 0LL;
      v18 = ObReferenceObjectByHandle(KeyHandle, v7, 0LL, 0, &Object, 0LL);
      v20 = Object;
      if ( v18 < 0 )
      {
        ZwClose(KeyHandle);
        v13 = -1073741790;
        goto LABEL_13;
      }
      LOBYTE(v19) = 1;
      if ( !(unsigned int)AccessCheckObject(Object, v7, v19, &KeyMapping) )
      {
        ZwClose(KeyHandle);
        v13 = -1073741790;
      }
      ObfDereferenceObject(v20);
    }
    if ( v13 >= 0 )
      break;
LABEL_13:
    if ( !v10 )
      break;
    v8 = v25;
    v9 = CurrentProcess;
  }
  if ( a4 )
    *a4 = v10;
  if ( v13 >= 0 )
    return KeyHandle;
  return (void *)v5;
}
