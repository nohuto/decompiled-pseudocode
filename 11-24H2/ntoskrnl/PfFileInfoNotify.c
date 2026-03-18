/*
 * XREFs of PfFileInfoNotify @ 0x140275220
 * Callers:
 *     <none>
 * Callees:
 *     PsGetPagePriorityThread @ 0x140208FD0 (PsGetPagePriorityThread.c)
 *     PfLogEvent @ 0x140245398 (PfLogEvent.c)
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PfpPartitionIterate @ 0x140274CF0 (PfpPartitionIterate.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140275DE0 (ExReleaseRundownProtectionCacheAware.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     PfpPartitionGetFirst @ 0x140275EC0 (PfpPartitionGetFirst.c)
 *     PfSnLogPageFaultCommon @ 0x140276060 (PfSnLogPageFaultCommon.c)
 *     PfpPartitionReferenceParentSafe @ 0x14027674C (PfpPartitionReferenceParentSafe.c)
 *     PsGetIoPriorityThread @ 0x140276920 (PsGetIoPriorityThread.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140283A10 (ExAcquireRundownProtectionCacheAware.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403C5B9C (FsRtlAcquirePushLockExclusive.c)
 *     PfTFiNotifyFileStreamCreateCallback @ 0x140456870 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfTFiNotifyFileInfoDeleteCallback @ 0x140456A00 (PfTFiNotifyFileInfoDeleteCallback.c)
 *     PfpPartitionCanDoNameLoggingCallback @ 0x1404642E0 (PfpPartitionCanDoNameLoggingCallback.c)
 *     VmpReleasePushLockExclusive @ 0x1404860F0 (VmpReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PfpRpFileKeyUpdate @ 0x140843C20 (PfpRpFileKeyUpdate.c)
 *     PfSnLogStreamCreate @ 0x1409622A0 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x1409627D0 (PfSnLogVolumeCreate.c)
 *     PfSnNameRemoveAll @ 0x140962980 (PfSnNameRemoveAll.c)
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
  unsigned __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // r10
  __int64 v16; // r13
  __int64 v17; // rsi
  signed __int64 v18; // rdx
  signed __int64 v19; // rax
  unsigned __int64 v20; // rbx
  unsigned int v21; // edx
  __int64 v22; // r9
  int v23; // r10d
  __int64 v24; // rax
  int v25; // r13d
  int v26; // edi
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rtt
  KIRQL v29; // bl
  struct _EX_RUNDOWN_REF *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rbx
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  __int64 v37; // rdi
  unsigned int v38; // edi
  unsigned int PagePriorityThread; // eax
  __int64 v41; // r8
  unsigned __int64 v42; // r9
  __int64 v43; // r10
  __int64 v44; // r11
  unsigned int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  int v49; // r14d
  signed __int64 v50; // rax
  signed __int64 v51; // rtt
  signed __int64 v52; // rax
  signed __int64 v53; // rtt
  int v54; // ecx
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int128 *v58; // r8
  __int64 (__fastcall *v59)(); // rcx
  __int64 v60; // rdx
  _QWORD *v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  __int128 *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  int v69; // ecx
  int v70; // ecx
  __int64 i; // rbx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  signed __int64 v76; // rdx
  signed __int64 v77; // rax
  unsigned __int64 v78; // rdx
  size_t v79; // [rsp+28h] [rbp-E0h]
  BOOLEAN v80; // [rsp+38h] [rbp-D0h]
  int v81; // [rsp+3Ch] [rbp-CCh] BYREF
  __int128 v82; // [rsp+40h] [rbp-C8h] BYREF
  __int128 *v83; // [rsp+50h] [rbp-B8h]
  __int64 v84; // [rsp+58h] [rbp-B0h]
  __int64 v85; // [rsp+60h] [rbp-A8h]
  __int64 v86; // [rsp+68h] [rbp-A0h]
  int v87[4]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v88; // [rsp+80h] [rbp-88h]
  unsigned __int64 v89; // [rsp+90h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-70h] BYREF
  __int128 v91; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v92; // [rsp+C0h] [rbp-48h]
  BOOL v93; // [rsp+C8h] [rbp-40h]
  int v94; // [rsp+CCh] [rbp-3Ch]
  __int128 v95; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v96; // [rsp+E0h] [rbp-28h]
  __int128 v97; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v98; // [rsp+F8h] [rbp-10h]

  v85 = a1;
  v1 = *(_DWORD *)a1 == 15;
  LODWORD(v96) = 0;
  v2 = a1;
  v98 = 0LL;
  v95 = 0LL;
  v92 = 0LL;
  v97 = 0LL;
  v93 = 0;
  v91 = 0LL;
  v83 = 0LL;
  v82 = 0LL;
  if ( !v1 )
    return (unsigned int)-1073741811;
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 8) != 0 )
  {
    v54 = *(_DWORD *)(a1 + 4);
    if ( v54 != 7 )
    {
      v69 = v54 - 10;
      if ( v69 )
      {
        v70 = v69 - 1;
        if ( v70 )
        {
          if ( v70 == 1 )
            return (dword_140E67110 & 2) != 0 ? 0xC0000189 : 0;
          else
            return (unsigned int)-1073741637;
        }
        FsRtlAcquirePushLockExclusive(&qword_140E66FA8);
        if ( qword_140E66F98 )
        {
          FsRtlAcquirePushLockExclusive(&qword_140E66FB0);
          dword_140E66FC8 |= 1u;
          for ( i = qword_140E66FB8; (__int64 *)i != &qword_140E66FB8; i = *(_QWORD *)i )
          {
            *(_DWORD *)(i + 68) |= 4u;
            KeSetEvent((PRKEVENT)(i + 88), 0, 0);
          }
          VmpReleasePushLockExclusive((ULONG_PTR)&qword_140E66FB0);
          ExWaitForRundownProtectionRelease(&RunRef);
          _InterlockedExchange64((volatile __int64 *)&RunRef, 1LL);
          qword_140E66F98 = 0LL;
          v38 = 0;
        }
        else
        {
          v38 = -1073741275;
        }
      }
      else
      {
        FsRtlAcquirePushLockExclusive(&qword_140E66FA8);
        if ( qword_140E66F98 )
        {
          v38 = -1073741791;
        }
        else
        {
          FsRtlAcquirePushLockExclusive(&qword_140E66FB0);
          dword_140E66FC8 &= ~1u;
          VmpReleasePushLockExclusive((ULONG_PTR)&qword_140E66FB0);
          guard_dispatch_icall_no_overrides(PfpPrefetchSharedConflictNotifyStart, v72, v73, v74);
          qword_140E66F98 = *(_QWORD *)(v2 + 16);
          v38 = 0;
          _InterlockedExchange64((volatile __int64 *)&RunRef, 0LL);
        }
      }
      VmpReleasePushLockExclusive((ULONG_PTR)&qword_140E66FA8);
      return v38;
    }
    *(_DWORD *)(v2 + 16) = _InterlockedIncrement((volatile signed __int32 *)&xmmword_140F0E408);
    return 0;
  }
  if ( (v3 & 4) != 0 )
  {
    v55 = *(_DWORD *)(a1 + 4);
    if ( v55 == 3 )
    {
      PfSnNameRemoveAll(*(_QWORD *)(a1 + 16));
    }
    else if ( v55 )
    {
      if ( v55 == 2 )
        PfSnLogStreamCreate(*(_QWORD *)(a1 + 16));
    }
    else
    {
      PfSnLogVolumeCreate(*(_QWORD *)(a1 + 16));
    }
  }
  if ( (*(_DWORD *)(v2 + 8) & 1) == 0 )
    return 0;
  v81 = 0;
  First = PfpPartitionGetFirst(&unk_140E66FD8);
  if ( First )
  {
    while ( 1 )
    {
      v7 = PfpPartitionReferenceParentSafe(First, v4, v6, PfpPartitionCanDoNameLoggingCallback);
      if ( v7 )
      {
        if ( v8 == PfTFiNotifyFileInfoDeleteCallback )
          v48 = PfTFiNotifyFileInfoDeleteCallback(First, &v81);
        else
          v48 = v8 == PfTFiNotifyFileStreamCreateCallback
              ? PfTFiNotifyFileStreamCreateCallback(First, &v81)
              : PfpPartitionCanDoNameLoggingCallback(First, &v81);
        v49 = v48;
        PsDereferencePartition(v7);
        if ( v49 >= 0 )
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
  if ( !v81 && (unsigned int)(*(_DWORD *)(v2 + 4) - 2) > 2 )
    return (unsigned int)-1073741697;
  v11 = *(_DWORD *)(v2 + 4);
  if ( v11 != 4 )
  {
    switch ( v11 )
    {
      case 0:
        v38 = PfpPartitionIterate((__int64 (__fastcall *)(_QWORD, _QWORD))PfTFiNotifyVolumeCreateCallback, 2, v2);
        if ( (v38 & 0x80000000) == 0 )
          goto LABEL_81;
        return v38;
      case 1:
        v75 = *(_QWORD *)(v2 + 16);
        *(_QWORD *)&v91 = 2LL;
        v94 = 0;
        *((_QWORD *)&v91 + 1) = *(_QWORD *)(v75 + 8);
        v92 = *(unsigned int *)(v75 + 56);
        v93 = 0;
        PfpPartitionIterate(PfTFiNotifyFileInfoDeleteCallback, 2, (__int64)&v91);
        return 0;
      case 2:
        v60 = *(_QWORD *)(v2 + 16);
        if ( HIWORD(*(_DWORD *)(v60 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v60 + 32) )
          goto LABEL_81;
        PfpRpFileKeyUpdate(&unk_140E66EF8, v60, 1LL);
        v38 = PfpPartitionIterate(PfTFiNotifyFileStreamCreateCallback, 2, v2);
        if ( (v38 & 0x80000000) == 0 )
          return 0;
        return v38;
      case 3:
        v56 = *(_QWORD *)(v2 + 16);
        if ( HIWORD(*(_DWORD *)(v56 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v56 + 32) )
          goto LABEL_81;
        PfpRpFileKeyUpdate(&unk_140E66EF8, v56, 0LL);
        v57 = *(_QWORD *)(v2 + 16);
        v58 = &v91;
        DWORD1(v91) = 0;
        v94 = 0;
        *((_QWORD *)&v91 + 1) = *(_QWORD *)(v57 + 16);
        v92 = *(unsigned int *)(v57 + 44);
        v93 = 0;
        v59 = (__int64 (__fastcall *)())PfTFiNotifyFileInfoDeleteCallback;
        v93 = (*(_BYTE *)(v57 + 36) & 8) != 0;
        goto LABEL_80;
      case 8:
        v65 = *(_QWORD *)(v2 + 16);
        DWORD1(v95) = 0;
        v66 = *(_DWORD *)v65 & 3;
        LODWORD(v95) = *(_DWORD *)(v65 + 4);
        *((_QWORD *)&v95 + 1) = *(_QWORD *)(v65 + 8);
        v67 = *(_QWORD *)(v65 + 16) + 4095LL;
        HIDWORD(v82) = 0;
        LODWORD(v82) = 24;
        v96 = (2 * v66) | v67 & 0xFFFFFFFFFFFFF000uLL;
        v62 = MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320];
        v63 = MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320]);
        v64 = &v95;
        goto LABEL_91;
      case 13:
        v61 = *(_QWORD **)(v2 + 16);
        if ( v61[1] )
        {
          *((_QWORD *)&v97 + 1) = v61[1];
          v98 = (unsigned int)xmmword_140F0E408;
          *(_QWORD *)&v97 = *v61;
          HIDWORD(v82) = 0;
          LODWORD(v82) = 31;
          v62 = MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320];
          v63 = MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320]);
          v64 = &v97;
LABEL_91:
          v58 = &v82;
          DWORD2(v82) = 24;
          v68 = ((v63 << 8) + (v62 >> 24)) >> 10;
          v59 = PfpPartitionLogEventCallback;
          DWORD1(v82) = dword_140E66E7C + v68;
          v83 = v64;
LABEL_80:
          PfpPartitionIterate((__int64 (__fastcall *)(_QWORD, _QWORD))v59, 2, (__int64)v58);
LABEL_81:
          v38 = 0;
        }
        else
        {
          v38 = -1073741747;
        }
        break;
      default:
        return (unsigned int)-1073741637;
    }
    return v38;
  }
  v12 = *(__int64 **)(v2 + 16);
  v13 = ((v12[1] & 0xFFF) + (unsigned __int64)*((unsigned int *)v12 + 4) + 4095) >> 12;
  if ( PfSnNumActiveTraces )
  {
    v14 = v12[4];
    v15 = *v12;
    v16 = v12[1];
    v17 = *(_QWORD *)(v14 + 544);
    v86 = v12[3];
    v84 = v15;
    _m_prefetchw((const void *)(v17 + 912));
    v18 = *(_QWORD *)(v17 + 912);
    if ( (v18 & 0xF) != 0 )
    {
      do
      {
        v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 912), v18 - 1, v18);
        if ( v18 == v19 )
          break;
        v18 = v19;
      }
      while ( (v19 & 0xF) != 0 );
    }
    v20 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (v18 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v21 = v18 & 0xF;
      if ( v21 > 1 )
      {
LABEL_20:
        if ( (*(_BYTE *)(v14 + 1448) & 0x40) == 0 )
        {
          if ( (int)PsGetIoPriorityThread(v14) < 2 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v20 + 336));
          }
          else
          {
            v24 = *(_QWORD *)(v20 + 432);
            if ( !v24 || v24 == v14 && *(_QWORD *)(v20 + 440) == *(_QWORD *)(v14 + 1296) )
            {
              v25 = v16 & 0xFFFFF000;
              if ( v22 )
              {
                v26 = v86;
                v27 = v13;
                do
                {
                  if ( (int)PfSnLogPageFaultCommon(v20, v23, v26, v25, 0) < 0 )
                    break;
                  v23 = v84;
                  v25 += 4096;
                  --v27;
                }
                while ( v27 );
                v2 = v85;
              }
            }
          }
        }
        _m_prefetchw((const void *)(v20 + 360));
        v28 = *(_QWORD *)(v20 + 360) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v28 != _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 360), v28 - 2, v28) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v20 + 360));
        goto LABEL_35;
      }
      if ( v21 )
      {
        _m_prefetchw((const void *)(v20 + 360));
        v50 = *(_QWORD *)(v20 + 360);
        while ( (v50 & 1) == 0 )
        {
          v51 = v50;
          v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 360), v50 + 30, v50);
          if ( v51 == v50 )
          {
            _m_prefetchw((const void *)(v17 + 912));
            v52 = *(_QWORD *)(v17 + 912);
            while ( (v52 & 0xF) == 0 && v20 == (v52 & 0xFFFFFFFFFFFFFFF0uLL) )
            {
              v53 = v52;
              v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 912), v52 + 15, v52);
              if ( v53 == v52 )
                goto LABEL_20;
            }
            _m_prefetchw((const void *)(v20 + 360));
            v76 = *(_QWORD *)(v20 + 360);
            while ( (v76 & 1) == 0 )
            {
              v77 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 360), v76 - 30, v76);
              v1 = v76 == v77;
              v76 = v77;
              if ( v1 )
                goto LABEL_20;
            }
            v78 = v76 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v78, 0xFFFFFFFFFFFFFFF1uLL) == 15
              && !_interlockedbittestandreset((volatile signed __int32 *)(v78 + 32), 0) )
            {
              KeSetEvent((PRKEVENT)(v78 + 8), 0, 0);
            }
            goto LABEL_20;
          }
        }
        goto LABEL_20;
      }
      v80 = 1;
      v29 = KeAcquireSpinLockRaiseToDpc(&qword_140E67010);
      v30 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v17 + 912) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( v30 )
        v80 = ExAcquireRundownProtection(v30 + 45);
      KeReleaseSpinLock(&qword_140E67010, v29);
      v20 = 0LL;
      if ( v80 )
        v20 = (unsigned __int64)v30;
    }
    if ( !v20 )
      goto LABEL_35;
    goto LABEL_20;
  }
LABEL_35:
  v31 = *(_QWORD *)(v2 + 16);
  *(_OWORD *)v87 = 0LL;
  v88 = 0LL;
  v32 = *(_QWORD *)(v31 + 32);
  v33 = *(_QWORD *)(v32 + 544);
  v89 = 0LL;
  v34 = *(_QWORD *)(v33 + 1880);
  _m_prefetchw((const void *)(v34 + 40));
  v35 = *(_QWORD *)(v34 + 40);
  do
  {
    if ( (unsigned __int64)(v35 + 1) <= 1 )
    {
      if ( v35 )
        __fastfail(0xEu);
      v34 = 0LL;
      goto LABEL_39;
    }
    v36 = v35;
    v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 40), v35 + 1, v35);
  }
  while ( v36 != v35 );
  v37 = *(_QWORD *)(v34 + 32);
  if ( v34 && v37 && *(_DWORD *)(v37 + 608) < *(_DWORD *)(v37 + 612) )
  {
    PagePriorityThread = PsGetPagePriorityThread(v32);
    if ( PagePriorityThread < v45 )
    {
      v38 = 0;
    }
    else
    {
      v46 = *(_QWORD *)(v41 + 464);
      *(_QWORD *)&v88 = v13 | (v43 << 63);
      v47 = (*(_QWORD *)(v41 + 504) ^ v46) & 0x1FFFFFFFFFFFFFFFLL;
      *(_QWORD *)&v87[2] = v42 >> 12;
      *((_QWORD *)&v88 + 1) = v47;
      v89 = __PAIR64__(v46, xmmword_140F0E408);
      *(_QWORD *)v87 = v44;
      LODWORD(v79) = 40;
      v38 = PfLogEvent(
              v37,
              10,
              dword_140E66E7C
            + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
              v87,
              v79);
    }
    goto LABEL_40;
  }
LABEL_39:
  v38 = -1073741637;
  if ( !v34 )
    return v38;
LABEL_40:
  PsDereferencePartition(v34);
  return v38;
}
