/*
 * XREFs of VidSchiSendToExecutionQueue @ 0x140022AC0
 * Callers:
 *     VidSchiSendToExecutionQueueWithWait @ 0x1400AEE4C (VidSchiSendToExecutionQueueWithWait.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x140018838 (McTemplateK0piixqq_EtwWriteTransfer.c)
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiFillSubmitCommandDataVirtual @ 0x1400236E0 (VidSchiFillSubmitCommandDataVirtual.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x140024534 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiUpdateContextStatus @ 0x1400260E0 (VidSchiUpdateContextStatus.c)
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 *     VidSchiFillSubmitCommandData @ 0x14003F090 (VidSchiFillSubmitCommandData.c)
 *     ?ValidateMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x14004BFF8 (-ValidateMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchIsVSyncEnabled @ 0x1400D9780 (VidSchIsVSyncEnabled.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiSendToExecutionQueue(__int64 a1, char a2)
{
  signed __int64 v2; // r13
  signed __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r14
  _BYTE *v9; // rbx
  const char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // al
  _BYTE *v14; // rax
  char v15; // al
  int v16; // ecx
  KIRQL v17; // r12
  __int64 v18; // rbx
  LARGE_INTEGER PerformanceCounter; // rdx
  LARGE_INTEGER v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  LARGE_INTEGER *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r9
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rax
  signed __int32 v33; // r14d
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rax
  char v38; // r14
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // r8
  bool v42; // al
  __int64 v43; // rcx
  const char *ProcessImageFileName; // rax
  unsigned int j; // r12d
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // r8d
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  LARGE_INTEGER *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // rdx
  unsigned int v63; // r14d
  __int64 v64; // r9
  unsigned int i; // r8d
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // r8
  KIRQL v70; // [rsp+50h] [rbp-B0h]
  char v71; // [rsp+51h] [rbp-AFh] BYREF
  char v72; // [rsp+52h] [rbp-AEh]
  int v73; // [rsp+54h] [rbp-ACh]
  LARGE_INTEGER *v74; // [rsp+58h] [rbp-A8h]
  signed __int64 v75; // [rsp+60h] [rbp-A0h]
  __int64 v76; // [rsp+68h] [rbp-98h]
  _DWORD v77[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v78; // [rsp+78h] [rbp-88h]
  __int64 v79; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-78h] BYREF
  __int128 v81; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v82; // [rsp+B0h] [rbp-50h]
  __int128 v83; // [rsp+C0h] [rbp-40h]
  __int128 v84; // [rsp+D0h] [rbp-30h]
  __int128 v85; // [rsp+E0h] [rbp-20h]
  __int128 v86; // [rsp+F0h] [rbp-10h]
  _QWORD v87[16]; // [rsp+100h] [rbp+0h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v72 = a2;
  v4 = *(_QWORD *)(v2 + 104);
  v5 = *(_QWORD *)(v2 + 96);
  v75 = v4;
  v6 = *(_QWORD *)(v5 + 24);
  v76 = *(_QWORD *)(v4 + 40);
  v81 = 0LL;
  v73 = 0;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v7 = 56LL * *(unsigned int *)(v5 + 512);
  LODWORD(v74) = *(_DWORD *)(v5 + 512);
  v8 = v5 + v7;
  v9 = (_BYTE *)(v8 + 528);
  if ( v4 == *(_QWORD *)(*(_QWORD *)(v4 + 32) + 256LL) )
  {
    v10 = "System";
  }
  else
  {
    v43 = *(_QWORD *)(v4 + 40);
    if ( v43 && *(_QWORD *)(v43 + 8) )
    {
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(v43 + 2656));
      v10 = ProcessImageFileName;
      if ( !ProcessImageFileName || !*ProcessImageFileName )
      {
        *v9 = 0;
        goto LABEL_10;
      }
    }
    else
    {
      v10 = "Unknown";
    }
  }
  v11 = 16LL;
  v12 = v10 - v9;
  do
  {
    if ( v11 == -2147483630 )
      break;
    v13 = v9[v12];
    if ( !v13 )
      break;
    *v9++ = v13;
    --v11;
  }
  while ( v11 );
  v14 = v9 - 1;
  if ( v11 )
    v14 = v9;
  *v14 = 0;
LABEL_10:
  v15 = (_BYTE)v74 + 1;
  *(_OWORD *)(v8 + 544) = *(_OWORD *)(a1 + 72);
  *(_OWORD *)(v8 + 560) = *(_OWORD *)(a1 + 88);
  *(_QWORD *)(v8 + 576) = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(v5 + 512) = v15 & 0xF;
  v16 = *(_DWORD *)(a1 + 92);
  if ( (v16 & 4) != 0 )
  {
    v59 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v59 + 72) & 0x4000) != 0
      && ((*(_DWORD *)(v4 + 48) & 2) != 0 || *(int *)(v59 + 872) >= 4 || *(_BYTE *)(v6 + 156)) )
    {
      *(_DWORD *)(a1 + 92) = v16 | 0x200;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 868));
      VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v6, *(_DWORD *)(*(_QWORD *)(a1 + 56) + 168LL));
    }
  }
  v70 = KfRaiseIrql(2u);
  v17 = v70;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1984), &LockHandle);
  v18 = *(_QWORD *)(a1 + 56);
  if ( v18 && (*(_DWORD *)(v18 + 64) & 0x80u) != 0 )
    goto LABEL_99;
  while ( 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 3020));
    *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(a1 + 72) = 9;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 784));
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v20 = PerformanceCounter;
    v18 = *(_QWORD *)(v5 + 184) + 112LL * *(unsigned int *)(v5 + 196);
    *(_OWORD *)v18 = 0LL;
    *(_OWORD *)(v18 + 16) = 0LL;
    *(_OWORD *)(v18 + 32) = 0LL;
    *(_OWORD *)(v18 + 48) = 0LL;
    *(_OWORD *)(v18 + 64) = 0LL;
    *(_OWORD *)(v18 + 80) = 0LL;
    *(_OWORD *)(v18 + 96) = 0LL;
    *(_DWORD *)(v5 + 196) = (*(_DWORD *)(v5 + 196) + 1) & (*(_DWORD *)(v5 + 192) - 1);
    if ( !PerformanceCounter.QuadPart )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)(v18 + 8) = PerformanceCounter;
    if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 3016)) == 1 )
    {
      v21 = *(unsigned int *)(v2 + 404);
      v22 = gulPriorityToYieldPriorityBand[v21];
      if ( gulPriorityToYieldPriorityBand[v21] )
      {
        v23 = (LARGE_INTEGER *)(v5 + 2056 + 8 * v22);
        do
        {
          if ( v23[-4].QuadPart )
            *v23 = v20;
          --v23;
          --v22;
        }
        while ( v22 );
      }
    }
    if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 788)) == 1 )
    {
      if ( v75 == *(_QWORD *)(v6 + 256) )
        VidSchiUpdateContextStatus(v2, 1LL, 6794LL);
      *(_DWORD *)(v2 + 184) |= 2u;
      v40 = *(unsigned int *)(v2 + 404);
      if ( ++*(_DWORD *)(v5 + 4 * v40 + 1896) == 1 )
        *(_DWORD *)(v5 + 1892) |= 1 << *(_DWORD *)(v2 + 404);
      v73 = 1;
    }
    if ( *(_DWORD *)(a1 + 88) == 3 )
      break;
    v24 = *(_QWORD *)(a1 + 56);
    LOBYTE(v25) = 0;
    if ( !v24 )
      goto LABEL_28;
    VidSchiProfilePerformanceTick(6, v6, 0LL, 0LL, 0LL, v24, 0LL, 0LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 9;
    if ( (*(_DWORD *)(a1 + 92) & 0x10) == 0
      || (v60 = *(_QWORD *)(a1 + 56),
          v61 = *(unsigned int *)(v60 + 168),
          v62 = *(int *)(*(_QWORD *)(v6 + 8 * v61 + 3432) + 4LL),
          (((_DWORD)v62 - 3) & 0xFFFFFFFD) != 0) )
    {
      v26 = *(_QWORD *)(a1 + 56);
      v27 = *(_QWORD *)(v26 + 88);
      v28 = *(_QWORD *)(v27 + 160);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v26 + 112);
        if ( v29 <= v28 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 1792LL, v29, v28, 0LL);
          WdLogGlobalForLineNumber = 906;
          goto LABEL_104;
        }
      }
      *(_QWORD *)(v27 + 152) = *(_QWORD *)(v26 + 112);
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 8u;
LABEL_28:
      if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
        VidSchiFillSubmitCommandDataVirtual(a1, &v81);
      else
        VidSchiFillSubmitCommandData(a1, &v81);
      _InterlockedExchange64((volatile __int64 *)(v5 + 152), *(_QWORD *)(a1 + 104));
      v30 = *(_QWORD *)(a1 + 56);
      if ( v30 )
        v31 = *(_QWORD *)(v30 + 112);
      else
        v31 = 0LL;
      WdLogSingleEntry5(4LL, a1, *(_QWORD *)(a1 + 104), v30, *(int *)(a1 + 88), v31);
      WdLogGlobalForLineNumber = 7005;
      goto LABEL_33;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 3072LL, v60, v61, v62);
    WdLogGlobalForLineNumber = 906;
LABEL_99:
    v63 = *(_DWORD *)(v18 + 952);
    memset(v87, 0, sizeof(v87));
    for ( i = 0; i < v63; v87[v66] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8 * v66 + 960) + 96LL) + 48LL) )
    {
      if ( i >= 0x10 )
        break;
      v66 = i++;
    }
    v77[0] = v63;
    v77[1] = 0;
    v78 = v87;
    v67 = *(_QWORD *)(v6 + 16);
    v79 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 104) + 40LL) + 8LL);
    DXGADAPTER::ValidateMockDriverState(v67, 1LL, v77, v64);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 3028));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 3032));
  for ( j = *(_DWORD *)(v5 + 1576); j != *(_DWORD *)(v5 + 1568); j = ((_BYTE)j + 1) & 0xF )
  {
    v58 = *(LARGE_INTEGER **)(v5 + 8LL * j + 1584);
    v74 = v58;
    if ( (v58[23].LowPart & 8) == 0 )
    {
      VidSchiUpdateContextStatus(v58, 2LL, 6855LL);
      if ( j == *(_DWORD *)(v5 + 1576) && !v74[63].QuadPart )
        v74[63] = v20;
    }
  }
  *(_QWORD *)(v5 + 392) = MEMORY[0xFFFFF78000000320];
  KeResetEvent((PRKEVENT)(v5 + 352));
  v46 = *(_QWORD *)(v6 + 688);
  v47 = 8LL * *(unsigned __int16 *)(v5 + 4);
  v48 = *(unsigned __int16 *)(v5 + 4);
  if ( v48 < *(_DWORD *)(v6 + 760) )
    v46 += v47;
  ++*(_QWORD *)(*(_QWORD *)v46 + 104LL);
  v49 = *(_QWORD *)(v6 + 688) + v47;
  if ( v48 >= *(_DWORD *)(v6 + 760) )
    v49 = *(_QWORD *)(v6 + 688);
  v50 = *(_QWORD *)(*(_QWORD *)v49 + 104LL);
  v51 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 104) = v50;
  v52 = *(_QWORD *)(v51 + 96);
  v53 = *(_QWORD *)(v52 + 24);
  HIDWORD(v81) = 0;
  LODWORD(v81) = v50;
  v54 = *(unsigned __int16 *)(v52 + 4);
  v55 = *(_QWORD *)(v53 + 688);
  if ( (unsigned int)v54 < *(_DWORD *)(v53 + 760) )
    v55 += 8 * v54;
  DWORD1(v81) = *(unsigned __int16 *)(*(_QWORD *)v55 + 8LL);
  v56 = *(unsigned __int16 *)(v52 + 4);
  v57 = *(_QWORD *)(v53 + 688);
  if ( (unsigned int)v56 < *(_DWORD *)(v53 + 760) )
    v57 += 8 * v56;
  DWORD2(v81) = *(unsigned __int16 *)(*(_QWORD *)v57 + 6LL);
  RtlClearBitEx(
    v6 + 544,
    *(unsigned __int16 *)(v5 + 4),
    (unsigned int)_InterlockedExchange((volatile __int32 *)(v5 + 160), v50));
  v17 = v70;
LABEL_33:
  v25 = *(unsigned int *)(v5 + 1568);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8 * v25 + 1584), v2, 0LL) )
    goto LABEL_34;
LABEL_104:
  WdLogSingleEntry2(1LL, v6, a1);
  WdLogGlobalForLineNumber = 7034;
  DxgkLogInternalTriageEvent(v68, 0x40000LL);
LABEL_34:
  _InterlockedExchange((volatile __int32 *)(v5 + 1568), ((_BYTE)v25 + 1) & 0xF);
  if ( v73 )
  {
    v32 = *(_QWORD *)(v2 + 96);
    v71 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v32 + 24) + 24LL),
      VidSchiStartContextRunningTimeAtISR,
      v2,
      *(unsigned int *)(*(_QWORD *)(v32 + 24) + 32LL),
      &v71);
  }
  else if ( bTracingEnabled && (byte_140081241 & 2) != 0 )
  {
    McTemplateK0piixqq_EtwWriteTransfer();
  }
  v33 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 436), 1, 0);
  VidSchiProfilePerformanceTick(7, v6, v5, 0LL, 0LL, 0LL, a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v35 = *(unsigned int *)(v5 + 1424);
  v36 = v35;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 1440 + 8 * v35), a1, 0LL) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2048LL, v35, v5 + 1440 + 8 * v35, a1);
    WdLogGlobalForLineNumber = 906;
  }
  else
  {
    v2 = v75;
    v33 = 0;
    _InterlockedExchange((volatile __int32 *)(v5 + 1424), ((_BYTE)v35 + 1) & 0xF);
    if ( *(_DWORD *)(v6 + 3244) )
      goto LABEL_54;
    if ( !*(_BYTE *)(v2 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 200), 0, 0) )
      goto LABEL_40;
  }
  if ( !*(_DWORD *)(a1 + 88) )
    goto LABEL_54;
LABEL_40:
  v37 = *(_QWORD *)(a1 + 56);
  if ( v37 && (*(_DWORD *)(v37 + 76) & 0x80u) != 0 )
  {
LABEL_54:
    KeLowerIrql(v17);
    *(_DWORD *)v18 = 7;
    *(_QWORD *)(v18 + 16) = *(_QWORD *)(v5 + 152);
    *(_BYTE *)(v18 + 24) = *(_BYTE *)(v6 + 3268) & 1;
    *(_BYTE *)(v18 + 25) = *(_DWORD *)(v6 + 3244) != 0;
    v42 = *(_BYTE *)(v2 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 200), v33, 0);
    *(_BYTE *)(v18 + 26) = v42;
    if ( (*(_BYTE *)(v6 + 3268) & 1) != 0 )
      goto LABEL_57;
    goto LABEL_111;
  }
  *(_DWORD *)(a1 + 92) |= 0x20u;
  v38 = 1;
  ++*(_QWORD *)(v76 + 2840);
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    if ( *(_BYTE *)(v6 + 49) )
    {
      KeLowerIrql(v17);
      v38 = 0;
    }
    _InterlockedExchange((volatile __int32 *)(v5 + 504), 1);
    *(_DWORD *)(v5 + 176) = v81;
    *(_DWORD *)v18 = 3;
    *(_OWORD *)(v18 + 16) = v81;
    v39 = ((__int64 (__fastcall *)(_QWORD, __int128 *, __int64, __int64))DxgCoreInterface[31])(
            *(_QWORD *)(v6 + 8),
            &v81,
            v34,
            v36);
  }
  else
  {
    *(_QWORD *)(v5 + 168) = *(_QWORD *)(a1 + 104);
    if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
    {
      KeLowerIrql(v17);
      v38 = 0;
      v39 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[56])(*(_QWORD *)(v6 + 8), &v81);
      *(_DWORD *)v18 = 2;
      *(_OWORD *)(v18 + 16) = v81;
      *(_OWORD *)(v18 + 32) = v82;
      *(_OWORD *)(v18 + 48) = v83;
      *(_OWORD *)(v18 + 64) = v84;
      *(_DWORD *)(v18 + 80) = v39;
    }
    else
    {
      v39 = ((__int64 (__fastcall *)(_QWORD, __int128 *, __int64, __int64))DxgCoreInterface[30])(
              *(_QWORD *)(v6 + 8),
              &v81,
              v34,
              v36);
      *(_DWORD *)v18 = 1;
      *(_OWORD *)(v18 + 16) = v81;
      *(_OWORD *)(v18 + 32) = v82;
      *(_OWORD *)(v18 + 48) = v83;
      *(_OWORD *)(v18 + 64) = v84;
      *(_OWORD *)(v18 + 80) = v85;
      *(_OWORD *)(v18 + 96) = v86;
    }
  }
  if ( !v39 )
    goto LABEL_46;
  if ( !v72 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2LL, v39, &v81, a1);
    WdLogGlobalForLineNumber = 906;
LABEL_111:
    if ( !*(_DWORD *)(v6 + 3244) )
    {
      LOBYTE(v41) = 1;
      goto LABEL_58;
    }
LABEL_57:
    v41 = 0LL;
LABEL_58:
    VidSchiCompletePendingCommandInNodeHwQueue(v5, *(_QWORD *)(v5 + 152), v41);
    return;
  }
  VidSchMarkDeviceAsError(v2, 19LL);
  LOBYTE(v69) = 1;
  VidSchiCompletePendingCommandInNodeHwQueue(v5, *(_QWORD *)(v5 + 152), v69);
  *(_QWORD *)(v5 + 72) = *(_QWORD *)(v5 + 152);
LABEL_46:
  ++*(_QWORD *)(v6 + 480);
  if ( v38 )
    KeLowerIrql(v17);
}
