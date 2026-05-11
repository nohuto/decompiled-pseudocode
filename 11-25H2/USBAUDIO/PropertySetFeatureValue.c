/*
 * XREFs of PropertySetFeatureValue @ 0x1400338F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 *     QueuePropertyRequest @ 0x14003EC10 (QueuePropertyRequest.c)
 *     DeviceRequestPowerUp @ 0x14004083C (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertySetFeatureValue(PIRP Irp, __int64 a2, __int64 a3)
{
  PKSFILTER FilterFromIrp; // rax
  __int64 v7; // rdx
  PKSFILTER v8; // r14
  int v9; // ebp
  const KSFILTER_DESCRIPTOR *Descriptor; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v12; // rdi
  _QWORD *Context; // rcx
  unsigned int v15; // edx
  void *v16; // [rsp+38h] [rbp-40h]
  ULONG Length; // [rsp+40h] [rbp-38h]
  unsigned int v18; // [rsp+88h] [rbp+10h] BYREF

  v18 = 0;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v8 = FilterFromIrp;
  v9 = -1073741811;
  if ( !FilterFromIrp )
    return (unsigned int)v9;
  Descriptor = FilterFromIrp->Descriptor;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v12 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
  LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    Length = CurrentStackLocation->Parameters.Read.Length;
    v16 = &WPP_b83ba1dee83736acd1729b525419a2d7_Traceguids;
    LOBYTE(Descriptor) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      (_DWORD)Descriptor,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  Context = v8->Context;
  if ( *(_DWORD *)(Context[2] + 536LL) == 1 )
  {
    v15 = *(_DWORD *)(a2 + 32);
    if ( v15 < *(_DWORD *)(v12 + 92) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, unsigned int, int, unsigned int *, void *, ULONG))(v12 + 136))(
             Context,
             v12,
             CurrentStackLocation->Parameters.Read.Length,
             a3,
             v15,
             1,
             &v18,
             v16,
             Length);
      if ( v9 >= 0 )
        Irp->IoStatus.Information = v18;
    }
    return (unsigned int)v9;
  }
  if ( (int)DeviceRequestPowerUp(Context, v7) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
