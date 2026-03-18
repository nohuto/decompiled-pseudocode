/*
 * XREFs of ?DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x140278C80
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___ @ 0x140210448 (W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___.c)
 *     W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___ @ 0x140278B1C (W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___.c)
 * Callees:
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 *     ?EnterMediaCrit@@YAXXZ @ 0x1401DFFE4 (-EnterMediaCrit@@YAXXZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1402147D0 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140236770 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?LeaveMediaCrit@@YAXXZ @ 0x14026CF28 (-LeaveMediaCrit@@YAXXZ.c)
 *     ShowAutorunCursor @ 0x140271910 (ShowAutorunCursor.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall DeviceCDROMNotifyWorker(struct _TARGET_DEVICE_CUSTOM_NOTIFICATION *a1, struct _CDROM_NOTIFY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r14
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  unsigned __int128 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // rax
  _BYTE v27[256]; // [rsp+20h] [rbp-128h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v27);
  if ( IsRemoteConnection(v5, v4) )
    goto LABEL_25;
  UserSessionState = W32GetUserSessionState(v7, v6);
  v10 = *(_QWORD *)&a1->Event.Data1;
  v11 = UserSessionState;
  if ( v10 == *(_QWORD *)&GUID_IO_MEDIA_ARRIVAL.Data1 )
  {
    v10 = *(_QWORD *)a1->Event.Data4;
    if ( v10 == *(_QWORD *)GUID_IO_MEDIA_ARRIVAL.Data4 )
    {
      v12 = 1;
      goto LABEL_8;
    }
  }
  if ( *(_QWORD *)&a1->Event.Data1 == *(_QWORD *)&GUID_IO_MEDIA_REMOVAL.Data1
    && *(_QWORD *)a1->Event.Data4 == *(_QWORD *)GUID_IO_MEDIA_REMOVAL.Data4 )
  {
    v12 = 2;
LABEL_8:
    *((_DWORD *)a2 + 8) = v12;
    v13 = (_QWORD *)Win32AllocPoolNonPagedZInit(*((unsigned int *)a2 + 4), 1886417749LL);
    v14 = v13;
    if ( v13 )
    {
      memmove(v13, a2, *((unsigned int *)a2 + 4));
      EnterMediaCrit(v16, v15);
      v17 = v11 + 70160;
      v18 = (_QWORD *)(v11 + 70176);
      v19 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
      v20 = (unsigned __int64)v19 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
      v21 = *((_QWORD *)&v20 + 1);
      if ( *(_QWORD *)v17 != v17 && *((_QWORD *)&v20 + 1) - *v18 > 0x1388uLL )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 345);
      *v18 = v21;
      *(_QWORD *)&v20 = *(_QWORD *)v17;
      if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) == v17 )
      {
        *v14 = v20;
        v14[1] = v17;
        *(_QWORD *)(v20 + 8) = v14;
        *(_QWORD *)v17 = v14;
        LeaveMediaCrit(v19, *((__int64 *)&v20 + 1));
        KeSetEvent(*(PRKEVENT *)(v11 + 70192), 1, 0);
        goto LABEL_25;
      }
LABEL_21:
      __fastfail(3u);
    }
    goto LABEL_25;
  }
  if ( *(_QWORD *)&a1->Event.Data1 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1
    && *(_QWORD *)a1->Event.Data4 == *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 )
  {
    EnterMediaCrit(v10, v9);
    if ( !*(_QWORD *)(v11 + 70136) )
    {
      LeaveMediaCrit(v23, v22);
      goto LABEL_25;
    }
    v24 = *(_QWORD *)a2;
    if ( *(struct _CDROM_NOTIFY **)(*(_QWORD *)a2 + 8LL) == a2 )
    {
      v25 = (__int64 *)*((_QWORD *)a2 + 1);
      if ( (struct _CDROM_NOTIFY *)*v25 == a2 )
      {
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        LeaveMediaCrit(v24, v22);
        IoUnregisterPlugPlayNotification(*((PVOID *)a2 + 3));
        Win32FreePool(a2);
        goto LABEL_25;
      }
    }
    goto LABEL_21;
  }
  if ( *(_QWORD *)&a1->Event.Data1 == *(_QWORD *)&GUID_IO_DEVICE_BECOMING_READY.Data1
    && *(_QWORD *)a1->Event.Data4 == *(_QWORD *)GUID_IO_DEVICE_BECOMING_READY.Data4 )
  {
    ShowAutorunCursor(10 * a1[1].Event.Data1);
  }
LABEL_25:
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v27);
  return 0LL;
}
