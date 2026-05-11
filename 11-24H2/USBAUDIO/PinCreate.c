/*
 * XREFs of PinCreate @ 0x1400416B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005138 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008700 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     PinAddPinToList @ 0x1400087B0 (PinAddPinToList.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x14001BB10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 *     PinValidateDataFormat @ 0x14003B108 (PinValidateDataFormat.c)
 *     GetModeFromAttributeList @ 0x14003EFC8 (GetModeFromAttributeList.c)
 */

__int64 __fastcall PinCreate(PKSPIN Pin)
{
  const KSPIN_DESCRIPTOR_EX *Descriptor; // rbp
  char v2; // bl
  __int64 v4; // r15
  char v5; // si
  char v6; // dl
  char v7; // r8
  PKSDATAFORMAT ConnectionFormat; // rdx
  int v9; // r8d
  int v10; // ebx
  unsigned int *v11; // rcx
  int ModeFromAttributeList; // eax
  ULONG v13; // edi
  ULONG DataRangesCount; // r12d
  __int64 v15; // r13
  unsigned int v16; // ecx
  bool v17; // sf
  __int64 v18; // rax
  unsigned int v19; // eax
  char *Pool2; // rax
  char *v21; // rdi
  char v23; // [rsp+50h] [rbp-58h]
  union $A4FB595EF421231CAF150DDD3288A6D5 *v24; // [rsp+58h] [rbp-50h]
  PKSDEVICE Device; // [rsp+60h] [rbp-48h]
  GUID v26; // [rsp+68h] [rbp-40h] BYREF

  Descriptor = Pin->Descriptor;
  v2 = 0;
  v23 = 0;
  v4 = 0LL;
  v26 = 0LL;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v6 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v7 = 0;
  }
  if ( v6 || v7 )
    WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, v6, v7, WPP_GLOBAL_Control->DeviceExtension);
  Device = KsGetDevice(Pin);
  if ( !Device )
  {
    v10 = -1073741811;
    goto LABEL_50;
  }
  if ( HIDWORD(Descriptor[1].Dispatch) >= LODWORD(Descriptor[1].Dispatch) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
      || (LOBYTE(ConnectionFormat) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(ConnectionFormat) = 0;
    }
    if ( (_BYTE)ConnectionFormat || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)ConnectionFormat,
        v9,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    v10 = -1073741670;
    goto LABEL_50;
  }
  ConnectionFormat = Pin->ConnectionFormat;
  v24 = ConnectionFormat;
  if ( (ConnectionFormat->Flags & 2) != 0 )
  {
    v11 = (ULONG *)((char *)&ConnectionFormat->FormatSize + ((ConnectionFormat->FormatSize + 7) & 0xFFFFFFF8));
    ModeFromAttributeList = GetModeFromAttributeList((__int64)v11, *v11, &v26);
    v10 = ModeFromAttributeList;
    if ( ModeFromAttributeList >= 0 )
    {
      LODWORD(ConnectionFormat) = Descriptor[1].PinDescriptor.Interfaces;
      v10 = -1073741198;
      if ( !(_DWORD)ConnectionFormat )
        goto LABEL_50;
      v16 = 0;
      v9 = *(_DWORD *)v26.Data4;
      while ( *(_OWORD *)&v26 != *(_OWORD *)(*(_QWORD *)&Descriptor[1].PinDescriptor.MediumsCount + 16LL * v16) )
      {
        if ( ++v16 >= (unsigned int)ConnectionFormat )
          goto LABEL_50;
      }
    }
    else if ( ModeFromAttributeList != -1073741275 )
    {
      goto LABEL_50;
    }
    ConnectionFormat = v24;
    v2 = 0;
  }
  v13 = 0;
  DataRangesCount = Descriptor->PinDescriptor.DataRangesCount;
  if ( !DataRangesCount )
    goto LABEL_49;
  do
  {
    if ( v2 )
      break;
    v15 = (__int64)Descriptor->PinDescriptor.DataRanges[v13];
    v10 = PinValidateDataFormat((__int64)Descriptor, v15, (__int64)ConnectionFormat);
    if ( v10 < 0 )
    {
      if ( v10 != -1073741198 )
        goto LABEL_50;
    }
    else
    {
      v23 = 1;
    }
    ConnectionFormat = v24;
    v17 = v10 < 0;
    v2 = v23;
    v18 = v15;
    if ( v17 )
      v18 = v4;
    v4 = v18;
    v13 += ((*(_DWORD *)(v15 + 4) & 2) != 0) + 1;
  }
  while ( v13 < DataRangesCount );
  if ( v4 )
  {
    v19 = *(_DWORD *)(v4 + 112) + 176;
    if ( v19 < 0xB0 )
    {
      v10 = -1073741811;
    }
    else
    {
      Pool2 = (char *)ExAllocatePool2(64LL, v19, 1096972357LL);
      Pin->Context = Pool2;
      v21 = Pool2;
      if ( Pool2 )
      {
        v10 = KsAddItemToObjectBag(Pin->Bag, Pool2, ExFreePool);
        if ( v10 >= 0 )
        {
          *((_QWORD *)v21 + 18) = v4;
          *((_QWORD *)v21 + 19) = v21 + 176;
          *((_QWORD *)v21 + 9) = v21 + 64;
          *((_QWORD *)v21 + 8) = v21 + 64;
          *((_QWORD *)v21 + 3) = Pin;
          *((_QWORD *)v21 + 2) = Device;
          v21[47] = 0;
          *((_QWORD *)v21 + 4) = Descriptor;
          KeInitializeSpinLock((PKSPIN_LOCK)v21 + 14);
          KeInitializeEvent((PRKEVENT)v21 + 5, NotificationEvent, 0);
          v10 = (**(__int64 (__fastcall ***)(PKSPIN))(*((_QWORD *)v21 + 18) + 128LL))(Pin);
          if ( v10 >= 0 )
          {
            ++HIDWORD(Descriptor[1].Dispatch);
            v21[168] = Device->DevicePowerState == PowerDeviceD0;
            KsPinRegisterPowerCallbacks(Pin, (PFNKSPINPOWER)PinGoToLowPowerState, (PFNKSPINPOWER)PinGoToFullPowerState);
            v10 = PinAddPinToList(Pin);
            if ( v10 >= 0 )
              return (unsigned int)v10;
          }
        }
        else
        {
          ExFreePool(v21);
        }
      }
      else
      {
        v10 = -1073741670;
      }
    }
  }
  else
  {
LABEL_49:
    v10 = -1073741198;
  }
LABEL_50:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v5 = 0;
  }
  if ( v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ConnectionFormat) = v5;
    LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)ConnectionFormat,
      v9,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v10;
}
