/*
 * XREFs of USBCaptureChangePowerState @ 0x14000E3C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005368 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBHwDataPipeReset @ 0x14002D70C (USBHwDataPipeReset.c)
 *     USBCaptureStartTransfers @ 0x14003A9E0 (USBCaptureStartTransfers.c)
 *     USBType1SetSampleRate @ 0x14003BCC0 (USBType1SetSampleRate.c)
 *     USBHwSelectStreamingAudioInterface @ 0x14003C34C (USBHwSelectStreamingAudioInterface.c)
 */

__int64 __fastcall USBCaptureChangePowerState(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  int v5; // edi
  int started; // ebx
  __int64 v8; // r15
  char v9; // si
  int v10; // edi
  int v11; // edi
  KIRQL v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r8d
  PDEVICE_OBJECT v16; // rcx
  void *v17; // rdx
  _QWORD *v18; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  v5 = a2;
  started = -1073741584;
  v8 = *(_QWORD *)(v4 + 144);
  v9 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  v10 = v5 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 || (unsigned int)(v11 - 1) <= 1 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 112));
      *(_BYTE *)(v4 + 45) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 112), v12);
      started = USBHwDataPipeReset(a1);
      if ( started >= 0 )
        return (unsigned int)USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v8 + 144), v13, v14);
    }
    return (unsigned int)started;
  }
  if ( *(_DWORD *)(a1 + 120) != 3 )
    return 0;
  started = USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v8 + 136), a3, a4);
  if ( started >= 0 )
  {
    started = USBType1SetSampleRate(a1, *(unsigned int *)(v4 + 104));
    if ( started >= 0 )
    {
      v18 = *(_QWORD **)(v4 + 152);
      v18[20] = v18 + 19;
      v18[19] = v18 + 19;
      v18[18] = v18 + 17;
      v18[17] = v18 + 17;
      *(_BYTE *)(v4 + 45) = 1;
      started = USBCaptureStartTransfers(a1, 0LL);
      if ( started < 0 )
      {
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v9 = 0;
        }
        LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v17 = &WPP_f8dfd6848d2138a27d5dceb541a753eb_Traceguids;
          goto LABEL_39;
        }
      }
    }
    else
    {
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v9 = 0;
      }
      LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v17 = &WPP_f8dfd6848d2138a27d5dceb541a753eb_Traceguids;
        goto LABEL_39;
      }
    }
  }
  else
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = &WPP_f8dfd6848d2138a27d5dceb541a753eb_Traceguids;
LABEL_39:
      LOBYTE(v17) = v9;
      WPP_RECORDER_AND_TRACE_SF_qd(v16->AttachedDevice, (_DWORD)v17, v15, v16->DeviceExtension);
    }
  }
  return (unsigned int)started;
}
