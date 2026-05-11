/*
 * XREFs of ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x14000FCB0
 * Callers:
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140014B90 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1400057E0 (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x14000597C (-GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x140007EA8 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000CF6C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x140010FF4 (-GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z @ 0x1400121A0 (-IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetEndpointCapabilities(
        CSidebandDevice *this,
        unsigned int a2,
        struct _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES *a3)
{
  struct _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES *v3; // r15
  unsigned int v4; // r14d
  struct _KSFILTER_DESCRIPTOR *v6; // rsi
  char v7; // bl
  int v8; // edx
  int BridgePinForDataPin; // edi
  int v10; // r8d
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  unsigned int v13; // edi
  int NodeOfType; // eax
  int v15; // edx
  int v16; // r8d
  char v17; // dl
  int v18; // eax
  int v19; // edx
  int v20; // r8d
  char v21; // dl
  int SidetoneNodes; // eax
  int v23; // edx
  int v24; // r8d
  int v25; // ecx
  PDEVICE_OBJECT v26; // rcx
  int v28; // [rsp+20h] [rbp-50h]
  int v29; // [rsp+20h] [rbp-50h]
  unsigned int v30; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v31; // [rsp+64h] [rbp-Ch] BYREF
  unsigned int v32; // [rsp+68h] [rbp-8h] BYREF
  int v33; // [rsp+6Ch] [rbp-4h] BYREF
  unsigned int v34; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v35; // [rsp+C8h] [rbp+58h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = (struct _KSFILTER_DESCRIPTOR *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL);
  v34 = -1;
  v35 = -1;
  v33 = 0;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  v7 = 1;
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
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, a2, (_DWORD)a3, WPP_GLOBAL_Control->DeviceExtension);
  BridgePinForDataPin = CSidebandDevice::GetBridgePinForDataPin(v6, (const KSTOPOLOGY_CONNECTION *)v4, &v34);
  if ( BridgePinForDataPin < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
      LOBYTE(v8) = v7;
      AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_93:
      WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, v8, v10, (_DWORD)DeviceExtension);
      return (unsigned int)BridgePinForDataPin;
    }
    return (unsigned int)BridgePinForDataPin;
  }
  v13 = v34;
  NodeOfType = CSidebandDevice::GetNodeOfType(v34, v4, v6, &GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1, &v35);
  if ( NodeOfType < 0 )
  {
    if ( NodeOfType == -1073741275 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( (_BYTE)v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dd(WPP_GLOBAL_Control->AttachedDevice, v15, v16, WPP_GLOBAL_Control->DeviceExtension);
      }
    }
  }
  else
  {
    v3->Volume = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v17 = 0;
    }
    if ( v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_ddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v17,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v28,
        9u,
        0x46u,
        (__int64)&WPP_309f1687d4053247ca5427ea11d9cc71_Traceguids);
  }
  v18 = CSidebandDevice::GetNodeOfType(v13, v4, v6, &GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1, &v30);
  if ( v18 < 0 )
  {
    if ( v18 == -1073741275 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v19) = 0;
      }
      if ( (_BYTE)v19 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dd(WPP_GLOBAL_Control->AttachedDevice, v19, v20, WPP_GLOBAL_Control->DeviceExtension);
      }
    }
  }
  else
  {
    v3->Mute = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v21 = 0;
    }
    if ( v21 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_ddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v21,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v29,
        9u,
        0x48u,
        (__int64)&WPP_309f1687d4053247ca5427ea11d9cc71_Traceguids);
  }
  SidetoneNodes = CSidebandDevice::GetSidetoneNodes(v13, v6, &v32, &v31);
  if ( SidetoneNodes < 0 )
  {
    if ( SidetoneNodes == -1073741275 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v23) = 0;
      }
      if ( (_BYTE)v23 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v23, v24, WPP_GLOBAL_Control->DeviceExtension);
      }
    }
  }
  else
  {
    v3->Sidetone = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v23) = 0;
    }
    if ( (_BYTE)v23 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(WPP_GLOBAL_Control->AttachedDevice, v23, v24, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  BridgePinForDataPin = CSidebandDevice::IsFeedbackSupported(this, *((struct _KSDEVICE **)this + 4), v4, &v33);
  if ( BridgePinForDataPin >= 0 )
  {
    v25 = v33;
    v3->Feedback = v33;
    if ( v25 )
    {
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v8) = 0;
      }
      LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
LABEL_75:
        WPP_RECORDER_AND_TRACE_SF_(v26->AttachedDevice, v8, v10, v26->DeviceExtension);
    }
    else
    {
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v8) = 0;
      }
      LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        goto LABEL_75;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v7 = 0;
  if ( (_BYTE)v8 || v7 )
  {
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    LOBYTE(v10) = v7;
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
    goto LABEL_93;
  }
  return (unsigned int)BridgePinForDataPin;
}
