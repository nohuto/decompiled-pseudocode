/*
 * XREFs of USBCaptureProcessPin @ 0x140003280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008C50 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     USBCaptureCopyRequestToBuffer @ 0x14003A570 (USBCaptureCopyRequestToBuffer.c)
 */

__int64 __fastcall USBCaptureProcessPin(PKSPIN Pin)
{
  _QWORD *Context; // rax
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // r15
  KIRQL v5; // al
  KIRQL v6; // r12
  struct _KSSTREAM_POINTER *LeadingEdgeStreamPointer; // rbp
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  struct _IO_WORKITEM *v13; // rcx
  PKSGATE i; // rax
  int v15; // edx
  int v16; // r8d
  char v18; // [rsp+80h] [rbp+8h] BYREF

  Context = Pin->Context;
  v3 = Context[19];
  v4 = Context + 14;
  v5 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  *(_BYTE *)(v3 + 114) = 1;
  v6 = v5;
  LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
  if ( LeadingEdgeStreamPointer )
  {
    v8 = v3 + 152;
    do
    {
      v9 = *(_QWORD **)v8;
      if ( *(_QWORD *)v8 == v8 )
        break;
      if ( !*(_BYTE *)(v3 + 112) )
        goto LABEL_29;
      v18 = 0;
      KeReleaseSpinLock(v4, v6);
      USBCaptureCopyRequestToBuffer(v9, LeadingEdgeStreamPointer, &v18);
      if ( v18 )
        LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
      v6 = KeAcquireSpinLockRaiseToDpc(v4);
      if ( *((_DWORD *)v9 + 8) == *(_DWORD *)(v3 + 124) && *(_BYTE *)(v3 + 112) )
      {
        *((_DWORD *)v9 + 8) = 0;
        v10 = *(_QWORD **)v8;
        if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8
          || (v11 = *v10, *(_QWORD **)(*v10 + 8LL) != v10)
          || (*(_QWORD *)v8 = v11, *(_QWORD *)(v11 + 8) = v8, v12 = *(_QWORD **)(v3 + 144), *v12 != v3 + 136) )
        {
          __fastfail(3u);
        }
        *v10 = v3 + 136;
        v10[1] = v12;
        *v12 = v10;
        *(_QWORD *)(v3 + 144) = v10;
        if ( !*(_BYTE *)(v3 + 264) )
        {
          v13 = *(struct _IO_WORKITEM **)(v3 + 296);
          *(_BYTE *)(v3 + 264) = 1;
          IoQueueWorkItem(v13, USBCaptureRequeueWorker, CriticalWorkQueue, Pin);
        }
      }
    }
    while ( LeadingEdgeStreamPointer );
  }
  if ( *(_BYTE *)(v3 + 112) && *(_QWORD *)(v3 + 152) == v3 + 152 )
  {
    for ( i = KsPinGetAndGate(Pin); i; i = i->NextGate )
    {
      if ( _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) != 1 )
        break;
    }
    LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v16) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v15 || (_BYTE)v16 )
      WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, v15, v16, WPP_GLOBAL_Control->DeviceExtension);
    *(_BYTE *)(v3 + 113) = 0;
  }
LABEL_29:
  if ( LeadingEdgeStreamPointer )
    KsStreamPointerUnlock(LeadingEdgeStreamPointer, 0);
  *(_BYTE *)(v3 + 114) = 0;
  KeReleaseSpinLock(v4, v6);
  return 0LL;
}
