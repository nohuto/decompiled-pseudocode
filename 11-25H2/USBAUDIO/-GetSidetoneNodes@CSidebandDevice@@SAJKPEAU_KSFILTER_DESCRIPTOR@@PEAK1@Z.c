/*
 * XREFs of ?GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x140011974
 * Callers:
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x140010630 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400114FC (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x140011D24 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017AFC (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1400083F8 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ?GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z @ 0x14000B154 (-GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?FindConnectedCapturePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x140010258 (-FindConnectedCapturePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneNodes(
        unsigned int a1,
        struct _KSFILTER_DESCRIPTOR *a2,
        unsigned __int64 a3,
        unsigned int *a4)
{
  int v5; // ebp
  unsigned int v6; // esi
  struct _KSFILTER_DESCRIPTOR *v7; // r14
  int ConnectedCapturePin; // ebx
  char v10; // di
  ULONG ConnectionsCount; // edx
  int v12; // ecx
  ULONG *p_ToNodePin; // rax
  struct _LIST_ENTRY *Flink; // rbx
  char v15; // dl
  char v16; // r8
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  struct _LIST_ENTRY *v20; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _DWORD *v22; // rax
  int v24; // [rsp+20h] [rbp-88h]
  struct _LIST_ENTRY P[4]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 v27; // [rsp+C0h] [rbp+18h]

  v27 = a3;
  v26 = -1;
  v5 = -1;
  v6 = -1;
  v7 = a2;
  ConnectedCapturePin = -1073741275;
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
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  ConnectionsCount = v7->ConnectionsCount;
  v12 = 0;
  if ( ConnectionsCount )
  {
    a3 = ConnectionsCount;
    p_ToNodePin = &v7->Connections->ToNodePin;
    do
    {
      if ( *(p_ToNodePin - 1) == -1 && *p_ToNodePin == a1 )
        v12 = 1;
      p_ToNodePin += 4;
      --a3;
    }
    while ( a3 );
    if ( v12 )
    {
      ConnectedCapturePin = CSidebandDevice::FindConnectedCapturePin(v7, a1, &v26);
      if ( ConnectedCapturePin >= 0 )
      {
        P[0].Blink = P;
        P[0].Flink = P;
        if ( (int)CSidebandDevice::GetNodesInPath(v7, (const KSTOPOLOGY_CONNECTION *)v26, a1, P) < 0 )
          goto LABEL_66;
        while ( 1 )
        {
          Flink = P[0].Flink;
          if ( P[0].Flink == P )
            break;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v15 = 0;
          }
          if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v16 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            v16 = 0;
          }
          if ( v15 || v16 )
            WPP_RECORDER_AND_TRACE_SF_ddd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v15,
              v16,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v24,
              9u,
              0x33u,
              (__int64)&WPP_592256b5268d334857c14222035d4fc6_Traceguids);
          v17 = *(const GUID **)((char *)&v7->NodeDescriptors->Type + v7->NodeDescriptorSize * LODWORD(Flink[1].Flink));
          v18 = *v17 - *(_QWORD *)&GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1.Data1;
          if ( *v17 == *(_QWORD *)&GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1.Data1 )
            v18 = v17[1] - *(_QWORD *)GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1.Data4;
          if ( !v18 && v5 == -1 )
            v5 = (int)Flink[1].Flink;
          v19 = *v17 - *(_QWORD *)&GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1.Data1;
          if ( *v17 == *(_QWORD *)&GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1.Data1 )
            v19 = v17[1] - *(_QWORD *)GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1.Data4;
          if ( !v19 && v6 == -1 )
            v6 = (unsigned int)Flink[1].Flink;
          v20 = Flink->Flink;
          if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
            __fastfail(3u);
          Blink->Flink = v20;
          v20->Blink = Blink;
          ExFreePool(Flink);
        }
        if ( v5 == -1 && v6 == -1 )
        {
LABEL_66:
          ConnectedCapturePin = -1073741275;
        }
        else
        {
          v22 = (_DWORD *)v27;
          ConnectedCapturePin = 0;
          *a4 = v6;
          *v22 = v5;
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(ConnectionsCount) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(ConnectionsCount) = 0;
        }
        if ( (_BYTE)ConnectionsCount || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            ConnectionsCount,
            a3,
            WPP_GLOBAL_Control->DeviceExtension);
        }
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(ConnectionsCount) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(ConnectionsCount) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( (_BYTE)ConnectionsCount || v10 )
  {
    LOBYTE(a3) = v10;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      ConnectionsCount,
      a3,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)ConnectedCapturePin;
}
