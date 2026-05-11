/*
 * XREFs of PropertyGetBoolean @ 0x14003C9B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x140005210 (WPP_RECORDER_AND_TRACE_SF__guid_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140005564 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall PropertyGetBoolean(IRP *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  unsigned int v7; // ebp
  int v8; // edx
  PKSFILTER FilterFromIrp; // rsi
  int v10; // r8d
  char v11; // bl
  PDEVICE_OBJECT v12; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  char v16; // dl
  int v17; // [rsp+20h] [rbp-68h]
  int v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+38h] [rbp-50h]

  v3 = *(unsigned int *)(a2 + 32);
  v7 = -1073741808;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  v11 = 1;
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF__guid_d(WPP_GLOBAL_Control->AttachedDevice, v8, v10, WPP_GLOBAL_Control->DeviceExtension);
  }
  if ( !FilterFromIrp )
    goto LABEL_8;
  v14 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
  v15 = *(_QWORD *)(v14 + 128);
  v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v16 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v16,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v17,
      v18,
      0x10u,
      v19);
  if ( (unsigned int)v3 < *(_DWORD *)(v14 + 92) )
  {
    v7 = 0;
    *a3 = *(unsigned __int8 *)(v15 + 16 * v3 + 12);
    a1->IoStatus.Information = 4LL;
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v11 = 0;
    }
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      goto LABEL_34;
  }
  else
  {
LABEL_8:
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v11 = 0;
    }
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
LABEL_34:
      LOBYTE(v8) = v11;
      WPP_RECORDER_AND_TRACE_SF_d(v12->AttachedDevice, v8, v10, v12->DeviceExtension);
    }
  }
  return v7;
}
