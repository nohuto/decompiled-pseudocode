/*
 * XREFs of MiRebuildLargePagesThread @ 0x140314BA0
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     MiProcessLargeCoalesceCandidates @ 0x140314284 (MiProcessLargeCoalesceCandidates.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall MiRebuildLargePagesThread(_QWORD *a1)
{
  char *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  NTSTATUS v7; // eax
  __int64 v8; // r13
  __int64 v9; // r14
  struct _KEVENT *v10; // r12
  struct _KEVENT *v11; // rcx
  _QWORD *v12; // rbx
  BOOLEAN result; // al
  struct _KTIMER *v14; // rbx
  __int64 v15; // rdi
  signed __int32 v16[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h]
  PVOID Object[4]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+70h] [rbp-98h]
  __int64 v20; // [rsp+80h] [rbp-88h]
  _BYTE v21[8]; // [rsp+88h] [rbp-80h] BYREF
  char v22; // [rsp+90h] [rbp-78h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+148h] [rbp+40h] BYREF

  memset(&Object[1], 0, 24);
  v20 = 0LL;
  v19 = 0LL;
  KeSetPriorityThread(KeGetCurrentThread(), 12);
  v17 = 3LL;
  v2 = &v22;
  v3 = 3LL;
  do
  {
    *((_QWORD *)v2 - 1) = 0LL;
    *(v2 - 8) = 8;
    *((_QWORD *)v2 + 1) = v2;
    *(_QWORD *)v2 = v2;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_DWORD *)v2 + 13) = 0;
    *((_WORD *)v2 + 24) = 0;
    v2 += 64;
    --v3;
  }
  while ( v3 );
  v4 = 3LL;
  Object[0] = a1 + 11;
  v5 = a1 + 2060;
  v6 = &Object[1];
  do
  {
    *v6 = v5;
    v5 += 6;
    ++v6;
    --v4;
  }
  while ( v4 );
  while ( 1 )
  {
    v7 = KeWaitForMultipleObjects(4u, Object, WaitAny, Executive, 0, 0, 0LL, &WaitBlockArray);
    if ( !v7 )
      break;
    v8 = (unsigned int)(v7 - 1);
    v9 = v7;
    v10 = (struct _KEVENT *)&v21[64 * v8];
    v11 = (struct _KEVENT *)Object[v7];
    v12 = &a1[6 * v8 + 2060];
    if ( v11 == v10 )
    {
      v11 = (struct _KEVENT *)&a1[6 * v8 + 2060];
      Object[v7] = v12;
LABEL_10:
      v12[3] = -2LL;
      _InterlockedOr(v16, 0);
      KeResetEvent(v11);
      MiProcessLargeCoalesceCandidates(a1, v8, 0LL);
      v12[3] = -1LL;
      *((_QWORD *)&v19 + v8) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    }
    else
    {
      if ( MEMORY[0xFFFFF78000000008] - *((_QWORD *)&v19 + v8) - MEMORY[0xFFFFF780000003B0] >= 0xF4240uLL )
        goto LABEL_10;
      KiSetTimerEx(
        (_DWORD)v10,
        MEMORY[0xFFFFF780000003B0] - (MEMORY[0xFFFFF78000000008] - *((_DWORD *)&v19 + 2 * v8)),
        0,
        0,
        0LL);
      Object[v9] = v10;
    }
  }
  v15 = v17;
  v14 = (struct _KTIMER *)v21;
  do
  {
    result = KeCancelTimer(v14++);
    --v15;
  }
  while ( v15 );
  return result;
}
