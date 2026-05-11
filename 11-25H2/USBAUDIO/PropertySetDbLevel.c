/*
 * XREFs of PropertySetDbLevel @ 0x14003E940
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140005794 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF__guid_dd @ 0x1400081F4 (WPP_RECORDER_AND_TRACE_SF__guid_dd.c)
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 *     QueuePropertyRequest @ 0x14003EC10 (QueuePropertyRequest.c)
 *     DeviceRequestPowerUp @ 0x14004083C (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertySetDbLevel(PIRP Irp, __int64 a2, int *a3)
{
  int v4; // r12d
  __int64 v5; // rdx
  PKSFILTER FilterFromIrp; // rbx
  int v7; // r8d
  int v8; // edi
  char v9; // si
  char v10; // dl
  _QWORD *Context; // r15
  __int64 v12; // r14
  __int64 v13; // rbp
  _DWORD *v15; // rbp
  int v16; // ebx
  int v17; // [rsp+20h] [rbp-98h]
  int v18; // [rsp+28h] [rbp-90h]
  int v19; // [rsp+38h] [rbp-80h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+60h] [rbp-58h]
  unsigned int v22; // [rsp+C8h] [rbp+10h]
  unsigned int v24; // [rsp+D8h] [rbp+20h] BYREF

  v24 = 0;
  v4 = *a3;
  v22 = *(_DWORD *)(a2 + 32);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v8 = -1073741811;
  v9 = 1;
  v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF__guid_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v17,
      v18,
      0x13u,
      v19,
      a2);
  if ( FilterFromIrp )
  {
    Context = FilterFromIrp->Context;
    v12 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
    v13 = *(_QWORD *)(v12 + 128);
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v17,
        v18,
        0x14u,
        v19);
    if ( *(_DWORD *)(Context[2] + 536LL) == 1 )
    {
      if ( v22 < *(_DWORD *)(v12 + 92) )
      {
        v15 = (_DWORD *)(32LL * v22 + v13);
        v16 = v15[7];
        if ( v4 <= v16 )
        {
          v16 = v4;
          if ( v4 < v15[6] )
            v16 = v15[6];
        }
        *a3 = v16;
        v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, int *, unsigned int, int, unsigned int *))(v12 + 136))(
               Context,
               v12,
               CurrentStackLocation->Parameters.Read.Length,
               a3,
               v22,
               1,
               &v24);
        if ( v8 >= 0 )
        {
          v15[3] = v16;
          Irp->IoStatus.Information = v24;
          return (unsigned int)v8;
        }
      }
    }
    else if ( (int)DeviceRequestPowerUp(Context, v5) < 0 )
    {
      v8 = -1073741661;
    }
    else
    {
      v8 = QueuePropertyRequest(Irp);
      if ( v8 >= 0 )
        return (unsigned int)v8;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v9 = 0;
  }
  if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = v9;
    LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v5, v7, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v8;
}
