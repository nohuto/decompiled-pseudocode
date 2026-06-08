/*
 * XREFs of HwDebugInitializeRegistryDebugRegisters @ 0x140039B38
 * Callers:
 *     HwDebugDiagnosticRegistryHandler @ 0x14000BAE0 (HwDebugDiagnosticRegistryHandler.c)
 *     ProcLibGlobalInit @ 0x140043530 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x140039610 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugSetKeyNotification @ 0x140039E24 (HwDebugSetKeyNotification.c)
 */

__int64 __fastcall HwDebugInitializeRegistryDebugRegisters(int a1)
{
  __int64 v1; // r15
  const WCHAR *v2; // rdx
  __int64 v3; // rsi
  unsigned __int8 *Pool2; // r14
  int v5; // edx
  NTSTATUS v6; // edi
  int v7; // r9d
  int v8; // edx
  ULONG i; // r12d
  unsigned int v10; // ebx
  int v11; // eax
  unsigned __int8 *v12; // rbx
  __int64 v13; // r12
  _QWORD *v14; // r15
  unsigned int j; // esi
  void *v16; // rcx
  void *KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  _OWORD KeyInformation[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+27h]

  v1 = a1;
  *((_DWORD *)&ObjectAttributes.Attributes + 1) = 0;
  v2 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor\\HwDebugRegisters";
  ResultLength = 0;
  KeyHandle = 0LL;
  v3 = 0LL;
  *((_DWORD *)&ObjectAttributes.Length + 1) = 0;
  Pool2 = 0LL;
  v23 = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  DestinationString = 0LL;
  if ( a1 )
    v2 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack\\HwDebugRegisters";
  RtlInitUnicodeString(&DestinationString, v2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( (_DWORD)v1 == 1 )
  {
    v6 = HwDebugSetKeyNotification(&ObjectAttributes);
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v7 = 12;
      goto LABEL_7;
    }
  }
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    v6 = ZwQueryKey(KeyHandle, KeyCachedInformation, KeyInformation, (ULONG)40, &ResultLength);
    if ( v6 >= 0 )
    {
      if ( HIDWORD(KeyInformation[0]) )
      {
        Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, (unsigned int)(40 * HIDWORD(KeyInformation[0])), 1919119952LL);
        if ( Pool2 )
        {
          for ( i = 0; (unsigned int)i < HIDWORD(KeyInformation[0]); ++i )
          {
            v10 = v3;
            v11 = HwDebugInitializeRegistryDebugRegister(KeyHandle, i, (__int64)&Pool2[40 * v3]);
            v3 = (unsigned int)(v3 + 1);
            v6 = v11;
            if ( v11 < 0 )
              v3 = v10;
          }
          LOBYTE(Globals[2 * v1 + 293]) = v3;
          if ( (_DWORD)v3 )
          {
            Globals[2 * v1 + 294] = (__int64)Pool2;
            Pool2 = 0LL;
          }
        }
        else
        {
          v6 = -1073741670;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = 2;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v8,
              4,
              14,
              (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids);
          }
        }
      }
      else
      {
        v6 = 0;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 13;
LABEL_7:
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        4,
        v7,
        (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
        v6);
    }
  }
LABEL_23:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
  {
    if ( (_DWORD)v3 )
    {
      v12 = Pool2 + 16;
      v13 = (unsigned int)v3;
      do
      {
        v14 = (_QWORD *)*((_QWORD *)v12 + 1);
        if ( v14 )
        {
          for ( j = 0; j < *v12; ++j )
          {
            v16 = (void *)v14[2 * j];
            if ( v16 )
              ExFreePoolWithTag(v16, (ULONG)1919119952);
          }
          ExFreePoolWithTag(v14, (ULONG)1919119952);
        }
        v12 += 40;
        --v13;
      }
      while ( v13 );
    }
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  }
  return (unsigned int)v6;
}
