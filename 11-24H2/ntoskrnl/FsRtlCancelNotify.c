/*
 * XREFs of FsRtlCancelNotify @ 0x1403CC4E0
 * Callers:
 *     FsRtlNotifySetCancelRoutine @ 0x1403CB688 (FsRtlNotifySetCancelRoutine.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C8EA0 (PsReturnProcessPagedPoolQuota.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     PsChargePoolQuota @ 0x1403E1A60 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x14044B3D0 (FsRtlIsNtstatusExpected.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlCancelNotify(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // r14
  struct _KTHREAD *v5; // rbx
  struct _KTHREAD **v6; // rsi
  _DWORD *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  const void **v11; // r13
  const void *v12; // rax
  __int64 v13; // rcx
  PVOID v14; // rdx
  void *Pool2; // rbx
  unsigned int v16; // r14d
  const void **v17; // rcx
  _DWORD *v18; // rdx
  unsigned int *v19; // r8
  PVOID v20; // rax
  __int64 v21; // rcx
  _BYTE *v22; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *SubjectContext; // [rsp+48h] [rbp-A0h]
  _QWORD *v25; // [rsp+50h] [rbp-98h]
  _DWORD *v26; // [rsp+58h] [rbp-90h]
  unsigned int *v27; // [rsp+78h] [rbp-70h]
  const void **v28; // [rsp+80h] [rbp-68h]
  char *v29; // [rsp+108h] [rbp+20h]

  SubjectContext = 0LL;
  v28 = *(const void ***)(a2 + 56);
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL);
  *(_QWORD *)(a2 + 56) = 0LL;
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (char *)*v28;
  v29 = (char *)*v28;
  v5 = KeGetCurrentThread();
  v6 = (struct _KTHREAD **)((char *)*v28 + 56);
  if ( v5 != *v6 )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)v4);
    *v6 = v5;
  }
  v7 = v4 + 64;
  ++*((_DWORD *)v4 + 16);
  v8 = a2 + 168;
  v9 = *(_QWORD *)(a2 + 168);
  if ( v9 )
  {
    v10 = *(_QWORD **)(a2 + 176);
    if ( *(_QWORD *)(v9 + 8) != v8 || *v10 != v8 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
  }
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v11 = v28 + 11;
  v12 = v28[11];
  if ( v12 )
  {
    v25 = v28 + 10;
    if ( !v28[10] )
    {
      if ( (v13 = *(_QWORD *)(a2 + 8)) != 0
        && ((*(_BYTE *)(v13 + 10) & 5) == 0
          ? (v14 = MmMapLockedPagesSpecifyCache((PMDL)v13, 0, MmCached, 0LL, 0, 0x40000010u))
          : (v14 = *(PVOID *)(v13 + 24)),
            v12 = *v11,
            v14 == *v11)
        || v12 == *(const void **)(a2 + 24) )
      {
        Pool2 = 0LL;
        v16 = 0;
        v17 = (const void **)v28[6];
        v18 = v28 + 13;
        v26 = v28 + 13;
        if ( v17 == v28 + 6 )
        {
          if ( *((_DWORD *)v28 + 24) >= *v18 )
            v16 = *((_DWORD *)v28 + 24);
          goto LABEL_35;
        }
        v19 = (unsigned int *)v17[2];
        v27 = v19;
        if ( v19[2] < *v18 )
        {
LABEL_35:
          if ( v16 )
          {
            if ( !Pool2 )
            {
              PsChargePoolQuota((PEPROCESS)v28[15], PagedPool, v16);
              Pool2 = (void *)ExAllocatePool2(0x122uLL, v16, 0x4E725346u);
              *v25 = Pool2;
            }
            memmove(Pool2, *v11, (unsigned int)*v26);
            *((_DWORD *)v28 + 25) = v16;
            *v11 = Pool2;
            v22 = v28 + 9;
          }
          else
          {
            v22 = v28 + 9;
            *((_WORD *)v28 + 36) |= 2u;
          }
          v4 = v29;
          if ( (*v22 & 2) != 0 )
          {
            *v11 = 0LL;
            *v25 = 0LL;
            *((_DWORD *)v28 + 27) = 0;
            *v26 = 0;
            *((_DWORD *)v28 + 25) = 0;
          }
          goto LABEL_9;
        }
        v20 = (PVOID)*(v17 - 18);
        if ( !v20 )
        {
          v21 = (__int64)*(v17 - 20);
          if ( !v21 )
            goto LABEL_31;
          if ( (*(_BYTE *)(v21 + 10) & 5) != 0 )
          {
            Pool2 = *(void **)(v21 + 24);
            goto LABEL_31;
          }
          v20 = MmMapLockedPagesSpecifyCache((PMDL)v21, 0, MmCached, 0LL, 0, 0x40000010u);
          v19 = v27;
        }
        Pool2 = v20;
LABEL_31:
        v16 = v19[2];
        if ( v16 > *((_DWORD *)v28 + 24) )
          v16 = *((_DWORD *)v28 + 24);
        goto LABEL_35;
      }
    }
  }
LABEL_9:
  *(_DWORD *)(a2 + 48) = -1073741536;
  IofCompleteRequest((PIRP)a2, 1);
  _InterlockedDecrement((volatile signed __int32 *)v28 + 28);
  if ( !*((_DWORD *)v28 + 28) )
  {
    if ( v28[10] )
    {
      PsReturnProcessPagedPoolQuota((ULONG_PTR)v28[15], *((unsigned int *)v28 + 25));
      ExFreePoolWithTag((PVOID)v28[10], 0);
    }
    if ( ((_BYTE)v28[9] & 0x40) != 0 || v28[17] )
      SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)v28[3];
    ExFreePoolWithTag(v28, 0);
  }
  if ( (*v7)-- == 1 )
  {
    *v6 = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)v4);
  }
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(SubjectContext, 0);
  }
  KeLeaveCriticalRegion();
}
