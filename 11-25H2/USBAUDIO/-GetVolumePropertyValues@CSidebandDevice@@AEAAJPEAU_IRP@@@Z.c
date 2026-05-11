/*
 * XREFs of ?GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017208
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400092C8 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A394 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D82C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x14001210C (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x140019420 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 */

__int64 __fastcall CSidebandDevice::GetVolumePropertyValues(CSidebandDevice *this, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _KSFILTER_DESCRIPTOR *v5; // rdx
  NTSTATUS VolumePropertyBasicSupport; // ebx
  PDEVICE_OBJECT v7; // rcx
  bool v8; // r8
  unsigned int NamedPipeType; // ebp
  PVOID UserBuffer; // r9
  int v11; // edx
  int v12; // r8d
  unsigned int Length; // [rsp+70h] [rbp+8h] BYREF

  Irp->IoStatus.Information = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = (struct _KSFILTER_DESCRIPTOR *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL);
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( (unsigned int)CSidebandDevice::IsValidEndpointIndex(this, v5, NamedPipeType) )
    {
      UserBuffer = Irp->UserBuffer;
      Length = CurrentStackLocation->Parameters.Read.Length;
      VolumePropertyBasicSupport = CSidebandDevice::GetVolumePropertyBasicSupport(
                                     this,
                                     NamedPipeType,
                                     &Length,
                                     UserBuffer);
      if ( VolumePropertyBasicSupport >= 0 )
        Irp->IoStatus.Information = Length;
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dq(WPP_GLOBAL_Control->AttachedDevice, v11, v12, WPP_GLOBAL_Control->DeviceExtension);
      }
    }
    else
    {
      VolumePropertyBasicSupport = -1073741811;
      v7 = WPP_GLOBAL_Control;
      LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        goto LABEL_9;
    }
  }
  else
  {
    VolumePropertyBasicSupport = -1073741306;
    v7 = WPP_GLOBAL_Control;
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
LABEL_9:
      WPP_RECORDER_AND_TRACE_SF_dd(v7->AttachedDevice, (_DWORD)v5, v8, v7->DeviceExtension);
  }
  Irp->IoStatus.Status = VolumePropertyBasicSupport;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)VolumePropertyBasicSupport;
}
