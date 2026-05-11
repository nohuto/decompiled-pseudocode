/*
 * XREFs of PropertyGetDbLevel @ 0x14003CEC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x140005210 (WPP_RECORDER_AND_TRACE_SF__guid_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140005564 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall PropertyGetDbLevel(PIRP Irp, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbp
  _DWORD *v4; // r12
  __int64 v5; // rdi
  unsigned int v7; // esi
  char v8; // bl
  PKSFILTER FilterFromIrp; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rdi
  __int64 v13; // r15
  char v14; // dl
  PDEVICE_OBJECT v15; // rcx
  int v17; // [rsp+20h] [rbp-68h]
  int v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+38h] [rbp-50h]

  v3 = *(unsigned int *)(a2 + 32);
  v4 = a3;
  v5 = a2;
  v7 = -1073741808;
  v8 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF__guid_d(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  if ( !FilterFromIrp )
    goto LABEL_14;
  v12 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(v5 + 24)];
  v13 = *(_QWORD *)(v12 + 128);
  v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v14,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v17,
      v18,
      0x17u,
      v19);
  if ( (unsigned int)v3 >= *(_DWORD *)(v12 + 92) )
  {
LABEL_14:
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v7;
LABEL_25:
    LOBYTE(v10) = v8;
    WPP_RECORDER_AND_TRACE_SF_d(v15->AttachedDevice, v10, v11, v15->DeviceExtension);
    return v7;
  }
  v7 = 0;
  *v4 = *(_DWORD *)(32 * v3 + v13 + 12);
  Irp->IoStatus.Information = 4LL;
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v8 = 0;
  }
  LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    goto LABEL_25;
  return v7;
}
