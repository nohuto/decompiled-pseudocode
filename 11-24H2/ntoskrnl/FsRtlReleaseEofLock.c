/*
 * XREFs of FsRtlReleaseEofLock @ 0x1403D8730
 * Callers:
 *     <none>
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlCaptureStackBackTrace @ 0x14027C690 (RtlCaptureStackBackTrace.c)
 *     FsRtlReleaseHeaderMutex @ 0x14031E170 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeSetEventBoostPriorityEx @ 0x1403D8BE8 (KeSetEventBoostPriorityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall FsRtlReleaseEofLock(__int64 a1, volatile signed __int32 *a2)
{
  _QWORD *v3; // r13
  __int64 v4; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rbp
  __int64 v7; // r8
  unsigned __int8 CurrentIrql; // r12
  _QWORD *v9; // rsi
  int v10; // r15d
  int i; // r14d
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  signed __int32 v14; // ett
  __int64 v16; // r15
  __int64 v17; // rdi
  char v18; // si
  KIRQL v19; // bp
  _QWORD *v20; // r14
  _QWORD *v21; // rcx
  int v22; // ecx
  _QWORD *v23; // rbx
  _QWORD *result; // rax
  _QWORD *v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // r8
  _QWORD *v28; // r8
  _QWORD *v29; // rcx
  _QWORD *v30; // r8
  _QWORD *v31; // r8
  __int64 Pool2; // rax
  _QWORD *v33; // rcx
  __int64 **v34; // rsi
  __int64 *v35; // rcx
  __int64 **v36; // rsi
  __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // [rsp+30h] [rbp-48h] BYREF
  _QWORD **v41; // [rsp+38h] [rbp-40h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v41 = &v40;
  v3 = 0LL;
  v40 = &v40;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v6 = KeAbPreAcquire(v4, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
  {
    ++*(_DWORD *)(v4 + 16);
    v9 = v6;
    v10 = 1;
    for ( i = 4; ; i = 2 )
    {
      v12 = *(_DWORD *)v4;
      do
      {
        while ( (v12 & 1) != 0 )
        {
          v14 = v12;
          v12 = _InterlockedCompareExchange((volatile signed __int32 *)v4, v10 ^ v12, v12);
          if ( v14 == v12 )
            goto LABEL_13;
        }
        v13 = v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)v4, i + v12, v12);
      }
      while ( v13 != v12 );
      if ( v9 )
        KeAbPreWait((__int64)v9, v5, v7);
      KeWaitForSingleObject((PVOID)(v4 + 24), WrFastMutex, 0, 0, 0LL);
      _m_prefetchw((const void *)v4);
      v10 = 3;
      if ( v9 )
        v9 = KeAbPreAcquire(v4, (__int64)v9);
    }
  }
LABEL_13:
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  if ( (*(_WORD *)(a1 + 38))-- != 1 )
    return (_QWORD *)FsRtlReleaseHeaderMutex(a1, a2);
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( *(_BYTE *)(a1 + 36) )
  {
    v17 = *(_QWORD *)a1;
    v18 = 0;
    v19 = 0;
    v20 = 0LL;
    if ( PspAlwaysTrackIoBoosting )
    {
      v18 = 1;
      Pool2 = ExAllocatePool2(0x40uLL);
      v20 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
        v20[12] = KeGetCurrentThread();
        v20[13] = 0LL;
      }
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 1552));
    }
    if ( *(_DWORD *)(v17 + 1504) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v17 + 1504));
      if ( !v18 )
      {
LABEL_22:
        *(_BYTE *)(a1 + 36) = 0;
        goto LABEL_23;
      }
      if ( *(_DWORD *)(v17 + 1504) )
      {
        if ( v20 )
        {
          v33 = *(_QWORD **)(v17 + 1544);
          if ( *v33 != v17 + 1536 )
LABEL_35:
            __fastfail(3u);
          *v20 = v17 + 1536;
          v20[1] = v33;
          *v33 = v20;
          *(_QWORD *)(v17 + 1544) = v20;
        }
      }
      else
      {
        if ( v20 )
          ExFreePoolWithTag(v20, 0x736F6F42u);
        v34 = (__int64 **)(v17 + 1520);
        while ( 1 )
        {
          v35 = *v34;
          if ( *v34 == (__int64 *)v34 )
            break;
          v39 = *v35;
          if ( (__int64 **)v35[1] != v34 || *(__int64 **)(v39 + 8) != v35 )
            goto LABEL_35;
          *v34 = (__int64 *)v39;
          *(_QWORD *)(v39 + 8) = v34;
          ExFreePoolWithTag(v35, 0x736F6F42u);
        }
        v36 = (__int64 **)(v17 + 1536);
        while ( 1 )
        {
          v37 = *v36;
          if ( *v36 == (__int64 *)v36 )
            break;
          v38 = *v37;
          if ( (__int64 **)v37[1] != v36 || *(__int64 **)(v38 + 8) != v37 )
            goto LABEL_35;
          *v36 = (__int64 *)v38;
          *(_QWORD *)(v38 + 8) = v36;
          ExFreePoolWithTag(v37, 0x736F6F42u);
        }
      }
    }
    else if ( !v18 )
    {
      goto LABEL_22;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 1552), 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v17 + 1552), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
    __writecr8(v19);
    goto LABEL_22;
  }
LABEL_23:
  v21 = *(_QWORD **)(a1 + 8);
  if ( v21 == (_QWORD *)(a1 + 8) )
    goto LABEL_24;
  do
  {
    v25 = v21;
    v21 = (_QWORD *)*v21;
    v26 = v25[5];
    if ( v26 < 0 || v26 > v16 )
    {
      if ( !v3 )
      {
        v27 = (_QWORD *)v25[1];
        if ( (_QWORD *)v21[1] != v25 )
          goto LABEL_35;
        if ( (_QWORD *)*v27 != v25 )
          goto LABEL_35;
        *v27 = v21;
        v21[1] = v27;
        v28 = v40;
        if ( (_QWORD **)v40[1] != &v40 )
          goto LABEL_35;
        *v25 = v40;
        v25[1] = &v40;
        v3 = v25;
        v28[1] = v25;
        v40 = v25;
      }
    }
    else
    {
      v30 = (_QWORD *)v25[1];
      if ( (_QWORD *)v21[1] != v25 )
        goto LABEL_35;
      if ( (_QWORD *)*v30 != v25 )
        goto LABEL_35;
      *v30 = v21;
      v21[1] = v30;
      v31 = v41;
      if ( *v41 != &v40 )
        goto LABEL_35;
      v25[1] = v41;
      *v25 = &v40;
      *v31 = v25;
      v41 = (_QWORD **)v25;
    }
  }
  while ( v21 != (_QWORD *)(a1 + 8) );
  if ( !v3 )
  {
LABEL_24:
    *(_QWORD *)a1 = 0LL;
    v22 = 0;
    *(_WORD *)(a1 + 38) = 0;
  }
  else
  {
    *(_QWORD *)a1 = v3[6];
    *(_WORD *)(a1 + 38) = 1;
    v22 = *((_DWORD *)v3 + 14);
  }
  *(_DWORD *)(a1 + 32) = v22;
  if ( a2 )
    _InterlockedIncrement(a2);
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(*(_QWORD *)(a1 + 24) + 48LL));
  v23 = v40;
  for ( result = &v40; v23 != &v40; result = &v40 )
  {
    v29 = v23;
    v23 = (_QWORD *)*v23;
    KeSetEventBoostPriorityEx(v29 + 2, 1, 0);
  }
  return result;
}
