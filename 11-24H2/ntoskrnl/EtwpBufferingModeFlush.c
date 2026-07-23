/*
 * XREFs of EtwpBufferingModeFlush @ 0x1409D2A94
 * Callers:
 *     EtwpFlushTrace @ 0x1409D2420 (EtwpFlushTrace.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14027D604 (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x14027D764 (EtwpPrepareDirtyBuffer.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpLockUnlockBufferList @ 0x140408768 (EtwpLockUnlockBufferList.c)
 *     EtwpGetEnableInfoIndex @ 0x140442A28 (EtwpGetEnableInfoIndex.c)
 *     EtwpBufferingModeCompressionFlush @ 0x14064F324 (EtwpBufferingModeCompressionFlush.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpSendDataBlock @ 0x140834A64 (EtwpSendDataBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x140838880 (EtwpFindGuidEntryByGuid.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     EtwpFlushBuffer @ 0x1409D4598 (EtwpFlushBuffer.c)
 *     EtwpFlushBufferToLogfile @ 0x1409D4C28 (EtwpFlushBufferToLogfile.c)
 *     EtwpCreateLogFile @ 0x1409D51BC (EtwpCreateLogFile.c)
 *     EtwpPrepareHeader @ 0x1409D64A4 (EtwpPrepareHeader.c)
 *     EtwpFinalizeHeader @ 0x1409D652C (EtwpFinalizeHeader.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x1409DC5E0 (EtwpFindAndLockBufferForFlushing.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140A0E164 (EtwpWaitForBufferReferenceCount.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v4; // r12
  __int64 v5; // rcx
  unsigned int UsedProcessorCount; // esi
  __int64 v8; // r13
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  _QWORD *GuidEntryByGuid; // rax
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int32 *v13; // rbx
  char *v14; // rax
  char *v15; // rsi
  _QWORD **v16; // r15
  signed __int64 v17; // rax
  signed __int64 v18; // rdx
  signed __int64 v19; // rtt
  __int16 v20; // dx
  _QWORD *i; // rsi
  signed __int64 v22; // rax
  signed __int64 v23; // rdx
  signed __int64 v24; // rtt
  __int64 v25; // r15
  __int64 v26; // rsi
  unsigned int v27; // ebx
  _QWORD *v28; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int32 v31; // eax
  signed __int64 j; // rcx
  signed __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rsi
  _QWORD *v36; // r13
  _QWORD *v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rax
  signed __int32 v40; // r15d
  signed __int32 v41; // edi
  unsigned int *v42; // rdi
  unsigned __int64 v43; // rdx
  __int64 v44; // r8
  char *m; // rax
  unsigned int *v46; // rcx
  int v47; // ecx
  _QWORD *v48; // rbx
  volatile signed __int64 *v49; // rdi
  __int64 v50; // r8
  unsigned int v51; // r10d
  signed __int64 v52; // rsi
  unsigned int v53; // edx
  signed __int64 v54; // r9
  signed __int64 v55; // rax
  signed __int64 v56; // rtt
  __int64 k; // rbx
  __int64 v58; // r8
  unsigned int *v59; // rdx
  __int64 v60; // rcx
  signed __int64 v61; // r8
  __int64 v62; // r10
  signed __int64 v63; // rax
  signed __int64 v64; // rtt
  void *v65; // rcx
  unsigned int v66; // [rsp+28h] [rbp-59h] BYREF
  int LogFile; // [rsp+2Ch] [rbp-55h]
  _DWORD v68[19]; // [rsp+30h] [rbp-51h] BYREF
  __int16 v69; // [rsp+7Eh] [rbp-3h]
  int v70; // [rsp+A0h] [rbp+1Fh]

  v2 = a1[1];
  v4 = *a1;
  v66 = 0;
  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1, a2);
  if ( (unsigned __int8)EtwpBootPhase > 3u )
    _InterlockedOr((volatile signed __int32 *)(v5 + 816), 4u);
  if ( !*(_QWORD *)(v5 + 192) )
    return 0LL;
  LogFile = EtwpCreateLogFile(v5, 0LL, 0LL);
  LODWORD(v8) = LogFile;
  if ( LogFile < 0 )
    goto LABEL_116;
  if ( (a1[3] & 0x40000) != 0 )
  {
    memset_0(v68, 0, 0x78uLL);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    GuidEntryByGuid = EtwpFindGuidEntryByGuid((__int64)CurrentServerSiloGlobals[52].Flink, qword_140037FB8, 0);
    v11 = (__int64)GuidEntryByGuid;
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      v13 = (volatile signed __int32 *)(GuidEntryByGuid + 83);
      --CurrentThread->KernelApcDisable;
      v14 = (char *)KeAbPreAcquire((__int64)(GuidEntryByGuid + 83), 0LL);
      v15 = v14;
      if ( _interlockedbittestandset64(v13, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 664), v14, v11 + 664);
      if ( v15 )
        v15[10] = 1;
      v16 = (_QWORD **)(v11 + 56);
      *(_QWORD *)(v11 + 672) = KeGetCurrentThread();
      if ( *v16 == v16 || !EtwpGetEnableInfoIndex(v11, *a1, &v66) )
      {
        *(_QWORD *)(v11 + 672) = 0LL;
        v17 = *(_QWORD *)v13;
        v18 = *(_QWORD *)v13 - 16LL;
        if ( (*(_QWORD *)v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v18 = 0LL;
        _m_prefetchw((const void *)v13);
        if ( (v17 & 2) != 0
          || (v19 = *(_QWORD *)v13, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v13, v18, v17)) )
        {
          ExfReleasePushLock((_QWORD *)(v11 + 664));
        }
        KeAbPostRelease(v11 + 664);
        KeLeaveCriticalRegion();
      }
      else
      {
        v68[0] = 3;
        v70 = 2;
        v68[18] = 2;
        v69 = v20;
        for ( i = *v16; i != v16; i = (_QWORD *)*i )
          EtwpSendDataBlock((__int64)i, (__int64)v68);
        *(_QWORD *)(v11 + 672) = 0LL;
        _m_prefetchw((const void *)v13);
        v22 = *(_QWORD *)v13;
        v23 = *(_QWORD *)v13 - 16LL;
        if ( (*(_QWORD *)v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v23 = 0LL;
        if ( (v22 & 2) != 0
          || (v24 = *(_QWORD *)v13, v24 != _InterlockedCompareExchange64((volatile signed __int64 *)v13, v23, v22)) )
        {
          ExfReleasePushLock((_QWORD *)(v11 + 664));
        }
        KeAbPostRelease(v11 + 664);
        KeLeaveCriticalRegion();
        v25 = _InterlockedExchange64((volatile __int64 *)a1 + 16, 0LL);
        if ( v25 )
        {
          do
          {
            v26 = *(_QWORD *)(v25 + 32);
            EtwpWaitForBufferReferenceCount(v25);
            *(_QWORD *)(v25 + 56) = 0LL;
            *(_QWORD *)(v25 + 64) = 0LL;
            v8 = (unsigned int)EtwpFlushBuffer(a1, v25, v26 == 0);
            *(_WORD *)(v25 + 52) = 0;
            guard_dispatch_icall_no_overrides(v8, v25);
            v25 = v26;
          }
          while ( v26 );
        }
        EtwpFinalizeHeader(a1, 0LL);
      }
    }
    goto LABEL_116;
  }
  if ( UsedProcessorCount )
  {
    do
    {
      v27 = v66;
      if ( (a1[3] & 0x10000000) != 0 )
      {
        v28 = a1 + 32;
      }
      else
      {
        v29 = *((_QWORD *)a1 + 170);
        if ( v29 == EtwpHostSiloState )
          v28 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(KeGetPrcb(v66) + 35752) + 320LL) + 8 * v4);
        else
          v28 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v66 << 6) + *(_QWORD *)(v29 + 4416)) + 8 * v4);
      }
      v30 = *v28 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v30 )
      {
        v31 = _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 8), v2);
        if ( v31 <= v2 )
          *(_DWORD *)(v30 + 4) = v31;
        _m_prefetchw(v28);
        for ( j = *v28; (v30 ^ j) <= 0xF; j = v33 )
        {
          v33 = _InterlockedCompareExchange64(v28, 0LL, j);
          if ( j == v33 )
            break;
        }
        if ( (j & 0xFFFFFFFFFFFFFFF0uLL) == v30 )
        {
          _InterlockedAdd((volatile signed __int32 *)((j & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(j & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, v30);
        }
        v27 = v66;
      }
      v66 = v27 + 1;
    }
    while ( v27 + 1 < UsedProcessorCount );
  }
  EtwpLockUnlockBufferList((__int64)a1);
  if ( (a1[3] & 0x4000000) == 0 )
  {
    v49 = (volatile signed __int64 *)(a1 + 394);
    v51 = EtwpQueryUsedProcessorCount((__int64)a1, v34);
    v52 = 0LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 197, *((_QWORD *)a1 + 101), -1LL) == -1 )
    {
      if ( *((_QWORD *)a1 + 195) )
      {
        v53 = 0;
        if ( v51 )
        {
          v50 = 0LL;
          do
          {
            v54 = *(_QWORD *)(v50 + *((_QWORD *)a1 + 195));
            v55 = *(_QWORD *)(v50 + *((_QWORD *)a1 + 196));
            if ( v54 > v55 )
            {
              do
              {
                v56 = v55;
                v55 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(*((_QWORD *)a1 + 196) + 8LL * v53),
                        v54,
                        v55);
              }
              while ( v56 != v55 && v54 > v55 );
            }
            ++v53;
            v50 += 8LL;
          }
          while ( v53 < v51 );
        }
      }
      for ( k = EtwpFindAndLockBufferForFlushing(a1, *v49, v50); k; k = EtwpFindAndLockBufferForFlushing(a1, *v49, v58) )
      {
        EtwpWaitForBufferReferenceCount(k);
        if ( (unsigned int)EtwpPrepareHeader(a1, k, 0LL) != -2147483614 )
        {
          LODWORD(v8) = EtwpFlushBufferToLogfile(a1, k);
          if ( !v52 )
            v52 = *(_QWORD *)(k + 16);
        }
        _InterlockedAdd64(v49, 0xFFFFFFFFFFFFFFFFuLL);
        _InterlockedExchange((volatile __int32 *)(k + 44), 0);
        if ( (int)v8 < 0 )
          break;
      }
      v48 = a1 + 394;
      if ( *((_QWORD *)a1 + 196) )
      {
        v59 = (unsigned int *)*((_QWORD *)a1 + 10);
        if ( v59 != a1 + 20 )
        {
          while ( v59 )
          {
            v60 = *((_QWORD *)v59 + 2);
            v61 = *(_QWORD *)(v60 + 16);
            v62 = *(unsigned __int16 *)(v60 + 40);
            if ( v61 < v52 && *(_QWORD *)(v60 + 24) <= *v49 )
            {
              v63 = *(_QWORD *)(*((_QWORD *)a1 + 196) + 8 * v62);
              do
              {
                if ( v61 <= v63 )
                  break;
                v64 = v63;
                v63 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(*((_QWORD *)a1 + 196) + 8 * v62),
                        v61,
                        v63);
              }
              while ( v64 != v63 );
            }
            v59 = *(unsigned int **)v59;
            if ( v59 == a1 + 20 )
              v59 = 0LL;
          }
        }
      }
      goto LABEL_115;
    }
    return 3221225539LL;
  }
  EtwpBufferingModeCompressionFlush((__int64)a1);
  v35 = *((_QWORD *)a1 + 101) + 1LL;
  if ( v35 < 0 )
    goto LABEL_88;
  v36 = a1 + 20;
  do
  {
    v37 = (_QWORD *)*v36;
    --v35;
    v38 = 0LL;
    if ( (_QWORD *)*v36 == v36 || !v37 )
      break;
    while ( 1 )
    {
      v39 = *(_QWORD *)(v37[2] + 24LL);
      if ( v39 == v35 )
        break;
      if ( v39 < v35 && (!v38 || v39 > *(_QWORD *)(v38 + 24)) )
        v38 = v37[2];
      v37 = (_QWORD *)*v37;
      if ( v37 == v36 )
        v37 = 0LL;
      if ( !v37 )
        goto LABEL_63;
    }
    v38 = v37[2];
LABEL_63:
    if ( !v38 )
      break;
    v40 = *(_DWORD *)(v38 + 44);
    if ( (unsigned int)(v40 - 4) <= 1 )
    {
      v41 = _InterlockedCompareExchange((volatile signed __int32 *)(v38 + 44), 3, v40);
      if ( v40 == v41 )
      {
        if ( *(_QWORD *)(v38 + 24) == v35 )
        {
          EtwpWaitForBufferReferenceCount(v38);
          if ( v41 == 5 )
          {
            if ( *(_DWORD *)(v38 + 8) != 72 )
            {
              v42 = (unsigned int *)(v38 + 72);
              v43 = v38 + *(unsigned int *)(v38 + 8);
              *(_QWORD *)(v38 + 104) = 0LL;
              v44 = *(unsigned int *)(v38 + 72);
              for ( m = (char *)(v38 + 72 + v44); (unsigned __int64)m < v43; m = (char *)v42 + *v42 )
              {
                v46 = v42;
                v42 = (unsigned int *)((char *)v42 + (unsigned int)v44);
                *((_QWORD *)v42 + 4) = v46;
                LODWORD(v44) = *v42;
              }
              do
              {
                if ( (unsigned int)EtwpPrepareHeader(a1, v42, 64LL) == -2147483614 )
                {
                  v47 = LogFile;
                }
                else
                {
                  v47 = EtwpFlushBufferToLogfile(a1, v42);
                  LogFile = v47;
                }
                v42 = (unsigned int *)*((_QWORD *)v42 + 4);
              }
              while ( v42 );
              _InterlockedCompareExchange((volatile signed __int32 *)(v38 + 44), v40, 5);
LABEL_79:
              if ( v47 < 0 )
                break;
              continue;
            }
            _InterlockedExchange((volatile __int32 *)(v38 + 44), 0);
          }
          else if ( v41 == 4 )
          {
            if ( (unsigned int)EtwpPrepareHeader(a1, v38, 0LL) == -2147483614 )
            {
              v47 = LogFile;
            }
            else
            {
              v47 = EtwpFlushBufferToLogfile(a1, v38);
              LogFile = v47;
            }
            _InterlockedCompareExchange((volatile signed __int32 *)(v38 + 44), v40, 4);
            goto LABEL_79;
          }
        }
        else
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v38 + 44), v40, 3);
        }
      }
    }
  }
  while ( v35 >= 0 );
  LODWORD(v8) = LogFile;
LABEL_88:
  v48 = a1 + 394;
LABEL_115:
  EtwpFinalizeHeader(a1, 0LL);
  a1[62] = 0;
  *v48 = -1LL;
LABEL_116:
  v65 = (void *)*((_QWORD *)a1 + 100);
  if ( v65 )
  {
    ZwClose(v65);
    *((_QWORD *)a1 + 100) = 0LL;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 38));
  return (unsigned int)v8;
}
