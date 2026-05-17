/*
 * XREFs of EtwpNotificationThread @ 0x18001DFF0
 * Callers:
 *     TppExecuteWaitCallback @ 0x18001F480 (TppExecuteWaitCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     EtwDeliverDataBlock @ 0x18001E150 (EtwDeliverDataBlock.c)
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     NtTraceControl @ 0x180165740 (NtTraceControl.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

_BYTE *__fastcall EtwpNotificationThread(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *Heap; // rdi
  char v4; // bp
  int v7; // esi
  int v8; // ebx
  __int64 *v9; // r8
  _BYTE *result; // rax
  unsigned int v11; // [rsp+30h] [rbp-148h] BYREF
  __int64 v12; // [rsp+38h] [rbp-140h] BYREF
  _BYTE v13[256]; // [rsp+40h] [rbp-138h] BYREF

  v12 = -600000000LL;
  v11 = 0;
  Heap = v13;
  v4 = 0;
  v7 = 256;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = NtTraceControl(16LL, 0LL, 0LL, Heap, v7, &v11);
      if ( v8 < 0 )
        break;
      EtwDeliverDataBlock(Heap);
      if ( v8 != 261 )
        goto LABEL_4;
    }
    if ( v8 != -1073741789 )
      break;
    if ( Heap != v13 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
    v7 = v11;
    Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v11);
    if ( !Heap )
    {
      v4 = 1;
      break;
    }
  }
LABEL_4:
  v9 = &v12;
  if ( !v4 )
    v9 = 0LL;
  TpSetWaitEx(a3, a2, v9, 0LL);
  result = v13;
  if ( Heap != v13 )
  {
    if ( Heap )
      return (_BYTE *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  }
  return result;
}
