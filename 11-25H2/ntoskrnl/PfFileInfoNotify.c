/*
 * XREFs of PfFileInfoNotify @ 0x140301AC0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1402A2908 (FsRtlAcquirePushLockExclusive.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402ADA40 (ExAcquireRundownProtectionCacheAware.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     PfpPartitionIterate @ 0x140301540 (PfpPartitionIterate.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140302690 (ExReleaseRundownProtectionCacheAware.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     PfpPartitionGetFirst @ 0x140302770 (PfpPartitionGetFirst.c)
 *     PfSnLogPageFaultCommon @ 0x140302910 (PfSnLogPageFaultCommon.c)
 *     PfpPartitionReferenceParentSafe @ 0x140302AA8 (PfpPartitionReferenceParentSafe.c)
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     PsGetPagePriorityThread @ 0x1403059B0 (PsGetPagePriorityThread.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     PfLogEvent @ 0x140324B30 (PfLogEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     PfpPartitionCanDoNameLoggingCallback @ 0x1404650B0 (PfpPartitionCanDoNameLoggingCallback.c)
 *     PfTFiNotifyFileStreamCreateCallback @ 0x140470850 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfTFiNotifyFileInfoDeleteCallback @ 0x140471280 (PfTFiNotifyFileInfoDeleteCallback.c)
 *     VmpReleasePushLockExclusive @ 0x1404857AC (VmpReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PfSnLogStreamCreate @ 0x140827B20 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x140828048 (PfSnLogVolumeCreate.c)
 *     PfSnNameRemoveAll @ 0x1408281F8 (PfSnNameRemoveAll.c)
 *     PfpRpFileKeyUpdate @ 0x140847B50 (PfpRpFileKeyUpdate.c)
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
  _QWORD *v34; // rbx
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
  __int64 v73; // rcx
  signed __int64 v74; // rdx
  signed __int64 v75; // rax
  unsigned __int64 v76; // rdx
  size_t v77; // [rsp+28h] [rbp-E0h]
  BOOLEAN v78; // [rsp+38h] [rbp-D0h]
  int v79; // [rsp+3Ch] [rbp-CCh] BYREF
  __int128 v80; // [rsp+40h] [rbp-C8h] BYREF
  __int128 *v81; // [rsp+50h] [rbp-B8h]
  __int64 v82; // [rsp+58h] [rbp-B0h]
  __int64 v83; // [rsp+60h] [rbp-A8h]
  __int64 v84; // [rsp+68h] [rbp-A0h]
  int v85[4]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v86; // [rsp+80h] [rbp-88h]
  unsigned __int64 v87; // [rsp+90h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-70h] BYREF
  __int128 v89; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v90; // [rsp+C0h] [rbp-48h]
  BOOL v91; // [rsp+C8h] [rbp-40h]
  int v92; // [rsp+CCh] [rbp-3Ch]
  __int128 v93; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v94; // [rsp+E0h] [rbp-28h]
  __int128 v95; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v96; // [rsp+F8h] [rbp-10h]

  v83 = a1;
  v1 = *(_DWORD *)a1 == 15;
  LODWORD(v94) = 0;
  v2 = a1;
  v96 = 0LL;
  v93 = 0LL;
  v90 = 0LL;
  v95 = 0LL;
  v91 = 0;
  v89 = 0LL;
  v81 = 0LL;
  v80 = 0LL;
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
            return (dword_140E66E50 & 2) != 0 ? 0xC0000189 : 0;
          else
            return (unsigned int)-1073741637;
        }
        FsRtlAcquirePushLockExclusive(&qword_140E66CE8);
        if ( qword_140E66CD8 )
        {
          FsRtlAcquirePushLockExclusive(&qword_140E66CF0);
          dword_140E66D08 |= 1u;
          for ( i = qword_140E66CF8; (__int64 *)i != &qword_140E66CF8; i = *(_QWORD *)i )
          {
            *(_DWORD *)(i + 68) |= 4u;
            KeSetEvent((PRKEVENT)(i + 88), 0, 0);
          }
          VmpReleasePushLockExclusive((ULONG_PTR)&qword_140E66CF0);
          ExWaitForRundownProtectionRelease(&RunRef);
          _InterlockedExchange64((volatile __int64 *)&RunRef, 1LL);
          qword_140E66CD8 = 0LL;
          v38 = 0;
        }
        else
        {
          v38 = -1073741275;
        }
      }
      else
      {
        FsRtlAcquirePushLockExclusive(&qword_140E66CE8);
        if ( qword_140E66CD8 )
        {
          v38 = -1073741791;
        }
        else
        {
          FsRtlAcquirePushLockExclusive(&qword_140E66CF0);
          dword_140E66D08 &= ~1u;
          VmpReleasePushLockExclusive((ULONG_PTR)&qword_140E66CF0);
          guard_dispatch_icall_no_overrides(PfpPrefetchSharedConflictNotifyStart, v72);
          qword_140E66CD8 = *(_QWORD *)(v2 + 16);
          v38 = 0;
          _InterlockedExchange64((volatile __int64 *)&RunRef, 0LL);
        }
      }
      VmpReleasePushLockExclusive((ULONG_PTR)&qword_140E66CE8);
      return v38;
    }
    *(_DWORD *)(v2 + 16) = _InterlockedIncrement((volatile signed __int32 *)&xmmword_140F0DD48);
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
  v79 = 0;
  First = PfpPartitionGetFirst(&unk_140E66D18);
  if ( First )
  {
    while ( 1 )
    {
      v7 = PfpPartitionReferenceParentSafe(First, v4, v6, PfpPartitionCanDoNameLoggingCallback);
      if ( v7 )
      {
        if ( v8 == PfTFiNotifyFileInfoDeleteCallback )
          v48 = PfTFiNotifyFileInfoDeleteCallback(First, &v79);
        else
          v48 = v8 == PfTFiNotifyFileStreamCreateCallback
              ? PfTFiNotifyFileStreamCreateCallback(First, &v79)
              : PfpPartitionCanDoNameLoggingCallback(First, &v79);
        v49 = v48;
        PsDereferencePartition(v7, 1951426128LL);
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
  if ( !v79 && (unsigned int)(*(_DWORD *)(v2 + 4) - 2) > 2 )
    return (unsigned int)-1073741697;
  v11 = *(_DWORD *)(v2 + 4);
  if ( v11 != 4 )
  {
    switch ( v11 )
    {
      case 0:
        v38 = PfpPartitionIterate((__int64)PfTFiNotifyVolumeCreateCallback, 2, v2);
        if ( (v38 & 0x80000000) == 0 )
          return 0;
        return v38;
      case 1:
        v73 = *(_QWORD *)(v2 + 16);
        *(_QWORD *)&v89 = 2LL;
        v92 = 0;
        *((_QWORD *)&v89 + 1) = *(_QWORD *)(v73 + 8);
        v90 = *(unsigned int *)(v73 + 56);
        v91 = 0;
        PfpPartitionIterate((__int64)PfTFiNotifyFileInfoDeleteCallback, 2, (__int64)&v89);
        return 0;
      case 2:
        v60 = *(_QWORD *)(v2 + 16);
        if ( HIWORD(*(_DWORD *)(v60 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v60 + 32) )
          goto LABEL_81;
        PfpRpFileKeyUpdate(&unk_140E66C38, v60, 1LL);
        v38 = PfpPartitionIterate((__int64)PfTFiNotifyFileStreamCreateCallback, 2, v2);
        if ( (v38 & 0x80000000) == 0 )
          return 0;
        return v38;
      case 3:
        v56 = *(_QWORD *)(v2 + 16);
        if ( HIWORD(*(_DWORD *)(v56 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v56 + 32) )
          goto LABEL_81;
        PfpRpFileKeyUpdate(&unk_140E66C38, v56, 0LL);
        v57 = *(_QWORD *)(v2 + 16);
        v58 = &v89;
        DWORD1(v89) = 0;
        v92 = 0;
        *((_QWORD *)&v89 + 1) = *(_QWORD *)(v57 + 16);
        v90 = *(unsigned int *)(v57 + 44);
        v91 = 0;
        v59 = (__int64 (__fastcall *)())PfTFiNotifyFileInfoDeleteCallback;
        v91 = (*(_BYTE *)(v57 + 36) & 8) != 0;
        goto LABEL_80;
      case 8:
        v65 = *(_QWORD *)(v2 + 16);
        DWORD1(v93) = 0;
        v66 = *(_DWORD *)v65 & 3;
        LODWORD(v93) = *(_DWORD *)(v65 + 4);
        *((_QWORD *)&v93 + 1) = *(_QWORD *)(v65 + 8);
        v67 = *(_QWORD *)(v65 + 16) + 4095LL;
        HIDWORD(v80) = 0;
        LODWORD(v80) = 24;
        v94 = (2 * v66) | v67 & 0xFFFFFFFFFFFFF000uLL;
        v62 = MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320];
        v63 = MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320]);
        v64 = &v93;
        goto LABEL_91;
      case 13:
        v61 = *(_QWORD **)(v2 + 16);
        if ( v61[1] )
        {
          *((_QWORD *)&v95 + 1) = v61[1];
          v96 = (unsigned int)xmmword_140F0DD48;
          *(_QWORD *)&v95 = *v61;
          HIDWORD(v80) = 0;
          LODWORD(v80) = 31;
          v62 = MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320];
          v63 = MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320]);
          v64 = &v95;
LABEL_91:
          v58 = &v80;
          DWORD2(v80) = 24;
          v68 = ((v63 << 8) + (v62 >> 24)) >> 10;
          v59 = PfpPartitionLogEventCallback;
          DWORD1(v80) = dword_140E66BBC + v68;
          v81 = v64;
LABEL_80:
          PfpPartitionIterate((__int64)v59, 2, (__int64)v58);
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
    v84 = v12[3];
    v82 = v15;
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
                v26 = v84;
                v27 = v13;
                do
                {
                  if ( (int)PfSnLogPageFaultCommon(v20, v23, v26, v25, 0) < 0 )
                    break;
                  v23 = v82;
                  v25 += 4096;
                  --v27;
                }
                while ( v27 );
                v2 = v83;
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
            v74 = *(_QWORD *)(v20 + 360);
            while ( (v74 & 1) == 0 )
            {
              v75 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 360), v74 - 30, v74);
              v1 = v74 == v75;
              v74 = v75;
              if ( v1 )
                goto LABEL_20;
            }
            v76 = v74 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v76, 0xFFFFFFFFFFFFFFF1uLL) == 15
              && !_interlockedbittestandreset((volatile signed __int32 *)(v76 + 32), 0) )
            {
              KeSetEvent((PRKEVENT)(v76 + 8), 0, 0);
            }
            goto LABEL_20;
          }
        }
        goto LABEL_20;
      }
      v78 = 1;
      v29 = KeAcquireSpinLockRaiseToDpc(&qword_140E66D50);
      v30 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v17 + 912) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( v30 )
        v78 = ExAcquireRundownProtection_0(v30 + 45);
      KeReleaseSpinLock(&qword_140E66D50, v29);
      v20 = 0LL;
      if ( v78 )
        v20 = (unsigned __int64)v30;
    }
    if ( !v20 )
      goto LABEL_35;
    goto LABEL_20;
  }
LABEL_35:
  v31 = *(_QWORD *)(v2 + 16);
  *(_OWORD *)v85 = 0LL;
  v86 = 0LL;
  v32 = *(_QWORD *)(v31 + 32);
  v33 = *(_QWORD *)(v32 + 544);
  v87 = 0LL;
  v34 = *(_QWORD **)(v33 + 1880);
  _m_prefetchw(v34 + 5);
  v35 = v34[5];
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
    v35 = _InterlockedCompareExchange64(v34 + 5, v35 + 1, v35);
  }
  while ( v36 != v35 );
  v37 = v34[4];
  if ( v34 && v37 && *(_DWORD *)(v37 + 608) < *(_DWORD *)(v37 + 612) )
  {
    PagePriorityThread = PsGetPagePriorityThread(v32, *(unsigned int *)(*v34 + 17456LL));
    if ( PagePriorityThread < v45 )
    {
      v38 = 0;
    }
    else
    {
      v46 = *(_QWORD *)(v41 + 464);
      *(_QWORD *)&v86 = v13 | (v43 << 63);
      v47 = (*(_QWORD *)(v41 + 504) ^ v46) & 0x1FFFFFFFFFFFFFFFLL;
      *(_QWORD *)&v85[2] = v42 >> 12;
      *((_QWORD *)&v86 + 1) = v47;
      v87 = __PAIR64__(v46, xmmword_140F0DD48);
      *(_QWORD *)v85 = v44;
      LODWORD(v77) = 40;
      v38 = PfLogEvent(
              v37,
              10,
              dword_140E66BBC
            + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
              (int)v85,
              v77);
    }
    goto LABEL_40;
  }
LABEL_39:
  v38 = -1073741637;
  if ( !v34 )
    return v38;
LABEL_40:
  PsDereferencePartition(v34, 1951426128LL);
  return v38;
}
