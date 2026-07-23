/*
 * XREFs of PfFileInfoNotify @ 0x14022A7B0
 * Callers:
 *     <none>
 * Callees:
 *     PfLogEvent @ 0x14020DB78 (PfLogEvent.c)
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PfpPartitionIterate @ 0x14022A280 (PfpPartitionIterate.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x14022B370 (ExReleaseRundownProtectionCacheAware.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     PfpPartitionGetFirst @ 0x14022B450 (PfpPartitionGetFirst.c)
 *     PfSnLogPageFaultCommon @ 0x14022B5F0 (PfSnLogPageFaultCommon.c)
 *     PfpPartitionReferenceParentSafe @ 0x14022BCDC (PfpPartitionReferenceParentSafe.c)
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140238FA0 (ExAcquireRundownProtectionCacheAware.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     PsGetPagePriorityThread @ 0x1403305B0 (PsGetPagePriorityThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     PfTFiNotifyFileStreamCreateCallback @ 0x14044B840 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfTFiNotifyFileInfoDeleteCallback @ 0x14044B9D0 (PfTFiNotifyFileInfoDeleteCallback.c)
 *     PfpPartitionCanDoNameLoggingCallback @ 0x14045AA10 (PfpPartitionCanDoNameLoggingCallback.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PfpRpFileKeyUpdate @ 0x14083FEE0 (PfpRpFileKeyUpdate.c)
 *     PfSnLogStreamCreate @ 0x140949D60 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x14094A290 (PfSnLogVolumeCreate.c)
 *     PfSnNameRemoveAll @ 0x14094A440 (PfSnNameRemoveAll.c)
 */

