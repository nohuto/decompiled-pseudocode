/*
 * XREFs of NtNotifyChangeSession @ 0x140A5FDF0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExNotifyCallback @ 0x14027DB30 (ExNotifyCallback.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtNotifyChangeSession(
        HANDLE SessionHandle,
        ULONG ChangeSequenceNumber,
        PLARGE_INTEGER ChangeTimeStamp,
        IO_SESSION_EVENT Event,
        IO_SESSION_STATE NewState,
        IO_SESSION_STATE PreviousState,
        PVOID Payload,
        ULONG PayloadSize)
{
  ULONG v11; // r12d
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS result; // eax
  _QWORD *v14; // r14
  __int64 v15; // rdx
  ULONG v16; // ecx
  __int64 v17; // rax
  _BYTE *v18; // rbx
  _BYTE *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  _BYTE *Pool2; // rax
  char v23; // [rsp+30h] [rbp-1B8h]
  char v24; // [rsp+31h] [rbp-1B7h]
  KPROCESSOR_MODE v25; // [rsp+32h] [rbp-1B6h]
  unsigned __int16 v26; // [rsp+34h] [rbp-1B4h]
  NTSTATUS v27; // [rsp+38h] [rbp-1B0h]
  PVOID Object; // [rsp+48h] [rbp-1A0h] BYREF
  ULONG v29; // [rsp+50h] [rbp-198h]
  IO_SESSION_EVENT v30; // [rsp+58h] [rbp-190h]
  LARGE_INTEGER Interval; // [rsp+60h] [rbp-188h] BYREF
  _OWORD Argument1[2]; // [rsp+70h] [rbp-178h] BYREF
  __int128 v33; // [rsp+90h] [rbp-158h]
  __int128 v34; // [rsp+A0h] [rbp-148h]
  _BYTE v35[256]; // [rsp+B0h] [rbp-138h] BYREF

  v30 = Event;
  v11 = PayloadSize;
  v29 = PayloadSize;
  v23 = 0;
  memset_0(Argument1, 0, 0x40uLL);
  v26 = 0;
  v24 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v25 = PreviousMode;
  if ( PayloadSize > 0x100 )
    return -1073741580;
  Object = 0LL;
  result = ObReferenceObjectByHandle(SessionHandle, 2u, MmSessionObjectType, PreviousMode, &Object, 0LL);
  v27 = result;
  if ( result < 0 )
    return result;
  v14 = Object;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)Object + 3) + 136LL), Executive, 0, 0, 0LL);
  v15 = v14[3];
  v16 = *(_DWORD *)(v15 + 132);
  if ( v16 == ChangeSequenceNumber )
  {
    *(_DWORD *)(v15 + 132) = v16 + 1;
  }
  else if ( v16 <= ChangeSequenceNumber || v16 - ChangeSequenceNumber >= 0xFFFFFFFD )
  {
    do
    {
      v20 = v15;
      if ( v16 == ChangeSequenceNumber )
        break;
      Interval.QuadPart = -1000000LL;
      KeSetEvent((PRKEVENT)(v15 + 136), 0, 0);
      KeDelayExecutionThread(0, 0, &Interval);
      KeWaitForSingleObject((PVOID)(v14[3] + 136LL), Executive, 0, 0, 0LL);
      ++v26;
      v15 = v14[3];
      v16 = *(_DWORD *)(v15 + 132);
      v20 = v15;
    }
    while ( v26 <= 0xAu );
    *(_DWORD *)(v20 + 132) = ChangeSequenceNumber + 1;
  }
  v17 = v14[3];
  if ( Event == IoSessionEventIgnore )
  {
    KeSetEvent((PRKEVENT)(v17 + 136), 0, 0);
    ObfDereferenceObject(v14);
    return 0;
  }
  *(_DWORD *)(v17 + 128) = NewState;
  v18 = 0LL;
  if ( PayloadSize )
  {
    if ( v25 == 1 )
    {
      if ( (unsigned __int64)Payload + PayloadSize > 0x7FFFFFFF0000LL || (char *)Payload + PayloadSize < Payload )
        v14 = Object;
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL, PayloadSize, 0x6E536F49u);
      v18 = Pool2;
      if ( Pool2 )
      {
        v23 = 1;
        memmove(Pool2, Payload, PayloadSize);
      }
      else
      {
        v18 = v35;
        memmove(v35, Payload, PayloadSize);
        v24 = 1;
      }
      v11 = v29;
      goto LABEL_11;
    }
    if ( (unsigned int)(Event - 1) > 1 )
    {
      v19 = (_BYTE *)ExAllocatePool2(0x100uLL, PayloadSize, 0x6E536F49u);
      v18 = v19;
      if ( v19 )
      {
        v23 = 1;
        memmove(v19, Payload, PayloadSize);
        goto LABEL_11;
      }
      v24 = 1;
    }
    v18 = Payload;
  }
LABEL_11:
  LODWORD(v33) = Event;
  *(_QWORD *)((char *)&v33 + 4) = __PAIR64__(v11, NewState);
  *(_QWORD *)&v34 = v18;
  *((_QWORD *)&v34 + 1) = v14;
  if ( !v24 && (unsigned int)(Event - 1) > 1 )
  {
    v21 = ExAllocatePool2(0x40uLL, 0x40uLL, 0x6E536F49u);
    if ( v21 )
    {
      *(_OWORD *)v21 = Argument1[0];
      *(_OWORD *)(v21 + 16) = Argument1[1];
      *(_OWORD *)(v21 + 32) = v33;
      *(_OWORD *)(v21 + 48) = v34;
      *(_QWORD *)(v21 + 16) = IopSessionChangeWorker;
      *(_QWORD *)(v21 + 24) = v21;
      *(_QWORD *)v21 = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v21, DelayedWorkQueue);
      return 0;
    }
  }
  ExNotifyCallback(IopSessionCallbackObject, Argument1, 0LL);
  KeSetEvent((PRKEVENT)(v14[3] + 136LL), 0, 0);
  ObfDereferenceObject(v14);
  if ( v18 )
  {
    if ( v23 == 1 )
      ExFreePoolWithTag(v18, 0);
  }
  return v27;
}
