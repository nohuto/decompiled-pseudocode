/*
 * XREFs of EtwpBufferingModeFlush @ 0x1408931C4
 * Callers:
 *     EtwpFlushTrace @ 0x140894628 (EtwpFlushTrace.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     EtwpQueryUsedProcessorCount @ 0x1403E4578 (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x1403E4930 (EtwpPrepareDirtyBuffer.c)
 *     EtwpLockUnlockBufferList @ 0x14041D264 (EtwpLockUnlockBufferList.c)
 *     EtwpGetEnableInfoIndex @ 0x14044C328 (EtwpGetEnableInfoIndex.c)
 *     Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline @ 0x140644440 (Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140644C1C (EtwpBufferingModeCompressionFlush.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpSendDataBlock @ 0x14089AEF8 (EtwpSendDataBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x14089B9B0 (EtwpFindGuidEntryByGuid.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     EtwpFlushBuffer @ 0x140990BD4 (EtwpFlushBuffer.c)
 *     EtwpFlushBufferToLogfile @ 0x1409912C0 (EtwpFlushBufferToLogfile.c)
 *     EtwpCreateLogFile @ 0x140991804 (EtwpCreateLogFile.c)
 *     EtwpPrepareHeader @ 0x140992DEC (EtwpPrepareHeader.c)
 *     EtwpFinalizeHeader @ 0x140992E74 (EtwpFinalizeHeader.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x1409E3A80 (EtwpFindAndLockBufferForFlushing.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140A0E364 (EtwpWaitForBufferReferenceCount.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(unsigned int *a1)
{
  unsigned int v1; // r15d
  __int64 v3; // r12
  __int64 v4; // rcx
  unsigned int UsedProcessorCount; // esi
  __int64 v7; // r13
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 GuidEntryByGuid; // rax
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int32 *v12; // rbx
  __int64 *v13; // rax
  __int64 *v14; // rsi
  _QWORD **v15; // r15
  signed __int64 v16; // rax
  signed __int64 v17; // rdx
  signed __int64 v18; // rtt
  __int16 v19; // dx
  _QWORD *i; // rsi
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  signed __int64 v23; // rtt
  __int64 v24; // r15
  __int64 v25; // rsi
  unsigned int v26; // ebx
  _QWORD *v27; // r8
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int32 v30; // eax
  signed __int64 j; // rcx
  signed __int64 v32; // rax
  __int64 v33; // r12
  _QWORD *v34; // r8
  _QWORD *v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  volatile signed __int32 *v38; // rdi
  signed __int32 v39; // esi
  signed __int32 v40; // r15d
  _QWORD *v41; // rbx
  unsigned __int64 v42; // rdx
  unsigned int *v43; // rbx
  __int64 v44; // r8
  char *k; // rax
  unsigned int *v46; // rcx
  int v47; // ecx
  signed __int32 v48; // eax
  volatile signed __int64 *v49; // rdi
  __int64 v50; // r8
  unsigned int v51; // r10d
  signed __int64 v52; // rsi
  unsigned int v53; // edx
  signed __int64 v54; // r9
  signed __int64 v55; // rax
  signed __int64 v56; // rtt
  __int64 v57; // rbx
  int v58; // r12d
  __int64 v59; // r8
  unsigned int *v60; // rdx
  __int64 v61; // rcx
  signed __int64 v62; // r8
  __int64 v63; // r10
  signed __int64 v64; // rax
  signed __int64 v65; // rtt
  void *v66; // rcx
  int LogFile; // [rsp+28h] [rbp-59h]
  unsigned int v68; // [rsp+2Ch] [rbp-55h] BYREF
  _DWORD v69[19]; // [rsp+30h] [rbp-51h] BYREF
  __int16 v70; // [rsp+7Eh] [rbp-3h]
  int v71; // [rsp+A0h] [rbp+1Fh]

  v1 = a1[1];
  v3 = *a1;
  v68 = 0;
  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1);
  if ( (unsigned __int8)EtwpBootPhase > 3u )
    _InterlockedOr((volatile signed __int32 *)(v4 + 816), 4u);
  if ( !*(_QWORD *)(v4 + 192) )
    return 0LL;
  LogFile = EtwpCreateLogFile(v4, 0LL, 0LL);
  LODWORD(v7) = LogFile;
  if ( LogFile < 0 )
    goto LABEL_118;
  if ( (a1[3] & 0x40000) != 0 )
  {
    memset_0(v69, 0, 0x78uLL);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(CurrentServerSiloGlobals[52].Flink, qword_140037648, 0LL);
    v10 = GuidEntryByGuid;
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      v12 = (volatile signed __int32 *)(GuidEntryByGuid + 408);
      --CurrentThread->KernelApcDisable;
      v13 = KeAbPreAcquire(GuidEntryByGuid + 408, 0LL);
      v14 = v13;
      if ( _interlockedbittestandset64(v12, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 + 408), v13, v10 + 408);
      if ( v14 )
        *((_BYTE *)v14 + 10) = 1;
      v15 = (_QWORD **)(v10 + 56);
      *(_QWORD *)(v10 + 416) = KeGetCurrentThread();
      if ( *v15 == v15 || !EtwpGetEnableInfoIndex(v10, *a1, &v68) )
      {
        *(_QWORD *)(v10 + 416) = 0LL;
        v16 = *(_QWORD *)v12;
        v17 = *(_QWORD *)v12 - 16LL;
        if ( (*(_QWORD *)v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v17 = 0LL;
        _m_prefetchw((const void *)v12);
        if ( (v16 & 2) != 0
          || (v18 = *(_QWORD *)v12, v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v17, v16)) )
        {
          ExfReleasePushLock((_QWORD *)(v10 + 408));
        }
        KeAbPostRelease(v10 + 408);
        KeLeaveCriticalRegion();
      }
      else
      {
        v69[0] = 3;
        v71 = 2;
        v69[18] = 2;
        v70 = v19;
        for ( i = *v15; i != v15; i = (_QWORD *)*i )
          EtwpSendDataBlock(i, v69);
        *(_QWORD *)(v10 + 416) = 0LL;
        _m_prefetchw((const void *)v12);
        v21 = *(_QWORD *)v12;
        v22 = *(_QWORD *)v12 - 16LL;
        if ( (*(_QWORD *)v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v22 = 0LL;
        if ( (v21 & 2) != 0
          || (v23 = *(_QWORD *)v12, v23 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v22, v21)) )
        {
          ExfReleasePushLock((_QWORD *)(v10 + 408));
        }
        KeAbPostRelease(v10 + 408);
        KeLeaveCriticalRegion();
        v24 = _InterlockedExchange64((volatile __int64 *)a1 + 16, 0LL);
        if ( v24 )
        {
          do
          {
            v25 = *(_QWORD *)(v24 + 32);
            EtwpWaitForBufferReferenceCount(v24);
            *(_QWORD *)(v24 + 56) = 0LL;
            *(_QWORD *)(v24 + 64) = 0LL;
            v7 = (unsigned int)EtwpFlushBuffer(a1, v24, v25 == 0);
            *(_WORD *)(v24 + 52) = 0;
            guard_dispatch_icall_no_overrides(v7);
            v24 = v25;
          }
          while ( v25 );
        }
        EtwpFinalizeHeader(a1, 0LL);
      }
    }
    goto LABEL_118;
  }
  if ( UsedProcessorCount )
  {
    do
    {
      v26 = v68;
      if ( (a1[3] & 0x10000000) != 0 )
      {
        v27 = a1 + 32;
      }
      else
      {
        v28 = *((_QWORD *)a1 + 170);
        if ( v28 == EtwpHostSiloState )
          v27 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(KeGetPrcb(v68) + 35752) + 320LL) + 8 * v3);
        else
          v27 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v68 << 6) + *(_QWORD *)(v28 + 4144)) + 8 * v3);
      }
      v29 = *v27 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v29 )
      {
        v30 = _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 8), v1);
        if ( v30 <= v1 )
          *(_DWORD *)(v29 + 4) = v30;
        _m_prefetchw(v27);
        for ( j = *v27; (v29 ^ j) <= 0xF; j = v32 )
        {
          v32 = _InterlockedCompareExchange64(v27, 0LL, j);
          if ( j == v32 )
            break;
        }
        if ( (j & 0xFFFFFFFFFFFFFFF0uLL) == v29 )
        {
          _InterlockedAdd((volatile signed __int32 *)((j & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(j & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, (LARGE_INTEGER *)v29);
        }
        v26 = v68;
      }
      v68 = v26 + 1;
    }
    while ( v26 + 1 < UsedProcessorCount );
  }
  EtwpLockUnlockBufferList((__int64)a1);
  if ( (a1[3] & 0x4000000) == 0 )
  {
    v49 = (volatile signed __int64 *)(a1 + 394);
    v51 = EtwpQueryUsedProcessorCount((__int64)a1);
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
      v57 = EtwpFindAndLockBufferForFlushing(a1, *v49, v50);
      if ( v57 )
      {
        v58 = LogFile;
        do
        {
          EtwpWaitForBufferReferenceCount(v57);
          if ( (unsigned int)EtwpPrepareHeader(a1, v57, 0LL) != -2147483614 )
          {
            v58 = EtwpFlushBufferToLogfile(a1, v57);
            if ( !v52 )
              v52 = *(_QWORD *)(v57 + 16);
          }
          _InterlockedAdd64(v49, 0xFFFFFFFFFFFFFFFFuLL);
          _InterlockedExchange((volatile __int32 *)(v57 + 44), 0);
          if ( v58 < 0 )
            break;
          v57 = EtwpFindAndLockBufferForFlushing(a1, *v49, v59);
        }
        while ( v57 );
        LODWORD(v7) = v58;
      }
      v41 = a1 + 394;
      if ( *((_QWORD *)a1 + 196) )
      {
        v60 = (unsigned int *)*((_QWORD *)a1 + 10);
        if ( v60 != a1 + 20 )
        {
          while ( v60 )
          {
            v61 = *((_QWORD *)v60 + 2);
            v62 = *(_QWORD *)(v61 + 16);
            v63 = *(unsigned __int16 *)(v61 + 40);
            if ( v62 < v52 && *(_QWORD *)(v61 + 24) <= *v49 )
            {
              v64 = *(_QWORD *)(*((_QWORD *)a1 + 196) + 8 * v63);
              do
              {
                if ( v62 <= v64 )
                  break;
                v65 = v64;
                v64 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(*((_QWORD *)a1 + 196) + 8 * v63),
                        v62,
                        v64);
              }
              while ( v65 != v64 );
            }
            v60 = *(unsigned int **)v60;
            if ( v60 == a1 + 20 )
              v60 = 0LL;
          }
        }
      }
      goto LABEL_117;
    }
    return 3221225539LL;
  }
  EtwpBufferingModeCompressionFlush((__int64)a1);
  v33 = *((_QWORD *)a1 + 101) + 1LL;
  if ( v33 < 0 )
    goto LABEL_70;
  v34 = a1 + 20;
  do
  {
    v35 = (_QWORD *)*v34;
    --v33;
    v36 = 0LL;
    if ( (_QWORD *)*v34 == v34 )
      break;
    while ( v35 )
    {
      v37 = *(_QWORD *)(v35[2] + 24LL);
      if ( v37 == v33 )
      {
        v36 = v35[2];
        break;
      }
      if ( v37 < v33 && (!v36 || v37 > *(_QWORD *)(v36 + 24)) )
        v36 = v35[2];
      v35 = (_QWORD *)*v35;
      if ( v35 == v34 )
        v35 = 0LL;
    }
    if ( !v36 )
      break;
    v38 = (volatile signed __int32 *)(v36 + 44);
    Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline();
    v39 = *(_DWORD *)(v36 + 44);
    if ( (unsigned int)(v39 - 4) > 1 )
      goto LABEL_68;
    v40 = _InterlockedCompareExchange(v38, 3, v39);
    if ( v39 != v40 )
      goto LABEL_68;
    if ( *(_QWORD *)(v36 + 24) == v33 )
    {
      EtwpWaitForBufferReferenceCount(v36);
      if ( v40 == 5 )
      {
        if ( *(_DWORD *)(v36 + 8) == 72 )
        {
          _InterlockedExchange(v38, 0);
          goto LABEL_68;
        }
        v42 = v36 + *(unsigned int *)(v36 + 8);
        v43 = (unsigned int *)(v36 + 72);
        *((_QWORD *)v43 + 4) = 0LL;
        v44 = *v43;
        for ( k = (char *)v43 + v44; (unsigned __int64)k < v42; k = (char *)v43 + *v43 )
        {
          v46 = v43;
          v43 = (unsigned int *)((char *)v43 + (unsigned int)v44);
          *((_QWORD *)v43 + 4) = v46;
          LODWORD(v44) = *v43;
        }
        do
        {
          if ( (unsigned int)EtwpPrepareHeader(a1, v43, 64LL) == -2147483614 )
          {
            v47 = LogFile;
          }
          else
          {
            v47 = EtwpFlushBufferToLogfile(a1, v43);
            LogFile = v47;
          }
          v43 = (unsigned int *)*((_QWORD *)v43 + 4);
        }
        while ( v43 );
        v48 = 5;
      }
      else
      {
        if ( v40 != 4 )
          goto LABEL_68;
        if ( (unsigned int)EtwpPrepareHeader(a1, v36, 0LL) == -2147483614 )
        {
          v47 = LogFile;
        }
        else
        {
          v47 = EtwpFlushBufferToLogfile(a1, v36);
          LogFile = v47;
        }
        v48 = 4;
      }
      _InterlockedCompareExchange(v38, v39, v48);
      if ( v47 < 0 )
        break;
    }
    else
    {
      _InterlockedCompareExchange(v38, v39, 3);
    }
LABEL_68:
    v34 = a1 + 20;
  }
  while ( v33 >= 0 );
  LODWORD(v7) = LogFile;
LABEL_70:
  v41 = a1 + 394;
LABEL_117:
  EtwpFinalizeHeader(a1, 0LL);
  a1[62] = 0;
  *v41 = -1LL;
LABEL_118:
  v66 = (void *)*((_QWORD *)a1 + 100);
  if ( v66 )
  {
    ZwClose(v66);
    *((_QWORD *)a1 + 100) = 0LL;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 38));
  return (unsigned int)v7;
}
