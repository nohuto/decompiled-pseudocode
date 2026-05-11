/*
 * XREFs of USBHwSelectStreamingAudioInterface @ 0x14003BBEC
 * Callers:
 *     USBCaptureStateChangePin @ 0x140004620 (USBCaptureStateChangePin.c)
 *     USBType1StateChangePin @ 0x140004AC0 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x14000D380 (USBType1ChangePowerState.c)
 *     USBCaptureChangePowerState @ 0x14000DAB0 (USBCaptureChangePowerState.c)
 *     USBParseGetAudioStreamingDataranges @ 0x14003B974 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005138 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memmove @ 0x14001BC00 (memmove.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035B24 (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     IsZeroBWInterface @ 0x14003BFE8 (IsZeroBWInterface.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x14003C0BC (USBHwSubmitUrbToUsbdSynch.c)
 *     USBHwFreePipes @ 0x14003C254 (USBHwFreePipes.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterface(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rdi
  char v3; // bp
  _BYTE *v4; // rsi
  int v6; // ebx
  char v7; // r15
  __int64 v8; // rax
  char v9; // al
  int v10; // edx
  int v12; // r12d
  __int64 Pool2; // rdi
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // r13
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rsi
  unsigned int v22; // edx
  __int64 v23; // rax
  void *v24; // rdx
  __int64 v25; // [rsp+50h] [rbp-48h]
  __int64 v26; // [rsp+58h] [rbp-40h]
  _QWORD *v28; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v26 = v2;
  v4 = a2;
  v6 = -1073741808;
  v25 = *(_QWORD *)(v2 + 16);
  v7 = 1;
  v8 = *(_QWORD *)(v25 + 16);
  if ( *(_BYTE *)(v8 + 64) || *(_BYTE *)(v8 + 67) )
  {
    v6 = -1073741632;
LABEL_40:
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
    goto LABEL_48;
  }
  v28 = *(_QWORD **)(v8 + 72);
  v9 = IsZeroBWInterface(v28[5], a2);
  v3 = v9;
  if ( *(_BYTE *)(v2 + 47) && !v9 )
    return USBHwSelectStreamingAudioInterfaceSideband(a1, (__int64)v4);
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  v12 = (unsigned __int8)v4[4];
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(24 * v12 + 56), 1096972357LL);
  if ( !Pool2 )
    goto LABEL_40;
  v14 = 0;
  v15 = v28[5];
  v16 = *(unsigned __int8 *)(v15 + 4);
  if ( *(_BYTE *)(v15 + 4) )
  {
    do
    {
      if ( *(_BYTE *)(*(_QWORD *)(v28[2] + 16LL * v14) + 2LL) == v4[2] )
        break;
      ++v14;
    }
    while ( v14 < v16 );
  }
  if ( v14 != v16 )
  {
    v17 = *(_QWORD *)(a1 + 16);
    *(_BYTE *)(Pool2 + 34) = v4[2];
    *(_WORD *)(Pool2 + 32) = 24 * (v12 + 1);
    *(_BYTE *)(Pool2 + 35) = v4[3];
    if ( v3 )
    {
      if ( v12 )
        *(_DWORD *)(Pool2 + 72) = 0;
    }
    else
    {
      v18 = *(_QWORD *)(v17 + 144);
      v19 = *(_DWORD *)(v18 + 216) & 0xF000;
      if ( !v19 || v19 == 0x2000 )
      {
        *(_DWORD *)(Pool2 + 72) = 500 * *(_DWORD *)(v18 + 220);
        if ( !*(_QWORD *)(v18 + 176) )
          *(_DWORD *)(Pool2 + 76) |= 8u;
      }
      else if ( v19 == 4096 )
      {
        *(_DWORD *)(Pool2 + 72) = 3872;
      }
    }
    *(_WORD *)Pool2 = 24 * v12 + 56;
    *(_WORD *)(Pool2 + 2) = 1;
    *(_QWORD *)(Pool2 + 24) = v28[3];
    v20 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v25 + 40), (PURB)Pool2, 0LL);
    if ( *(int *)(Pool2 + 4) >= 0 )
    {
      v6 = v20;
      if ( v20 >= 0 )
      {
        v21 = *(_QWORD *)(v17 + 152);
        if ( !v3 )
        {
          v22 = *(_DWORD *)(Pool2 + 48);
          *(_DWORD *)(v21 + 56) = v22;
          *(_QWORD *)(v21 + 64) = *(_QWORD *)(Pool2 + 64);
          if ( v22 > 0x14 )
          {
            v6 = -1073741438;
          }
          else
          {
            USBHwFreePipes(a1);
            v23 = ExAllocatePool2(64LL, 24LL * *(unsigned int *)(v21 + 56), 1096972357LL);
            *(_QWORD *)(v21 + 72) = v23;
            if ( !v23 )
              v6 = -1073741670;
            if ( v6 >= 0 )
              memmove(*(void **)(v21 + 72), (const void *)(Pool2 + 56), 24LL * *(unsigned int *)(v21 + 56));
          }
        }
      }
    }
  }
  ExFreePool((PVOID)Pool2);
  if ( v6 < 0 )
    goto LABEL_40;
LABEL_48:
  if ( v3 && *(_BYTE *)(v26 + 47) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v24 = &WPP_490aebbb81ea3ea14d3300aab47ed862_Traceguids;
      LOBYTE(v24) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v24,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  return (unsigned int)v6;
}
