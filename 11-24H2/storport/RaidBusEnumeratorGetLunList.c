/*
 * XREFs of RaidBusEnumeratorGetLunList @ 0x140018080
 * Callers:
 *     RaidAdapterTargetedRescan @ 0x140064D84 (RaidAdapterTargetedRescan.c)
 * Callees:
 *     RaidAdapterFindUnitAtDirql @ 0x140017930 (RaidAdapterFindUnitAtDirql.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x140018EB0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorGetUnit @ 0x140019940 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x14001A200 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidBusEnumeratorGetLunList(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  int v7; // edi
  __int64 v8; // rdi
  KIRQL v9; // r13
  __int64 v10; // rsi
  unsigned int i; // ebp
  __int64 v12; // rbp
  unsigned __int64 v13; // r12
  _QWORD **v14; // r14
  _QWORD *j; // rsi
  __int64 v16; // rax
  int v17; // eax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r14
  unsigned int v21; // esi
  struct _KINTERRUPT *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  unsigned __int8 v25; // di
  int v26; // r13d
  __int64 v27; // r12
  __int64 v28; // rsi
  KIRQL CurrentIrql; // al
  __int64 *v30; // rbp
  __int64 **v31; // rsi
  __int64 *m; // rbx
  _QWORD *UnitAtDirql; // r14
  __int64 v34; // rbx
  __int64 *v35; // rbp
  __int64 **v36; // rbx
  __int64 *n; // rsi
  __int64 *v38; // rax
  PKINTERRUPT *v39; // r12
  unsigned __int64 v40; // rbx
  _QWORD **v41; // rbp
  _QWORD *k; // r14
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rbp
  unsigned int v46; // ebx
  PKINTERRUPT *v47; // rsi
  struct _KINTERRUPT *v48; // rcx
  struct _KINTERRUPT *v49; // rcx
  __int64 (__fastcall *v50)(__int64, unsigned __int64); // [rsp+20h] [rbp-D8h]
  __int64 (__fastcall *v51)(_QWORD *); // [rsp+20h] [rbp-D8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-D0h] BYREF
  __int64 (__fastcall *v53)(__int64, unsigned __int64); // [rsp+40h] [rbp-B8h]
  struct _KLOCK_QUEUE_HANDLE v54; // [rsp+48h] [rbp-B0h] BYREF
  _BYTE v55[8]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v56; // [rsp+68h] [rbp-90h]
  char v57; // [rsp+BCh] [rbp-3Ch]
  struct _KINTERRUPT **v58; // [rsp+100h] [rbp+8h]
  KIRQL v59; // [rsp+100h] [rbp+8h]
  __int64 (__fastcall *v61)(_QWORD *); // [rsp+118h] [rbp+20h]
  int v62; // [rsp+118h] [rbp+20h]

  memset_0(v55, 0, 0x60uLL);
  result = RaidBusEnumeratorGetUnit(a1, a2, v55);
  if ( (int)result < 0 )
    return result;
  if ( (int)RaidBusEnumeratorGetLunListFromTarget(a1, a2, v55, a3) < 0 )
  {
    v7 = RaidBusEnumeratorProbeLunZero(a1, a2);
    memset_0(a3, 0, 0xFFuLL);
    if ( v7 >= 0 )
      *a3 = 0x101010101010101LL;
  }
  v8 = *a1;
  if ( v57 )
  {
    v9 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *(_BYTE *)(v8 + 4369) )
    {
      v10 = *(_QWORD *)(v8 + 4352);
      v9 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v10 + 24));
      if ( *(_DWORD *)(v8 + 4336) == 2 )
      {
        for ( i = 1; i < *(_DWORD *)(v10 + 4); ++i )
          KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v10 + 48LL * i + 24));
      }
      v58 = (struct _KINTERRUPT **)(v8 + 848);
    }
    else
    {
      v49 = *(struct _KINTERRUPT **)(v8 + 848);
      v58 = (struct _KINTERRUPT **)(v8 + 848);
      if ( v49 )
      {
        v9 = KeAcquireInterruptSpinLock(v49);
        v58 = (struct _KINTERRUPT **)(v8 + 848);
      }
    }
    v12 = v56;
    v13 = (unsigned __int8)BYTE2(*(_DWORD *)(v56 + 104)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v56 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v56 + 104))) << 8);
    v61 = *(__int64 (__fastcall **)(_QWORD *))(v8 + 192);
    v50 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(v8 + 200);
    v14 = (_QWORD **)(*(_QWORD *)(v8 + 184)
                    + 16LL
                    * ((*(unsigned int (__fastcall **)(unsigned __int64))(v8 + 208))(v13) % *(_DWORD *)(v8 + 172)));
    for ( j = *v14; ; j = (_QWORD *)*j )
    {
      if ( j == v14 )
        goto LABEL_16;
      v16 = v61(j);
      v17 = v50(v16, v13);
      if ( !v17 )
        break;
      if ( v17 < 0 )
        goto LABEL_16;
    }
    v18 = (_QWORD *)*j;
    if ( *(_QWORD **)(*j + 8LL) != j )
      goto LABEL_66;
    v19 = (_QWORD *)j[1];
    if ( (_QWORD *)*v19 != j )
      goto LABEL_66;
    *v19 = v18;
    v18[1] = v19;
    --*(_DWORD *)(v8 + 168);
LABEL_16:
    if ( *(_BYTE *)(v8 + 4369) )
    {
      v20 = *(_QWORD *)(v8 + 4352);
      if ( *(_DWORD *)(v8 + 4336) == 2 )
      {
        v21 = *(_DWORD *)(v20 + 4) - 1;
        if ( *(_DWORD *)(v20 + 4) != 1 )
        {
          v39 = (PKINTERRUPT *)(v20 + 48LL * v21 + 24);
          do
          {
            KeReleaseInterruptSpinLock(*v39, *(_BYTE *)v20);
            v39 -= 6;
            --v21;
          }
          while ( v21 );
        }
      }
      v22 = *(struct _KINTERRUPT **)(v20 + 24);
    }
    else
    {
      v22 = *v58;
      if ( !*v58 )
        goto LABEL_21;
    }
    KeReleaseInterruptSpinLock(v22, v9);
LABEL_21:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 136), &LockHandle);
    v23 = *(_QWORD *)(v12 + 64);
    if ( *(_QWORD *)(v23 + 8) == v12 + 64 )
    {
      v24 = *(_QWORD **)(v12 + 72);
      if ( *v24 == v12 + 64 )
      {
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        --*(_DWORD *)(v8 + 160);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeCancelTimer((PKTIMER)(v12 + 1184));
        *(_DWORD *)(v12 + 744) = 0;
        goto LABEL_24;
      }
    }
LABEL_66:
    __fastfail(3u);
  }
LABEL_24:
  v62 = a2;
  v25 = 0;
  v26 = BYTE1(a2);
  v27 = (unsigned __int8)a2;
  do
  {
    v28 = *a1;
    BYTE2(v62) = v25;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      if ( (unsigned int)CurrentIrql >= *(_DWORD *)(v28 + 856) )
      {
        UnitAtDirql = RaidAdapterFindUnitAtDirql(v28, v62);
      }
      else
      {
        v59 = RaidAdapterAcquireInterruptLock(v28);
        v51 = *(__int64 (__fastcall **)(_QWORD *))(v28 + 192);
        v53 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(v28 + 200);
        v40 = v25 | ((BYTE1(v62) | (unsigned __int64)(v27 << 8)) << 8);
        v41 = (_QWORD **)(*(_QWORD *)(v28 + 184)
                        + 16LL
                        * ((*(unsigned int (__fastcall **)(unsigned __int64))(v28 + 208))(v40) % *(_DWORD *)(v28 + 172)));
        for ( k = *v41; k != v41; k = (_QWORD *)*k )
        {
          v43 = v51(k);
          v44 = v53(v43, v40);
          if ( !v44 )
          {
            UnitAtDirql = k - 10;
            goto LABEL_50;
          }
          if ( v44 < 0 )
            break;
        }
        UnitAtDirql = 0LL;
LABEL_50:
        if ( *(_BYTE *)(v28 + 4369) )
        {
          v45 = *(_QWORD *)(v28 + 4352);
          if ( *(_DWORD *)(v28 + 4336) == 2 )
          {
            v46 = *(_DWORD *)(v45 + 4) - 1;
            if ( *(_DWORD *)(v45 + 4) != 1 )
            {
              v47 = (PKINTERRUPT *)(v45 + 48LL * v46 + 24);
              do
              {
                KeReleaseInterruptSpinLock(*v47, *(_BYTE *)v45);
                v47 -= 6;
                --v46;
              }
              while ( v46 );
            }
          }
          KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v45 + 24), v59);
        }
        else
        {
          v48 = *(struct _KINTERRUPT **)(v28 + 848);
          if ( v48 )
            KeReleaseInterruptSpinLock(v48, v59);
        }
      }
    }
    else
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      v30 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v28 + 136), &LockHandle);
      v31 = (__int64 **)(v28 + 144);
      for ( m = *v31; m != (__int64 *)v31; m = (__int64 *)*m )
      {
        v30 = m - 8;
        if ( ((unsigned __int8)BYTE2(*((_DWORD *)m + 10)) | ((((unsigned __int8)*((_DWORD *)m + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)m + 10))) << 8)) == (v25 | ((v26 | ((_DWORD)v27 << 8)) << 8)) )
          break;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      UnitAtDirql = 0LL;
      if ( m != (__int64 *)v31 )
        UnitAtDirql = v30;
    }
    if ( UnitAtDirql )
      goto LABEL_39;
    v34 = *a1;
    v35 = 0LL;
    memset(&v54, 0, sizeof(v54));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v34 + 216), &v54);
    v36 = (__int64 **)(v34 + 224);
    for ( n = *v36; n != (__int64 *)v36; n = (__int64 *)*n )
    {
      v35 = n - 8;
      if ( ((unsigned __int8)BYTE2(*((_DWORD *)n + 10)) | ((((unsigned __int8)*((_DWORD *)n + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)n + 10))) << 8)) == (v25 | ((v26 | ((_DWORD)v27 << 8)) << 8)) )
        break;
    }
    KeReleaseInStackQueuedSpinLock(&v54);
    v38 = 0LL;
    if ( n != (__int64 *)v36 )
      v38 = v35;
    if ( v38 )
LABEL_39:
      *((_BYTE *)a3 + v25) = 1;
    ++v25;
  }
  while ( v25 != 0xFF );
  return 0LL;
}
