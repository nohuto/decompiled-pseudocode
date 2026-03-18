/*
 * XREFs of ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x14001D38C
 * Callers:
 *     VidSchFlushQueuePackets @ 0x14001D370 (VidSchFlushQueuePackets.c)
 *     VidSchFlushPresentReferencesAndDisableOverlays @ 0x1400E32B0 (VidSchFlushPresentReferencesAndDisableOverlays.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiClearFlipDevice @ 0x14001CD04 (VidSchiClearFlipDevice.c)
 *     VidSchiAcceptsIncomingWork @ 0x14001D980 (VidSchiAcceptsIncomingWork.c)
 *     ?VidSchiAbortMmIoFlipPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_DEVICE@@I@Z @ 0x14001D9A0 (-VidSchiAbortMmIoFlipPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiSetFlipDevice @ 0x14001E0BC (VidSchiSetFlipDevice.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14001FB70 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1400254A0 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiFlushQueuePacket @ 0x140043898 (VidSchiFlushQueuePacket.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchFlushQueuePacketsInternal(__int64 *a1, unsigned int a2, unsigned int a3, __int64 a4, char a5)
{
  KSPIN_LOCK *v5; // r15
  __int64 v6; // r13
  __int64 *kk; // rdi
  int v8; // edx
  __int64 v9; // rcx
  unsigned __int64 *v10; // r12
  KSPIN_LOCK *v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 *i; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  unsigned __int64 *v16; // rax
  unsigned __int64 **v17; // rcx
  unsigned __int64 **v18; // rax
  _QWORD *v19; // rax
  int v20; // ecx
  __int64 v21; // rsi
  unsigned int j; // edx
  KSPIN_LOCK *k; // r9
  _QWORD *v24; // r11
  _QWORD *n; // r11
  _QWORD *v26; // r9
  KSPIN_LOCK *v27; // rcx
  __int64 *v28; // rcx
  __int64 *v29; // rax
  _QWORD *v30; // r14
  _QWORD *m; // r11
  _QWORD *v32; // r14
  _QWORD *v33; // r11
  unsigned int v34; // r8d
  _QWORD *v35; // r12
  _QWORD *ii; // r11
  KSPIN_LOCK *jj; // r14
  __int64 *v38; // rdx
  __int64 **v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 *v43; // r14
  _QWORD *mm; // rdi
  unsigned int v45; // eax
  _QWORD *v46; // rax
  _QWORD *nn; // r14
  __int64 **v48; // rcx
  __int64 **v49; // r15
  unsigned int v50; // eax
  __int64 *v51; // [rsp+40h] [rbp-91h] BYREF
  unsigned __int64 *v52; // [rsp+48h] [rbp-89h]
  unsigned int v53; // [rsp+50h] [rbp-81h]
  __int64 *v54; // [rsp+58h] [rbp-79h] BYREF
  _QWORD v55[2]; // [rsp+60h] [rbp-71h] BYREF
  char v56; // [rsp+70h] [rbp-61h]
  int v57; // [rsp+74h] [rbp-5Dh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-59h] BYREF
  _QWORD *v59; // [rsp+90h] [rbp-41h]
  unsigned __int64 *v60; // [rsp+98h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE v61; // [rsp+A0h] [rbp-31h] BYREF
  _QWORD v62[4]; // [rsp+B8h] [rbp-19h] BYREF
  __int16 v63; // [rsp+D8h] [rbp+7h]
  _QWORD *v64; // [rsp+130h] [rbp+5Fh]
  unsigned int v66; // [rsp+140h] [rbp+6Fh]
  char v67; // [rsp+148h] [rbp+77h]

  v6 = 0xFFFFFFFFLL;
  kk = a1;
  if ( a3 < *((_DWORD *)a1 + 10) )
    v6 = a3;
  v66 = v6;
  if ( !(unsigned __int8)VidSchiAcceptsIncomingWork() )
    return;
  v10 = (unsigned __int64 *)(v9 + 352);
  v64 = (_QWORD *)(v9 + 352);
  v11 = (KSPIN_LOCK *)(v9 + 1984);
  if ( v8 != 1 )
  {
    v62[0] = v9 + 1984;
    v63 = 0;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v62);
    v12 = *v10;
    v54 = kk;
    v56 = 0;
    v57 = 2;
    v55[1] = v55;
    v55[0] = v55;
    if ( (unsigned __int64 *)v12 != v10 )
      goto LABEL_65;
LABEL_75:
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v54, 0LL);
LABEL_76:
    AcquireSpinLock::Release((AcquireSpinLock *)v62);
    return;
  }
  v53 = 0;
  v52 = (unsigned __int64 *)&v51;
  v51 = (__int64 *)&v51;
  v12 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 1984), &LockHandle);
  for ( i = (unsigned __int64 *)*v10; i != v10; i = (unsigned __int64 *)*i )
  {
    _m_prefetchw(i - 10);
    v14 = *(i - 10);
    do
    {
      if ( !v14 )
      {
        v16 = (unsigned __int64 *)*i;
        if ( *(unsigned __int64 **)(*i + 8) == i )
        {
          v17 = (unsigned __int64 **)i[1];
          if ( *v17 == i )
          {
            *v17 = v16;
            v16[1] = (unsigned __int64)v17;
            v18 = (unsigned __int64 **)v52;
            if ( (__int64 **)*v52 == &v51 )
            {
              i[1] = (unsigned __int64)v52;
              *i = (unsigned __int64)&v51;
              *v18 = i;
              v52 = i;
              goto LABEL_7;
            }
          }
        }
LABEL_16:
        __fastfail(3u);
      }
      v15 = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)i - 10, v14 + 1, v14);
    }
    while ( v15 != v14 );
    v12 = (unsigned int)(v12 + 1);
    v53 = v12;
LABEL_7:
    ;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v19 = (_QWORD *)*v10;
  v20 = 0;
  if ( (unsigned __int64 *)*v10 != v10 )
  {
    do
    {
      v59 = v19;
      v21 = (__int64)(v19 - 13);
      LODWORD(v64) = v20 + 1;
      v60 = (unsigned __int64 *)*v19;
      v67 = 0;
      KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
      for ( j = 0; j < *((_DWORD *)kk + 10); ++j )
      {
        if ( ((_DWORD)v6 == -1 || (_DWORD)v6 == j) && *(_QWORD *)(kk[j + 429] + 16) == v21 )
        {
          v67 = 1;
          break;
        }
      }
      v5 = (KSPIN_LOCK *)(v21 + 72);
      for ( k = *(KSPIN_LOCK **)(v21 + 72); k != v5; k = (KSPIN_LOCK *)*k )
      {
        v30 = k + 80;
        for ( m = (_QWORD *)k[80]; m != v30; m = (_QWORD *)*v33 )
          VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(m - 4), (struct _VIDSCH_DEVICE *)v21, v6);
        v32 = k + 82;
        for ( n = (_QWORD *)k[82]; n != v32; n = (_QWORD *)*v24 )
          VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(n - 4), (struct _VIDSCH_DEVICE *)v21, v6);
      }
      v26 = *(_QWORD **)(v21 + 88);
      if ( v26 != (_QWORD *)(v21 + 88) )
      {
        v34 = v66;
        do
        {
          v35 = v26 + 4;
          for ( ii = (_QWORD *)v26[4]; ii != v35; ii = (_QWORD *)*ii )
          {
            v5 = ii + 19;
            for ( jj = (KSPIN_LOCK *)ii[19]; jj != v5; jj = (KSPIN_LOCK *)*jj )
              VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(jj - 4), (struct _VIDSCH_DEVICE *)v21, v34);
          }
          v26 = (_QWORD *)*v26;
        }
        while ( v26 != (_QWORD *)(v21 + 88) );
        v10 = (unsigned __int64 *)(kk + 44);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v6 = v66;
      if ( v67 )
      {
        if ( v66 == -1 )
          VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)kk, v21, 6, 0xFFFFFFFD, 0);
        else
          VidSchiSetFlipDevice((struct _VIDSCH_GLOBAL *)kk, 6, 0, a5);
      }
      v27 = (KSPIN_LOCK *)(*(_QWORD *)(v21 + 32) + 1984LL);
      memset(&v61, 0, sizeof(v61));
      KeAcquireInStackQueuedSpinLock(v27, &v61);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v40 = *v59;
        if ( *(_QWORD **)(*v59 + 8LL) != v59 )
          goto LABEL_16;
        v41 = (_QWORD *)v59[1];
        if ( (_QWORD *)*v41 != v59 )
          goto LABEL_16;
        *v41 = v40;
        *(_QWORD *)(v40 + 8) = v41;
        KeReleaseInStackQueuedSpinLock(&v61);
        ExFreePoolWithTag((PVOID)v21, 0);
      }
      else
      {
        KeReleaseInStackQueuedSpinLock(&v61);
      }
      v19 = v60;
      v11 = (KSPIN_LOCK *)(kk + 248);
      v20 = (int)v64;
    }
    while ( v60 != v10 );
    v12 = v53;
    v11 = (KSPIN_LOCK *)(kk + 248);
  }
  if ( v20 != (_DWORD)v12 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2304LL, (int)v12, v20, kk);
    WdLogGlobalForLineNumber = 906;
    do
    {
LABEL_100:
      VidSchiFlushQueuePacket(&v54, v42, v11 - 4, a2);
      v11 = (KSPIN_LOCK *)*v11;
    }
    while ( v11 != v5 );
LABEL_69:
    for ( kk = (__int64 *)*kk; ; kk = *(__int64 **)(v12 - 32) )
    {
      if ( kk != (__int64 *)v6 )
      {
        v43 = (__int64 *)kk[80];
        if ( v43 != kk + 80 )
        {
          v45 = a2;
          do
          {
            if ( !v45 )
            {
              if ( (v43[5] & 0x40080) != 0 && v43[16] )
              {
                VidSchiSubmitPresentHistoryToken((unsigned int)&v54, (_DWORD)v43 - 32, 0, 0, 0LL);
                v43[16] = 0LL;
              }
              v45 = a2;
            }
            v43 = (__int64 *)*v43;
          }
          while ( v43 != kk + 80 );
        }
        v5 = (KSPIN_LOCK *)(kk + 82);
        v11 = (KSPIN_LOCK *)kk[82];
        if ( v11 != (KSPIN_LOCK *)(kk + 82) )
          goto LABEL_100;
        goto LABEL_69;
      }
      for ( mm = *(_QWORD **)(v12 - 16); mm != (_QWORD *)(v12 - 16); mm = (_QWORD *)*mm )
      {
        v46 = mm + 4;
        for ( nn = (_QWORD *)mm[4]; nn != v46; nn = (_QWORD *)*nn )
        {
          v48 = (__int64 **)(nn + 19);
          v49 = (__int64 **)nn[19];
          if ( v49 != nn + 19 )
          {
            v50 = a2;
            do
            {
              if ( !v50 )
              {
                if ( ((_DWORD)v49[5] & 0x40080) != 0 && v49[16] )
                {
                  VidSchiSubmitPresentHistoryToken((unsigned int)&v54, (_DWORD)v49 - 32, 0, 0, 0LL);
                  v48 = (__int64 **)(nn + 19);
                  v49[16] = 0LL;
                }
                v50 = a2;
              }
              v49 = (__int64 **)*v49;
            }
            while ( v49 != v48 );
            v46 = mm + 4;
          }
        }
      }
      v12 = *(_QWORD *)v12;
      if ( (_QWORD *)v12 == v64 )
        break;
LABEL_65:
      v6 = v12 - 32;
    }
    if ( v56 || !v57 )
      goto LABEL_76;
    goto LABEL_75;
  }
  KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
  v28 = kk + 44;
  while ( 1 )
  {
    v29 = v51;
    if ( v51 == (__int64 *)&v51 )
      break;
    if ( (__int64 **)v51[1] != &v51 )
      goto LABEL_16;
    v38 = (__int64 *)*v51;
    if ( *(__int64 **)(*v51 + 8) != v51 )
      goto LABEL_16;
    v51 = (__int64 *)*v51;
    v38[1] = (__int64)&v51;
    v39 = (__int64 **)kk[45];
    if ( *v39 != v28 )
      goto LABEL_16;
    *v29 = (__int64)v28;
    v29[1] = (__int64)v39;
    *v39 = v29;
    kk[45] = (__int64)v29;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
