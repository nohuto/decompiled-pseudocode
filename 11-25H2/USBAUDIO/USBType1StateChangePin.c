/*
 * XREFs of USBType1StateChangePin @ 0x140004CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140005198 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     PinWaitForStarvationTimeout @ 0x1400052B0 (PinWaitForStarvationTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005368 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBType1ClearLeftovers @ 0x140008188 (USBType1ClearLeftovers.c)
 *     USBType1AsyncEndpointAbortFeedback @ 0x14000B768 (USBType1AsyncEndpointAbortFeedback.c)
 *     USBHwDataPipeReset @ 0x14002D70C (USBHwDataPipeReset.c)
 *     USBType1SetSampleRate @ 0x14003BCC0 (USBType1SetSampleRate.c)
 *     USBHwSelectStreamingAudioInterface @ 0x14003C34C (USBHwSelectStreamingAudioInterface.c)
 *     USBType1NeedLockDelay @ 0x14003DCB8 (USBType1NeedLockDelay.c)
 */

__int64 __fastcall USBType1StateChangePin(PKSPIN Pin, int a2, __int64 a3)
{
  _QWORD *Context; // rbp
  int v4; // ebx
  int v5; // r12d
  unsigned int v7; // r14d
  _QWORD *v8; // r13
  __int64 v9; // rsi
  char v10; // r15
  void *v11; // r9
  int v12; // ebx
  int v13; // ebx
  KIRQL v14; // al
  __int64 v15; // r9
  __int64 i; // rdx
  PDEVICE_OBJECT v17; // rcx
  KIRQL v18; // bl
  __int64 v20; // [rsp+90h] [rbp+8h] BYREF

  Context = Pin->Context;
  v4 = a3;
  v5 = a2;
  v7 = 0;
  v8 = (_QWORD *)Context[18];
  v9 = Context[19];
  v10 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v11 = &WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qdd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  if ( !v4 )
  {
    v18 = KeAcquireSpinLockRaiseToDpc(Context + 14);
    *((_BYTE *)Context + 45) = 0;
    USBType1ClearLeftovers(Context);
    Context[10] = 0LL;
    Context[11] = 0LL;
    Context[12] = 0LL;
    *(_BYTE *)(v9 + 113) = 0;
    KeReleaseSpinLock(Context + 14, v18);
    return v7;
  }
  v12 = v4 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *(_BYTE *)(v9 + 116) = 1;
        *(_BYTE *)(v9 + 114) = 1;
      }
      return v7;
    }
    if ( v5 != 3 )
      return v7;
    KsPinAcquireProcessingMutex(Pin);
    v14 = KeAcquireSpinLockRaiseToDpc(Context + 14);
    *(_BYTE *)(v9 + 116) = 0;
    KeReleaseSpinLock(Context + 14, v14);
    v20 = -50000000LL;
    v7 = PinWaitForStarvationTimeout(Pin, &v20);
    if ( v7 == 258 )
    {
      USBHwDataPipeReset(Pin);
      PinWaitForStarvationTimeout(Pin, 0LL);
    }
    if ( *(_BYTE *)(v9 + 112) )
      USBType1AsyncEndpointAbortFeedback(Pin);
    KsPinReleaseProcessingMutex(Pin);
    *(_BYTE *)(v9 + 115) = USBType1NeedLockDelay(Context);
    goto LABEL_58;
  }
  if ( v5 )
  {
    if ( v5 != 2 )
      return v7;
    if ( !*((_BYTE *)Context + 46) )
      v7 = USBHwSelectStreamingAudioInterface(Pin, v8[18], a3, v11);
    goto LABEL_58;
  }
  v7 = USBHwSelectStreamingAudioInterface(Pin, v8[17], a3, v11);
  if ( (v7 & 0x80000000) == 0 )
  {
    if ( *(_BYTE *)(v9 + 112) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v9 + 56); i = (unsigned int)(i + 1) )
      {
        a3 = 3 * i;
        v15 = *(_QWORD *)(v9 + 72);
        if ( *(_BYTE *)(v15 + 24 * i + 2) == *(_BYTE *)(v8[22] + 2LL) )
        {
          *(_QWORD *)(v9 + 904) = *(_QWORD *)(v15 + 24 * i + 8);
          break;
        }
      }
      if ( !*(_QWORD *)(v9 + 904) )
      {
        v7 = -1073741668;
        v17 = WPP_GLOBAL_Control;
        LOBYTE(i) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)i && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_54;
        goto LABEL_44;
      }
      *((_DWORD *)Context + 26) = *(_DWORD *)(v9 + 872);
    }
    v7 = USBType1SetSampleRate(Pin, *((unsigned int *)Context + 26));
    if ( (v7 & 0x80000000) == 0 )
      return v7;
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || (LOBYTE(i) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(i) = 0;
    }
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)i && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_54;
LABEL_44:
    WPP_RECORDER_AND_TRACE_SF_qd(v17->AttachedDevice, i, a3, v17->DeviceExtension);
LABEL_54:
    USBHwSelectStreamingAudioInterface(Pin, v8[18], a3, v15);
LABEL_58:
    if ( (v7 & 0x80000000) == 0 )
      return v7;
    goto LABEL_59;
  }
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  }
LABEL_59:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0;
  }
  if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = v10;
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  }
  return v7;
}
