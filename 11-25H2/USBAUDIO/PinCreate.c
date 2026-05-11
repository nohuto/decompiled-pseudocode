/*
 * XREFs of PinCreate @ 0x14003B320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005368 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008C50 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     PinAddPinToList @ 0x140008D00 (PinAddPinToList.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x14001C640 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 *     PinValidateDataFormat @ 0x14003B868 (PinValidateDataFormat.c)
 *     GetModeFromAttributeList @ 0x14003F788 (GetModeFromAttributeList.c)
 */

__int64 __fastcall PinCreate(PKSPIN Pin)
{
  const KSPIN_DESCRIPTOR_EX *Descriptor; // rbp
  char v2; // bl
  PKSDATARANGE v4; // r15
  char v5; // si
  char v6; // dl
  char v7; // r8
  _QWORD *v8; // rdx
  unsigned int i; // r8d
  NTSTATUS v10; // ebx
  PKSDATAFORMAT ConnectionFormat; // r13
  unsigned int *v12; // rcx
  int ModeFromAttributeList; // eax
  ULONG v14; // edi
  ULONG DataRangesCount; // r12d
  unsigned int Interfaces; // r9d
  __int64 v17; // rcx
  bool v18; // sf
  unsigned int v19; // eax
  char *Pool2; // rax
  char *v21; // rdi
  char v23; // [rsp+50h] [rbp-58h]
  union $A4FB595EF421231CAF150DDD3288A6D5 *v24; // [rsp+58h] [rbp-50h]
  PKSDEVICE Device; // [rsp+60h] [rbp-48h]
  __int128 v26; // [rsp+68h] [rbp-40h] BYREF

  Descriptor = Pin->Descriptor;
  v2 = 0;
  v24 = 0LL;
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
    goto LABEL_53;
  }
  if ( HIDWORD(Descriptor[1].Dispatch) >= LODWORD(Descriptor[1].Dispatch) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(i) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v8, i, WPP_GLOBAL_Control->DeviceExtension);
    }
    v10 = -1073741670;
    goto LABEL_53;
  }
  ConnectionFormat = Pin->ConnectionFormat;
  if ( (ConnectionFormat->Flags & 2) == 0 )
    goto LABEL_26;
  v12 = (ULONG *)((char *)&ConnectionFormat->FormatSize + ((ConnectionFormat->FormatSize + 7) & 0xFFFFFFF8));
  ModeFromAttributeList = GetModeFromAttributeList(v12, *v12, &v26);
  v10 = ModeFromAttributeList;
  if ( ModeFromAttributeList >= 0 )
  {
    Interfaces = (unsigned int)Descriptor[1].PinDescriptor.Interfaces;
    v10 = -1073741198;
    if ( Interfaces )
    {
      for ( i = 0; i < Interfaces; ++i )
      {
        v8 = (_QWORD *)(*(_QWORD *)&Descriptor[1].PinDescriptor.MediumsCount + 16LL * i);
        v17 = v26 - *v8;
        if ( (_QWORD)v26 == *v8 )
          v17 = *((_QWORD *)&v26 + 1) - v8[1];
        if ( !v17 )
          goto LABEL_25;
      }
    }
    goto LABEL_53;
  }
  if ( ModeFromAttributeList == -1073741275 )
  {
LABEL_25:
    v2 = 0;
LABEL_26:
    v14 = 0;
    DataRangesCount = Descriptor->PinDescriptor.DataRangesCount;
    while ( v14 < DataRangesCount && !v2 )
    {
      v4 = Descriptor->PinDescriptor.DataRanges[v14];
      v10 = PinValidateDataFormat(Descriptor, v4, ConnectionFormat);
      if ( v10 < 0 )
      {
        if ( v10 != -1073741198 )
          goto LABEL_53;
      }
      else
      {
        v23 = 1;
      }
      v14 += ((v4->Flags & 2) != 0) + 1;
      v18 = v10 < 0;
      v2 = v23;
      if ( v18 )
        v4 = v24;
      v24 = v4;
    }
    if ( v4 )
    {
      v19 = v4[1].Specifier.Data1 + 176;
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
            *((_QWORD *)v21 + 2) = Device;
            *((_QWORD *)v21 + 19) = v21 + 176;
            *((_QWORD *)v21 + 3) = Pin;
            v21[47] = 0;
            *((_QWORD *)v21 + 4) = Descriptor;
            *((_QWORD *)v21 + 18) = v4;
            *((_QWORD *)v21 + 9) = v21 + 64;
            *((_QWORD *)v21 + 8) = v21 + 64;
            KeInitializeSpinLock((PKSPIN_LOCK)v21 + 14);
            KeInitializeEvent((PRKEVENT)v21 + 5, NotificationEvent, 0);
            v10 = (**(__int64 (__fastcall ***)(PKSPIN))(*((_QWORD *)v21 + 18) + 128LL))(Pin);
            if ( v10 >= 0 )
            {
              ++HIDWORD(Descriptor[1].Dispatch);
              v21[168] = 1;
              KsPinRegisterPowerCallbacks(
                Pin,
                (PFNKSPINPOWER)PinGoToLowPowerState,
                (PFNKSPINPOWER)PinGoToFullPowerState);
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
      v10 = -1073741198;
    }
  }
LABEL_53:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v5 = 0;
  }
  if ( v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = v5;
    LOBYTE(i) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v8, i, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v10;
}
