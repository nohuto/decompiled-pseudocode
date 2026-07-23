/*
 * XREFs of WmipForwardWmiIrp @ 0x1409B3294
 * Callers:
 *     WmipSendWmiIrp @ 0x1409B2964 (WmipSendWmiIrp.c)
 *     WmipQuerySetExecuteSI @ 0x1409B2A54 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1409B2D4C (WmipQueryAllData.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140A0F778 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipSetTraceNotify @ 0x140AA1CE8 (WmipSetTraceNotify.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     WmipFindRegEntryByProviderId @ 0x1402DDC64 (WmipFindRegEntryByProviderId.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IoGetAttachedDeviceReference @ 0x140411960 (IoGetAttachedDeviceReference.c)
 *     WmipUnreferenceRegEntry @ 0x14046A188 (WmipUnreferenceRegEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PpmWmiDispatch @ 0x1409B37E0 (PpmWmiDispatch.c)
 *     WmipUpdateDeviceStackSize @ 0x140A49F18 (WmipUpdateDeviceStackSize.c)
 *     WmipTranslatePDOInstanceNames @ 0x140A4A4E8 (WmipTranslatePDOInstanceNames.c)
 */

__int64 __fastcall WmipForwardWmiIrp(
        PIRP Irp,
        unsigned __int8 a2,
        int a3,
        UNICODE_STRING *a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  _DWORD *RegEntryByProviderId; // rax
  __int64 v10; // rdi
  int v11; // eax
  PDEVICE_OBJECT v12; // rsi
  NTSTATUS v13; // eax
  unsigned int v14; // ebx
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // r13
  CCHAR v19; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v21; // rax
  struct _IO_STACK_LOCATION *v22; // rax
  __int64 v23; // rdx
  NTSTATUS Status; // esi
  __int64 v25; // rcx
  unsigned int v26; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF

  v6 = a2;
  memset(&Event, 0, sizeof(Event));
  RegEntryByProviderId = WmipFindRegEntryByProviderId(a3);
  v10 = (__int64)RegEntryByProviderId;
  if ( RegEntryByProviderId )
  {
    v11 = RegEntryByProviderId[12];
    if ( (v11 & 0x20000000) == 0 )
    {
      v12 = *(PDEVICE_OBJECT *)(v10 + 16);
      if ( (v11 & 0x10000000) != 0 )
      {
        v26 = 0;
        if ( *(__int64 (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))&v12->Type == PpmWmiDispatch )
          v13 = PpmWmiDispatch(v6, (_DWORD)a4, a5, a6, (__int64)v12, (__int64)&v26);
        else
          v13 = guard_dispatch_icall_no_overrides(v6, a4);
        v14 = v13;
        Irp->IoStatus.Status = v13;
        Irp->IoStatus.Information = v26;
        WmipUnreferenceRegEntry(v10);
        return v14;
      }
      else
      {
        if ( (_BYTE)v6 != 8 && (unsigned __int8)(v6 - 10) > 3u )
        {
          v16 = *(_QWORD *)(a6 + 24) - WmipDataProviderPnpidGuid;
          if ( !v16 )
            v16 = *(_QWORD *)(a6 + 32) - *((_QWORD *)&WmipDataProviderPnpidGuid + 1);
          if ( !v16 )
            goto LABEL_39;
          v17 = *(_QWORD *)(a6 + 24) - WmipDataProviderPnPIdInstanceNamesGuid;
          if ( !v17 )
            v17 = *(_QWORD *)(a6 + 32) - *((_QWORD *)&WmipDataProviderPnPIdInstanceNamesGuid + 1);
          if ( !v17 )
          {
LABEL_39:
            if ( *(_QWORD *)(v10 + 24) )
              v12 = WmipServiceDeviceObject;
          }
        }
        AttachedDeviceReference = IoGetAttachedDeviceReference(v12);
        v19 = AttachedDeviceReference->StackSize + 1;
        if ( v19 <= WmipServiceDeviceObject->StackSize || AttachedDeviceReference == WmipServiceDeviceObject )
        {
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
          CurrentStackLocation[-1].Context = &Event;
          CurrentStackLocation[-1].Control = -32;
          v21 = Irp->Tail.Overlay.CurrentStackLocation;
          v21[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)a6;
          v21[-1].MajorFunction = 23;
          v21[-1].MinorFunction = v6;
          v21[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v12;
          v21[-1].Parameters.QueryDirectory.FileName = a4;
          v21[-1].Parameters.Read.ByteOffset.LowPart = a5;
          v22 = Irp->Tail.Overlay.CurrentStackLocation;
          Irp->IoStatus.Status = -1073741637;
          v22->Control |= 1u;
          Status = IofCallDriver(AttachedDeviceReference, Irp);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = Irp->IoStatus.Status;
          }
          if ( Status == -1073741637 )
          {
            Status = -1073741163;
            Irp->IoStatus.Status = -1073741163;
          }
          if ( ((_BYTE)v6 == 8 || (_BYTE)v6 == 11) && Status >= 0 && Irp->IoStatus.Information > 0x18 )
          {
            LOBYTE(v23) = v6;
            WmipTranslatePDOInstanceNames(Irp, v23, a5, v10);
          }
          WmipUnreferenceRegEntry(v10);
        }
        else
        {
          WmipUnreferenceRegEntry(v10);
          LOBYTE(v25) = v19;
          WmipUpdateDeviceStackSize(v25);
          Status = -1073741160;
        }
        ObfDereferenceObject(AttachedDeviceReference);
        return (unsigned int)Status;
      }
    }
    WmipUnreferenceRegEntry(v10);
  }
  result = 3221226134LL;
  if ( (unsigned __int8)(v6 - 1) > 1u )
    return 3221225473LL;
  return result;
}
