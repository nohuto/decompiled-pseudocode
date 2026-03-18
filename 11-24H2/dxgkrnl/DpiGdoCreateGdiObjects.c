/*
 * XREFs of DpiGdoCreateGdiObjects @ 0x1403F1B3C
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x140404094 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     WdmlibInit @ 0x140232E20 (WdmlibInit.c)
 *     DpiGdoSetupGdiParameters @ 0x1403F1F5C (DpiGdoSetupGdiParameters.c)
 *     DpiAppendNumberToString @ 0x1403F25CC (DpiAppendNumberToString.c)
 */

__int64 __fastcall DpiGdoCreateGdiObjects(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned int v5; // r15d
  int appended; // ebx
  __int64 v7; // r14
  ULONG v8; // edx
  const WCHAR *v9; // rcx
  char v10; // r12
  char v11; // r13
  bool v12; // zf
  __int64 v13; // rbx
  int v14; // eax
  NTSTATUS v15; // eax
  PVOID DeviceExtension; // rdi
  NTSTATUS v17; // eax
  __int64 v18; // rax
  _QWORD *v19; // rdx
  PDEVICE_OBJECT v20; // rax
  NTSTATUS v21; // eax
  _QWORD *v22; // rcx
  PVOID *v23; // rax
  int v25; // [rsp+30h] [rbp-41h]
  struct _UNICODE_STRING DeviceName; // [rsp+60h] [rbp-11h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+70h] [rbp-1h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a3;
  v5 = a2;
  appended = 0;
  KeWaitForSingleObject((PVOID)(v3 + 3720), Executive, 0, 0, 0LL);
  v7 = 0LL;
  while ( (unsigned int)v7 < v5 )
  {
    DeviceObject = 0LL;
    v8 = *(_DWORD *)(v4 + 4 * v7);
    v9 = L"\\Device\\RemoteVideo";
    v10 = 0;
    v11 = 0;
    v12 = *(_BYTE *)(v3 + 2847) == 0;
    DeviceName = 0LL;
    if ( v12 )
      v9 = L"\\Device\\Video";
    SymbolicLinkName = 0LL;
    appended = DpiAppendNumberToString(v9, v8, &DeviceName);
    if ( appended < 0 )
      goto LABEL_30;
    v13 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 32LL);
    if ( !WdmlibInitialized )
      WdmlibInit();
    LOBYTE(v25) = 0;
    v14 = ((__int64 (__fastcall *)(__int64, __int64, struct _UNICODE_STRING *, __int64, int, int, const UNICODE_STRING *, GUID *, PDEVICE_OBJECT *))PfnIoCreateDeviceSecure)(
            v13,
            200LL,
            &DeviceName,
            35LL,
            256,
            v25,
            &SDDL_DEVOBJ_KERNEL_ONLY,
            &GUID_SD_GDO,
            &DeviceObject);
    appended = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      WdLogGlobalForLineNumber = 168;
      goto LABEL_30;
    }
    if ( !*(_BYTE *)(v3 + 2847) )
    {
      appended = DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *(_DWORD *)(v4 + 4 * v7) + 1, &SymbolicLinkName);
      if ( appended < 0 )
        goto LABEL_30;
      v15 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
      appended = v15;
      if ( v15 < 0 )
      {
        WdLogSingleEntry1(2LL, v15);
        WdLogGlobalForLineNumber = 201;
LABEL_30:
        if ( DeviceObject )
        {
          IoDeleteDevice(DeviceObject);
          DeviceObject = 0LL;
        }
        goto LABEL_32;
      }
      v10 = 1;
    }
    DeviceExtension = DeviceObject->DeviceExtension;
    *((_DWORD *)DeviceExtension + 4) = 1953656900;
    *((_DWORD *)DeviceExtension + 5) = 6;
    *((_QWORD *)DeviceExtension + 3) = DeviceObject;
    *((_QWORD *)DeviceExtension + 4) = a1;
    *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v3 + 40);
    *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v3 + 48);
    IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
    *((_QWORD *)DeviceExtension + 13) = DpiGdoDispatchCreate;
    *((_QWORD *)DeviceExtension + 14) = DpiGdoDispatchInternalIoctl;
    *((_QWORD *)DeviceExtension + 15) = DpiGdoDispatchIoctl;
    *((_DWORD *)DeviceExtension + 38) = *(_DWORD *)(a3 + 4 * v7);
    *((_DWORD *)DeviceExtension + 39) = v7;
    if ( (unsigned int)v7 >= 0x10 )
    {
      WdLogSingleEntry1(2LL, (unsigned int)v7);
      WdLogGlobalForLineNumber = 259;
    }
    v17 = IoRegisterDeviceInterface(
            *(PDEVICE_OBJECT *)(v3 + 152),
            &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
            0LL,
            (PUNICODE_STRING)DeviceExtension + 10);
    appended = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry1(2LL, v17);
      WdLogGlobalForLineNumber = 273;
LABEL_24:
      if ( v10 == 1 )
        IoDeleteSymbolicLink(&SymbolicLinkName);
      if ( v11 == 1 )
      {
        v22 = *(_QWORD **)DeviceExtension;
        if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
          || (v23 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v23 != DeviceExtension) )
        {
LABEL_34:
          __fastfail(3u);
        }
        *v23 = v22;
        v22[1] = v23;
        --*(_DWORD *)(v3 + 3776);
      }
      goto LABEL_30;
    }
    appended = DpiGdoSetupGdiParameters(DeviceObject, &DeviceName, (unsigned int)v7);
    if ( appended < 0 )
      goto LABEL_23;
    v18 = *(_QWORD *)(v3 + 4032);
    *((_DWORD *)DeviceExtension + 48) = -1;
    *((_QWORD *)DeviceExtension + 22) = v18;
    v19 = *(_QWORD **)(v3 + 3712);
    if ( *v19 != v3 + 3704 )
      goto LABEL_34;
    *((_QWORD *)DeviceExtension + 1) = v19;
    v11 = 1;
    *(_QWORD *)DeviceExtension = v3 + 3704;
    *v19 = DeviceExtension;
    *(_QWORD *)(v3 + 3712) = DeviceExtension;
    v20 = DeviceObject;
    ++*(_DWORD *)(v3 + 3776);
    v20->Flags |= 4u;
    DeviceObject->Flags &= ~0x80u;
    v21 = IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 10, 1u);
    appended = v21;
    if ( v21 < 0 )
    {
      WdLogSingleEntry1(2LL, v21);
      WdLogGlobalForLineNumber = 333;
LABEL_23:
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 10);
      goto LABEL_24;
    }
LABEL_32:
    RtlFreeUnicodeString(&DeviceName);
    RtlFreeUnicodeString(&SymbolicLinkName);
    if ( appended < 0 )
      break;
    v4 = a3;
    v7 = (unsigned int)(v7 + 1);
    v5 = a2;
  }
  KeReleaseMutex((PRKMUTEX)(v3 + 3720), 0);
  return (unsigned int)appended;
}
