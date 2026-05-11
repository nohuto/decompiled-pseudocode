/*
 * XREFs of USBType1CompleteCallback @ 0x1400032F0
 * Callers:
 *     <none>
 * Callees:
 *     USBHwResetFrameTimestamps @ 0x1400036DC (USBHwResetFrameTimestamps.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqd @ 0x14000D998 (WPP_RECORDER_AND_TRACE_SF_qqqd.c)
 */

__int64 __fastcall USBType1CompleteCallback(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KSSTREAM_POINTER *v3; // r13
  _QWORD *v4; // rdi
  __int64 v5; // rbp
  NTSTATUS v6; // r14d
  int v7; // r12d
  char *Context; // rbx
  __int64 v9; // rsi
  KSPIN_LOCK *v10; // rcx
  int v11; // edx
  int v12; // r8d
  KIRQL v13; // r15
  _QWORD *v14; // rcx
  void **v15; // rax
  int v16; // edx
  int v17; // r8d
  PDEVICE_OBJECT v19; // rcx

  v3 = *(struct _KSSTREAM_POINTER **)(a3 + 40);
  v4 = (_QWORD *)a3;
  v5 = *(_QWORD *)(a3 + 24);
  v6 = *(_DWORD *)(a2 + 48);
  v7 = 0;
  Context = (char *)v3->Pin->Context;
  v9 = *((_QWORD *)Context + 19);
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  LOBYTE(a3) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_qqqd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  v10 = (KSPIN_LOCK *)(Context + 112);
  if ( *(int *)(v5 + 4) < 0 )
  {
    v6 = -1073741668;
    v13 = KeAcquireSpinLockRaiseToDpc(v10);
LABEL_9:
    *(_BYTE *)v9 = 1;
    Context[45] = 0;
    goto LABEL_11;
  }
  v13 = KeAcquireSpinLockRaiseToDpc(v10);
  if ( v6 < 0 )
    goto LABEL_9;
LABEL_11:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 14, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v12) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v11 || (_BYTE)v12 )
      WPP_RECORDER_AND_TRACE_SF_qqqd(WPP_GLOBAL_Control->AttachedDevice, v11, v12, WPP_GLOBAL_Control->DeviceExtension);
    v7 = 1;
    *(_BYTE *)v9 = 1;
    Context[45] = 0;
    USBHwResetFrameTimestamps(Context);
    KeSetEvent((PRKEVENT)Context + 5, 0, 0);
  }
  *((_QWORD *)Context + 11) += *((unsigned int *)v4 + 9);
  v14 = (_QWORD *)*v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v15 = (void **)v4[1], *v15 != v4) )
    __fastfail(3u);
  *v15 = v14;
  v14[1] = v15;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v13);
  ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v9 + 144), v4);
  if ( v7 )
  {
    if ( !*(_BYTE *)(v9 + 114) && !*(_BYTE *)(v9 + 113) )
    {
      *(_BYTE *)(v9 + 113) = 1;
      v19 = WPP_GLOBAL_Control;
      LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      LOBYTE(v17) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                 && LOWORD(WPP_GLOBAL_Control->DeviceType);
      if ( (_BYTE)v16 || (_BYTE)v17 )
        goto LABEL_40;
    }
  }
  else if ( *(_BYTE *)(v9 + 113) )
  {
    *(_BYTE *)(v9 + 113) = 0;
    v19 = WPP_GLOBAL_Control;
    LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v17) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v16 || (_BYTE)v17 )
LABEL_40:
      WPP_RECORDER_AND_TRACE_SF_(v19->AttachedDevice, v16, v17, v19->DeviceExtension);
  }
  *(_BYTE *)(v9 + 114) = 0;
  if ( v6 < 0 )
    KsStreamPointerSetStatusCode(v3, v6);
  KsStreamPointerDelete(v3);
  return 3221225494LL;
}
