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

_BYTE *__fastcall EtwpNotificationThread(__int64 a1, __int64 a2, __int64 a3)
{
  int *Heap; // rdi
  char v4; // bp
  int v7; // ebx
  __int64 *v8; // r8
  _BYTE *result; // rax
  __int64 v10; // [rsp+38h] [rbp-140h] BYREF
  _BYTE v11[256]; // [rsp+40h] [rbp-138h] BYREF

  v10 = -600000000LL;
  Heap = (int *)v11;
  v4 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = NtTraceControl(16LL, 0LL, 0LL);
      if ( v7 < 0 )
        break;
      EtwDeliverDataBlock(Heap);
      if ( v7 != 261 )
        goto LABEL_4;
    }
    if ( v7 != -1073741789 )
      break;
    if ( Heap != (int *)v11 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
    Heap = (int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
    if ( !Heap )
    {
      v4 = 1;
      break;
    }
  }
LABEL_4:
  v8 = &v10;
  if ( !v4 )
    v8 = 0LL;
  TpSetWaitEx(a3, a2, v8, 0LL);
  result = v11;
  if ( Heap != (int *)v11 )
  {
    if ( Heap )
      return (_BYTE *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  }
  return result;
}
