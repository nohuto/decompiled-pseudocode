/*
 * XREFs of EtwpNotificationThread @ 0x1800451D0
 * Callers:
 *     TppExecuteWaitCallback @ 0x180040740 (TppExecuteWaitCallback.c)
 * Callees:
 *     TpSetWaitEx @ 0x180041AF0 (TpSetWaitEx.c)
 *     EtwDeliverDataBlock @ 0x1800443B0 (EtwDeliverDataBlock.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

void __fastcall EtwpNotificationThread(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WAIT a3)
{
  _BYTE *Heap; // rdi
  char v4; // bp
  ULONG OutputBufferLength; // esi
  NTSTATUS v8; // ebx
  LARGE_INTEGER *v9; // r8
  ULONG ReturnLength; // [rsp+30h] [rbp-148h] BYREF
  __int64 v11; // [rsp+38h] [rbp-140h] BYREF
  _BYTE OutputBuffer[256]; // [rsp+40h] [rbp-138h] BYREF

  v11 = -600000000LL;
  ReturnLength = 0;
  Heap = OutputBuffer;
  v4 = 0;
  OutputBufferLength = 256;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = NtTraceControl(EtwReceiveNotification, 0LL, 0, Heap, OutputBufferLength, &ReturnLength);
      if ( v8 < 0 )
        break;
      EtwDeliverDataBlock((__int16 *)Heap);
      if ( v8 != 261 )
        goto LABEL_4;
    }
    if ( v8 != -1073741789 )
      break;
    if ( Heap != OutputBuffer )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    OutputBufferLength = ReturnLength;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
    if ( !Heap )
    {
      v4 = 1;
      break;
    }
  }
LABEL_4:
  v9 = (LARGE_INTEGER *)&v11;
  if ( !v4 )
    v9 = 0LL;
  TpSetWaitEx(a3, a2, v9, 0LL);
  if ( Heap != OutputBuffer )
  {
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
}
