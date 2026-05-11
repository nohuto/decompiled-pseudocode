/*
 * XREFs of ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140010B7C
 * Callers:
 *     ?GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140015858 (-GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1400057E0 (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007130 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A4E4 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x140010FF4 (-GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     memmove @ 0x14001BC00 (memmove.c)
 *     PropertyGetBooleanSideband @ 0x1400322F4 (PropertyGetBooleanSideband.c)
 *     PropertyGetDbLevelSideband @ 0x1400325C8 (PropertyGetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneImmediate(CSidebandDevice *this, struct _IRP *a2)
{
  __int64 v2; // rax
  struct _IRP *v3; // r15
  __int64 v5; // rsi
  unsigned int v6; // r12d
  CSidebandDevice *v7; // rcx
  char v8; // di
  char v9; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int PinFromEpIndex; // ebx
  unsigned int *p_NamedPipeType; // r14
  bool v13; // r8
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  PDEVICE_OBJECT v16; // rcx
  _DWORD *UserBuffer; // r13
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // r11d
  struct _KSPIN_DESCRIPTOR_EX *v22; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v23; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v25; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v26; // [rsp+C8h] [rbp+60h] BYREF

  v2 = *((_QWORD *)this + 4);
  v3 = a2;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v5 = *(_QWORD *)(v2 + 16) + 128LL;
  v26 = -1;
  v6 = 0;
  v22 = 0LL;
  v7 = (CSidebandDevice *)WPP_GLOBAL_Control;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v9 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v9 = 0;
  }
  if ( (_BYTE)a2 || v9 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, v9, WPP_GLOBAL_Control->DeviceExtension);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  v3->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 20 )
  {
    PinFromEpIndex = -1073741306;
    goto LABEL_62;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(v7, (struct _KSFILTER_DESCRIPTOR *)v5, *p_NamedPipeType) )
  {
    PinFromEpIndex = -1073741811;
    goto LABEL_62;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v23, &v22);
  if ( PinFromEpIndex >= 0 )
  {
    PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(
                       (struct _KSFILTER_DESCRIPTOR *)v5,
                       (const KSTOPOLOGY_CONNECTION *)v23,
                       &v24);
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetSidetoneNodes(v24, (struct _KSFILTER_DESCRIPTOR *)v5, &v25, &v26);
      if ( PinFromEpIndex >= 0 )
      {
        UserBuffer = v3->UserBuffer;
        if ( p_NamedPipeType[2] != -1 )
          v6 = p_NamedPipeType[2];
        memmove(v3->UserBuffer, p_NamedPipeType, 0x14uLL);
        v19 = v25;
        v20 = -1;
        UserBuffer[2] = v6;
        if ( v19 == -1
          || (PinFromEpIndex = PropertyGetDbLevelSideband(
                                 v18,
                                 *(_DWORD *)(v5 + 72) + *(_DWORD *)(v5 + 68) * v19,
                                 (unsigned int)&v23,
                                 v6,
                                 (__int64)(UserBuffer + 3)),
              PinFromEpIndex >= 0) )
        {
          if ( v26 == v20
            || (PinFromEpIndex = PropertyGetBooleanSideband(
                                   v18,
                                   *(_DWORD *)(v5 + 72) + *(_DWORD *)(v5 + 68) * v26,
                                   (unsigned int)&v23,
                                   v6,
                                   (__int64)(UserBuffer + 4)),
                PinFromEpIndex >= 0) )
          {
            v3->IoStatus.Information = 20LL;
            goto LABEL_62;
          }
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(a2) = 0;
          }
          v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_62;
        }
        else
        {
          v16 = WPP_GLOBAL_Control;
          LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
          v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_62;
        }
      }
      else
      {
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(a2) = 0;
        }
        v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_62;
      }
    }
    else
    {
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(a2) = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
    }
    DeviceExtension = v16->DeviceExtension;
    AttachedDevice = v16->AttachedDevice;
    goto LABEL_23;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(a2) = 0;
  }
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_23:
    WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, (_DWORD)a2, v13, (_DWORD)DeviceExtension);
  }
LABEL_62:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v8 = 0;
  if ( (_BYTE)a2 || v8 )
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, v8, WPP_GLOBAL_Control->DeviceExtension);
  return (unsigned int)PinFromEpIndex;
}
