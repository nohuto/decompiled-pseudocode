/*
 * XREFs of FsRtlReleaseEofLock @ 0x1403F96E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlReleaseHeaderMutex @ 0x140286C50 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     KeSetEventBoostPriorityEx @ 0x1403F9BB8 (KeSetEventBoostPriorityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall FsRtlReleaseEofLock(__int64 a1, volatile signed __int32 *a2)
{
  _QWORD *v3; // r13
  __int64 v4; // rdi
  __int64 *v5; // rbp
  unsigned __int8 CurrentIrql; // r12
  __int64 *v7; // rsi
  int v8; // r15d
  int i; // r14d
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v13; // r15
  __int64 v14; // rdi
  char v15; // si
  KIRQL v16; // bp
  _QWORD *v17; // r14
  _QWORD *v18; // rcx
  int v19; // ecx
  _QWORD *v20; // rbx
  _QWORD *result; // rax
  signed __int32 v22; // ett
  _QWORD *v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // r8
  _QWORD *v26; // r8
  _QWORD *v27; // rcx
  _QWORD *v28; // r8
  _QWORD *v29; // r8
  __int64 Pool2; // rax
  _QWORD *v31; // rcx
  __int64 **v32; // rsi
  __int64 *v33; // rcx
  __int64 **v34; // rsi
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // [rsp+30h] [rbp-48h] BYREF
  _QWORD **v39; // [rsp+38h] [rbp-40h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v39 = &v38;
  v3 = 0LL;
  v38 = &v38;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v5 = KeAbPreAcquire(v4, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
  {
    ++*(_DWORD *)(v4 + 16);
    v7 = v5;
    v8 = 1;
    for ( i = 4; ; i = 2 )
    {
      v10 = *(_DWORD *)v4;
      do
      {
        while ( (v10 & 1) != 0 )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange((volatile signed __int32 *)v4, v8 ^ v10, v10);
          if ( v11 == v10 )
            goto LABEL_8;
        }
        v22 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)v4, i + v10, v10);
      }
      while ( v22 != v10 );
      if ( v7 )
        KeAbPreWait(v7);
      KeWaitForSingleObject((PVOID)(v4 + 24), WrFastMutex, 0, 0, 0LL);
      _m_prefetchw((const void *)v4);
      v8 = 3;
      if ( v7 )
        v7 = KeAbPreAcquire(v4, (__int64)v7);
    }
  }
LABEL_8:
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  if ( (*(_WORD *)(a1 + 38))-- != 1 )
    return (_QWORD *)FsRtlReleaseHeaderMutex(a1, a2);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( *(_BYTE *)(a1 + 36) )
  {
    v14 = *(_QWORD *)a1;
    v15 = 0;
    v16 = 0;
    v17 = 0LL;
    if ( PspAlwaysTrackIoBoosting )
    {
      v15 = 1;
      Pool2 = ExAllocatePool2(0x40uLL);
      v17 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
        v17[12] = KeGetCurrentThread();
        v17[13] = 0LL;
      }
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 1552));
    }
    if ( *(_DWORD *)(v14 + 1504) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v14 + 1504));
      if ( !v15 )
      {
LABEL_17:
        *(_BYTE *)(a1 + 36) = 0;
        goto LABEL_18;
      }
      if ( *(_DWORD *)(v14 + 1504) )
      {
        if ( v17 )
        {
          v31 = *(_QWORD **)(v14 + 1544);
          if ( *v31 != v14 + 1536 )
LABEL_35:
            __fastfail(3u);
          *v17 = v14 + 1536;
          v17[1] = v31;
          *v31 = v17;
          *(_QWORD *)(v14 + 1544) = v17;
        }
      }
      else
      {
        if ( v17 )
          ExFreePoolWithTag(v17, 0x736F6F42u);
        v32 = (__int64 **)(v14 + 1520);
        while ( 1 )
        {
          v33 = *v32;
          if ( *v32 == (__int64 *)v32 )
            break;
          v37 = *v33;
          if ( (__int64 **)v33[1] != v32 || *(__int64 **)(v37 + 8) != v33 )
            goto LABEL_35;
          *v32 = (__int64 *)v37;
          *(_QWORD *)(v37 + 8) = v32;
          ExFreePoolWithTag(v33, 0x736F6F42u);
        }
        v34 = (__int64 **)(v14 + 1536);
        while ( 1 )
        {
          v35 = *v34;
          if ( *v34 == (__int64 *)v34 )
            break;
          v36 = *v35;
          if ( (__int64 **)v35[1] != v34 || *(__int64 **)(v36 + 8) != v35 )
            goto LABEL_35;
          *v34 = (__int64 *)v36;
          *(_QWORD *)(v36 + 8) = v34;
          ExFreePoolWithTag(v35, 0x736F6F42u);
        }
      }
    }
    else if ( !v15 )
    {
      goto LABEL_17;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 1552), 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v14 + 1552), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
    __writecr8(v16);
    goto LABEL_17;
  }
LABEL_18:
  v18 = *(_QWORD **)(a1 + 8);
  if ( v18 == (_QWORD *)(a1 + 8) )
    goto LABEL_19;
  do
  {
    v23 = v18;
    v18 = (_QWORD *)*v18;
    v24 = v23[5];
    if ( v24 < 0 || v24 > v13 )
    {
      if ( !v3 )
      {
        v25 = (_QWORD *)v23[1];
        if ( (_QWORD *)v18[1] != v23 )
          goto LABEL_35;
        if ( (_QWORD *)*v25 != v23 )
          goto LABEL_35;
        *v25 = v18;
        v18[1] = v25;
        v26 = v38;
        if ( (_QWORD **)v38[1] != &v38 )
          goto LABEL_35;
        *v23 = v38;
        v23[1] = &v38;
        v3 = v23;
        v26[1] = v23;
        v38 = v23;
      }
    }
    else
    {
      v28 = (_QWORD *)v23[1];
      if ( (_QWORD *)v18[1] != v23 )
        goto LABEL_35;
      if ( (_QWORD *)*v28 != v23 )
        goto LABEL_35;
      *v28 = v18;
      v18[1] = v28;
      v29 = v39;
      if ( *v39 != &v38 )
        goto LABEL_35;
      v23[1] = v39;
      *v23 = &v38;
      *v29 = v23;
      v39 = (_QWORD **)v23;
    }
  }
  while ( v18 != (_QWORD *)(a1 + 8) );
  if ( !v3 )
  {
LABEL_19:
    *(_QWORD *)a1 = 0LL;
    v19 = 0;
    *(_WORD *)(a1 + 38) = 0;
  }
  else
  {
    *(_QWORD *)a1 = v3[6];
    *(_WORD *)(a1 + 38) = 1;
    v19 = *((_DWORD *)v3 + 14);
  }
  *(_DWORD *)(a1 + 32) = v19;
  if ( a2 )
    _InterlockedIncrement(a2);
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(*(_QWORD *)(a1 + 24) + 48LL));
  v20 = v38;
  for ( result = &v38; v20 != &v38; result = &v38 )
  {
    v27 = v20;
    v20 = (_QWORD *)*v20;
    KeSetEventBoostPriorityEx(v27 + 2, 1, 0);
  }
  return result;
}
