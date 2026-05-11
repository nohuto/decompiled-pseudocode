/*
 * XREFs of ?IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z @ 0x140012B20
 * Callers:
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x140010630 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CSidebandDevice::IsFeedbackSupported(CSidebandDevice *this, struct _KSDEVICE *a2, int a3, int *a4)
{
  int v5; // edi
  __int64 v6; // rax
  struct _KSDEVICE *v7; // r12
  int v8; // ebp
  __int64 v9; // rsi
  char v10; // bl
  void *v11; // r9
  __int64 v12; // rdi
  unsigned int i; // esi
  int v15; // [rsp+90h] [rbp+18h] BYREF

  v15 = 0;
  v5 = a3;
  v6 = *((_QWORD *)this + 4);
  v7 = a2;
  v8 = 0;
  *a4 = 0;
  v9 = *(_QWORD *)(v6 + 16);
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  v11 = &WPP_592256b5268d334857c14222035d4fc6_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  v12 = *(_QWORD *)(v9 + 168) + (unsigned int)(*(_DWORD *)(v9 + 164) * v5);
  for ( i = 0; i < *(_DWORD *)(v12 + 48); i += (unsigned int)a2 )
  {
    v8 = (*(__int64 (__fastcall **)(struct _KSDEVICE *, _QWORD, int *, void *))(pExtBusDeviceDispatchTable + 88))(
           v7,
           *(_QWORD *)(*(_QWORD *)(v12 + 56) + 8LL * i),
           &v15,
           v11);
    if ( v8 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          a3,
          WPP_GLOBAL_Control->DeviceExtension);
      }
      break;
    }
    if ( v15 )
    {
      *a4 = 1;
      break;
    }
    LODWORD(a2) = ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 56) + 8LL * i) + 4LL) & 2) != 0) + 1;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( (_BYTE)a2 || v10 )
  {
    LOBYTE(a3) = v10;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v8;
}
