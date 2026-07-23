/*
 * XREFs of PsUpdateSvmProcessPasidAllThreads @ 0x1407743C4
 * Callers:
 *     ExpAssignPasid @ 0x1407C0F58 (ExpAssignPasid.c)
 * Callees:
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KeFlushProcessWriteBuffers @ 0x14039E2AC (KeFlushProcessWriteBuffers.c)
 *     PspLockProcessThreadListShared @ 0x1403E2A50 (PspLockProcessThreadListShared.c)
 *     PspUnlockProcessThreadListShared @ 0x1403E2AC0 (PspUnlockProcessThreadListShared.c)
 *     KeInitializeApc @ 0x1404163D0 (KeInitializeApc.c)
 *     ExSvmUpdateThreadPasidMsrApc @ 0x1407C0F10 (ExSvmUpdateThreadPasidMsrApc.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsUpdateSvmProcessPasidAllThreads(__int64 a1)
{
  __int64 v1; // r13
  unsigned int v2; // esi
  unsigned int *v3; // rbx
  unsigned int v4; // ebp
  char *v5; // r14
  unsigned int v6; // edi
  char *v7; // rdx
  unsigned int v8; // r12d
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  ULONG_PTR v11; // rdx
  unsigned int *Pool2; // rax
  _DWORD *v13; // r8
  char *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r13
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-58h]
  _DWORD *v20; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  PspLockProcessThreadListShared(a1, (__int64)CurrentThread);
  v5 = (char *)(v1 + 880);
  v6 = 0;
  v7 = *(char **)(v1 + 880);
  if ( v7 == (char *)(v1 + 880) )
    goto LABEL_32;
  do
  {
    if ( (*((_DWORD *)v7 + 10) & 1) == 0 && v7[49] >= 0 )
      ++v6;
    v7 = *(char **)v7;
  }
  while ( v7 != v5 );
  if ( !v6 )
    goto LABEL_32;
  v8 = -1;
  v9 = 104LL * v6;
  if ( v9 > 0xFFFFFFFF )
  {
    v4 = -1073741675;
    goto LABEL_32;
  }
  v10 = v9 + 8;
  v11 = 0xFFFFFFFFLL;
  if ( (int)v9 + 8 >= (unsigned int)v9 )
    v11 = v10;
  v4 = v10 < (unsigned int)v9 ? 0xC0000095 : 0;
  if ( v10 < (unsigned int)v9 )
    goto LABEL_32;
  Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL, v11, 0x76537350u);
  v3 = Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741801;
LABEL_32:
    PspUnlockProcessThreadListShared(v1);
    goto LABEL_33;
  }
  *Pool2 = v6;
  v13 = Pool2 + 2;
  v14 = *(char **)v5;
  v20 = Pool2 + 2;
  if ( *(char **)v5 != v5 )
  {
    do
    {
      v15 = (__int64)(v14 - 1400);
      if ( (*((_DWORD *)v14 + 10) & 1) == 0 && *(char *)(v15 + 1449) >= 0 )
      {
        v16 = (__int64)&v13[26 * v2];
        *(_QWORD *)(v16 + 88) = v15;
        *(_QWORD *)(v16 + 96) = v3;
        if ( (struct _KTHREAD *)v15 == CurrentThread )
        {
          v8 = v2;
        }
        else
        {
          KeInitializeApc(v16, v15, 0, (__int64)ExSvmUpdateThreadPasidMsrApc, 0LL, 0LL, 0, 0LL);
          if ( !(unsigned __int8)KeInsertQueueApc(v16, 0LL, 0LL, 0)
            && _InterlockedExchangeAdd(*(volatile signed __int32 **)(v16 + 96), 0xFFFFFFFF) == 1 )
          {
            ExFreePoolWithTag(v3, 0);
            v3 = 0LL;
          }
          v13 = v20;
        }
        ++v2;
      }
      v14 = *(char **)v14;
    }
    while ( v14 != v5 );
    v1 = a1;
  }
  if ( v2 < v6 && !(v2 - v6 + _InterlockedExchangeAdd((volatile signed __int32 *)v3, v2 - v6)) )
  {
    ExFreePoolWithTag(v3, 0);
    v3 = 0LL;
  }
  PspUnlockProcessThreadListShared(v1);
  if ( v8 != -1 )
    ExSvmUpdateThreadPasidMsrApc(&v20[26 * v8], 0LL, 0LL, 0LL, 0LL);
  KeFlushProcessWriteBuffers(0LL);
LABEL_33:
  if ( v3 && !v2 )
    ExFreePoolWithTag(v3, 0);
  return v4;
}
