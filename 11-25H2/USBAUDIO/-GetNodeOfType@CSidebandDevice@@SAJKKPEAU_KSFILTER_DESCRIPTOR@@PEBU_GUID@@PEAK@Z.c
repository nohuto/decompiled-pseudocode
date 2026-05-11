/*
 * XREFs of ?GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x140005CE0
 * Callers:
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000A3DC (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x140010630 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140010C30 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x140011180 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x14001210C (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400173F8 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140018518 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1400083F8 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ?GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z @ 0x14000B154 (-GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall CSidebandDevice::GetNodeOfType(
        unsigned int a1,
        unsigned int a2,
        struct _KSFILTER_DESCRIPTOR *a3,
        const struct _GUID *a4,
        unsigned int *a5)
{
  struct _KSFILTER_DESCRIPTOR *v6; // rbp
  unsigned int v7; // r12d
  char v9; // bl
  int v10; // edx
  int NodesInPath; // esi
  int v12; // r8d
  struct _LIST_ENTRY *Flink; // rdi
  unsigned int v14; // r9d
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v20; // [rsp+20h] [rbp-78h]
  struct _LIST_ENTRY P; // [rsp+60h] [rbp-38h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = 1;
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
  P.Blink = &P;
  P.Flink = &P;
  NodesInPath = CSidebandDevice::GetNodesInPath(v6, a1, v7, &P);
  if ( NodesInPath >= 0 )
  {
    NodesInPath = -1073741275;
    while ( 1 )
    {
      Flink = P.Flink;
      if ( P.Flink == &P )
        break;
      v14 = (unsigned int)P.Flink[1].Flink;
      v15 = *(const GUID **)((char *)&v6->NodeDescriptors->Type + v6->NodeDescriptorSize * v14);
      v16 = *v15 - *(_QWORD *)&a4->Data1;
      if ( *v15 == *(_QWORD *)&a4->Data1 )
        v16 = v15[1] - *(_QWORD *)a4->Data4;
      if ( !v16 )
      {
        *a5 = v14;
        NodesInPath = 0;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (LOBYTE(v12) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v15 || (_BYTE)v12 )
        WPP_RECORDER_AND_TRACE_SF_ddd(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v15,
          v12,
          WPP_GLOBAL_Control->DeviceExtension,
          v20,
          9,
          47,
          (__int64)&WPP_592256b5268d334857c14222035d4fc6_Traceguids,
          a1,
          v7,
          v14);
      v17 = Flink->Flink;
      if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
        __fastfail(3u);
      Blink->Flink = v17;
      v17->Blink = Blink;
      ExFreePool(Flink);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v9 = 0;
  if ( (_BYTE)v10 || v9 )
  {
    LOBYTE(v12) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v10, v12, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)NodesInPath;
}
