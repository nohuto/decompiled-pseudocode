/*
 * XREFs of PsUpdateSvmProcessPasidAllThreads @ 0x1407647D4
 * Callers:
 *     ExpAssignPasid @ 0x1407B1338 (ExpAssignPasid.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x14027118C (KeFlushProcessWriteBuffers.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     PspLockProcessThreadListShared @ 0x1403E6BB0 (PspLockProcessThreadListShared.c)
 *     PspUnlockProcessThreadListShared @ 0x1403E6C20 (PspUnlockProcessThreadListShared.c)
 *     KeInitializeApc @ 0x140429EA0 (KeInitializeApc.c)
 *     ExSvmUpdateThreadPasidMsrApc @ 0x1407B12F0 (ExSvmUpdateThreadPasidMsrApc.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsUpdateSvmProcessPasidAllThreads(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v2; // r13
  unsigned int v3; // esi
  unsigned int *v4; // rbx
  unsigned int v5; // ebp
  char *v6; // r14
  unsigned int v7; // edi
  char *v8; // rdx
  unsigned int v9; // r12d
  unsigned __int64 v10; // rcx
  unsigned int *Pool2; // rax
  _DWORD *v12; // r8
  char *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v17; // [rsp+40h] [rbp-58h]
  _DWORD *v19; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  v17 = (__int64)CurrentThread;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  PspLockProcessThreadListShared(a1, (__int64)CurrentThread);
  v6 = (char *)(v2 + 880);
  v7 = 0;
  v8 = *(char **)(v2 + 880);
  if ( v8 == (char *)(v2 + 880) )
    goto LABEL_30;
  do
  {
    if ( (*((_DWORD *)v8 + 10) & 1) == 0 && v8[49] >= 0 )
      ++v7;
    v8 = *(char **)v8;
  }
  while ( v8 != v6 );
  if ( !v7 )
    goto LABEL_30;
  v9 = -1;
  v10 = 104LL * v7;
  if ( v10 > 0xFFFFFFFF )
  {
    v5 = -1073741675;
    goto LABEL_30;
  }
  v5 = (int)v10 + 8 < (unsigned int)v10 ? 0xC0000095 : 0;
  if ( (int)v10 + 8 < (unsigned int)v10 )
  {
LABEL_30:
    PspUnlockProcessThreadListShared(v2, (__int64)CurrentThread);
    goto LABEL_31;
  }
  Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
  v4 = Pool2;
  if ( !Pool2 )
  {
    v5 = -1073741801;
    goto LABEL_30;
  }
  *Pool2 = v7;
  v12 = Pool2 + 2;
  v13 = *(char **)v6;
  v19 = Pool2 + 2;
  if ( *(char **)v6 != v6 )
  {
    do
    {
      v14 = (__int64)(v13 - 1400);
      if ( (*((_DWORD *)v13 + 10) & 1) == 0 && *(char *)(v14 + 1449) >= 0 )
      {
        v15 = (__int64)&v12[26 * v3];
        *(_QWORD *)(v15 + 88) = v14;
        *(_QWORD *)(v15 + 96) = v4;
        if ( v14 == v17 )
        {
          v9 = v3;
        }
        else
        {
          KeInitializeApc(v15, v14, 0, (__int64)ExSvmUpdateThreadPasidMsrApc, 0LL, 0LL, 0, 0LL);
          if ( !(unsigned __int8)KeInsertQueueApc(v15, 0LL, 0LL, 0)
            && _InterlockedExchangeAdd(*(volatile signed __int32 **)(v15 + 96), 0xFFFFFFFF) == 1 )
          {
            ExFreePoolWithTag(v4, 0);
            v4 = 0LL;
          }
          v12 = v19;
        }
        ++v3;
      }
      v13 = *(char **)v13;
    }
    while ( v13 != v6 );
    v2 = a1;
  }
  if ( v3 < v7 && !(v3 - v7 + _InterlockedExchangeAdd((volatile signed __int32 *)v4, v3 - v7)) )
  {
    ExFreePoolWithTag(v4, 0);
    v4 = 0LL;
  }
  PspUnlockProcessThreadListShared(v2, v17);
  if ( v9 != -1 )
    ExSvmUpdateThreadPasidMsrApc(&v19[26 * v9], 0LL, 0LL, 0LL, 0LL);
  KeFlushProcessWriteBuffers(0LL);
LABEL_31:
  if ( v4 && !v3 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