__int64 __fastcall PfFileInfoNotify(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 First; // rsi
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(_QWORD, _QWORD); // r9
  __int64 v9; // rbx
  _QWORD *j; // r14
  int v11; // eax
  __int64 *v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  __int64 v15; // r15
  unsigned __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r13
  __int64 v19; // rsi
  signed __int64 v20; // rdx
  signed __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // r9
  int v24; // r10d
  __int64 v25; // rax
  int v26; // r13d
  int v27; // edi
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rtt
  KIRQL v30; // bl
  struct _EX_RUNDOWN_REF *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rbx
  signed __int64 v36; // rax
  signed __int64 v37; // rtt
  __int64 v38; // rdi
  unsigned int v39; // edi
  unsigned int PagePriorityThread; // eax
  __int64 v42; // r8
  unsigned __int64 v43; // r9
  __int64 v44; // r10
  __int64 v45; // r11
  unsigned int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  int v50; // r14d
  signed __int64 v51; // rax
  signed __int64 v52; // rtt
  signed __int64 v53; // rax
  signed __int64 v54; // rtt
  int v55; // ecx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int128 *v59; // r8
  __int64 (__fastcall *v60)(); // rcx
  __int64 v61; // rdx
  _QWORD *v62; // rcx
  unsigned __int64 v63; // rdx
  __int64 v64; // rcx
  __int128 *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rax
  unsigned __int64 v69; // rdx
  int v70; // ecx
  int v71; // ecx
  __int64 i; // rbx
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  signed __int64 v77; // rax
  size_t v78; // [rsp+28h] [rbp-E0h]
  BOOLEAN v79; // [rsp+38h] [rbp-D0h]
  int v80; // [rsp+3Ch] [rbp-CCh] BYREF
  __int128 v81; // [rsp+40h] [rbp-C8h] BYREF
  __int128 *v82; // [rsp+50h] [rbp-B8h]
  __int64 v83; // [rsp+58h] [rbp-B0h]
  __int64 v84; // [rsp+60h] [rbp-A8h]
  __int64 v85; // [rsp+68h] [rbp-A0h]
  int v86[4]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v87; // [rsp+80h] [rbp-88h]
  unsigned __int64 v88; // [rsp+90h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-70h] BYREF
  __int128 v90; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v91; // [rsp+C0h] [rbp-48h]
  BOOL v92; // [rsp+C8h] [rbp-40h]
  int v93; // [rsp+CCh] [rbp-3Ch]
  __int128 v94; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v95; // [rsp+E0h] [rbp-28h]
  __int128 v96; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v97; // [rsp+F8h] [rbp-10h]

  v84 = a1;
  v1 = *(_DWORD *)a1 == 15;
  LODWORD(v95) = 0;
  v2 = a1;
  v97 = 0LL;
  v94 = 0LL;
  v91 = 0LL;
  v96 = 0LL;
  v92 = 0;
  v90 = 0LL;
  v82 = 0LL;
  v81 = 0LL;
  if ( !v1 )
    return (unsigned int)-1073741811;
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 8) != 0 )
  {
    v55 = *(_DWORD *)(a1 + 4);
    if ( v55 != 7 )
    {
      v70 = v55 - 10;
      if ( v70 )
      {
        v71 = v70 - 1;
        if ( v71 )
        {
          if ( v71 == 1 )
            return (dword_140E67260 & 2) != 0 ? 0xC0000189 : 0;
          else
            return (unsigned int)-1073741637;
        }
        FsRtlAcquirePushLockExclusive(&qword_140E670F8);
        if ( qword_140E670E8 )
        {
          FsRtlAcquirePushLockExclusive(&qword_140E67100);
          dword_140E67118 |= 1u;
          for ( i = qword_140E67108; (__int64 *)i != &qword_140E67108; i = *(_QWORD *)i )
          {
            *(_DWORD *)(i + 68) |= 4u;
            KeSetEvent((PRKEVENT)(i + 88), 0, 0);
          }
          VmpReleasePushLockExclusive((ULONG_PTR)&qword_140E67100);
          ExWaitForRundownProtectionRelease(&RunRef);
          _InterlockedExchange64((volatile __int64 *)&RunRef, 1LL);
          qword_140E670E8 = 0LL;
          v39 = 0;
        }
        else
        {
          v39 = -1073741275;
        }
      }
      else
      {
        FsRtlAcquirePushLockExclusive(&qword_140E670F8);
        if ( qword_140E670E8 )
        {
          v39 = -1073741791;
        }
        else
        {
          FsRtlAcquirePushLockExclusive(&qword_140E67100);
          dword_140E67118 &= ~1u;
          VmpReleasePushLockExclusive((ULONG_PTR)&qword_140E67100);
          guard_dispatch_icall_no_overrides(PfpPrefetchSharedConflictNotifyStart, v73, v74, v75);
          qword_140E670E8 = *(_QWORD *)(v2 + 16);
          v39 = 0;
          _InterlockedExchange64((volatile __int64 *)&RunRef, 0LL);
        }
      }
      VmpReleasePushLockExclusive((ULONG_PTR)&qword_140E670F8);
      return v39;
    }
    *(_DWORD *)(v2 + 16) = _InterlockedIncrement((volatile signed __int32 *)&xmmword_140F0E6E8);
    return 0;
  }
  if ( (v3 & 4) != 0 )
  {
    v56 = *(_DWORD *)(a1 + 4);
    if ( v56 == 3 )
    {
      PfSnNameRemoveAll(*(_QWORD *)(a1 + 16));
    }
    else if ( v56 )
    {
      if ( v56 == 2 )
        PfSnLogStreamCreate(*(_QWORD *)(a1 + 16));
    }
    else
    {
      PfSnLogVolumeCreate(*(_QWORD *)(a1 + 16));
    }
  }
  if ( (*(_DWORD *)(v2 + 8) & 1) == 0 )
    return 0;
  v80 = 0;
  First = PfpPartitionGetFirst(&unk_140E67128);
  if ( First )
  {
    while ( 1 )
    {
      v7 = PfpPartitionReferenceParentSafe(First, v4, v6, PfpPartitionCanDoNameLoggingCallback);
      if ( v7 )
      {
        if ( v8 == PfTFiNotifyFileInfoDeleteCallback )
          v49 = PfTFiNotifyFileInfoDeleteCallback(First, &v80);
        else
          v49 = v8 == PfTFiNotifyFileStreamCreateCallback
              ? PfTFiNotifyFileStreamCreateCallback(First, &v80)
              : PfpPartitionCanDoNameLoggingCallback(First, &v80);
        v50 = v49;
        PsDereferencePartition(v7, 1951426128LL);
        if ( v50 >= 0 )
          break;
      }
      memset(&LockHandle, 0, sizeof(LockHandle));
      v9 = *(_QWORD *)(First + 8);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 888), &LockHandle);
      for ( j = *(_QWORD **)(First + 24); ; j = (_QWORD *)*j )
      {
        if ( j == (_QWORD *)(v9 + 896) )
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          goto LABEL_10;
        }
        if ( ExAcquireRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)*(j - 1)) )
          break;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(First + 16));
      First = (__int64)(j - 3);
      if ( j == (_QWORD *)24 )
        goto LABEL_12;
    }
    if ( First )
LABEL_10:
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(First + 16));
  }
