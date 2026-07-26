/*
 * XREFs of ?ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x140096540
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400110C0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisXlateSSResume@@YA?AW4_NDIS_USER_RESUME_REASON@@T_NDIS_SS_RESUME_REASON@@@Z @ 0x1400A4D30 (-ndisXlateSSResume@@YA-AW4_NDIS_USER_RESUME_REASON@@T_NDIS_SS_RESUME_REASON@@@Z.c)
 *     ?ndisGetListEntriesCount@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1400BA8DC (-ndisGetListEntriesCount@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisGetPowerInfo(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2, int *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  __int64 result; // rax
  unsigned int Length; // eax
  _IRP::<unnamed_type_AssociatedIrp> v9; // r14
  bool v10; // cf
  _UNICODE_STRING *pAdapterInstanceName; // rdx
  size_t v12; // r8
  unsigned int Flags; // r8d
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // r9d
  unsigned int PnPFlags; // r8d
  int v20; // edx
  int v21; // ecx
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // edx
  int v27; // edx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  int v29; // ecx
  unsigned int Value; // eax
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbp
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rdx
  __int64 v34; // r9
  unsigned __int64 v35; // r8
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  KIRQL v40; // r9
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  KIRQL v42; // al

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
  {
    Length = CurrentStackLocation->Parameters.Read.Length;
    v9.MasterIrp = (_IRP *)a2->AssociatedIrp;
    if ( Length >= 0x35C )
    {
      memset(&v9.MasterIrp->AllocationProcessorNumber, 0, 0x358uLL);
      *(_DWORD *)&v9.MasterIrp->Type = 47186560;
      pAdapterInstanceName = a1->pAdapterInstanceName;
      v12 = pAdapterInstanceName->Length;
      if ( pAdapterInstanceName->Length >= 0x200u )
        v12 = 512LL;
      memmove(&v9.MasterIrp->Reserved1, pAdapterInstanceName->Buffer, v12);
      LOBYTE(v9.MasterIrp[2].CancelRoutine) = a1->MajorNdisVersion;
      BYTE1(v9.MasterIrp[2].CancelRoutine) = a1->MinorNdisVersion;
      BYTE2(v9.MasterIrp[2].CancelRoutine) = a1->MinimumNdisMajorVersion;
      BYTE3(v9.MasterIrp[2].CancelRoutine) = a1->MinimumNdisMinorVersion;
      Flags = a1->Flags;
      v14 = (Flags >> 15) & 1 | 2;
      if ( (Flags & 0x20000) == 0 )
        v14 = (a1->Flags >> 15) & 1;
      v15 = v14 | 4;
      if ( (Flags & 0x40000) == 0 )
        v15 = v14;
      v16 = v15 | 8;
      if ( (Flags & 0x200000) == 0 )
        v16 = v15;
      v17 = v16 | 0x10;
      if ( (Flags & 0x4000000) == 0 )
        v17 = v16;
      v18 = v17 | 0x20;
      if ( (Flags & 0x20000000) == 0 )
        v18 = v17;
      HIDWORD(v9.MasterIrp[2].CancelRoutine) = v18;
      PnPFlags = a1->PnPFlags;
      v20 = ((PnPFlags & 1) << 8) | 0x200;
      if ( (PnPFlags & 8) == 0 )
        v20 = (a1->PnPFlags & 1) << 8;
      v21 = v20 | 0x400;
      if ( (PnPFlags & 0x10) == 0 )
        v21 = v20;
      v22 = v21 | 0x800;
      if ( (PnPFlags & 0x20) == 0 )
        v22 = v21;
      v23 = v22 | 0x1000;
      if ( (PnPFlags & 0x40) == 0 )
        v23 = v22;
      v24 = v23 | 0x2000;
      if ( (PnPFlags & 0x100) == 0 )
        v24 = v23;
      v25 = v24 | 0x4000;
      if ( (PnPFlags & 0x4000) == 0 )
        v25 = v24;
      v26 = v25 | 0x400000;
      if ( (PnPFlags & 0x4000000) == 0 )
        v26 = v25;
      v27 = v18 | v26;
      HIDWORD(v9.MasterIrp[2].CancelRoutine) = v27;
      if ( (a1->InfoFlags & 0x80000000) != 0 )
      {
        v27 |= 0x8000u;
        HIDWORD(v9.MasterIrp[2].CancelRoutine) = v27;
      }
      if ( (a1->FilterPnPFlags & 0x80u) != 0 )
      {
        v27 |= 0x10000u;
        HIDWORD(v9.MasterIrp[2].CancelRoutine) = v27;
      }
      DriverHandle = a1->DriverHandle;
      v29 = v27;
      if ( DriverHandle->IdleNotificationHandler && DriverHandle->CancelIdleNotificationHandler )
      {
        v29 = v27 | 0x20000;
        HIDWORD(v9.MasterIrp[2].CancelRoutine) = v27 | 0x20000;
      }
      if ( a1->SelectiveSuspend )
      {
        v29 |= 0x40000u;
        HIDWORD(v9.MasterIrp[2].CancelRoutine) = v29;
      }
      if ( (a1->WSyncFlags & 0x10) != 0 )
      {
        v29 |= 0x100000u;
        HIDWORD(v9.MasterIrp[2].CancelRoutine) = v29;
      }
      if ( (a1->WSyncFlags & 8) != 0 )
        HIDWORD(v9.MasterIrp[2].CancelRoutine) = v29 | 0x200000;
      LODWORD(v9.MasterIrp[2].UserBuffer) = a1->State;
      HIDWORD(v9.MasterIrp[2].UserBuffer) = a1->PnPDeviceState;
      LODWORD(v9.MasterIrp[2].Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink) = a1->CurrentDevicePowerState;
      v9.MasterIrp[2].Tail.Apc.SpareLong0 = a1->MediaConnectState;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 2) = a1->MiniportMediaConnectState;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 3) = a1->PhysicalMediumType;
      v9.MasterIrp[2].Tail.Overlay.DeviceQueueEntry.SortKey = a1->MiniportMediaType;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 5) = a1->MediaType;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 6) = a1->DeviceCaps.SystemWake;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 7) = a1->DeviceCaps.DeviceWake;
      LOBYTE(v9.MasterIrp[3].Type) = a1->S0WakeupSupported;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 14) = a1->PnPCapabilities;
      *((_WORD *)&v9.MasterIrp[2].Tail.CompletionKey + 30) = a1->MediaDisconnectTimeOut;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 11) = ndisGetListEntriesCount(&a1->PatternList);
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 12) = ndisGetListEntriesCount(&a1->WOLPatternList);
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 13) = ndisGetListEntriesCount(&a1->PMProtocolOffloadList);
      v9.MasterIrp[2].Tail.Overlay.PacketType = a1->PMAdminConfig.Value & 3;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 17) = (a1->PMAdminConfig.Value >> 2) & 3;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 18) = (a1->PMAdminConfig.Value >> 4) & 3;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 19) = (a1->PMAdminConfig.Value >> 6) & 3;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 20) = (a1->PMAdminConfig.Value >> 8) & 3;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 21) = (a1->PMAdminConfig.Value >> 10) & 3;
      Value = a1->PMAdminConfig.Value;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 8) = 720;
      HIDWORD(v9.MasterIrp[3].IoStatus.Pointer) = (Value >> 12) & 3;
      *(_IRP::<unnamed_type_Overlay> *)((char *)&v9.MasterIrp[3].Overlay + 8) = *(_IRP::<unnamed_type_Overlay> *)&a1->PMHardwareCapabilities.Header.Type;
      *(_OWORD *)&v9.MasterIrp[3].UserBuffer = *(_OWORD *)&a1->PMHardwareCapabilities.MaxWoLPatternSize;
      *(_OWORD *)(&v9.MasterIrp[3].Tail.CompletionKey + 1) = *(_OWORD *)&a1->PMHardwareCapabilities.NumArpOffloadIPv4Addresses;
      v9.MasterIrp[3].Tail.Overlay.DriverContext[3] = *(void **)&a1->PMHardwareCapabilities.MinLinkChangeWakeUp;
      *((_DWORD *)&v9.MasterIrp[3].Tail.CompletionKey + 8) = a1->PMHardwareCapabilities.MediaSpecificWakeUpEvents;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 9) = 780;
      *(_OWORD *)((char *)&v9.MasterIrp[3].Tail.CompletionKey + 36) = *(_OWORD *)&a1->PMAdvertisedCapabilities.Header.Type;
      *(_OWORD *)((char *)&v9.MasterIrp[3].Tail.CompletionKey + 52) = *(_OWORD *)&a1->PMAdvertisedCapabilities.MaxWoLPatternSize;
      *(_OWORD *)((char *)&v9.MasterIrp[3].Tail.CompletionKey + 68) = *(_OWORD *)&a1->PMAdvertisedCapabilities.NumArpOffloadIPv4Addresses;
      *(void **)((char *)&v9.MasterIrp[3].Tail.CompletionKey + 84) = *(void **)&a1->PMAdvertisedCapabilities.MinLinkChangeWakeUp;
      *(_DWORD *)&v9.MasterIrp[4].AllocationProcessorNumber = a1->PMAdvertisedCapabilities.MediaSpecificWakeUpEvents;
      *((_DWORD *)&v9.MasterIrp[2].Tail.CompletionKey + 10) = 840;
      *(_OWORD *)&v9.MasterIrp[4].MdlAddress = *(_OWORD *)&a1->PMCurrentParameters.Header.Type;
      v9.MasterIrp[4].AssociatedIrp.IrpCount = a1->PMCurrentParameters.MediaSpecificWakeUpEvents;
      v9.MasterIrp[3].Overlay.AllocationSize.LowPart = a1->LastWakeReason;
      SelectiveSuspend = a1->SelectiveSuspend;
      if ( SelectiveSuspend )
      {
        v32 = (MEMORY[0xFFFFF78000000014] - a1->TimeOfInitialization.QuadPart) / 10000 - a1->TotalSystemSleepTimeMs;
        v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
        *(_DWORD *)&v9.MasterIrp[3].AllocationProcessorNumber = *((_DWORD *)SelectiveSuspend + 2);
        LOBYTE(v9.MasterIrp[3].MdlAddress) = (*((_DWORD *)SelectiveSuspend + 126) & 0x14) != 0;
        HIDWORD(v9.MasterIrp[3].MdlAddress) = *((_DWORD *)SelectiveSuspend + 161);
        v35 = *((_QWORD *)SelectiveSuspend + 86);
        if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x10) != 0 )
        {
          v33 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 81)) / 10000LL;
          v35 += v33;
        }
        v36 = *((_DWORD *)SelectiveSuspend + 161);
        if ( v36 )
        {
          v9.MasterIrp[3].Flags = *((_QWORD *)SelectiveSuspend + 84) / (unsigned __int64)v36;
          v33 = v35 % *((unsigned int *)SelectiveSuspend + 161);
          v9.MasterIrp[3].AssociatedIrp.MasterIrp = (_IRP *)(v35 / *((unsigned int *)SelectiveSuspend + 161));
        }
        if ( v32 )
        {
          v33 = 100 * v35 % v32;
          LODWORD(v9.MasterIrp[3].ThreadListEntry.Flink) = 100 * v35 / v32;
        }
        HIDWORD(v9.MasterIrp[3].ThreadListEntry.Flink) = ndisXlateSSResume(
                                                           *((unsigned int *)SelectiveSuspend + 157),
                                                           v33,
                                                           v35,
                                                           v34);
        LODWORD(v9.MasterIrp[3].ThreadListEntry.Blink) = *((_DWORD *)SelectiveSuspend + 158);
        HIDWORD(v9.MasterIrp[3].ThreadListEntry.Blink) = ndisXlateSSResume(
                                                           *((unsigned int *)SelectiveSuspend + 159),
                                                           v37,
                                                           v38,
                                                           v39);
        v9.MasterIrp[3].IoStatus.Status = *((_DWORD *)SelectiveSuspend + 160);
        KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v40);
      }
      AoAc = a1->AoAc;
      if ( AoAc )
      {
        HIDWORD(v9.MasterIrp[2].CancelRoutine) |= 0x80000u;
        v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
        LOBYTE(v9.MasterIrp[3].IoStatus.Information) = *((_DWORD *)AoAc + 94) == 2;
        HIDWORD(v9.MasterIrp[3].IoStatus.Information) = *((_DWORD *)AoAc + 13);
        v9.MasterIrp[3].RequestorMode = *((_DWORD *)AoAc + 95) != 0;
        v9.MasterIrp[3].UserIosb = (_IO_STATUS_BLOCK *)ndisAoAcMaxStartToRefTime;
        v9.MasterIrp[3].UserEvent = (_KEVENT *)ndisAoAcMaxWakeToRefTime;
        KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v42);
      }
      a2->IoStatus.Information = 860LL;
      result = 0LL;
      *a3 = 0;
    }
    else
    {
      v10 = Length < 4;
      a2->IoStatus.Information = 0LL;
      result = 3221291028LL;
      *a3 = -1073676268;
      if ( !v10 )
      {
        *(_DWORD *)&v9.MasterIrp->Type = 56361600;
        a2->IoStatus.Information = 4LL;
      }
    }
  }
  else
  {
    *a3 = -1073741790;
    return 3221225506LL;
  }
  return result;
}
