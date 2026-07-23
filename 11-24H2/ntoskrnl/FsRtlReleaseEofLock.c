/*
 * XREFs of FsRtlReleaseEofLock @ 0x1402E0940
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlReleaseHeaderMutex @ 0x1402C6D00 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KeSetEventBoostPriorityEx @ 0x1402E0738 (KeSetEventBoostPriorityEx.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall FsRtlReleaseEofLock(__int64 a1, volatile signed __int32 *a2)
{
  _QWORD *v3; // r13
  __int64 v4; // rdi
  __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // r12
  __int64 v7; // rsi
  int v8; // r15d
  int i; // r14d
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  signed __int32 v12; // ett
  __int64 v14; // r15
  __int64 v15; // rdi
  char v16; // si
  KIRQL v17; // bp
  _QWORD *v18; // r14
  _QWORD *v19; // rcx
  int v20; // ecx
  _QWORD *v21; // rbx
  _QWORD *result; // rax
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
  signed int v41; // [rsp+80h] [rbp+8h] BYREF
  volatile signed __int32 *v42; // [rsp+88h] [rbp+10h]
  volatile signed __int32 *v43; // [rsp+90h] [rbp+18h]

  v42 = a2;
  v43 = a2;
  v39 = &v38;
  v3 = 0LL;
  v38 = &v38;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v5 = KeAbPreAcquire(v4, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
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
          v12 = v10;
          v10 = _InterlockedCompareExchange((volatile signed __int32 *)v4, v8 ^ v10, v10);
          if ( v12 == v10 )
            goto LABEL_13;
        }
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)v4, i + v10, v10);
      }
      while ( v11 != v10 );
      if ( v7 )
        KeAbPreWait(v7);
      KeWaitForSingleObject((PVOID)(v4 + 24), WrFastMutex, 0, 0, 0LL);
      _m_prefetchw((const void *)v4);
      v8 = 3;
      if ( v7 )
        v7 = KeAbPreAcquire(v4, v7, 0LL);
    }
  }
LABEL_13:
  if ( v5 )
    *(_BYTE *)(v5 + 10) = 1;
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 48) = CurrentIrql;
  if ( v43 )
    _InterlockedIncrement(v43);
  if ( (*(_WORD *)(a1 + 38))-- != 1 )
    return (_QWORD *)FsRtlReleaseHeaderMutex(a1, v42);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( *(_BYTE *)(a1 + 36) )
  {
    v15 = *(_QWORD *)a1;
    v16 = 0;
    v17 = 0;
    v18 = 0LL;
    if ( PspAlwaysTrackIoBoosting )
    {
      v16 = 1;
      Pool2 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x736F6F42u);
      v18 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
        v18[12] = KeGetCurrentThread();
        v18[13] = 0LL;
      }
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 1552));
    }
    if ( *(_DWORD *)(v15 + 1504) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v15 + 1504));
      if ( !v16 )
      {
LABEL_22:
        *(_BYTE *)(a1 + 36) = 0;
        goto LABEL_23;
      }
      if ( *(_DWORD *)(v15 + 1504) )
      {
        if ( v18 )
        {
          v31 = *(_QWORD **)(v15 + 1544);
          if ( *v31 != v15 + 1536 )
LABEL_35:
            __fastfail(3u);
          *v18 = v15 + 1536;
          v18[1] = v31;
          *v31 = v18;
          *(_QWORD *)(v15 + 1544) = v18;
        }
      }
      else
      {
        if ( v18 )
          ExFreePoolWithTag(v18, 0x736F6F42u);
        v32 = (__int64 **)(v15 + 1520);
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
        v34 = (__int64 **)(v15 + 1536);
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
    else if ( !v16 )
    {
      goto LABEL_22;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 1552), 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v15 + 1552), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
    __writecr8(v17);
    goto LABEL_22;
  }
LABEL_23:
  v19 = *(_QWORD **)(a1 + 8);
  if ( v19 == (_QWORD *)(a1 + 8) )
    goto LABEL_24;
  do
  {
    v23 = v19;
    v19 = (_QWORD *)*v19;
    v24 = v23[5];
    if ( v24 < 0 || v24 > v14 )
    {
      if ( !v3 )
      {
        v25 = (_QWORD *)v23[1];
        if ( (_QWORD *)v19[1] != v23 )
          goto LABEL_35;
        if ( (_QWORD *)*v25 != v23 )
          goto LABEL_35;
        *v25 = v19;
        v19[1] = v25;
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
      if ( (_QWORD *)v19[1] != v23 )
        goto LABEL_35;
      if ( (_QWORD *)*v28 != v23 )
        goto LABEL_35;
      *v28 = v19;
      v19[1] = v28;
      v29 = v39;
      if ( *v39 != &v38 )
        goto LABEL_35;
      v23[1] = v39;
      *v23 = &v38;
      *v29 = v23;
      v39 = (_QWORD **)v23;
    }
  }
  while ( v19 != (_QWORD *)(a1 + 8) );
  if ( !v3 )
  {
LABEL_24:
    *(_QWORD *)a1 = 0LL;
    v20 = 0;
    *(_WORD *)(a1 + 38) = 0;
  }
  else
  {
    *(_QWORD *)a1 = v3[6];
    *(_WORD *)(a1 + 38) = 1;
    v20 = *((_DWORD *)v3 + 14);
  }
  *(_DWORD *)(a1 + 32) = v20;
  if ( v42 )
    _InterlockedIncrement(v42);
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(*(_QWORD *)(a1 + 24) + 48LL));
  v21 = v38;
  for ( result = &v38; v21 != &v38; result = &v38 )
  {
    v27 = v21;
    v21 = (_QWORD *)*v21;
    v41 = *((_DWORD *)v27 + 14);
    KeSetEventBoostPriorityEx((volatile signed __int32 *)v27 + 4, 0LL, &v41, 0LL, 1, 0);
  }
  return result;
}
