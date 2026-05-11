/*
 * XREFs of ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140015410
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400092C8 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetNumberOfEndpointsInDevice@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEAK@Z @ 0x14000A934 (-GetNumberOfEndpointsInDevice@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEAK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D82C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     _scope_exit__lambda_9941f52df6e4fe84e0488a5695633101____::_2_::scope_exit::_scope_exit @ 0x140014F08 (_scope_exit__lambda_9941f52df6e4fe84e0488a5695633101____--_2_--scope_exit--_scope_exit.c)
 */

__int64 __fastcall CSidebandDevice::GetDeviceDescriptor(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v3; // rdi
  char v4; // bl
  char v5; // r8
  ULONG Length; // eax
  unsigned int v7; // edi
  PDEVICE_OBJECT v8; // rcx
  bool v9; // r8
  _QWORD v11[2]; // [rsp+50h] [rbp-20h] BYREF
  char v12; // [rsp+60h] [rbp-10h]
  int NumberOfEndpointsInDevice; // [rsp+B0h] [rbp+40h] BYREF
  struct _IRP *v14; // [rsp+B8h] [rbp+48h] BYREF

  v14 = a2;
  NumberOfEndpointsInDevice = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, v5, WPP_GLOBAL_Control->DeviceExtension);
  v12 = 1;
  v11[0] = &v14;
  v11[1] = &NumberOfEndpointsInDevice;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    if ( Length == 4 )
    {
      NumberOfEndpointsInDevice = CSidebandDevice::GetNumberOfEndpointsInDevice(
                                    (struct _KSFILTER_DESCRIPTOR *)(v3 + 128),
                                    (unsigned int *)v14->UserBuffer);
      v7 = NumberOfEndpointsInDevice;
      if ( NumberOfEndpointsInDevice >= 0 )
      {
        v14->IoStatus.Information = 4LL;
        v8 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v4 = 0;
        }
        v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_42;
        goto LABEL_41;
      }
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
LABEL_41:
        LOBYTE(a2) = v4;
        WPP_RECORDER_AND_TRACE_SF_d(v8->AttachedDevice, (_DWORD)a2, v9, v8->DeviceExtension);
        goto LABEL_42;
      }
    }
    else
    {
      v7 = -1073741306;
      NumberOfEndpointsInDevice = -1073741306;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = v4;
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          WPP_GLOBAL_Control->DeviceExtension);
LABEL_42:
        v7 = NumberOfEndpointsInDevice;
      }
    }
  }
  else
  {
    v7 = -1073741789;
    v14->IoStatus.Information = 4LL;
    NumberOfEndpointsInDevice = -1073741789;
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v4 = 0;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
  }
  scope_exit__lambda_9941f52df6e4fe84e0488a5695633101____::_2_::scope_exit::_scope_exit((__int64)v11);
  return v7;
}
