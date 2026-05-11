/*
 * XREFs of USBType1AsyncEndpointPoll @ 0x140004200
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14001CA40 (memset.c)
 *     USBHwAbortOrResetPipe @ 0x14003C780 (USBHwAbortOrResetPipe.c)
 */

void __fastcall USBType1AsyncEndpointPoll(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdi
  KSPIN_LOCK *v5; // rsi
  ULONG_PTR v6; // r15
  struct _DEVICE_OBJECT *v7; // r14
  IRP *v8; // r12
  KIRQL v9; // al
  KIRQL v10; // bp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v12; // rax
  KIRQL v13; // dl
  __int64 v14; // r10
  unsigned int v15; // edx
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rdx
  KIRQL v19; // al
  KIRQL v20; // bl

  v2 = (_QWORD *)Context[2];
  v4 = v2[19];
  v5 = v2 + 14;
  v6 = *(_QWORD *)(v4 + 880);
  v7 = *(struct _DEVICE_OBJECT **)(v2[2] + 40LL);
  v8 = *(IRP **)(v4 + 888);
  v9 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
  v10 = v9;
  if ( *(_BYTE *)(v4 + 116) )
  {
    *(_BYTE *)(v4 + 933) = 1;
    KeReleaseSpinLock(v2 + 14, v9);
    if ( (int)USBHwAbortOrResetPipe(v7) < 0 )
    {
      v14 = v2[19];
      v15 = 0;
      v16 = v2[18];
      while ( 1 )
      {
        if ( v15 >= *(_DWORD *)(v14 + 56) )
          goto LABEL_12;
        v17 = *(_QWORD *)(v14 + 72);
        if ( *(_BYTE *)(v17 + 24LL * v15 + 2) == *(_BYTE *)(*(_QWORD *)(v16 + 176) + 2LL) )
          break;
        ++v15;
      }
      v18 = *(_QWORD *)(v17 + 24LL * v15 + 8);
      if ( !v18 || (*(_QWORD *)(v4 + 904) = v18, (int)USBHwAbortOrResetPipe(v7) < 0) )
      {
LABEL_12:
        v19 = KeAcquireSpinLockRaiseToDpc(v5);
        *(_BYTE *)(v4 + 933) = 0;
        v20 = v19;
        KeSetEvent((PRKEVENT)(v4 + 936), 0, 0);
        *(_BYTE *)(v4 + 932) = 0;
        KeSetEvent((PRKEVENT)(v4 + 960), 0, 0);
        v13 = v20;
        goto LABEL_5;
      }
    }
    memset((void *)(v6 + 4), 0, 0xA0uLL);
    *(_DWORD *)v6 = 655524;
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(v4 + 904);
    *(_DWORD *)(v6 + 32) = 1;
    *(_DWORD *)(v6 + 128) = *(_DWORD *)(v4 + 912);
    *(_QWORD *)(v6 + 40) = v4 + 992;
    *(_DWORD *)(v6 + 132) = 1;
    *(_DWORD *)(v6 + 140) = 0;
    *(_DWORD *)(v6 + 36) = 3;
    IoInitializeIrp(v8, 72 * v7->StackSize + 208, v7->StackSize);
    CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = v6;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
    v12 = v8->Tail.Overlay.CurrentStackLocation;
    v12[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBType1AsyncEndpointPollCallback;
    v12[-1].Context = Context;
    v12[-1].Control = -32;
    IofCallDriver(v7, v8);
  }
  else
  {
    *(_BYTE *)(v4 + 932) = 0;
    KeSetEvent((PRKEVENT)(v4 + 960), 0, 0);
    v13 = v10;
LABEL_5:
    KeReleaseSpinLock(v5, v13);
  }
}
