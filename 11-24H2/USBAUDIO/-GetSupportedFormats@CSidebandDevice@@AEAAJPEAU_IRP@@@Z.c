/*
 * XREFs of ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140015E84
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140009420 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x1400052F4 (-IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRI.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007130 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x140007EA8 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A4E4 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000CF6C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddd @ 0x1400187C0 (WPP_RECORDER_AND_TRACE_SF_ddddd.c)
 *     memset @ 0x14001BF00 (memset.c)
 */

__int64 __fastcall CSidebandDevice::GetSupportedFormats(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v4; // rdx
  int v5; // r15d
  PDEVICE_OBJECT v6; // r10
  bool v7; // bl
  bool v8; // r8
  PIRP v9; // rcx
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // r13
  int v12; // r8d
  int PinFromEpIndex; // eax
  CSidebandDevice *v14; // rcx
  __int64 v15; // r8
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  unsigned int CompletionMode; // r8d
  PDEVICE_OBJECT v19; // rcx
  __int64 v20; // r15
  ULONG Length; // ecx
  unsigned int v22; // r12d
  struct _KSPIN_DESCRIPTOR_EX *v23; // r9
  int v24; // r12d
  __int64 v25; // rcx
  _DWORD *v26; // rax
  __int64 v27; // r11
  unsigned int v28; // r15d
  __int64 v29; // r9
  bool v30; // al
  __int16 v31; // r9
  __int16 v32; // r10
  __int16 v33; // r11
  int v34; // eax
  char v35; // r10
  __int64 *v36; // rax
  __int64 v37; // r13
  bool v38; // r12
  __int16 v39; // r9
  __int16 v40; // r10
  __int16 v41; // r11
  int v42; // eax
  char v43; // r10
  int v44; // [rsp+20h] [rbp-59h]
  int v45; // [rsp+28h] [rbp-51h]
  void *v46; // [rsp+38h] [rbp-41h]
  int v47; // [rsp+60h] [rbp-19h]
  int v48; // [rsp+60h] [rbp-19h]
  struct _IO_STACK_LOCATION *v49; // [rsp+70h] [rbp-9h]
  __int64 *UserBuffer; // [rsp+70h] [rbp-9h]
  __int64 v51; // [rsp+78h] [rbp-1h]
  unsigned __int8 *v52; // [rsp+80h] [rbp+7h]
  ULONG_PTR v53; // [rsp+88h] [rbp+Fh]
  unsigned int v54; // [rsp+E0h] [rbp+67h] BYREF
  PIRP Irp; // [rsp+E8h] [rbp+6Fh]
  unsigned int v56; // [rsp+F0h] [rbp+77h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v57; // [rsp+F8h] [rbp+7Fh] BYREF

  Irp = a2;
  a2->IoStatus.Information = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v54 = -1;
  v57 = 0LL;
  v49 = CurrentStackLocation;
  v4 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x18 )
  {
    v5 = -1073741811;
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    goto LABEL_9;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(
                        (CSidebandDevice *)CurrentStackLocation,
                        (struct _KSFILTER_DESCRIPTOR *)v4,
                        Parameters->ReadMode) )
  {
    v5 = -1073741811;
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    goto LABEL_9;
  }
  v7 = 1;
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v46 = &WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids;
    LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v4, v12, WPP_GLOBAL_Control->DeviceExtension);
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, Parameters->ReadMode, &v54, &v57);
  LODWORD(v4) = 0;
  v5 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
      AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
      goto LABEL_37;
    }
    goto LABEL_10;
  }
  CompletionMode = Parameters->CompletionMode;
  v54 = 0;
  v56 = 0;
  v5 = CSidebandDevice::IntersectDataFormatsWithDataRange(
         v14,
         *(union KSDATAFORMAT ***)&Parameters->InboundQuota,
         CompletionMode,
         v57,
         0LL,
         &v56,
         &v54);
  if ( v5 < 0 )
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    goto LABEL_10;
  }
  v20 = v56;
  Length = v49->Parameters.Read.Length;
  v22 = v54 + 24 + 8 * v56;
  if ( !Length )
  {
    v9 = Irp;
    v5 = -1073741789;
    Irp->IoStatus.Information = v22;
    goto LABEL_11;
  }
  if ( Length != v22 )
  {
    v5 = -1073741811;
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
LABEL_9:
    LOBYTE(v4) = v7;
    WPP_RECORDER_AND_TRACE_SF_dd(v6->AttachedDevice, v4, v8, v6->DeviceExtension);
    goto LABEL_10;
  }
  v53 = v22;
  UserBuffer = (__int64 *)Irp->UserBuffer;
  memset(UserBuffer, 0, v22);
  v23 = v57;
  v51 = v20;
  *(_DWORD *)UserBuffer = v22;
  v24 = 0;
  *((_DWORD *)UserBuffer + 1) = Parameters->ReadMode;
  UserBuffer[2] = (__int64)(UserBuffer + 3);
  *((_DWORD *)UserBuffer + 2) = v20;
  v52 = (unsigned __int8 *)&UserBuffer[v20 + 3];
  v5 = CSidebandDevice::IntersectDataFormatsWithDataRange(
         (CSidebandDevice *)(UserBuffer + 1),
         *(union KSDATAFORMAT ***)&Parameters->InboundQuota,
         Parameters->CompletionMode,
         v23,
         v52,
         (unsigned int *)UserBuffer + 2,
         &v54);
  LODWORD(v57) = v5;
  if ( v56 )
  {
    v25 = 0LL;
    v15 = v51;
    v4 = UserBuffer[2];
    do
    {
      *(_QWORD *)(v25 + v4) = &v52[v24];
      v4 = UserBuffer[2];
      v26 = *(_DWORD **)(v25 + v4);
      v25 += 8LL;
      v24 += *v26;
      --v15;
    }
    while ( v15 );
  }
  if ( !Parameters->CompletionMode )
    goto LABEL_92;
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v46 = &WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  v54 = 0;
  if ( !Parameters->CompletionMode )
  {
LABEL_92:
    v27 = *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
    goto LABEL_93;
  }
  v27 = *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
  v28 = v54;
  v29 = *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1;
  do
  {
    v4 = *(_QWORD *)(*(_QWORD *)&Parameters->InboundQuota + 8LL * v28);
    if ( *(_QWORD *)(v4 + 48) == v29 && *(_QWORD *)(v4 + 56) == v27 )
    {
      if ( *(_WORD *)(v4 + 64) == 0xFFFE )
      {
        v30 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v54) = v30;
        if ( v30 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v31 = *(_WORD *)(v4 + 82);
          v32 = *(_WORD *)(v4 + 78);
          v33 = *(_WORD *)(v4 + 66);
          v47 = *(_DWORD *)(v4 + 84);
          v34 = *(_DWORD *)(v4 + 68);
          LOBYTE(v4) = v54;
          LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_ddddd(
            WPP_GLOBAL_Control->AttachedDevice,
            v4,
            v15,
            WPP_GLOBAL_Control->DeviceExtension,
            v44,
            v45,
            136,
            (_DWORD)v46,
            v33,
            v34,
            v32,
            v31,
            v47);
LABEL_89:
          v29 = *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1;
          v27 = *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
        }
      }
      else
      {
        v35 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v35 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_AND_TRACE_SF_ddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v35,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v44,
            9u,
            0x89u,
            (__int64)&WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids);
          goto LABEL_89;
        }
      }
    }
    ++v28;
  }
  while ( v28 < Parameters->CompletionMode );
  v5 = (int)v57;
