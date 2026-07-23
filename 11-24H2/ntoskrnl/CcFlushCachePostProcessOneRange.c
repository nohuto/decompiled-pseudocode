/*
 * XREFs of CcFlushCachePostProcessOneRange @ 0x140275FC0
 * Callers:
 *     CcFlushCachePriv @ 0x1402771F0 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x140279FE0 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x14027B44C (CcWriteBehindAsync.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C0AEC (CcAsyncLazywriteWorkerMulti.c)
 *     CcWriteBehindAsyncFlushOneRange @ 0x14057B7CC (CcWriteBehindAsyncFlushOneRange.c)
 * Callees:
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIsFatalWriteError @ 0x140260830 (CcIsFatalWriteError.c)
 *     CcUnpinFileDataEx @ 0x1402766A0 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1402769E0 (CcSetDirtyPinnedData.c)
 *     CcPostDeferredWrites @ 0x1402795B0 (CcPostDeferredWrites.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     CcSetDirtyInMask @ 0x140456AF0 (CcSetDirtyInMask.c)
 *     CcPerfLogFlushSection @ 0x14046B5A0 (CcPerfLogFlushSection.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

bool __fastcall CcFlushCachePostProcessOneRange(__int64 *a1)
{
  __int64 v1; // r12
  _DWORD *v2; // rsi
  __int64 v3; // r13
  bool v4; // zf
  __int64 v5; // rbp
  char v7; // r14
  __int64 v8; // r15
  NTSTATUS v9; // edx
  unsigned __int8 CurrentIrql; // si
  __int64 v11; // rdx
  char v12; // r12
  _QWORD *v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // r15d
  __int64 v16; // r9
  int v17; // r8d
  unsigned int v18; // r8d
  __int64 *v19; // r8
  __int64 v21; // r15
  __int64 v22; // rax
  signed __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r8d
  __int64 v26; // rbx
  unsigned int v27; // esi
  __int64 v28; // rbx
  int v29; // eax
  int v30; // esi
  int v31; // eax
  NTSTATUS v32; // ecx
  bool v33; // al
  int v34; // ecx
  __int64 v35; // [rsp+30h] [rbp-88h] BYREF
  __int64 v36; // [rsp+38h] [rbp-80h]
  __int64 v37; // [rsp+40h] [rbp-78h]
  __int64 v38; // [rsp+48h] [rbp-70h]
  __int64 *v39; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  char v41; // [rsp+C0h] [rbp+8h]
  __int64 v42; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v43; // [rsp+D0h] [rbp+18h]
  unsigned int v44; // [rsp+D8h] [rbp+20h]

  v1 = *a1;
  v2 = (_DWORD *)a1 + 15;
  v3 = a1[14];
  v4 = *((_DWORD *)a1 + 15) == 0;
  v5 = a1[2];
  v7 = *((_BYTE *)a1 + 132);
  v8 = a1[3];
  v37 = a1[1];
  v41 = *((_BYTE *)a1 + 133);
  v39 = (__int64 *)a1[12];
  v44 = *((_DWORD *)a1 + 26);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v38 = v1;
  v36 = v3;
  if ( !v4 )
    goto LABEL_34;
  v9 = *(_DWORD *)v3;
  if ( *(int *)v3 < 0 )
  {
    v28 = a1[5];
    v29 = *((_DWORD *)a1 + 12);
    v35 = v28;
    LODWORD(v42) = v29;
    if ( !CcIsFatalWriteError(v5, v9) )
    {
      *((_DWORD *)a1 + 16) = 1;
      goto LABEL_13;
    }
    v30 = v42;
    v43 = v7 != 0 ? 0x80000016 : 0;
    while ( 1 )
    {
      if ( (xmmword_140FC6B50 & 0x20000) != 0 )
        CcPerfLogFlushSection(a1[22], v5, (unsigned int)&v35, 4096, *((_DWORD *)a1 + 14));
      *(_DWORD *)v3 = v43;
      v31 = MmFlushSection(v8, &v35, 4096LL, 0LL, (_DWORD *)v3, *((_DWORD *)a1 + 14));
      if ( v31 < 0 )
      {
        v32 = *(_DWORD *)v3;
        if ( v7 )
        {
          if ( v32 != -2147483626 )
            goto LABEL_62;
        }
        else if ( v32 )
        {
          goto LABEL_62;
        }
        *(_DWORD *)v3 = v31;
      }
LABEL_62:
      if ( *(int *)v3 >= 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
        *(_DWORD *)(v5 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_66;
      }
      v33 = CcIsFatalWriteError(v5, *(_DWORD *)v3);
      v34 = *((_DWORD *)a1 + 32);
      if ( !v33 )
      {
        *((_DWORD *)a1 + 16) = 1;
        if ( v34 )
          goto LABEL_66;
LABEL_65:
        *((_DWORD *)a1 + 32) = *(_DWORD *)v3;
        goto LABEL_66;
      }
      if ( !v34 )
        goto LABEL_65;
LABEL_66:
      v28 += 4096LL;
      v35 = v28;
      v30 -= 4096;
      if ( !v30 )
      {
        v2 = (_DWORD *)a1 + 15;
        goto LABEL_13;
      }
    }
  }
  if ( (*(_DWORD *)(v5 + 152) & 0x400) == 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v1 + 768);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v11 = _InterlockedExchange64((volatile __int64 *)(v1 + 768), (__int64)&LockHandle);
      if ( v11 )
        KxWaitForLockOwnerShip(&LockHandle, v11);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v1 + 768);
    }
    *(_DWORD *)(v5 + 152) |= 0x400u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v2 = (_DWORD *)a1 + 15;
  }
  if ( v7 )
  {
    __incgsdword(0x896Cu);
    __addgsdword(0x8970u, (unsigned int)(*((_DWORD *)a1 + 12) + 4095) >> 12);
  }
  *((_DWORD *)a1 + 62) += (unsigned int)(*((_DWORD *)a1 + 12) + 4095) >> 12;
LABEL_13:
  if ( !*v2 && !*((_DWORD *)a1 + 16) )
  {
    v12 = 0;
    goto LABEL_16;
  }
LABEL_34:
  v12 = 1;
LABEL_16:
  v13 = (_QWORD *)a1[15];
  v14 = 0LL;
  v15 = *((_DWORD *)a1 + 12);
  if ( v13 )
  {
    if ( *(_WORD *)v13 != 765 )
      KeBugCheckEx(0x34u, 0x1572uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    do
    {
      v21 = v13[2];
      if ( *(_WORD *)v13 == 765 )
      {
        v14 = v13[1];
        if ( (*(_DWORD *)(v5 + 152) & 0x200) != 0 )
          CcUnpinFileDataEx(v13);
        if ( v12 )
          CcSetDirtyPinnedData(v13, 0LL);
        CcUnpinFileDataEx(v13);
      }
      v13 = (_QWORD *)(v21 - 16);
    }
    while ( a1[5] != v14 );
    v3 = v36;
  }
  else if ( v12 )
  {
    v26 = a1[5];
    while ( 1 )
    {
      v42 = v26;
      if ( !v15 )
        break;
      if ( (v26 & 0xFFFFFFFFFE000000uLL) < ((v26 + v15 - 1LL) & 0xFFFFFFFFFE000000uLL) )
        v27 = ((v26 + 0x1FFFFFF) & 0xFE000000) - v26;
      else
        v27 = v15;
      if ( v27 > 0x2000000 )
        KeBugCheckEx(0x34u, 0x155FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      CcSetDirtyInMask(v5, &v42, v27, 0LL);
      v26 += v27;
      v15 -= v27;
    }
  }
  v16 = *((unsigned int *)a1 + 12);
  v17 = *((_DWORD *)a1 + 13);
  a1[28] += v16;
  v18 = v16 + v17;
  *((_DWORD *)a1 + 13) = v18;
  if ( v18 >= 0x40000 && *(_QWORD *)a1[23] != a1[23] )
  {
    CcPostDeferredWrites(v38, v37);
    *((_DWORD *)a1 + 13) = 0;
  }
  if ( v7 && !v41 )
  {
    v22 = *(_QWORD *)a1[23] == a1[23] ? CcIdleDelayTick / 0xAu : (unsigned int)CcIdleDelayTick;
    a1[20] = a1[19] + v22;
    if ( MEMORY[0xFFFFF78000000320] > a1[20] )
    {
      *(_QWORD *)(v3 + 8) = 35422LL;
      return 0;
    }
  }
  v19 = v39;
  if ( v39 )
  {
    v23 = a1[5] + *((unsigned int *)a1 + 12);
    a1[5] = v23;
    v24 = *v19;
    v25 = v44;
    if ( v24 + v44 <= v23 )
      return 0;
    a1[4] = v23;
    *((_DWORD *)a1 + 12) = v25 + v24 - v23;
  }
  if ( !*((_BYTE *)a1 + 201) )
    return 1;
  a1[26] += *((unsigned int *)a1 + 12);
  return (unsigned __int64)a1[28] >> 12 < a1[27];
}
