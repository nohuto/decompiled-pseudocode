/*
 * XREFs of ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017AFC
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400092C8 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x140005B44 (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007494 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A394 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D82C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x140011974 (-GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     PropertySetBooleanSideband @ 0x1400335FC (PropertySetBooleanSideband.c)
 *     PropertySetDbLevelSideband @ 0x1400337CC (PropertySetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::SetSidetone(CSidebandDevice *this, PDEVICE_OBJECT *Irp)
{
  IRP *v2; // r13
  __int64 v4; // rsi
  CSidebandDevice *v5; // rcx
  char v6; // di
  char v7; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int PinFromEpIndex; // ebx
  bool v10; // r8
  unsigned int *p_NamedPipeType; // r14
  int v12; // edx
  int v13; // r8d
  PDEVICE_OBJECT *v14; // rdx
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  PDEVICE_OBJECT v17; // rcx
  int v18; // edx
  int v19; // r8d
  unsigned int v21; // [rsp+50h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v22; // [rsp+58h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v25; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v26; // [rsp+C8h] [rbp+60h] BYREF

  v2 = (IRP *)Irp;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v21 = -1;
  v4 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL;
  v22 = 0LL;
  v23 = 0;
  v5 = (CSidebandDevice *)WPP_GLOBAL_Control;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(Irp) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(Irp) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v7 = 0;
  }
  if ( (_BYTE)Irp || v7 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)Irp, v7, WPP_GLOBAL_Control->DeviceExtension);
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  v2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 20 )
  {
    p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( (unsigned int)CSidebandDevice::IsValidEndpointIndex(v5, (struct _KSFILTER_DESCRIPTOR *)v4, *p_NamedPipeType) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          WPP_GLOBAL_Control->DeviceExtension);
      PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v24, &v22);
      if ( PinFromEpIndex >= 0 )
      {
        PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(
                           (struct _KSFILTER_DESCRIPTOR *)v4,
                           (const KSTOPOLOGY_CONNECTION *)v24,
                           &v25);
        if ( PinFromEpIndex >= 0 )
        {
          PinFromEpIndex = CSidebandDevice::GetSidetoneNodes(
                             v25,
                             (struct _KSFILTER_DESCRIPTOR *)v4,
                             (unsigned __int64)&v26,
                             &v21);
          if ( PinFromEpIndex >= 0 )
          {
            if ( v26 == -1
              || (PinFromEpIndex = PropertySetDbLevelSideband(
                                     *((_QWORD *)this + 4),
                                     *(_DWORD *)(v4 + 72) + *(_DWORD *)(v4 + 68) * v26,
                                     (unsigned int)&v23,
                                     0),
                  PinFromEpIndex >= 0) )
            {
              if ( v21 == -1
                || (PinFromEpIndex = PropertySetBooleanSideband(
                                       *((_QWORD *)this + 4),
                                       *(_DWORD *)(v4 + 72) + *(_DWORD *)(v4 + 68) * v21,
                                       (unsigned int)&v23,
                                       0),
                    PinFromEpIndex >= 0) )
              {
                v2->IoStatus.Information = v23;
                goto LABEL_78;
              }
              v17 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
              {
                LOBYTE(v14) = 0;
              }
              LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !(_BYTE)v14 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                goto LABEL_78;
            }
            else
            {
              v17 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
              {
                LOBYTE(v14) = 0;
              }
              LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !(_BYTE)v14 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                goto LABEL_78;
            }
          }
          else
          {
            v17 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
              || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
            {
              LOBYTE(v14) = 0;
            }
            LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( !(_BYTE)v14 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              goto LABEL_78;
          }
        }
        else
        {
          v17 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v14) = 0;
          }
          LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v14 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_78;
        }
        DeviceExtension = v17->DeviceExtension;
        AttachedDevice = v17->AttachedDevice;
      }
      else
      {
        v14 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v14) = 0;
        }
        LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v14 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_78;
        DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
        AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
      }
      WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, (_DWORD)v14, v13, (_DWORD)DeviceExtension);
      goto LABEL_78;
    }
    PinFromEpIndex = -1073741811;
    Irp = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(Irp) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(Irp) = 0;
    }
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)Irp || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      goto LABEL_26;
  }
  else
  {
    PinFromEpIndex = -1073741306;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(Irp) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(Irp) = 0;
    }
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)Irp || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
LABEL_26:
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)Irp,
        v10,
        WPP_GLOBAL_Control->DeviceExtension);
  }
LABEL_78:
  v2->IoStatus.Status = PinFromEpIndex;
  IofCompleteRequest(v2, 0);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v18) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)v18 || v6 )
  {
    LOBYTE(v19) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v18, v19, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)PinFromEpIndex;
}
