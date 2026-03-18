/*
 * XREFs of PsUpdateSvmProcessPasidAllThreads @ 0x1407741A4
 * Callers:
 *     ExpAssignPasid @ 0x1407C0B08 (ExpAssignPasid.c)
 * Callees:
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     KeFlushProcessWriteBuffers @ 0x1403AFA9C (KeFlushProcessWriteBuffers.c)
 *     PspLockProcessThreadListShared @ 0x1403EFAD0 (PspLockProcessThreadListShared.c)
 *     PspUnlockProcessThreadListShared @ 0x1403EFB40 (PspUnlockProcessThreadListShared.c)
 *     KeInitializeApc @ 0x140422520 (KeInitializeApc.c)
 *     ExSvmUpdateThreadPasidMsrApc @ 0x1407C0AC0 (ExSvmUpdateThreadPasidMsrApc.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  unsigned int *Pool2; // rax
  _DWORD *v11; // r8
  char *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r13
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-58h]
  _DWORD *v18; // [rsp+B8h] [rbp+20h]

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
    goto LABEL_30;
  do
  {
    if ( (*((_DWORD *)v7 + 10) & 1) == 0 && v7[49] >= 0 )
      ++v6;
    v7 = *(char **)v7;
  }
  while ( v7 != v5 );
  if ( !v6 )
    goto LABEL_30;
  v8 = -1;
  v9 = 104LL * v6;
  if ( v9 > 0xFFFFFFFF )
  {
    v4 = -1073741675;
    goto LABEL_30;
  }
  v4 = (int)v9 + 8 < (unsigned int)v9 ? 0xC0000095 : 0;
  if ( (int)v9 + 8 < (unsigned int)v9 )
  {
LABEL_30:
    PspUnlockProcessThreadListShared(v1);
    goto LABEL_31;
  }
  Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741801;
    goto LABEL_30;
  }
  *Pool2 = v6;
  v11 = Pool2 + 2;
  v12 = *(char **)v5;
  v18 = Pool2 + 2;
  if ( *(char **)v5 != v5 )
  {
    do
    {
      v13 = (__int64)(v12 - 1400);
      if ( (*((_DWORD *)v12 + 10) & 1) == 0 && *(char *)(v13 + 1449) >= 0 )
      {
        v14 = (__int64)&v11[26 * v2];
        *(_QWORD *)(v14 + 88) = v13;
        *(_QWORD *)(v14 + 96) = v3;
        if ( (struct _KTHREAD *)v13 == CurrentThread )
        {
          v8 = v2;
        }
        else
        {
          KeInitializeApc(v14, v13, 0, (__int64)ExSvmUpdateThreadPasidMsrApc, 0LL, 0LL, 0, 0LL);
          if ( !(unsigned __int8)KeInsertQueueApc(v14, 0LL, 0LL, 0)
            && _InterlockedExchangeAdd(*(volatile signed __int32 **)(v14 + 96), 0xFFFFFFFF) == 1 )
          {
            ExFreePoolWithTag(v3, 0);
            v3 = 0LL;
          }
          v11 = v18;
        }
        ++v2;
      }
      v12 = *(char **)v12;
    }
    while ( v12 != v5 );
    v1 = a1;
  }
  if ( v2 < v6 && !(v2 - v6 + _InterlockedExchangeAdd((volatile signed __int32 *)v3, v2 - v6)) )
  {
    ExFreePoolWithTag(v3, 0);
    v3 = 0LL;
  }
  PspUnlockProcessThreadListShared(v1);
  if ( v8 != -1 )
    ExSvmUpdateThreadPasidMsrApc(&v18[26 * v8], 0LL, 0LL, 0LL, 0LL);
  KeFlushProcessWriteBuffers(0LL);
LABEL_31:
  if ( v3 && !v2 )
    ExFreePoolWithTag(v3, 0);
  return v4;
}