LABEL_93:
  if ( *((_DWORD *)UserBuffer + 2) )
  {
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v46 = &WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
      v27 = *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
    }
    v36 = UserBuffer;
    v37 = 0LL;
    if ( *((_DWORD *)UserBuffer + 2) )
    {
      while ( 2 )
      {
        v4 = *(_QWORD *)(v36[2] + 8 * v37);
        if ( *(_QWORD *)(v4 + 48) == *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1
          && *(_QWORD *)(v4 + 56) == v27 )
        {
          if ( *(_WORD *)(v4 + 64) == 0xFFFE )
          {
            v38 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( v38 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v39 = *(_WORD *)(v4 + 82);
              v40 = *(_WORD *)(v4 + 78);
              v41 = *(_WORD *)(v4 + 66);
              v48 = *(_DWORD *)(v4 + 84);
              v42 = *(_DWORD *)(v4 + 68);
              LOBYTE(v4) = v38;
              LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_ddddd(
                WPP_GLOBAL_Control->AttachedDevice,
                v4,
                v15,
                WPP_GLOBAL_Control->DeviceExtension,
                v44,
                v45,
                139,
                (_DWORD)v46,
                v41,
                v42,
                v40,
                v39,
                v48);
              goto LABEL_122;
            }
          }
          else
          {
            v43 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( v43 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_AND_TRACE_SF_ddd(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v43,
                *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v44,
                9u,
                0x8Cu,
                (__int64)&WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids);
LABEL_122:
              v27 = *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
            }
          }
        }
        v36 = UserBuffer;
        v37 = (unsigned int)(v37 + 1);
        if ( (unsigned int)v37 >= *((_DWORD *)UserBuffer + 2) )
        {
          v5 = (int)v57;
          break;
        }
        continue;
      }
    }
  }
  if ( v5 >= 0 )
  {
    v9 = Irp;
    Irp->IoStatus.Information = v53;
  }
  else
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
LABEL_45:
      DeviceExtension = v19->DeviceExtension;
      AttachedDevice = v19->AttachedDevice;
LABEL_37:
      LOBYTE(v4) = v7;
      WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, v4, v15, (_DWORD)DeviceExtension);
    }
LABEL_10:
    v9 = Irp;
  }
LABEL_11:
  v9->IoStatus.Status = v5;
  IofCompleteRequest(v9, 0);
  return (unsigned int)v5;
}
