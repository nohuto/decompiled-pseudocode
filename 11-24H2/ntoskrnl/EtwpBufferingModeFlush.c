/*
 * XREFs of EtwpBufferingModeFlush @ 0x140832840
 * Callers:
 *     EtwpFlushTrace @ 0x140833B94 (EtwpFlushTrace.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14024CFF4 (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x14024D154 (EtwpPrepareDirtyBuffer.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     EtwpLockUnlockBufferList @ 0x1404189B8 (EtwpLockUnlockBufferList.c)
 *     EtwpGetEnableInfoIndex @ 0x14044B8E8 (EtwpGetEnableInfoIndex.c)
 *     Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline @ 0x140650450 (Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140650C1C (EtwpBufferingModeCompressionFlush.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwpSendDataBlock @ 0x14083A3F4 (EtwpSendDataBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x14083AEE0 (EtwpFindGuidEntryByGuid.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     EtwpFlushBuffer @ 0x1409D9A88 (EtwpFlushBuffer.c)
 *     EtwpFlushBufferToLogfile @ 0x1409DA118 (EtwpFlushBufferToLogfile.c)
 *     EtwpCreateLogFile @ 0x1409DA6AC (EtwpCreateLogFile.c)
 *     EtwpPrepareHeader @ 0x1409DBC94 (EtwpPrepareHeader.c)
 *     EtwpFinalizeHeader @ 0x1409DBD1C (EtwpFinalizeHeader.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x1409E2830 (EtwpFindAndLockBufferForFlushing.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140A15344 (EtwpWaitForBufferReferenceCount.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v4; // r12
  __int64 v5; // rcx
  unsigned int UsedProcessorCount; // esi
  __int64 v8; // r13
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 GuidEntryByGuid; // rax
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int32 *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
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
  __int64 v27; // rbx
  __int64 v28; // r9
  unsigned int v29; // ebx
  _QWORD *v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int32 v33; // eax
  signed __int64 j; // rcx
  signed __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r12
  _QWORD *v38; // r8
  _QWORD *v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rax
  volatile signed __int32 *v42; // rdi
  signed __int32 v43; // esi
  signed __int32 v44; // r15d
  _QWORD *v45; // rbx
  unsigned __int64 v46; // rdx
  unsigned int *v47; // rbx
  __int64 v48; // r8
  char *k; // rax
  unsigned int *v50; // rcx
  int v51; // ecx
  signed __int32 v52; // eax
  volatile signed __int64 *v53; // rdi
  __int64 v54; // r8
  unsigned int v55; // r10d
  signed __int64 v56; // rsi
  unsigned int v57; // edx
  signed __int64 v58; // r9
  signed __int64 v59; // rax
  signed __int64 v60; // rtt
  __int64 v61; // rbx
  int v62; // r12d
  __int64 v63; // r8
  unsigned int *v64; // rdx
  __int64 v65; // rcx
  signed __int64 v66; // r8
  __int64 v67; // r10
  signed __int64 v68; // rax
  signed __int64 v69; // rtt
  void *v70; // rcx
  int LogFile; // [rsp+28h] [rbp-59h]
  unsigned int v72; // [rsp+2Ch] [rbp-55h] BYREF
  _DWORD v73[19]; // [rsp+30h] [rbp-51h] BYREF
  __int16 v74; // [rsp+7Eh] [rbp-3h]
  int v75; // [rsp+A0h] [rbp+1Fh]

  v2 = a1[1];
  v4 = *a1;
  v72 = 0;
  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1, a2);
  if ( (unsigned __int8)EtwpBootPhase > 3u )
    _InterlockedOr((volatile signed __int32 *)(v5 + 816), 4u);
  if ( !*(_QWORD *)(v5 + 192) )
    return 0LL;
  LogFile = EtwpCreateLogFile(v5, 0LL, 0LL);
  LODWORD(v8) = LogFile;
  if ( LogFile < 0 )
    goto LABEL_118;
  if ( (a1[3] & 0x40000) != 0 )
  {
    memset_0(v73, 0, 0x78uLL);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(CurrentServerSiloGlobals[52].Flink, qword_140037B38, 0LL);
    v11 = GuidEntryByGuid;
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      v13 = (volatile signed __int32 *)(GuidEntryByGuid + 664);
      --CurrentThread->KernelApcDisable;
      v14 = KeAbPreAcquire(GuidEntryByGuid + 664, 0LL);
      v15 = v14;
      if ( _interlockedbittestandset64(v13, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 664), (__int64)v14, v11 + 664);
      if ( v15 )
        *((_BYTE *)v15 + 10) = 1;
      v16 = (_QWORD **)(v11 + 56);
      *(_QWORD *)(v11 + 672) = KeGetCurrentThread();
      if ( *v16 == v16 || !EtwpGetEnableInfoIndex(v11, *a1, &v72) )
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
        v73[0] = 3;
        v75 = 2;
        v73[18] = 2;
        v74 = v20;
        for ( i = *v16; i != v16; i = (_QWORD *)*i )
          EtwpSendDataBlock(i, v73);
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
            v27 = *(_QWORD *)(v25 + 64);
            *(_QWORD *)(v25 + 56) = 0LL;
            *(_QWORD *)(v25 + 64) = 0LL;
            v8 = (unsigned int)EtwpFlushBuffer(a1, v25, v26 == 0);
            *(_WORD *)(v25 + 52) = 0;
            guard_dispatch_icall_no_overrides(v8, v25, v27, v28);
            v25 = v26;
          }
          while ( v26 );
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
      v29 = v72;
      if ( (a1[3] & 0x10000000) != 0 )
      {
        v30 = a1 + 32;
      }
      else
      {
        v31 = *((_QWORD *)a1 + 170);
        if ( v31 == EtwpHostSiloState )
          v30 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(KeGetPrcb(v72) + 35752) + 320LL) + 8 * v4);
        else
          v30 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v72 << 6) + *(_QWORD *)(v31 + 4416)) + 8 * v4);
      }
      v32 = *v30 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v32 )
      {
        v33 = _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 8), v2);
        if ( v33 <= v2 )
          *(_DWORD *)(v32 + 4) = v33;
        _m_prefetchw(v30);
        for ( j = *v30; (v32 ^ j) <= 0xF; j = v35 )
        {
          v35 = _InterlockedCompareExchange64(v30, 0LL, j);
          if ( j == v35 )
            break;
        }
        if ( (j & 0xFFFFFFFFFFFFFFF0uLL) == v32 )
        {
          _InterlockedAdd((volatile signed __int32 *)((j & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(j & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, v32);
        }
        v29 = v72;
      }
      v72 = v29 + 1;
    }
    while ( v29 + 1 < UsedProcessorCount );
  }
  EtwpLockUnlockBufferList((__int64)a1);
  if ( (a1[3] & 0x4000000) == 0 )
  {
    v53 = (volatile signed __int64 *)(a1 + 394);
    v55 = EtwpQueryUsedProcessorCount((__int64)a1, v36);
    v56 = 0LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 197, *((_QWORD *)a1 + 101), -1LL) == -1 )
    {
      if ( *((_QWORD *)a1 + 195) )
      {
        v57 = 0;
        if ( v55 )
        {
          v54 = 0LL;
          do
          {
            v58 = *(_QWORD *)(v54 + *((_QWORD *)a1 + 195));
            v59 = *(_QWORD *)(v54 + *((_QWORD *)a1 + 196));
            if ( v58 > v59 )
            {
              do
              {
                v60 = v59;
                v59 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(*((_QWORD *)a1 + 196) + 8LL * v57),
                        v58,
                        v59);
              }
              while ( v60 != v59 && v58 > v59 );
            }
            ++v57;
            v54 += 8LL;
          }
          while ( v57 < v55 );
        }
      }
      v61 = EtwpFindAndLockBufferForFlushing(a1, *v53, v54);
      if ( v61 )
      {
        v62 = LogFile;
        do
        {
          EtwpWaitForBufferReferenceCount(v61);
          if ( (unsigned int)EtwpPrepareHeader(a1, v61, 0LL) != -2147483614 )
          {
            v62 = EtwpFlushBufferToLogfile(a1, v61);
            if ( !v56 )
              v56 = *(_QWORD *)(v61 + 16);
          }
          _InterlockedAdd64(v53, 0xFFFFFFFFFFFFFFFFuLL);
          _InterlockedExchange((volatile __int32 *)(v61 + 44), 0);
          if ( v62 < 0 )
            break;
          v61 = EtwpFindAndLockBufferForFlushing(a1, *v53, v63);
        }
        while ( v61 );
        LODWORD(v8) = v62;
      }
      v45 = a1 + 394;
      if ( *((_QWORD *)a1 + 196) )
      {
        v64 = (unsigned int *)*((_QWORD *)a1 + 10);
        if ( v64 != a1 + 20 )
        {
          while ( v64 )
          {
            v65 = *((_QWORD *)v64 + 2);
            v66 = *(_QWORD *)(v65 + 16);
            v67 = *(unsigned __int16 *)(v65 + 40);
            if ( v66 < v56 && *(_QWORD *)(v65 + 24) <= *v53 )
            {
              v68 = *(_QWORD *)(*((_QWORD *)a1 + 196) + 8 * v67);
              do
              {
                if ( v66 <= v68 )
                  break;
                v69 = v68;
                v68 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(*((_QWORD *)a1 + 196) + 8 * v67),
                        v66,
                        v68);
              }
              while ( v69 != v68 );
            }
            v64 = *(unsigned int **)v64;
            if ( v64 == a1 + 20 )
              v64 = 0LL;
          }
        }
      }
      goto LABEL_117;
    }
    return 3221225539LL;
  }
  EtwpBufferingModeCompressionFlush((__int64)a1);
  v37 = *((_QWORD *)a1 + 101) + 1LL;
  if ( v37 < 0 )
    goto LABEL_70;
  v38 = a1 + 20;
  do
  {
    v39 = (_QWORD *)*v38;
    --v37;
    v40 = 0LL;
    if ( (_QWORD *)*v38 == v38 )
      break;
    while ( v39 )
    {
      v41 = *(_QWORD *)(v39[2] + 24LL);
      if ( v41 == v37 )
      {
        v40 = v39[2];
        break;
      }
      if ( v41 < v37 && (!v40 || v41 > *(_QWORD *)(v40 + 24)) )
        v40 = v39[2];
      v39 = (_QWORD *)*v39;
      if ( v39 == v38 )
        v39 = 0LL;
    }
    if ( !v40 )
      break;
    v42 = (volatile signed __int32 *)(v40 + 44);
    Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline();
    v43 = *(_DWORD *)(v40 + 44);
    if ( (unsigned int)(v43 - 4) > 1 )
      goto LABEL_68;
    v44 = _InterlockedCompareExchange(v42, 3, v43);
    if ( v43 != v44 )
      goto LABEL_68;
    if ( *(_QWORD *)(v40 + 24) == v37 )
    {
      EtwpWaitForBufferReferenceCount(v40);
      if ( v44 == 5 )
      {
        if ( *(_DWORD *)(v40 + 8) == 72 )
        {
          _InterlockedExchange(v42, 0);
          goto LABEL_68;
        }
        v46 = v40 + *(unsigned int *)(v40 + 8);
        v47 = (unsigned int *)(v40 + 72);
        *((_QWORD *)v47 + 4) = 0LL;
        v48 = *v47;
        for ( k = (char *)v47 + v48; (unsigned __int64)k < v46; k = (char *)v47 + *v47 )
        {
          v50 = v47;
          v47 = (unsigned int *)((char *)v47 + (unsigned int)v48);
          *((_QWORD *)v47 + 4) = v50;
          LODWORD(v48) = *v47;
        }
        do
        {
          if ( (unsigned int)EtwpPrepareHeader(a1, v47, 64LL) == -2147483614 )
          {
            v51 = LogFile;
          }
          else
          {
            v51 = EtwpFlushBufferToLogfile(a1, v47);
            LogFile = v51;
          }
          v47 = (unsigned int *)*((_QWORD *)v47 + 4);
        }
        while ( v47 );
        v52 = 5;
      }
      else
      {
        if ( v44 != 4 )
          goto LABEL_68;
        if ( (unsigned int)EtwpPrepareHeader(a1, v40, 0LL) == -2147483614 )
        {
          v51 = LogFile;
        }
        else
        {
          v51 = EtwpFlushBufferToLogfile(a1, v40);
          LogFile = v51;
        }
        v52 = 4;
      }
      _InterlockedCompareExchange(v42, v43, v52);
      if ( v51 < 0 )
        break;
    }
    else
    {
      _InterlockedCompareExchange(v42, v43, 3);
    }
LABEL_68:
    v38 = a1 + 20;
  }
  while ( v37 >= 0 );
  LODWORD(v8) = LogFile;
LABEL_70:
  v45 = a1 + 394;
LABEL_117:
  EtwpFinalizeHeader(a1, 0LL);
  a1[62] = 0;
  *v45 = -1LL;
LABEL_118:
  v70 = (void *)*((_QWORD *)a1 + 100);
  if ( v70 )
  {
    ZwClose(v70);
    *((_QWORD *)a1 + 100) = 0LL;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 38));
  return (unsigned int)v8;
}
