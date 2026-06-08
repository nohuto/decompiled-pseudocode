/*
 * XREFs of HwDebugInitializeRegistryDebugRegisters @ 0x140047504
 * Callers:
 *     HwDebugDiagnosticRegistryHandler @ 0x140005630 (HwDebugDiagnosticRegistryHandler.c)
 *     ProcLibGlobalInit @ 0x14004A9C8 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x14003AA2C (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugSetKeyNotification @ 0x14003AF54 (HwDebugSetKeyNotification.c)
 */

__int64 __fastcall HwDebugInitializeRegistryDebugRegisters(int a1)
{
  __int64 v1; // r15
  const WCHAR *v2; // rdx
  __int64 v3; // rsi
  unsigned __int8 *Pool2; // r14
  NTSTATUS v5; // edi
  unsigned __int16 v6; // r9
  int v7; // edx
  ULONG i; // r12d
  unsigned int v9; // ebx
  int v10; // eax
  unsigned __int8 *v11; // rbx
  __int64 v12; // r12
  _QWORD *v13; // r15
  unsigned int j; // esi
  void *v15; // rcx
  void *KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  _OWORD KeyInformation[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+27h]

  v1 = a1;
  *((_DWORD *)&ObjectAttributes.Attributes + 1) = 0;
  v2 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor\\HwDebugRegisters";
  ResultLength = 0;
  KeyHandle = 0LL;
  v3 = 0LL;
  *((_DWORD *)&ObjectAttributes.Length + 1) = 0;
  Pool2 = 0LL;
  v22 = 0LL;
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
    v5 = HwDebugSetKeyNotification(&ObjectAttributes);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v6 = 12;
      goto LABEL_7;
    }
  }
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryKey(KeyHandle, KeyCachedInformation, KeyInformation, (ULONG)40, &ResultLength);
    if ( v5 >= 0 )
    {
      if ( HIDWORD(KeyInformation[0]) )
      {
        Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, (unsigned int)(40 * HIDWORD(KeyInformation[0])), 1919119952LL);
        if ( Pool2 )
        {
          for ( i = 0; (unsigned int)i < HIDWORD(KeyInformation[0]); ++i )
          {
            v9 = v3;
            v10 = HwDebugInitializeRegistryDebugRegister(KeyHandle, i, (__int64)&Pool2[40 * v3]);
            v3 = (unsigned int)(v3 + 1);
            v5 = v10;
            if ( v10 < 0 )
              v3 = v9;
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
          v5 = -1073741670;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v7) = 2;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v7,
              4,
              14,
              (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids);
          }
        }
      }
      else
      {
        v5 = 0;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 13;
LABEL_7:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        v6,
        (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
        v5);
    }
  }
LABEL_23:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
  {
    if ( (_DWORD)v3 )
    {
      v11 = Pool2 + 16;
      v12 = (unsigned int)v3;
      do
      {
        v13 = (_QWORD *)*((_QWORD *)v11 + 1);
        if ( v13 )
        {
          for ( j = 0; j < *v11; ++j )
          {
            v15 = (void *)v13[2 * j];
            if ( v15 )
              ExFreePoolWithTag(v15, (ULONG)1919119952);
          }
          ExFreePoolWithTag(v13, (ULONG)1919119952);
        }
        v11 += 40;
        --v12;
      }
      while ( v12 );
    }
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  }
  return (unsigned int)v5;
}
