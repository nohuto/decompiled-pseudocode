/*
 * XREFs of RtlpCreateHeap @ 0x180036390
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x1800240BC (LdrEnsureMrdataHeapExists.c)
 *     LdrpInitializeProcessHeap @ 0x180034DF8 (LdrpInitializeProcessHeap.c)
 *     CsrpConnectToServer @ 0x180035EC0 (CsrpConnectToServer.c)
 *     RtlCreateHeap @ 0x180036360 (RtlCreateHeap.c)
 *     LdrpInitializeTlsHeap @ 0x1800B8054 (LdrpInitializeTlsHeap.c)
 *     RtlDetectHeapLeaks @ 0x1800FE250 (RtlDetectHeapLeaks.c)
 *     RtlHeapTrkInitialize @ 0x180116430 (RtlHeapTrkInitialize.c)
 *     RtlDebugCreateHeap @ 0x18011912C (RtlDebugCreateHeap.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x1800073E0 (RtlInitializeCriticalSectionEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpHeapLoggingStateSync @ 0x180034D90 (RtlpHpHeapLoggingStateSync.c)
 *     RtlpHpConvertCreationFlags @ 0x180035120 (RtlpHpConvertCreationFlags.c)
 *     RtlpHpHeapCreate @ 0x1800351B4 (RtlpHpHeapCreate.c)
 *     RtlpHeapLogRangeCreate @ 0x180035E24 (RtlpHeapLogRangeCreate.c)
 *     RtlpCreateHeapEncoding @ 0x180037658 (RtlpCreateHeapEncoding.c)
 *     RtlpInitializeHeapSegment @ 0x18003771C (RtlpInitializeHeapSegment.c)
 *     RtlpProcessHeapsInsert @ 0x180037A58 (RtlpProcessHeapsInsert.c)
 *     RtlpPopulateListIndex @ 0x180037E98 (RtlpPopulateListIndex.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800B8DC0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlDeleteCriticalSection @ 0x1800B9240 (RtlDeleteCriticalSection.c)
 *     RtlpHpHeapDestroy @ 0x1800B93D0 (RtlpHpHeapDestroy.c)
 *     RtlpHeapExceptionFilter @ 0x18010CF40 (RtlpHeapExceptionFilter.c)
 *     RtlpHpParametersVerify @ 0x18010D058 (RtlpHpParametersVerify.c)
 *     RtlpDebugPageHeapCreate @ 0x18010FC70 (RtlpDebugPageHeapCreate.c)
 *     RtlpLogHeapCommit @ 0x1801170C8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x180118270 (RtlpLogHeapCreateEvent.c)
 *     RtlDebugCreateHeap @ 0x18011912C (RtlDebugCreateHeap.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18011F114 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpReportHeapFailure @ 0x180120DBC (RtlpReportHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpCreateHeap(
        int a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  int v7; // r14d
  __int64 v9; // r12
  unsigned int NtGlobalFlag; // r15d
  unsigned int v11; // r13d
  char v12; // bl
  void *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // edi
  _BYTE *v16; // r14
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // edi
  struct _PEB *v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r8
  void *v26; // r12
  __int64 v27; // rbx
  volatile signed __int32 *v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rax
  int v32; // r13d
  unsigned __int64 v33; // rax
  signed __int64 v34; // rdx
  unsigned __int64 v35; // rtt
  int v36; // eax
  char *v37; // rdi
  char *v38; // r14
  int v39; // eax
  __int64 v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rdi
  unsigned int v43; // r13d
  __int64 v44; // r9
  char *v45; // r10
  char v46; // dl
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  int v51; // edi
  char *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rcx
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v57; // r10
  unsigned __int64 v58; // rdi
  char v59; // dl
  int v60; // r8d
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // r12
  unsigned __int64 v64; // rbx
  unsigned int v65; // eax
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  char *v68; // [rsp+40h] [rbp-258h] BYREF
  __int64 v69; // [rsp+48h] [rbp-250h]
  void *v70; // [rsp+50h] [rbp-248h]
  unsigned __int64 v71; // [rsp+58h] [rbp-240h]
  unsigned __int64 v72; // [rsp+60h] [rbp-238h] BYREF
  unsigned __int64 v73; // [rsp+68h] [rbp-230h] BYREF
  int v74; // [rsp+70h] [rbp-228h]
  char *v75; // [rsp+78h] [rbp-220h] BYREF
  __int64 v76; // [rsp+80h] [rbp-218h]
  unsigned int v77; // [rsp+88h] [rbp-210h]
  unsigned __int64 v78; // [rsp+90h] [rbp-208h] BYREF
  unsigned __int64 v79; // [rsp+98h] [rbp-200h] BYREF
  char *v80; // [rsp+A0h] [rbp-1F8h] BYREF
  int v81; // [rsp+A8h] [rbp-1F0h]
  unsigned __int64 v82; // [rsp+B0h] [rbp-1E8h]
  __int128 v83; // [rsp+C0h] [rbp-1D8h]
  void *v84; // [rsp+D8h] [rbp-1C0h]
  __int64 v85; // [rsp+E0h] [rbp-1B8h]
  void *v86[2]; // [rsp+E8h] [rbp-1B0h] BYREF
  __int128 v87; // [rsp+F8h] [rbp-1A0h]
  __int128 v88; // [rsp+108h] [rbp-190h]
  __int128 v89; // [rsp+120h] [rbp-178h] BYREF
  __int128 v90; // [rsp+130h] [rbp-168h] BYREF
  __int128 v91; // [rsp+140h] [rbp-158h]
  __int128 v92; // [rsp+150h] [rbp-148h]
  __int128 v93; // [rsp+160h] [rbp-138h] BYREF
  __int128 v94; // [rsp+170h] [rbp-128h]
  __int128 v95; // [rsp+180h] [rbp-118h]
  __int128 v96; // [rsp+190h] [rbp-108h]
  __int128 v97; // [rsp+1A0h] [rbp-F8h]
  __int128 v98; // [rsp+1B0h] [rbp-E8h]
  _BYTE v99[80]; // [rsp+1C0h] [rbp-D8h] BYREF
  _BYTE SystemInformation[40]; // [rsp+210h] [rbp-88h] BYREF
  __int64 v101; // [rsp+238h] [rbp-60h]

  v7 = a4;
  v82 = a4;
  v71 = a3;
  v70 = a2;
  v69 = a5;
  v84 = a2;
  v85 = a5;
  v9 = a6;
  v77 = a7;
  v75 = 0LL;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  *(_OWORD *)v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v74 = 0;
  DWORD1(v93) = 0;
  v73 = 0LL;
  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  memset_thunk_772440563353939046(v99, 0, 0x50uLL);
  v11 = a7 != 0;
  v68 = 0LL;
  v12 = 0;
  v76 = 0LL;
  v13 = v70;
  v14 = a5;
  if ( dword_1801CE578 && !v70 && !v69 )
  {
    v28 = (volatile signed __int32 *)RtlpDebugPageHeapCreate(a1, 0, v71, v7, 0LL, a6);
    if ( v28 )
    {
      v26 = v70;
      goto LABEL_42;
    }
    if ( a6 != -1 )
      goto LABEL_173;
    v9 = 0LL;
    v12 = 1;
    v14 = v69;
    v13 = v70;
  }
  v15 = a1 & 0xF1FFFFFF;
  v16 = 0LL;
  if ( (v15 & 0x100) != 0 )
  {
    if ( (v15 & 2) == 0 || v13 || v14 )
      goto LABEL_173;
    if ( v9 == -1 && dword_1801CE588 )
    {
      v9 = 0LL;
      v12 = 1;
    }
    if ( v9 )
    {
      v16 = (_BYTE *)v9;
      if ( !(unsigned int)RtlpHpParametersVerify(v9) )
        goto LABEL_173;
    }
    else
    {
      v16 = v99;
    }
  }
  else if ( (RtlpHpHeapFeatures & 1) != 0
         && (v15 & 2) != 0
         && !v13
         && (!v9 || !*(_QWORD *)(v9 + 8) && !*(_QWORD *)(v9 + 16) && !*(_QWORD *)(v9 + 48) && !*(_QWORD *)(v9 + 72)) )
  {
    v16 = v99;
    if ( v14 )
      v16 = 0LL;
  }
  if ( v16 )
  {
    if ( v16 == v99 )
    {
      *(_QWORD *)(v16 + 4) = 0LL;
      *(_QWORD *)(v16 + 20) = 0LL;
      *(_QWORD *)(v16 + 28) = 0LL;
      *(_QWORD *)(v16 + 36) = 0LL;
      *(_QWORD *)(v16 + 44) = 0LL;
      *(_QWORD *)(v16 + 52) = 0LL;
      *(_QWORD *)(v16 + 60) = 0LL;
      *(_QWORD *)(v16 + 68) = 0LL;
      *((_DWORD *)v16 + 19) = 0;
      *(_DWORD *)v16 = 5242883;
      *((_DWORD *)v16 + 3) = 1;
      *((_DWORD *)v16 + 4) = -1;
      if ( v12 )
        *((_DWORD *)v16 + 1) = 2;
    }
    if ( (v16[4] & 1) == 0 )
    {
      v59 = BYTE2(RtlpHpEnvHandle);
      _BitScanReverse((unsigned int *)&v60, *((_DWORD *)v16 + 3));
      v81 = v60;
      v61 = *((_DWORD *)v16 + 4);
      if ( v61 != -1 )
        v59 = v61 + 1;
      v62 = *((_QWORD *)v16 + 3);
      LOBYTE(v83) = RtlpHpEnvHandle;
      BYTE1(v83) = v60;
      BYTE2(v83) = v59;
      *(_DWORD *)((char *)&v83 + 3) = *(_DWORD *)((char *)&RtlpHpEnvHandle + 3);
      BYTE7(v83) = BYTE7(RtlpHpEnvHandle);
      *((_QWORD *)&v83 + 1) = v62;
      v63 = v82;
      v64 = v82;
      if ( v71 )
        v64 = v71;
      if ( v82 > v64 )
        v63 = v64;
      v65 = RtlpHpConvertCreationFlags(v15, NtGlobalFlag, (__int64)v16);
      v89 = v83;
      v66 = RtlpHpHeapCreate(v65, v64, v63, &v89);
      v28 = (volatile signed __int32 *)v66;
      if ( v66 )
      {
        if ( (v15 & 1) != 0 )
          v11 |= 2u;
        if ( (int)RtlpProcessHeapsInsert(v66, v11) < 0 )
        {
          RtlpHpHeapDestroy(v28);
          v28 = 0LL;
        }
        if ( *((_DWORD *)v28 + 4) == -571548178 )
        {
          RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpHpStackTrackingContext);
          if ( (dword_1801D0918 & 1) != 0 && (dword_1801D0918 & 2) != 0 )
            _InterlockedOr(v28 + 5, 0x40u);
          RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
        }
        RtlpHpHeapLoggingStateSync((__int64)v28);
      }
      v26 = v70;
      goto LABEL_42;
    }
    v26 = v70;
    if ( dword_1801CE588 )
    {
      v28 = (volatile signed __int32 *)RtlpDebugPageHeapCreate(v15, (_DWORD)v70, v71, v82, 0LL, 0LL);
      goto LABEL_42;
    }
LABEL_41:
    v28 = 0LL;
LABEL_42:
    v29 = 0LL;
LABEL_43:
    v30 = v69;
    goto LABEL_44;
  }
  if ( (v15 & 0x10000000) != 0 )
    goto LABEL_6;
  if ( RtlpHeapErrorHandlerThreshold >= 2 )
  {
    if ( (v15 & 0xFFF80C00) == 0 )
      goto LABEL_6;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
    if ( !byte_1801D4988 )
      RtlpReportHeapFailure(2LL);
  }
  if ( (v15 & 0xFFF80C00) != 0 )
    v15 &= 0x7F3FFu;
LABEL_6:
  memset_thunk_772440563353939046(&v93, 0, 0x60uLL);
  if ( v9 && *(_DWORD *)v9 == 96 )
  {
    v93 = *(_OWORD *)v9;
    v94 = *(_OWORD *)(v9 + 16);
    v95 = *(_OWORD *)(v9 + 32);
    v96 = *(_OWORD *)(v9 + 48);
    v97 = *(_OWORD *)(v9 + 64);
    v98 = *(_OWORD *)(v9 + 80);
  }
  if ( (NtGlobalFlag & 0x10) != 0 )
    v15 |= 0x20u;
  v17 = v15 | 0x40;
  if ( (NtGlobalFlag & 0x20) == 0 )
    v17 = v15;
  v18 = v17 | 0x80;
  if ( (NtGlobalFlag & 0x200000) == 0 )
    v18 = v17;
  v19 = v18 | 0x40000000;
  if ( (NtGlobalFlag & 0x40) == 0 )
    v19 = v18;
  v20 = v19 | 0x20000000;
  if ( (NtGlobalFlag & 0x80u) == 0 )
    v20 = v19;
  v21 = v20 | 0x8000000;
  if ( (NtGlobalFlag & 0x1000) == 0 )
    v21 = v20;
  v22 = NtCurrentPeb();
  if ( !*((_QWORD *)&v93 + 1) )
    *((_QWORD *)&v93 + 1) = v22->HeapSegmentReserve;
  if ( !(_QWORD)v94 )
    *(_QWORD *)&v94 = v22->HeapSegmentCommit;
  if ( !*((_QWORD *)&v94 + 1) )
    *((_QWORD *)&v94 + 1) = v22->HeapDeCommitFreeBlockThreshold;
  if ( !(_QWORD)v95 )
    *(_QWORD *)&v95 = v22->HeapDeCommitTotalFreeThreshold;
  v23 = qword_1801D0728;
  if ( !qword_1801D0728 )
  {
    qword_1801D0730 = 0x10000LL;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      v23 = v101;
      qword_1801D0728 = v101;
      goto LABEL_28;
    }
LABEL_173:
    v26 = v70;
    goto LABEL_41;
  }
LABEL_28:
  if ( !*((_QWORD *)&v95 + 1) )
    *((_QWORD *)&v95 + 1) = v23 - qword_1801D0730 - 4096;
  if ( (unsigned __int64)(v96 - 1) > 0xFEFFF )
    *(_QWORD *)&v96 = 1044480LL;
  if ( v82 )
    v24 = (v82 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v24 = 0x2000LL;
  v73 = v24;
  if ( v71 )
    v25 = (v71 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v25 = (v24 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v72 = v25;
  v14 = v24;
  if ( v24 > v25 )
  {
    v24 = v25;
    v73 = v25;
    v14 = v25;
  }
  v26 = v70;
  if ( (v21 & 2) == 0 || v70 )
  {
    v27 = 0LL;
  }
  else
  {
    v27 = 4096LL;
    v74 = 2;
    if ( v25 - 4096 < v14 )
    {
      v25 = (v25 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v72 = v25;
    }
  }
  if ( !v24 || !v25 )
    goto LABEL_41;
  LOBYTE(v14) = (v21 & 0x61000000) != 0;
  if ( ((unsigned __int8)v14 & ((v21 & 0x10000000) == 0)) != 0 )
    return RtlDebugCreateHeap(v21, (_DWORD)v70, v25, v24, v69, (__int64)&v93, v77);
  v32 = 704;
  v30 = v69;
  if ( (v21 & 1) != 0 )
  {
    LODWORD(v71) = v21;
    v29 = 0LL;
    if ( v69 )
    {
      v28 = 0LL;
      goto LABEL_44;
    }
  }
  else
  {
    if ( v69 )
      v21 |= 0x80000000;
    LODWORD(v71) = v21;
    v14 = 744LL;
    if ( !v69 )
      v32 = 744;
    v29 = v69;
    if ( !v69 )
      v29 = 0LL;
    v76 = v29;
  }
  if ( v70 )
  {
    if ( *((_QWORD *)&v97 + 1) )
    {
      v14 = *((_QWORD *)&v96 + 1);
      if ( *((_QWORD *)&v96 + 1) && (_QWORD)v97 && *((_QWORD *)&v96 + 1) <= (unsigned __int64)v97 && (v21 & 2) == 0 )
      {
        v75 = (char *)v70;
        v38 = (char *)v70 + *((_QWORD *)&v96 + 1);
        v72 = v97;
        memset_thunk_772440563353939046(v70, 0, 0x1000uLL);
        v14 = (unsigned __int64)v70;
LABEL_156:
        v74 |= 1u;
        v37 = (char *)v70;
        v68 = (char *)v70;
LABEL_65:
        if ( (char *)v14 == v38 )
        {
          v39 = 64;
          if ( (v71 & 0x40000) == 0 )
            v39 = 4;
          if ( (int)ZwAllocateVirtualMemory(-1LL, &v75, 0LL, &v73, 4096, v39) < 0 )
          {
            v28 = 0LL;
            v26 = v70;
            goto LABEL_43;
          }
          v40 = 2147353472LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v41 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v41 = 2147353472LL;
          if ( *(_BYTE *)v41 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(v68, v75, v73, 1LL);
          v38 += v73;
          v37 = v68;
        }
        else
        {
          v40 = 2147353472LL;
        }
        v42 = (__int64)(v37 + 704);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          v58 = (v42 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          *((_QWORD *)v68 + 41) = v58;
          v32 += 2064;
          v42 = v58 + 2064;
          LODWORD(v71) = v71 | 0x4000000;
        }
        v43 = (v32 + 15) & 0xFFFFFFF0;
        *((_WORD *)v68 + 4) = v43 >> 4;
        v68[10] = 1;
        v68[15] = 1;
        *((_DWORD *)v68 + 38) = -285217025;
        *((_DWORD *)v68 + 28) = v71 & 0xEFFFFFFF;
        *((_DWORD *)v68 + 36) = 0;
        memset_thunk_772440563353939046(v68 + 568, 0, 0x78uLL);
        RtlpCreateHeapEncoding(v68);
        *((_DWORD *)v68 + 162) = 1;
        v45 = v68;
        if ( (*((_DWORD *)v68 + 28) & 0x8000000) != 0 )
        {
          HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
          *(_DWORD *)(v57 + 144) = HeapInterceptorIndex;
          *((_DWORD *)v68 + 28) &= ~0x40u;
          v45 = v68;
        }
        v46 = v71;
        *((_DWORD *)v45 + 29) = v71 & 0x6001007D;
        *((_WORD *)v68 + 105) = v42 - (_WORD)v68;
        *((_QWORD *)v68 + 27) = 0LL;
        v47 = v68 + 336;
        *((_QWORD *)v68 + 43) = v68 + 336;
        *v47 = v47;
        v48 = v68 + 272;
        *((_QWORD *)v68 + 35) = v68 + 272;
        *v48 = v48;
        v49 = v68 + 288;
        *((_QWORD *)v68 + 37) = v68 + 288;
        *v49 = v49;
        v50 = v68 + 240;
        *((_QWORD *)v68 + 31) = v68 + 240;
        *v50 = v50;
        if ( v76 || (v46 & 1) != 0 )
        {
LABEL_81:
          *((_QWORD *)v68 + 44) = v76;
          *((_DWORD *)v68 + 30) |= 0x80000000;
          if ( (unsigned __int8)RtlpInitializeHeapSegment(
                                  (_DWORD)v68,
                                  (_DWORD)v68,
                                  v43 + 1104,
                                  v44,
                                  v74,
                                  (__int64)v75,
                                  (__int64)v38,
                                  (__int64)&v75[v72 - v27]) )
          {
            if ( v70 )
              memset_thunk_772440563353939046((void *)v42, 0, 0x80uLL);
            *(_DWORD *)(v42 + 8) = 128;
            *(_QWORD *)(v42 + 40) = v42 + 56;
            *(_QWORD *)(v42 + 32) = v68 + 336;
            *(_QWORD *)(v42 + 48) = v42 + 72;
            RtlpPopulateListIndex(v68, v42);
            *((_WORD *)v68 + 104) = 0;
            *((_QWORD *)v68 + 20) = *((_QWORD *)&v93 + 1);
            *((_QWORD *)v68 + 21) = v94;
            *((_QWORD *)v68 + 22) = *((_QWORD *)&v94 + 1) >> 4;
            *((_QWORD *)v68 + 23) = (unsigned __int64)v95 >> 4;
            *((_QWORD *)v68 + 25) = *((_QWORD *)&v95 + 1);
            *((_DWORD *)v68 + 37) = (unsigned __int64)(v96 + 15) >> 4;
            *((_QWORD *)v68 + 45) = RtlpHeapKey ^ *((_QWORD *)&v97 + 1);
            *((_DWORD *)v68 + 172) = 4;
            *((_QWORD *)v68 + 87) = 2088960LL;
            if ( (RtlpDisableHeapLookaside & 1) != 0 )
              *((_DWORD *)v68 + 30) = 1;
            v51 = v71;
            *((_QWORD *)v68 + 32) = 31LL;
            *((_QWORD *)v68 + 33) = -16LL;
            v52 = v68;
            if ( (v68[112] & 0x20) != 0 )
            {
              *((_QWORD *)v68 + 32) += 16LL;
              v52 = v68;
            }
            *((_QWORD *)v52 + 51) = 0LL;
            *((_WORD *)v68 + 208) = 0;
            v68[418] = 0;
            v68[419] = 0;
            *((_QWORD *)v68 + 40) = 0LL;
            if ( (v51 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
              goto LABEL_91;
            *((_QWORD *)v68 + 53) = RtlAllocateHeap(v68);
            v14 = *((_QWORD *)v68 + 53);
            if ( v14 )
            {
              *(_BYTE *)(v14 - 1) = 1;
              *((_WORD *)v68 + 216) = 128;
LABEL_91:
              v68[563] = 0;
              *((_QWORD *)v68 + 46) = 0LL;
              if ( (int)RtlpProcessHeapsInsert(v68, v77) < 0 )
              {
                v28 = 0LL;
                v29 = v76;
                v26 = v70;
                goto LABEL_43;
              }
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                v53 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v53 = 2147353472LL;
              if ( *(_BYTE *)v53 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                  v40 = (__int64)NtCurrentPeb()->SharedData + 550;
                RtlpLogHeapCreateEvent((_DWORD)v68, v51, v72, v73, *(unsigned __int8 *)v40);
              }
              v54 = 2147353482LL;
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                v55 = (__int64)NtCurrentPeb()->SharedData + 560;
              else
                v55 = 2147353482LL;
              if ( *(_BYTE *)v55 )
              {
                if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                  v54 = (__int64)NtCurrentPeb()->SharedData + 560;
                RtlpLogHeapCreateEvent((_DWORD)v68, v51, v72, v73, *(unsigned __int8 *)v54);
              }
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                v14 = (unsigned __int64)NtCurrentPeb()->SharedData + 558;
              else
                v14 = 2147353480LL;
              if ( *(_BYTE *)v14 )
                RtlpHeapLogRangeCreate((__int64)v68, v72, v51);
              *((_DWORD *)v68 + 30) &= ~0x80000000;
              v28 = (volatile signed __int32 *)v68;
              v68 = 0LL;
              v26 = v70;
              goto LABEL_42;
            }
          }
          v28 = 0LL;
          v29 = v76;
          v26 = v70;
          goto LABEL_43;
        }
        v76 = v42;
        if ( (int)RtlInitializeCriticalSectionEx(v42, 0, 0x10000000LL, v44) >= 0 )
        {
          v42 += 40LL;
          goto LABEL_81;
        }
        goto LABEL_173;
      }
    }
    else if ( (int)ZwQueryVirtualMemory(-1LL, v70, 0LL, v86, 48LL, 0LL) >= 0 )
    {
      v38 = (char *)v86[0];
      if ( v86[0] == v70 && (_DWORD)v88 != 0x10000 )
      {
        v14 = (unsigned __int64)v86[0];
        v75 = (char *)v86[0];
        if ( (_DWORD)v88 == 4096 )
        {
          if ( (v21 & 0x40000) != 0 && (BYTE4(v88) & 0x40) == 0 )
          {
            v28 = 0LL;
            goto LABEL_43;
          }
          memset_thunk_772440563353939046(v86[0], 0, 0x1000uLL);
          if ( (int)ZwQueryVirtualMemory(-1LL, v70, 3LL, &v90, 48LL, 0LL) < 0 )
          {
            v28 = 0LL;
            goto LABEL_43;
          }
          v72 = v91;
          v73 = *((_QWORD *)&v87 + 1);
          v14 = (unsigned __int64)v75;
          v38 = &v75[*((_QWORD *)&v87 + 1)];
        }
        else
        {
          v72 = *((_QWORD *)&v87 + 1);
          v67 = v73;
          if ( v73 > *((_QWORD *)&v87 + 1) )
          {
            v67 = *((_QWORD *)&v87 + 1);
            v73 = *((_QWORD *)&v87 + 1);
          }
          if ( v67 < 0x2000 )
          {
            v28 = 0LL;
            goto LABEL_43;
          }
        }
        goto LABEL_156;
      }
    }
    v28 = 0LL;
    goto LABEL_43;
  }
  v80 = 0LL;
  v79 = 0LL;
  v78 = 0LL;
  if ( !*((_QWORD *)&v97 + 1) )
  {
    v33 = qword_1801CFF00;
    do
    {
      v34 = ((((v33 ^ (v33 >> 12)) << 25) ^ v33 ^ (v33 >> 12)) >> 27) ^ ((v33 ^ (v33 >> 12)) << 25) ^ v33 ^ (v33 >> 12);
      v35 = v33;
      v33 = _InterlockedCompareExchange64(&qword_1801CFF00, v34, v33);
    }
    while ( v35 != v33 );
    v78 = (unsigned __int64)((-3 * (_BYTE)v34) & 0x1F) << 16;
    v79 = v72 + v78;
    if ( v72 + v78 < v72 )
    {
      v79 = v72;
      v78 = 0LL;
    }
    v36 = 64;
    if ( (v21 & 0x40000) == 0 )
      v36 = 4;
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v80, 0LL, &v79, 0x2000, v36) < 0 )
    {
      v28 = 0LL;
      v26 = v70;
      goto LABEL_43;
    }
    v37 = v80;
    v68 = v80;
    v72 = v79;
    if ( v78 )
    {
      RtlpSecMemFreeVirtualMemory(v14, &v80, &v78, 0x8000LL);
      v37 = &v80[v78];
      v68 = &v80[v78];
      v72 = v79 - v78;
    }
    v14 = (unsigned __int64)v37;
    v75 = v37;
    v38 = v37;
    goto LABEL_65;
  }
  v28 = 0LL;
LABEL_44:
  if ( v29 && v29 != v30 )
    RtlDeleteCriticalSection(v29);
  if ( v68 )
  {
    if ( !v26 )
    {
      v72 = 0LL;
      RtlpSecMemFreeVirtualMemory(v14, &v68, &v72, 0x8000LL);
    }
  }
  return (__int64)v28;
}
