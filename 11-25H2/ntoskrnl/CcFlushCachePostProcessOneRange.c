/*
 * XREFs of CcFlushCachePostProcessOneRange @ 0x1402D9210
 * Callers:
 *     CcFlushCachePriv @ 0x1402DA4E0 (CcFlushCachePriv.c)
 *     CcWriteBehindAsync @ 0x1403AB04C (CcWriteBehindAsync.c)
 *     CcWriteBehindInternal @ 0x1403AC840 (CcWriteBehindInternal.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C8A30 (CcAsyncLazywriteWorkerMulti.c)
 *     CcWriteBehindAsyncFlushOneRange @ 0x14057B01C (CcWriteBehindAsyncFlushOneRange.c)
 * Callees:
 *     MmFlushSection @ 0x1402C1F80 (MmFlushSection.c)
 *     CcSetDirtyInMask @ 0x1402D5CB0 (CcSetDirtyInMask.c)
 *     CcSetDirtyPinnedData @ 0x1402D6A70 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x1402D8ED0 (CcUnpinFileDataEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1403A5FC4 (CcPostDeferredWrites.c)
 *     CcIsFatalWriteError @ 0x1403BEC88 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushSection @ 0x1404726A8 (CcPerfLogFlushSection.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

bool __fastcall CcFlushCachePostProcessOneRange(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  _DWORD *v5; // rsi
  int *v6; // r13
  bool v7; // zf
  __int64 v8; // rbp
  char v10; // r14
  __int64 *v11; // r15
  unsigned __int8 CurrentIrql; // si
  __int64 v13; // rdx
  char v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rbx
  unsigned int v17; // r15d
  __int64 v18; // r9
  int v19; // r8d
  unsigned int v20; // r8d
  __int64 *v21; // r8
  __int64 v23; // r15
  __int64 v24; // rax
  signed __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // r8d
  __int64 v28; // rbx
  unsigned int v29; // esi
  __int64 v30; // rbx
  int v31; // eax
  int v32; // esi
  int v33; // eax
  int v34; // ecx
  char v35; // al
  int v36; // ecx
  __int64 v37; // [rsp+30h] [rbp-88h] BYREF
  int *v38; // [rsp+38h] [rbp-80h]
  __int64 v39; // [rsp+40h] [rbp-78h]
  __int64 v40; // [rsp+48h] [rbp-70h]
  __int64 *v41; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  char v43; // [rsp+C0h] [rbp+8h]
  __int64 v44; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v45; // [rsp+D0h] [rbp+18h]
  unsigned int v46; // [rsp+D8h] [rbp+20h]

  v4 = *a1;
  v5 = (_DWORD *)a1 + 15;
  v6 = (int *)a1[14];
  v7 = *((_DWORD *)a1 + 15) == 0;
  v8 = a1[2];
  v10 = *((_BYTE *)a1 + 132);
  v11 = (__int64 *)a1[3];
  v39 = a1[1];
  v43 = *((_BYTE *)a1 + 133);
  v41 = (__int64 *)a1[12];
  v46 = *((_DWORD *)a1 + 26);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v40 = v4;
  v38 = v6;
  if ( !v7 )
    goto LABEL_32;
  if ( *v6 < 0 )
  {
    v30 = a1[5];
    v31 = *((_DWORD *)a1 + 12);
    v37 = v30;
    LODWORD(v44) = v31;
    if ( !(unsigned __int8)CcIsFatalWriteError(v8) )
    {
      *((_DWORD *)a1 + 16) = 1;
      goto LABEL_13;
    }
    v32 = v44;
    v45 = v10 != 0 ? 0x80000016 : 0;
    while ( 1 )
    {
      if ( (xmmword_140FC5B10 & 0x20000) != 0 )
        CcPerfLogFlushSection(a1[22], v8, (unsigned int)&v37, 4096, *((_DWORD *)a1 + 14));
      *v6 = v45;
      v33 = MmFlushSection(v11, &v37, 4096LL, 0LL, v6, *((_DWORD *)a1 + 14));
      if ( v33 < 0 )
      {
        v34 = *v6;
        if ( v10 )
        {
          if ( v34 != -2147483626 )
            goto LABEL_62;
        }
        else if ( v34 )
        {
          goto LABEL_62;
        }
        *v6 = v33;
      }
LABEL_62:
      if ( *v6 >= 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &LockHandle);
        *(_DWORD *)(v8 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_66;
      }
      v35 = CcIsFatalWriteError(v8);
      v36 = *((_DWORD *)a1 + 32);
      if ( !v35 )
      {
        *((_DWORD *)a1 + 16) = 1;
        if ( v36 )
          goto LABEL_66;
LABEL_65:
        *((_DWORD *)a1 + 32) = *v6;
        goto LABEL_66;
      }
      if ( !v36 )
        goto LABEL_65;
LABEL_66:
      v30 += 4096LL;
      v37 = v30;
      v32 -= 4096;
      if ( !v32 )
      {
        v5 = (_DWORD *)a1 + 15;
        goto LABEL_13;
      }
    }
  }
  if ( (*(_DWORD *)(v8 + 152) & 0x400) == 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4 + 768);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v13 = _InterlockedExchange64((volatile __int64 *)(v4 + 768), (__int64)&LockHandle);
      if ( v13 )
        KxWaitForLockOwnerShip(&LockHandle, v13, a3, a4);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v4 + 768);
    }
    *(_DWORD *)(v8 + 152) |= 0x400u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v5 = (_DWORD *)a1 + 15;
  }
  if ( v10 )
  {
    __incgsdword(0x896Cu);
    __addgsdword(0x8970u, (unsigned int)(*((_DWORD *)a1 + 12) + 4095) >> 12);
  }
  *((_DWORD *)a1 + 62) += (unsigned int)(*((_DWORD *)a1 + 12) + 4095) >> 12;
LABEL_13:
  if ( !*v5 && !*((_DWORD *)a1 + 16) )
  {
    v14 = 0;
    goto LABEL_16;
  }
LABEL_32:
  v14 = 1;
LABEL_16:
  v15 = a1[15];
  v16 = 0LL;
  v17 = *((_DWORD *)a1 + 12);
  if ( v15 )
  {
    if ( *(_WORD *)v15 != 765 )
      KeBugCheckEx(0x34u, 0x1572uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    do
    {
      v23 = *(_QWORD *)(v15 + 16);
      if ( *(_WORD *)v15 == 765 )
      {
        v16 = *(_QWORD *)(v15 + 8);
        if ( (*(_DWORD *)(v8 + 152) & 0x200) != 0 )
          CcUnpinFileDataEx((char *)v15, (*(_DWORD *)(v8 + 152) & 2) != 0, 2);
        if ( v14 )
          CcSetDirtyPinnedData((PVOID)v15, 0LL);
        CcUnpinFileDataEx((char *)v15, 1, 0);
      }
      v15 = v23 - 16;
    }
    while ( a1[5] != v16 );
    v6 = v38;
  }
  else if ( v14 )
  {
    v28 = a1[5];
    while ( 1 )
    {
      v44 = v28;
      if ( !v17 )
        break;
      if ( (v28 & 0xFFFFFFFFFE000000uLL) < ((v28 + v17 - 1LL) & 0xFFFFFFFFFE000000uLL) )
        v29 = ((v28 + 0x1FFFFFF) & 0xFE000000) - v28;
      else
        v29 = v17;
      if ( v29 > 0x2000000 )
        KeBugCheckEx(0x34u, 0x155FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      CcSetDirtyInMask(v8, &v44, v29, 0LL);
      v28 += v29;
      v17 -= v29;
    }
  }
  v18 = *((unsigned int *)a1 + 12);
  v19 = *((_DWORD *)a1 + 13);
  a1[28] += v18;
  v20 = v18 + v19;
  *((_DWORD *)a1 + 13) = v20;
  if ( v20 >= 0x40000 && *(_QWORD *)a1[23] != a1[23] )
  {
    CcPostDeferredWrites(v40, v39);
    *((_DWORD *)a1 + 13) = 0;
  }
  if ( v10 && !v43 )
  {
    v24 = *(_QWORD *)a1[23] == a1[23] ? CcIdleDelayTick / 0xAu : (unsigned int)CcIdleDelayTick;
    a1[20] = a1[19] + v24;
    if ( MEMORY[0xFFFFF78000000320] > a1[20] )
    {
      *((_QWORD *)v6 + 1) = 35422LL;
      return 0;
    }
  }
  v21 = v41;
  if ( v41 )
  {
    v25 = a1[5] + *((unsigned int *)a1 + 12);
    a1[5] = v25;
    v26 = *v21;
    v27 = v46;
    if ( v26 + v46 <= v25 )
      return 0;
    a1[4] = v25;
    *((_DWORD *)a1 + 12) = v27 + v26 - v25;
  }
  if ( !*((_BYTE *)a1 + 201) )
    return 1;
  a1[26] += *((unsigned int *)a1 + 12);
  return (unsigned __int64)a1[28] >> 12 < a1[27];
}
