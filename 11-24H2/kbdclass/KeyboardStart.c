/*
 * XREFs of KeyboardStart @ 0x1C0001F70
 * Callers:
 *     KeyboardStartWorker @ 0x1C00011B0 (KeyboardStartWorker.c)
 *     KeyboardPnP @ 0x1C0001240 (KeyboardPnP.c)
 * Callees:
 *     KeyboardClassCheckWaitWakeEnabled @ 0x1C0003960 (KeyboardClassCheckWaitWakeEnabled.c)
 *     __security_check_cookie @ 0x1C0007290 (__security_check_cookie.c)
 *     KbdEnableDisablePort @ 0x1C000F5E0 (KbdEnableDisablePort.c)
 *     KeyboardSendIrpSynchronously @ 0x1C000F9C0 (KeyboardSendIrpSynchronously.c)
 *     KeyboardClassGetWaitWakeEnableState @ 0x1C00102E0 (KeyboardClassGetWaitWakeEnableState.c)
 *     KeyboardClassCreateWaitWakeIrp @ 0x1C0010BB0 (KeyboardClassCreateWaitWakeIrp.c)
 */

__int64 __fastcall KeyboardStart(__int64 a1, __int64 a2)
{
  IRP *v2; // r14
  __int64 v3; // rbx
  int Status; // edi
  ULONG_PTR Information; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v7; // r15d
  struct _DEVICE_OBJECT *v8; // rcx
  KIRQL v10; // al
  char v11; // di
  char *v12; // rsi
  struct _IO_STACK_LOCATION *v13; // rcx
  ULONG_PTR v14; // rbp
  struct _IRP *MasterIrp; // rdi
  NTSTATUS v16; // esi
  _QWORD v17[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v18; // [rsp+30h] [rbp-68h]
  __int128 v19; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+50h] [rbp-48h]

  v2 = *(IRP **)(a2 + 8);
  v3 = *(_QWORD *)(a1 + 64);
  Status = v2->IoStatus.Status;
  if ( Status < 0 )
    return (unsigned int)Status;
  v2->IoStatus.Status = -1073741637;
  Information = v2->IoStatus.Information;
  v2->IoStatus.Information = 0LL;
  v17[0] = 65600LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v17[1] = -1LL;
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 9;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v17;
  if ( (int)KeyboardSendIrpSynchronously(*(PDEVICE_OBJECT *)(v3 + 16), v2) >= 0 && v2->IoStatus.Status >= 0 )
  {
    *(_DWORD *)(v3 + 284) = v20;
    *(_DWORD *)(v3 + 288) = HIDWORD(v19);
    *(_OWORD *)(v3 + 264) = v18;
    *(_DWORD *)(v3 + 280) = v19;
  }
  v2->IoStatus.Status = Status;
  v7 = 0;
  v2->IoStatus.Information = Information;
  *(_BYTE *)(v3 + 65) = 1;
  if ( *(int *)(v3 + 284) <= 1 || *(int *)(v3 + 288) <= 1 )
  {
    *(_DWORD *)(v3 + 200) = 1;
  }
  else
  {
    *(_DWORD *)(v3 + 200) = 2;
    KeyboardClassGetWaitWakeEnableState(v3);
  }
  v8 = *(struct _DEVICE_OBJECT **)v3;
  *(_QWORD *)(v3 + 208) = &KeyboardClassWmiGuidList;
  *(_QWORD *)(v3 + 248) = 0LL;
  *(_QWORD *)(v3 + 216) = KeyboardClassQueryWmiRegInfo;
  *(_QWORD *)(v3 + 224) = KeyboardClassQueryWmiDataBlock;
  *(_QWORD *)(v3 + 232) = KeyboardClassSetWmiDataBlock;
  *(_QWORD *)(v3 + 240) = KeyboardClassSetWmiDataItem;
  *(_QWORD *)(v3 + 256) = 0LL;
  IoWMIRegistrationControl(v8, 1u);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    if ( SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) > 0 )
    {
      v11 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v3 + 196) + 16);
      v12 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v3 + 196);
      v12[16] = 1;
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v11 )
      {
        v7 = KbdEnableDisablePort(1LL, v2, v3, v12);
        if ( v7 >= 0 )
        {
          v13 = v2->Tail.Overlay.CurrentStackLocation;
          v13[-1].MajorFunction = 15;
          v13[-1].Parameters.Read.ByteOffset.LowPart = 720904;
          v13[-1].FileObject = *(PFILE_OBJECT *)v12;
          v13[-1].Parameters.Read.Length = 0;
          v13[-1].Parameters.Create.Options = 4;
          v14 = v2->IoStatus.Information;
          MasterIrp = v2->AssociatedIrp.MasterIrp;
          v16 = v2->IoStatus.Status;
          v2->IoStatus.Information = 0LL;
          v2->AssociatedIrp.MasterIrp = (struct _IRP *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 156LL);
          KeyboardSendIrpSynchronously(*(PDEVICE_OBJECT *)(v3 + 16), v2);
          v7 = 0;
          v2->IoStatus.Status = v16;
          v2->IoStatus.Information = v14;
          v2->AssociatedIrp.MasterIrp = MasterIrp;
        }
        else
        {
          v12[16] = 0;
        }
      }
    }
    else
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    }
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v7 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 88), 1u);
  }
  if ( *(int *)(v3 + 284) > 1 && *(int *)(v3 + 288) > 1 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 72));
    if ( !*(_QWORD *)(v3 + 296) || *(_BYTE *)(v3 + 304) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v10);
      if ( (unsigned __int8)KeyboardClassCheckWaitWakeEnabled(v3) )
        KeyboardClassCreateWaitWakeIrp((PVOID)v3);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v10);
    }
  }
  return (unsigned int)v7;
}
