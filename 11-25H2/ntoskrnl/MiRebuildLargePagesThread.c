/*
 * XREFs of MiRebuildLargePagesThread @ 0x140475C40
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     MiProcessLargeCoalesceCandidates @ 0x14034F1EC (MiProcessLargeCoalesceCandidates.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall MiRebuildLargePagesThread(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  LIST_ENTRY *p_WaitListHead; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  PVOID *v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // r13
  __int64 v10; // r14
  struct _KTIMER *v11; // r12
  struct _KEVENT *v12; // rcx
  _QWORD *v13; // rbx
  struct _KTIMER *v14; // rbx
  BOOLEAN result; // al
  signed __int32 v16[8]; // [rsp+8h] [rbp-100h] BYREF
  PVOID Object[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v18; // [rsp+68h] [rbp-A0h]
  __int64 v19; // [rsp+78h] [rbp-90h]
  struct _KTIMER v20[3]; // [rsp+88h] [rbp-80h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+148h] [rbp+40h] BYREF

  memset(&Object[1], 0, 24);
  v19 = 0LL;
  v18 = 0LL;
  KeSetPriorityThread(KeGetCurrentThread(), 12);
  v2 = 3LL;
  v3 = 3LL;
  p_WaitListHead = &v20[0].Header.WaitListHead;
  do
  {
    p_WaitListHead[-1].Blink = 0LL;
    LOBYTE(p_WaitListHead[-1].Blink) = 8;
    p_WaitListHead->Blink = p_WaitListHead;
    p_WaitListHead->Flink = p_WaitListHead;
    p_WaitListHead[1].Flink = 0LL;
    HIDWORD(p_WaitListHead[3].Flink) = 0;
    LOWORD(p_WaitListHead[3].Flink) = 0;
    p_WaitListHead += 4;
    --v3;
  }
  while ( v3 );
  v5 = 3LL;
  Object[0] = a1 + 11;
  v6 = a1 + 2060;
  v7 = &Object[1];
  do
  {
    *v7 = v6;
    v6 += 6;
    ++v7;
    --v5;
  }
  while ( v5 );
  v8 = KeWaitForMultipleObjects(4u, Object, WaitAny, Executive, 0, 0, 0LL, &WaitBlockArray);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = (unsigned int)(v8 - 1);
      v10 = v8;
      v11 = &v20[v9];
      v12 = (struct _KEVENT *)Object[v8];
      v13 = &a1[6 * v9 + 2060];
      if ( v12 == (struct _KEVENT *)v11 )
        break;
      if ( MEMORY[0xFFFFF78000000008] - *((_QWORD *)&v18 + v9) - MEMORY[0xFFFFF780000003B0] >= 0xF4240uLL )
        goto LABEL_14;
      KiSetTimerEx(
        (__int64)v11,
        MEMORY[0xFFFFF780000003B0] - (MEMORY[0xFFFFF78000000008] - *((_QWORD *)&v18 + v9)),
        0,
        0,
        0LL);
      Object[v10] = v11;
LABEL_9:
      v8 = KeWaitForMultipleObjects(4u, Object, WaitAny, Executive, 0, 0, 0LL, &WaitBlockArray);
      if ( !v8 )
        goto LABEL_10;
    }
    v12 = (struct _KEVENT *)&a1[6 * v9 + 2060];
    Object[v8] = v13;
LABEL_14:
    v13[3] = -2LL;
    _InterlockedOr(v16, 0);
    KeResetEvent(v12);
    MiProcessLargeCoalesceCandidates(a1, v9, 0LL);
    v13[3] = -1LL;
    *((_QWORD *)&v18 + v9) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    goto LABEL_9;
  }
LABEL_10:
  v14 = v20;
  do
  {
    result = KeCancelTimer(v14++);
    --v2;
  }
  while ( v2 );
  return result;
}
