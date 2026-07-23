/*
 * XREFs of CcSetLogHandleForFileEx @ 0x14043EE30
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall CcSetLogHandleForFileEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  __int64 v5; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  KSPIN_LOCK *v11; // rcx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  bool v17; // zf
  __int64 v18; // rax
  __int64 **v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 *v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v36; // [rsp+48h] [rbp-91h]
  volatile signed __int64 *v37[3]; // [rsp+50h] [rbp-89h] BYREF
  __int128 v38; // [rsp+68h] [rbp-71h] BYREF
  __int128 v39; // [rsp+78h] [rbp-61h]
  __int128 v40; // [rsp+88h] [rbp-51h]
  __int128 v41; // [rsp+98h] [rbp-41h]
  __int128 v42; // [rsp+A8h] [rbp-31h]
  __int128 v43; // [rsp+B8h] [rbp-21h]
  __int128 v44; // [rsp+C8h] [rbp-11h]
  __int128 v45; // [rsp+D8h] [rbp-1h]
  __int128 v46; // [rsp+E8h] [rbp+Fh]
  __int64 v47; // [rsp+F8h] [rbp+1Fh]

  v36 = 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v37[2] = 0LL;
  v9 = *(_QWORD *)(v5 + 8);
  if ( !*(_DWORD *)(v9 + 4) )
    KeBugCheckEx(0x34u, 0x22FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = *(_QWORD *)(v9 + 536);
  if ( (*(_DWORD *)(v9 + 152) & 0x2000000) != 0 )
    KeBugCheckEx(0x34u, 0x23EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v11 = &CcMasterLock;
  LockHandle.LockQueue.Lock = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = &CcMasterLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v11, 2LL);
  }
  LOBYTE(v36) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v13 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&LockHandle.LockQueue.Lock);
    if ( v13 )
      KxWaitForLockOwnerShip((__int64)&LockHandle.LockQueue.Lock, v13);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle.LockQueue.Lock, (volatile __int64 *)&CcMasterLock);
  }
  v37[0] = 0LL;
  v37[1] = (volatile signed __int64 *)(v10 + 768);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v14 = _InterlockedExchange64((volatile __int64 *)(v10 + 768), (__int64)v37);
    if ( v14 )
      KxWaitForLockOwnerShip((__int64)v37, (_QWORD *)v14);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)v37, (volatile __int64 *)(v10 + 768));
  }
  if ( *(_QWORD *)(v9 + 248) )
  {
    v14 = *(_QWORD *)(v9 + 120);
    if ( *(_QWORD *)(v14 + 8) != v9 + 120 )
      goto LABEL_18;
    v23 = *(__int64 **)(v9 + 128);
    if ( *v23 != v9 + 120 )
      goto LABEL_18;
    v17 = CcEnablePerVolumeLazyWriter == 0;
    *v23 = v14;
    *(_QWORD *)(v14 + 8) = v23;
    if ( !v17 )
    {
      v14 = *(_QWORD *)(v9 + 584);
      if ( *(_QWORD *)(v14 + 8) != v9 + 584 )
        goto LABEL_18;
      v24 = *(__int64 **)(v9 + 592);
      if ( *v24 != v9 + 584 )
        goto LABEL_18;
      *v24 = v14;
      *(_QWORD *)(v14 + 8) = v24;
    }
  }
  if ( !a2 )
  {
    *(_DWORD *)(v9 + 152) &= ~0x1000000u;
    *(_QWORD *)(v9 + 248) = 0LL;
    goto LABEL_31;
  }
  v15 = (_QWORD *)(v9 + 120);
  if ( !*(_DWORD *)(v9 + 112) )
  {
    v16 = *(_QWORD **)(v10 + 664);
    if ( *v16 != v10 + 656 )
      goto LABEL_18;
    v17 = CcEnablePerVolumeLazyWriter == 0;
    *v15 = v10 + 656;
    *(_QWORD *)(v9 + 128) = v16;
    *v16 = v15;
    *(_QWORD *)(v10 + 664) = v15;
    if ( !v17 )
    {
      v18 = *(_QWORD *)(v9 + 600) + 624LL;
LABEL_17:
      v19 = *(__int64 ***)(v18 + 8);
      v20 = (__int64 *)(v9 + 584);
      if ( *v19 != (__int64 *)v18 )
        goto LABEL_18;
      *v20 = v18;
      *(_QWORD *)(v9 + 592) = v19;
      *v19 = v20;
      *(_QWORD *)(v18 + 8) = v20;
      goto LABEL_26;
    }
    goto LABEL_26;
  }
  v25 = *(_QWORD **)(v10 + 728);
  if ( *v25 != v10 + 720 )
LABEL_18:
    __fastfail(3u);
  v17 = CcEnablePerVolumeLazyWriter == 0;
  *v15 = v10 + 720;
  *(_QWORD *)(v9 + 128) = v25;
  *v25 = v15;
  *(_QWORD *)(v10 + 728) = v15;
  if ( !v17 )
  {
    v18 = *(_QWORD *)(v9 + 600) + 688LL;
    goto LABEL_17;
  }
LABEL_26:
  if ( !*(_QWORD *)(*(_QWORD *)(v9 + 512) + 48LL) )
  {
    memset_0(&v38, 0, 0x98uLL);
    *((_QWORD *)&v46 + 1) = -1LL;
    *(_QWORD *)&v39 = a4;
    *((_QWORD *)&v38 + 1) = a3;
    *(_QWORD *)&v38 = a2;
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      *((_QWORD *)&v45 + 1) = Object;
    }
    v26 = *(_QWORD *)(v9 + 512);
    v27 = v39;
    *(_OWORD *)(v26 + 48) = v38;
    v28 = v40;
    *(_OWORD *)(v26 + 64) = v27;
    v29 = v41;
    *(_OWORD *)(v26 + 80) = v28;
    v30 = v42;
    *(_OWORD *)(v26 + 96) = v29;
    v31 = v43;
    *(_OWORD *)(v26 + 112) = v30;
    v32 = v44;
    *(_OWORD *)(v26 + 128) = v31;
    v33 = v46;
    *(_OWORD *)(v26 + 144) = v32;
    v34 = v47;
    *(_OWORD *)(v26 + 160) = v45;
    *(_OWORD *)(v26 + 176) = v33;
    *(_QWORD *)(v26 + 192) = v34;
  }
  v14 = 0x1000000LL;
  v21 = *(_QWORD *)(v9 + 512) + 48LL;
  *(_QWORD *)(v9 + 248) = v21;
  if ( (*(_DWORD *)(v9 + 152) & 0x1000000) == 0 )
  {
    v22 = *(unsigned int *)(v9 + 112);
    if ( (_DWORD)v22 )
      _InterlockedAdd64((volatile signed __int64 *)(v21 + 24), v22);
  }
  *(_DWORD *)(v9 + 152) |= 0x1000000u;
LABEL_31:
  KxReleaseQueuedSpinLock(v37, v14);
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
}
