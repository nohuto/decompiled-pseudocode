/*
 * XREFs of ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140006AA8
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140009420 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x140006FA0 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007130 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A4E4 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _scope_exit__lambda_54b590da5451504ad188b607302821f2____::_2_::scope_exit::_scope_exit @ 0x14000BCDC (_scope_exit__lambda_54b590da5451504ad188b607302821f2____--_2_--scope_exit--_scope_exit.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000CF6C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     _lambda_54b590da5451504ad188b607302821f2_::operator() @ 0x1400144AC (_lambda_54b590da5451504ad188b607302821f2_--operator().c)
 *     PinSetDeviceState @ 0x14003D6D0 (PinSetDeviceState.c)
 */

__int64 __fastcall CSidebandDevice::StreamSuspend(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  __int64 v3; // rax
  struct _IRP *v4; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v7; // rdi
  CSidebandDevice *v8; // rcx
  char v9; // bl
  bool v10; // zf
  unsigned int v11; // edi
  PDEVICE_OBJECT v12; // rcx
  unsigned int NamedPipeType; // esi
  int PinFromEpIndex; // eax
  PDEVICE_OBJECT v15; // r10
  PKSPIN v17; // rdi
  PKSFILTER ParentFilter; // rsi
  int v19; // edx
  int v20; // r8d
  int v21; // edx
  int v22; // r8d
  int v23; // edx
  int v24; // r8d
  unsigned int v25; // ebx
  struct _KSPIN_DESCRIPTOR_EX *v26; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v27[2]; // [rsp+60h] [rbp-9h] BYREF
  char v28; // [rsp+70h] [rbp+7h]
  int v29; // [rsp+D0h] [rbp+67h] BYREF
  struct _IRP *v30; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v31; // [rsp+E0h] [rbp+77h] BYREF
  PKSPIN Pin; // [rsp+E8h] [rbp+7Fh] BYREF

  v30 = a2;
  v3 = *((_QWORD *)this + 4);
  v31 = -1;
  v4 = a2;
  v29 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = *(_QWORD *)(v3 + 16);
  v26 = 0LL;
  Pin = 0LL;
  v8 = (CSidebandDevice *)WPP_GLOBAL_Control;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
  {
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, WPP_GLOBAL_Control->DeviceExtension);
    v4 = v30;
  }
  v4->IoStatus.Information = 0LL;
  v10 = CurrentStackLocation->Parameters.Create.Options == 4;
  v27[0] = &v30;
  v27[1] = &v29;
  v28 = 1;
  if ( !v10 )
  {
    v11 = -1073741306;
    v29 = -1073741306;
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_51;
    goto LABEL_26;
  }
  NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(v8, (struct _KSFILTER_DESCRIPTOR *)(v7 + 128), NamedPipeType) )
  {
    v11 = -1073741811;
    v29 = -1073741811;
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_51;
LABEL_26:
    LOBYTE(a2) = v9;
    WPP_RECORDER_AND_TRACE_SF_dd(v12->AttachedDevice, (_DWORD)a2, a3, v12->DeviceExtension);
    v11 = v29;
LABEL_51:
    scope_exit__lambda_54b590da5451504ad188b607302821f2____::_2_::scope_exit::_scope_exit(v27, a2, a3);
    return v11;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v31, &v26);
  v29 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    goto LABEL_49;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v31, &Pin);
  v29 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
LABEL_49:
    LOBYTE(a2) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(v15->AttachedDevice, (_DWORD)a2, a3, v15->DeviceExtension);
    PinFromEpIndex = v29;
LABEL_50:
    v11 = PinFromEpIndex;
    goto LABEL_51;
  }
  v17 = Pin;
  ParentFilter = KsPinGetParentFilter(Pin);
  KsAcquireControl(ParentFilter);
  v29 = PinSetDeviceState(v17, 2LL, 3LL);
  if ( v29 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v19) = 0;
    }
    if ( (_BYTE)v19 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v19, v20, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  v29 = PinSetDeviceState(v17, 1LL, 2LL);
  if ( v29 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v21) = 0;
    }
    if ( (_BYTE)v21 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v21, v22, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  v29 = PinSetDeviceState(v17, 0LL, 1LL);
  if ( v29 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = v9;
      LOBYTE(v24) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v23, v24, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  KsReleaseControl(ParentFilter);
  v25 = v29;
  lambda_54b590da5451504ad188b607302821f2_::operator()(v27);
  return v25;
}
