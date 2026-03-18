/*
 * XREFs of DpiAcpiRegisterAcpiCallbacks @ 0x14024B6E4
 * Callers:
 *     DpiAddDevice @ 0x1402329D0 (DpiAddDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiAcpiRegisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  char v3; // si
  char v4; // r14
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  int v8; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-48h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  AcquireMiniportListMutex();
  if ( !dword_14015DED0 )
  {
    DestinationString = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    CallbackObject = 0LL;
    if ( !g_pDeviceObject )
    {
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 2189;
LABEL_17:
      ReleaseMiniportListMutex();
      return v2;
    }
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
    v2 = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry1(2LL, v6);
      WdLogGlobalForLineNumber = 2216;
      goto LABEL_12;
    }
    CallbackRegistration = ExRegisterCallback(
                             CallbackObject,
                             (PCALLBACK_FUNCTION)DpiAcpiPowerStateCallback,
                             g_pDeviceObject);
    ObfDereferenceObject(CallbackObject);
    if ( !CallbackRegistration )
    {
      v2 = -1073741823;
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 2238;
      goto LABEL_12;
    }
    v3 = 1;
    WdLogSingleEntry1(4LL, CallbackRegistration);
    WdLogGlobalForLineNumber = 2246;
    v7 = IoRegisterPlugPlayNotification(
           EventCategoryHardwareProfileChange,
           0,
           0LL,
           (PDRIVER_OBJECT)g_pDriverObject,
           (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiAcpiDockEventCallback,
           g_pDeviceObject,
           &qword_14015DEC8);
    v2 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL, v7);
      WdLogGlobalForLineNumber = 2267;
      goto LABEL_12;
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v1 + 928))(*(_QWORD *)(v1 + 864), DpiAcpiEventCallback, a1);
  v2 = v8;
  if ( v8 >= 0 )
  {
    WdLogSingleEntry1(4LL, v8);
    *(_BYTE *)(v1 + 1157) = 1;
    ++dword_14015DED0;
    WdLogGlobalForLineNumber = 2296;
    goto LABEL_17;
  }
  WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 928), v8);
  WdLogGlobalForLineNumber = 2288;
  v4 = v3;
LABEL_12:
  ReleaseMiniportListMutex();
  *(_BYTE *)(v1 + 1157) = 0;
  if ( v4 == 1 )
  {
    IoUnregisterPlugPlayNotification(qword_14015DEC8);
    qword_14015DEC8 = 0LL;
  }
  if ( v3 == 1 )
  {
    ExUnregisterCallback(CallbackRegistration);
    CallbackRegistration = 0LL;
  }
  return v2;
}