LABEL_12:
  if ( !v80 && (unsigned int)(*(_DWORD *)(v2 + 4) - 2) > 2 )
    return (unsigned int)-1073741697;
  v11 = *(_DWORD *)(v2 + 4);
  if ( v11 != 4 )
  {
    switch ( v11 )
    {
      case 0:
        v39 = PfpPartitionIterate((__int64 (__fastcall *)(_QWORD, _QWORD))PfTFiNotifyVolumeCreateCallback, 2, v2);
        if ( (v39 & 0x80000000) == 0 )
          goto LABEL_81;
        return v39;
      case 1:
        v76 = *(_QWORD *)(v2 + 16);
        *(_QWORD *)&v90 = 2LL;
        v93 = 0;
        *((_QWORD *)&v90 + 1) = *(_QWORD *)(v76 + 8);
        v91 = *(unsigned int *)(v76 + 56);
        v92 = 0;
        PfpPartitionIterate(PfTFiNotifyFileInfoDeleteCallback, 2, (__int64)&v90);
        return 0;
      case 2:
        v61 = *(_QWORD *)(v2 + 16);
        if ( HIWORD(*(_DWORD *)(v61 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v61 + 32) )
          goto LABEL_81;
        PfpRpFileKeyUpdate(&unk_140E67048, v61, 1LL);
        v39 = PfpPartitionIterate(PfTFiNotifyFileStreamCreateCallback, 2, v2);
        if ( (v39 & 0x80000000) == 0 )
          return 0;
        return v39;
      case 3:
        v57 = *(_QWORD *)(v2 + 16);
        if ( HIWORD(*(_DWORD *)(v57 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v57 + 32) )
          goto LABEL_81;
        PfpRpFileKeyUpdate(&unk_140E67048, v57, 0LL);
        v58 = *(_QWORD *)(v2 + 16);
        v59 = &v90;
        DWORD1(v90) = 0;
        v93 = 0;
        *((_QWORD *)&v90 + 1) = *(_QWORD *)(v58 + 16);
        v91 = *(unsigned int *)(v58 + 44);
        v92 = 0;
        v60 = (__int64 (__fastcall *)())PfTFiNotifyFileInfoDeleteCallback;
        v92 = (*(_BYTE *)(v58 + 36) & 8) != 0;
        goto LABEL_80;
      case 8:
        v66 = *(_QWORD *)(v2 + 16);
        DWORD1(v94) = 0;
        v67 = *(_DWORD *)v66 & 3;
        LODWORD(v94) = *(_DWORD *)(v66 + 4);
        *((_QWORD *)&v94 + 1) = *(_QWORD *)(v66 + 8);
        v68 = *(_QWORD *)(v66 + 16) + 4095LL;
        HIDWORD(v81) = 0;
        LODWORD(v81) = 24;
        v95 = (2 * v67) | v68 & 0xFFFFFFFFFFFFF000uLL;
        v63 = MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320];
        v64 = MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320]);
        v65 = &v94;
        goto LABEL_91;
      case 13:
        v62 = *(_QWORD **)(v2 + 16);
        if ( v62[1] )
        {
          *((_QWORD *)&v96 + 1) = v62[1];
          v97 = (unsigned int)xmmword_140F0E6E8;
          *(_QWORD *)&v96 = *v62;
          HIDWORD(v81) = 0;
          LODWORD(v81) = 31;
          v63 = MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320];
          v64 = MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320]);
          v65 = &v96;
LABEL_91:
          v59 = &v81;
          DWORD2(v81) = 24;
          v69 = ((v64 << 8) + (v63 >> 24)) >> 10;
          v60 = PfpPartitionLogEventCallback;
          DWORD1(v81) = dword_140E66FCC + v69;
          v82 = v65;
LABEL_80:
          PfpPartitionIterate((__int64 (__fastcall *)(_QWORD, _QWORD))v60, 2, (__int64)v59);
