/*
 * XREFs of USBHwGetTransportResources @ 0x140041E80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memmove @ 0x14001BC00 (memmove.c)
 */

__int64 __fastcall USBHwGetTransportResources(int a1, _QWORD *a2, _BYTE *a3, unsigned int *a4)
{
  __int64 v4; // rax
  unsigned int v8; // ebx
  __int64 v9; // r14
  __int64 v10; // r13
  PKSDEVICE Device; // rax
  unsigned __int8 *v12; // rdx
  char v13; // bp
  PDEVICE_OBJECT *v14; // r8
  __int64 v15; // r15
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  PDEVICE_OBJECT v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // r8d
  unsigned int v25; // edi
  size_t v26; // r8

  v4 = a2[2];
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 152);
  v10 = *(_QWORD *)(v4 + 144);
  Device = KsGetDevice(a2);
  v13 = 1;
  v14 = &WPP_GLOBAL_Control;
  if ( !Device )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v12,
        (_DWORD)v14,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    goto LABEL_9;
  }
  v15 = *((_QWORD *)Device->Context + 9);
  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v12,
        (_DWORD)v14,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    v12 = *(unsigned __int8 **)(v10 + 136);
    if ( !v12 )
    {
      *a4 = 0;
LABEL_9:
      v8 = -1073741437;
LABEL_104:
      v24 = 0;
      goto LABEL_105;
    }
    v25 = *v12;
    if ( *a4 )
    {
      if ( *a4 < v25 )
      {
        v8 = -1073741811;
        goto LABEL_104;
      }
      memmove(a3, v12, *v12);
    }
    else
    {
      v8 = -1073741789;
    }
LABEL_103:
    *a4 = v25;
    goto LABEL_104;
  }
  v16 = a1 - 1;
  if ( !v16 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v12,
        (_DWORD)v14,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    v23 = 0;
    goto LABEL_83;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v12,
        (_DWORD)v14,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    v22 = 0;
LABEL_63:
    v12 = *(unsigned __int8 **)(v9 + 96);
    if ( v22 )
      v12 = *(unsigned __int8 **)(v9 + 104);
    if ( !v12 )
    {
LABEL_66:
      v8 = -1073741437;
      goto LABEL_18;
    }
    v25 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 >= 0x52u )
      v25 = 82;
    if ( !*a4 )
      goto LABEL_70;
    if ( *a4 < v25 )
      goto LABEL_72;
    v26 = v25;
    goto LABEL_74;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 2;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 1 )
        {
          v8 = -1073741811;
LABEL_18:
          *a4 = 0;
          goto LABEL_104;
        }
        v21 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v12) = 0;
        }
        LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          goto LABEL_48;
        goto LABEL_49;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v12,
          (_DWORD)v14,
          WPP_GLOBAL_Control->DeviceExtension);
      }
      v22 = 1;
      goto LABEL_63;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v12,
        (_DWORD)v14,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    v23 = 1;
LABEL_83:
    v12 = *(unsigned __int8 **)(v10 + 168);
    if ( v23 )
      v12 = *(unsigned __int8 **)(v10 + 176);
    if ( !v12 )
      goto LABEL_66;
    v25 = *v12;
    if ( !*a4 )
    {
LABEL_70:
      v8 = -1073741789;
      goto LABEL_103;
    }
    if ( *a4 < v25 )
    {
LABEL_72:
      v8 = -1073741811;
      goto LABEL_104;
    }
    v26 = *v12;
LABEL_74:
    memmove(a3, v12, v26);
    goto LABEL_103;
  }
  v21 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v12) = 0;
  }
  LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
LABEL_48:
    WPP_RECORDER_AND_TRACE_SF_(v21->AttachedDevice, (_DWORD)v12, (_DWORD)v14, v21->DeviceExtension);
LABEL_49:
  v24 = 0;
  if ( !*a4 )
  {
    v8 = -1073741789;
LABEL_54:
    *a4 = 4;
    goto LABEL_105;
  }
  if ( *a4 >= 4 )
  {
    *(_WORD *)a3 = *(_WORD *)(v15 + 8);
    a3[2] = *(_BYTE *)(v10 + 186);
    a3[3] = *(_BYTE *)(v10 + 187);
    goto LABEL_54;
  }
  v8 = -1073741811;
LABEL_105:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v13 = 0;
  if ( (_BYTE)v12 || v13 )
  {
    LOBYTE(v24) = v13;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v12,
      v24,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return v8;
}
