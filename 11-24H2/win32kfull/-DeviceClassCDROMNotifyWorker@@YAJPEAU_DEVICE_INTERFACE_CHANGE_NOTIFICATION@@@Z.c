/*
 * XREFs of ?DeviceClassCDROMNotifyWorker@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x140278EF8
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e___ @ 0x1402366A8 (W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e___.c)
 *     W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e___ @ 0x140278BD0 (W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e___.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     ?EnterMediaCrit@@YAXXZ @ 0x1401DFFE4 (-EnterMediaCrit@@YAXXZ.c)
 *     ?LeaveMediaCrit@@YAXXZ @ 0x14026CF28 (-LeaveMediaCrit@@YAXXZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall DeviceClassCDROMNotifyWorker(struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION *a1)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rax
  _QWORD *Context; // rbx
  unsigned int Length; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp+8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp+10h] BYREF

  FileObject = 0LL;
  DeviceObject = 0LL;
  v2 = *(_QWORD *)&a1->Event.Data1 - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)a1->Event.Data4 - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v2 && IoGetDeviceObjectPointer(a1->SymbolicLinkName, 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    v3 = a1->SymbolicLinkName->Length + 48;
    v4 = Win32AllocPoolZInit(v3, 1886417749LL);
    Context = (_QWORD *)v4;
    if ( v4 )
    {
      *(_DWORD *)(v4 + 16) = v3;
      Length = a1->SymbolicLinkName->Length;
      *(_WORD *)(v4 + 40) = Length;
      memmove((void *)(v4 + 42), a1->SymbolicLinkName->Buffer, Length);
      *((_DWORD *)Context + 9) = W32GetCurrentWin32kSessionId();
      if ( IoRegisterPlugPlayNotification(
             EventCategoryTargetDeviceChange,
             0,
             FileObject,
             gpWin32kDriverObject,
             (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DeviceCDROMNotify,
             Context,
             (PVOID *)Context + 3) < 0 )
      {
        Win32FreePool(Context);
      }
      else
      {
        EnterMediaCrit(v8, v7);
        v11 = W32GetUserSessionState(v10, v9) + 70144;
        v13 = *(_QWORD *)v11;
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
          __fastfail(3u);
        *Context = v13;
        Context[1] = v11;
        *(_QWORD *)(v13 + 8) = Context;
        *(_QWORD *)v11 = Context;
        LeaveMediaCrit(v12, v13);
      }
    }
    ObfDereferenceObject(FileObject);
  }
  return 0LL;
}