LABEL_81:
          v39 = 0;
        }
        else
        {
          v39 = -1073741747;
        }
        break;
      default:
        return (unsigned int)-1073741637;
    }
    return v39;
  }
  v12 = *(__int64 **)(v2 + 16);
  v13 = v12[1] & 0xFFF;
  v14 = (v13 + (unsigned __int64)*((unsigned int *)v12 + 4) + 4095) >> 12;
  if ( PfSnNumActiveTraces )
  {
    v15 = v12[4];
    v16 = (v13 + (unsigned __int64)*((unsigned int *)v12 + 4) + 4095) >> 12;
    v17 = *v12;
    v18 = v12[1];
    v19 = *(_QWORD *)(v15 + 544);
    v85 = v12[3];
    v83 = v17;
    _m_prefetchw((const void *)(v19 + 912));
    v20 = *(_QWORD *)(v19 + 912);
    if ( (v20 & 0xF) != 0 )
    {
      do
      {
        v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 912), v20 - 1, v20);
        if ( v20 == v21 )
          break;
        v20 = v21;
      }
      while ( (v21 & 0xF) != 0 );
    }
    v22 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (v20 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v20 &= 0xFu;
      if ( (unsigned int)v20 > 1 )
      {
LABEL_20:
        if ( (*(_BYTE *)(v15 + 1448) & 0x40) == 0 )
        {
          if ( (int)PsGetIoPriorityThread(v15, v20, v6, v16) < 2 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v22 + 336));
          }
          else
          {
            v25 = *(_QWORD *)(v22 + 432);
            if ( !v25 || v25 == v15 && *(_QWORD *)(v22 + 440) == *(_QWORD *)(v15 + 1296) )
            {
              v26 = v18 & 0xFFFFF000;
              if ( v23 )
              {
                v27 = v85;
                v28 = v14;
                do
                {
                  if ( (int)PfSnLogPageFaultCommon(v22, v24, v27, v26, 0) < 0 )
                    break;
                  v24 = v83;
                  v26 += 4096;
                  --v28;
                }
                while ( v28 );
                v2 = v84;
              }
            }
          }
        }
        _m_prefetchw((const void *)(v22 + 360));
        v29 = *(_QWORD *)(v22 + 360) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v29 != _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 360), v29 - 2, v29) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v22 + 360));
        goto LABEL_35;
      }
      if ( (_DWORD)v20 )
      {
        _m_prefetchw((const void *)(v22 + 360));
        v51 = *(_QWORD *)(v22 + 360);
        while ( (v51 & 1) == 0 )
        {
          v52 = v51;
          v51 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 360), v51 + 30, v51);
          if ( v52 == v51 )
          {
            _m_prefetchw((const void *)(v19 + 912));
            v53 = *(_QWORD *)(v19 + 912);
            while ( (v53 & 0xF) == 0 && v22 == (v53 & 0xFFFFFFFFFFFFFFF0uLL) )
            {
              v54 = v53;
              v53 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 912), v53 + 15, v53);
              if ( v54 == v53 )
                goto LABEL_20;
            }
            _m_prefetchw((const void *)(v22 + 360));
            v20 = *(_QWORD *)(v22 + 360);
            while ( (v20 & 1) == 0 )
            {
              v77 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 360), v20 - 30, v20);
              v1 = v20 == v77;
              v20 = v77;
              if ( v1 )
                goto LABEL_20;
            }
            v20 &= ~1uLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFF1uLL) == 15
              && !_interlockedbittestandreset((volatile signed __int32 *)(v20 + 32), 0) )
            {
              KeSetEvent((PRKEVENT)(v20 + 8), 0, 0);
              goto LABEL_123;
            }
            goto LABEL_20;
          }
        }
        goto LABEL_20;
      }
      v79 = 1;
      v30 = KeAcquireSpinLockRaiseToDpc(&qword_140E67160);
      v31 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v19 + 912) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( v31 )
        v79 = ExAcquireRundownProtection_0(v31 + 45);
      KeReleaseSpinLock(&qword_140E67160, v30);
      v22 = 0LL;
      if ( v79 )
        v22 = (unsigned __int64)v31;
    }
    if ( !v22 )
      goto LABEL_35;
LABEL_123:
    v16 = v14;
    goto LABEL_20;
  }
LABEL_35:
  v32 = *(_QWORD *)(v2 + 16);
  *(_OWORD *)v86 = 0LL;
  v87 = 0LL;
  v33 = *(_QWORD *)(v32 + 32);
  v34 = *(_QWORD *)(v33 + 544);
  v88 = 0LL;
  v35 = *(_QWORD **)(v34 + 1880);
  _m_prefetchw(v35 + 5);
  v36 = v35[5];
  do
  {
    if ( (unsigned __int64)(v36 + 1) <= 1 )
    {
      if ( v36 )
        __fastfail(0xEu);
      v35 = 0LL;
      goto LABEL_39;
    }
    v37 = v36;
    v36 = _InterlockedCompareExchange64(v35 + 5, v36 + 1, v36);
  }
  while ( v37 != v36 );
  v38 = v35[4];
  if ( v35 && v38 && *(_DWORD *)(v38 + 608) < *(_DWORD *)(v38 + 612) )
  {
    PagePriorityThread = PsGetPagePriorityThread(v33, *(unsigned int *)(*v35 + 17456LL));
    if ( PagePriorityThread < v46 )
    {
      v39 = 0;
    }
    else
    {
      v47 = *(_QWORD *)(v42 + 464);
      *(_QWORD *)&v87 = v14 | (v44 << 63);
      v48 = (*(_QWORD *)(v42 + 504) ^ v47) & 0x1FFFFFFFFFFFFFFFLL;
      *(_QWORD *)&v86[2] = v43 >> 12;
      *((_QWORD *)&v87 + 1) = v48;
      v88 = __PAIR64__(v47, xmmword_140F0E6E8);
      *(_QWORD *)v86 = v45;
      LODWORD(v78) = 40;
      v39 = PfLogEvent(
              v38,
              10,
              dword_140E66FCC
            + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
              v86,
              v78);
    }
    goto LABEL_40;
  }
LABEL_39:
  v39 = -1073741637;
  if ( !v35 )
    return v39;
LABEL_40:
  PsDereferencePartition(v35, 1951426128LL);
  return v39;
}
