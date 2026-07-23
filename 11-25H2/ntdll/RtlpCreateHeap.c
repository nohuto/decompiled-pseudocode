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
        __int64 a3,
        unsigned __int64 a4,
        _RTL_CRITICAL_SECTION *a5,
        __int64 a6,
        int a7)
{
  int v7; // r14d
  __int64 v9; // r12
  unsigned int NtGlobalFlag; // r15d
  char v11; // bl
  PVOID v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // edi
  _BYTE *v15; // r14
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // edi
  struct _PEB *v21; // rcx
  __int64 v22; // rax
  ULONG_PTR v23; // r9
  ULONG_PTR v24; // r8
  PVOID v25; // r12
  __int64 v26; // rbx
  volatile signed __int32 *v27; // rbx
  _RTL_CRITICAL_SECTION *v28; // r15
  __int64 v29; // rax
  int v31; // r13d
  unsigned __int64 v32; // rax
  signed __int64 v33; // rdx
  unsigned __int64 v34; // rtt
  ULONG Protect; // eax
  char *v36; // rdi
  char *v37; // r14
  ULONG v38; // eax
  __int64 v39; // r15
  __int64 v40; // rcx
  char *v41; // rdi
  _DWORD *v42; // r10
  char v43; // dl
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  int v48; // edi
  _QWORD *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rcx
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v54; // r10
  unsigned __int64 v55; // rdi
  char v56; // dl
  int v57; // r8d
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // r12
  unsigned __int64 v61; // rbx
  unsigned int v62; // eax
  volatile signed __int32 *v63; // rax
  ULONG_PTR v64; // rax
  PVOID HeapHandle; // [rsp+40h] [rbp-258h] BYREF
  _RTL_CRITICAL_SECTION *v66; // [rsp+48h] [rbp-250h]
  PVOID v67; // [rsp+50h] [rbp-248h]
  int v68[2]; // [rsp+58h] [rbp-240h]
  int v69[2]; // [rsp+60h] [rbp-238h] BYREF
  ULONG_PTR v70; // [rsp+68h] [rbp-230h] BYREF
  int v71; // [rsp+70h] [rbp-228h]
  PVOID v72; // [rsp+78h] [rbp-220h] BYREF
  _RTL_CRITICAL_SECTION *v73; // [rsp+80h] [rbp-218h]
  int v74; // [rsp+88h] [rbp-210h]
  unsigned __int64 v75; // [rsp+90h] [rbp-208h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp-200h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp-1F8h] BYREF
  int v78; // [rsp+A8h] [rbp-1F0h]
  unsigned __int64 v79; // [rsp+B0h] [rbp-1E8h]
  __int128 v80; // [rsp+C0h] [rbp-1D8h]
  void *v81; // [rsp+D8h] [rbp-1C0h]
  __int64 v82; // [rsp+E0h] [rbp-1B8h]
  __int128 MemoryInformation; // [rsp+E8h] [rbp-1B0h] BYREF
  __int128 v84; // [rsp+F8h] [rbp-1A0h]
  __int128 v85; // [rsp+108h] [rbp-190h]
  __int128 v86; // [rsp+120h] [rbp-178h] BYREF
  __int128 v87; // [rsp+130h] [rbp-168h] BYREF
  __int128 v88; // [rsp+140h] [rbp-158h]
  __int128 v89; // [rsp+150h] [rbp-148h]
  __int128 v90; // [rsp+160h] [rbp-138h] BYREF
  __int128 v91; // [rsp+170h] [rbp-128h]
  __int128 v92; // [rsp+180h] [rbp-118h]
  __int128 v93; // [rsp+190h] [rbp-108h]
  __int128 v94; // [rsp+1A0h] [rbp-F8h]
  __int128 v95; // [rsp+1B0h] [rbp-E8h]
  _BYTE v96[80]; // [rsp+1C0h] [rbp-D8h] BYREF
  _BYTE SystemInformation[40]; // [rsp+210h] [rbp-88h] BYREF
  __int64 v98; // [rsp+238h] [rbp-60h]

  v7 = a4;
  v79 = a4;
  *(_QWORD *)v68 = a3;
  v67 = a2;
  v66 = a5;
  v81 = a2;
  v82 = (__int64)a5;
  v9 = a6;
  v74 = a7;
  v72 = 0LL;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  MemoryInformation = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v71 = 0;
  DWORD1(v90) = 0;
  v70 = 0LL;
  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  memset_thunk_772440563353939046(v96, 0, 0x50uLL);
  HeapHandle = 0LL;
  v11 = 0;
  v73 = 0LL;
  v12 = v67;
  v13 = (unsigned __int64)a5;
  if ( dword_1801CE578 && !v67 && !v66 )
  {
    v27 = (volatile signed __int32 *)RtlpDebugPageHeapCreate(a1, 0, v68[0], v7, 0LL, a6);
    if ( v27 )
    {
      v25 = v67;
      goto LABEL_42;
    }
    if ( a6 != -1 )
      goto LABEL_171;
    v9 = 0LL;
    v11 = 1;
    v13 = (unsigned __int64)v66;
    v12 = v67;
  }
  v14 = a1 & 0xF1FFFFFF;
  v15 = 0LL;
  if ( (v14 & 0x100) != 0 )
  {
    if ( (v14 & 2) == 0 || v12 || v13 )
      goto LABEL_171;
    if ( v9 == -1 && dword_1801CE588 )
    {
      v9 = 0LL;
      v11 = 1;
    }
    if ( v9 )
    {
      v15 = (_BYTE *)v9;
      if ( !(unsigned int)RtlpHpParametersVerify(v9) )
        goto LABEL_171;
    }
    else
    {
      v15 = v96;
    }
  }
  else if ( (RtlpHpHeapFeatures & 1) != 0
         && (v14 & 2) != 0
         && !v12
         && (!v9 || !*(_QWORD *)(v9 + 8) && !*(_QWORD *)(v9 + 16) && !*(_QWORD *)(v9 + 48) && !*(_QWORD *)(v9 + 72)) )
  {
    v15 = v96;
    if ( v13 )
      v15 = 0LL;
  }
  if ( v15 )
  {
    if ( v15 == v96 )
    {
      *(_QWORD *)(v15 + 4) = 0LL;
      *(_QWORD *)(v15 + 20) = 0LL;
      *(_QWORD *)(v15 + 28) = 0LL;
      *(_QWORD *)(v15 + 36) = 0LL;
      *(_QWORD *)(v15 + 44) = 0LL;
      *(_QWORD *)(v15 + 52) = 0LL;
      *(_QWORD *)(v15 + 60) = 0LL;
      *(_QWORD *)(v15 + 68) = 0LL;
      *((_DWORD *)v15 + 19) = 0;
      *(_DWORD *)v15 = 5242883;
      *((_DWORD *)v15 + 3) = 1;
      *((_DWORD *)v15 + 4) = -1;
      if ( v11 )
        *((_DWORD *)v15 + 1) = 2;
    }
    if ( (v15[4] & 1) == 0 )
    {
      v56 = BYTE2(RtlpHpEnvHandle);
      _BitScanReverse((unsigned int *)&v57, *((_DWORD *)v15 + 3));
      v78 = v57;
      v58 = *((_DWORD *)v15 + 4);
      if ( v58 != -1 )
        v56 = v58 + 1;
      v59 = *((_QWORD *)v15 + 3);
      LOBYTE(v80) = RtlpHpEnvHandle;
      BYTE1(v80) = v57;
      BYTE2(v80) = v56;
      *(_DWORD *)((char *)&v80 + 3) = *(_DWORD *)((char *)&RtlpHpEnvHandle + 3);
      BYTE7(v80) = BYTE7(RtlpHpEnvHandle);
      *((_QWORD *)&v80 + 1) = v59;
      v60 = v79;
      v61 = v79;
      if ( *(_QWORD *)v68 )
        v61 = *(_QWORD *)v68;
      if ( v79 > v61 )
        v60 = v61;
      v62 = RtlpHpConvertCreationFlags(v14, NtGlobalFlag, (__int64)v15);
      v86 = v80;
      v63 = (volatile signed __int32 *)RtlpHpHeapCreate(v62, v61, v60, &v86);
      v27 = v63;
      if ( v63 )
      {
        if ( (int)RtlpProcessHeapsInsert((PVOID)v63) < 0 )
        {
          RtlpHpHeapDestroy(v27);
          v27 = 0LL;
        }
        if ( *((_DWORD *)v27 + 4) == -571548178 )
        {
          RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
          if ( (dword_1801D0918 & 1) != 0 && (dword_1801D0918 & 2) != 0 )
            _InterlockedOr(v27 + 5, 0x40u);
          RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
        }
        RtlpHpHeapLoggingStateSync((__int64)v27);
      }
      v25 = v67;
      goto LABEL_42;
    }
    v25 = v67;
    if ( dword_1801CE588 )
    {
      v27 = (volatile signed __int32 *)RtlpDebugPageHeapCreate(v14, (_DWORD)v67, v68[0], v79, 0LL, 0LL);
      goto LABEL_42;
    }
LABEL_41:
    v27 = 0LL;
LABEL_42:
    v28 = 0LL;
LABEL_43:
    v29 = (__int64)v66;
    goto LABEL_44;
  }
  if ( (v14 & 0x10000000) != 0 )
    goto LABEL_6;
  if ( RtlpHeapErrorHandlerThreshold >= 2 )
  {
    if ( (v14 & 0xFFF80C00) == 0 )
      goto LABEL_6;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
    if ( !byte_1801D4988 )
      RtlpReportHeapFailure(2LL);
  }
  if ( (v14 & 0xFFF80C00) != 0 )
    v14 &= 0x7F3FFu;
LABEL_6:
  memset_thunk_772440563353939046(&v90, 0, 0x60uLL);
  if ( v9 && *(_DWORD *)v9 == 96 )
  {
    v90 = *(_OWORD *)v9;
    v91 = *(_OWORD *)(v9 + 16);
    v92 = *(_OWORD *)(v9 + 32);
    v93 = *(_OWORD *)(v9 + 48);
    v94 = *(_OWORD *)(v9 + 64);
    v95 = *(_OWORD *)(v9 + 80);
  }
  if ( (NtGlobalFlag & 0x10) != 0 )
    v14 |= 0x20u;
  v16 = v14 | 0x40;
  if ( (NtGlobalFlag & 0x20) == 0 )
    v16 = v14;
  v17 = v16 | 0x80;
  if ( (NtGlobalFlag & 0x200000) == 0 )
    v17 = v16;
  v18 = v17 | 0x40000000;
  if ( (NtGlobalFlag & 0x40) == 0 )
    v18 = v17;
  v19 = v18 | 0x20000000;
  if ( (NtGlobalFlag & 0x80u) == 0 )
    v19 = v18;
  v20 = v19 | 0x8000000;
  if ( (NtGlobalFlag & 0x1000) == 0 )
    v20 = v19;
  v21 = NtCurrentPeb();
  if ( !*((_QWORD *)&v90 + 1) )
    *((_QWORD *)&v90 + 1) = v21->HeapSegmentReserve;
  if ( !(_QWORD)v91 )
    *(_QWORD *)&v91 = v21->HeapSegmentCommit;
  if ( !*((_QWORD *)&v91 + 1) )
    *((_QWORD *)&v91 + 1) = v21->HeapDeCommitFreeBlockThreshold;
  if ( !(_QWORD)v92 )
    *(_QWORD *)&v92 = v21->HeapDeCommitTotalFreeThreshold;
  v22 = qword_1801D0728;
  if ( !qword_1801D0728 )
  {
    qword_1801D0730 = 0x10000LL;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      v22 = v98;
      qword_1801D0728 = v98;
      goto LABEL_28;
    }
LABEL_171:
    v25 = v67;
    goto LABEL_41;
  }
LABEL_28:
  if ( !*((_QWORD *)&v92 + 1) )
    *((_QWORD *)&v92 + 1) = v22 - qword_1801D0730 - 4096;
  if ( (unsigned __int64)(v93 - 1) > 0xFEFFF )
    *(_QWORD *)&v93 = 1044480LL;
  if ( v79 )
    v23 = (v79 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v23 = 0x2000LL;
  v70 = v23;
  if ( *(_QWORD *)v68 )
    v24 = (*(_QWORD *)v68 + 0x1FFFLL) & 0xFFFFFFFFFFFFE000uLL;
  else
    v24 = (v23 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  *(_QWORD *)v69 = v24;
  v13 = v23;
  if ( v23 > v24 )
  {
    v23 = v24;
    v70 = v24;
    v13 = v24;
  }
  v25 = v67;
  if ( (v20 & 2) == 0 || v67 )
  {
    v26 = 0LL;
  }
  else
  {
    v26 = 4096LL;
    v71 = 2;
    if ( v24 - 4096 < v13 )
    {
      v24 = (v24 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      *(_QWORD *)v69 = v24;
    }
  }
  if ( !v23 || !v24 )
    goto LABEL_41;
  LOBYTE(v13) = (v20 & 0x61000000) != 0;
  if ( ((unsigned __int8)v13 & ((v20 & 0x10000000) == 0)) != 0 )
    return RtlDebugCreateHeap(v20, (_DWORD)v67, v24, v23, (__int64)v66, (__int64)&v90, v74);
  v31 = 704;
  v29 = (__int64)v66;
  if ( (v20 & 1) != 0 )
  {
    v68[0] = v20;
    v28 = 0LL;
    if ( v66 )
    {
      v27 = 0LL;
      goto LABEL_44;
    }
  }
  else
  {
    if ( v66 )
      v20 |= 0x80000000;
    v68[0] = v20;
    v13 = 744LL;
    if ( !v66 )
      v31 = 744;
    v28 = v66;
    if ( !v66 )
      v28 = 0LL;
    v73 = v28;
  }
  if ( v67 )
  {
    if ( *((_QWORD *)&v94 + 1) )
    {
      v13 = *((_QWORD *)&v93 + 1);
      if ( *((_QWORD *)&v93 + 1) && (_QWORD)v94 && *((_QWORD *)&v93 + 1) <= (unsigned __int64)v94 && (v20 & 2) == 0 )
      {
        v72 = v67;
        v37 = (char *)v67 + *((_QWORD *)&v93 + 1);
        *(_QWORD *)v69 = v94;
        memset_thunk_772440563353939046(v67, 0, 0x1000uLL);
        v13 = (unsigned __int64)v67;
LABEL_154:
        v71 |= 1u;
        v36 = (char *)v67;
        HeapHandle = v67;
LABEL_65:
        if ( (char *)v13 == v37 )
        {
          v38 = 64;
          if ( (v68[0] & 0x40000) == 0 )
            v38 = 4;
          if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v72, 0LL, &v70, 0x1000u, v38) < 0 )
          {
            v27 = 0LL;
            v25 = v67;
            goto LABEL_43;
          }
          v39 = 2147353472LL;
          if ( RtlGetCurrentServiceSessionId() )
            v40 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v40 = 2147353472LL;
          if ( *(_BYTE *)v40 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(HeapHandle, v72, v70, 1LL);
          v37 += v70;
          v36 = (char *)HeapHandle;
        }
        else
        {
          v39 = 2147353472LL;
        }
        v41 = v36 + 704;
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          v55 = (unsigned __int64)(v41 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          *((_QWORD *)HeapHandle + 41) = v55;
          v31 += 2064;
          v41 = (char *)(v55 + 2064);
          v68[0] |= 0x4000000u;
        }
        *((_WORD *)HeapHandle + 4) = ((v31 + 15) & 0xFFFFFFF0) >> 4;
        *((_BYTE *)HeapHandle + 10) = 1;
        *((_BYTE *)HeapHandle + 15) = 1;
        *((_DWORD *)HeapHandle + 38) = -285217025;
        *((_DWORD *)HeapHandle + 28) = v68[0] & 0xEFFFFFFF;
        *((_DWORD *)HeapHandle + 36) = 0;
        memset_thunk_772440563353939046((char *)HeapHandle + 568, 0, 0x78uLL);
        RtlpCreateHeapEncoding(HeapHandle);
        *((_DWORD *)HeapHandle + 162) = 1;
        v42 = HeapHandle;
        if ( (*((_DWORD *)HeapHandle + 28) & 0x8000000) != 0 )
        {
          HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
          *(_DWORD *)(v54 + 144) = HeapInterceptorIndex;
          *((_DWORD *)HeapHandle + 28) &= ~0x40u;
          v42 = HeapHandle;
        }
        v43 = v68[0];
        v42[29] = v68[0] & 0x6001007D;
        *((_WORD *)HeapHandle + 105) = (_WORD)v41 - (_WORD)HeapHandle;
        *((_QWORD *)HeapHandle + 27) = 0LL;
        v44 = (char *)HeapHandle + 336;
        *((_QWORD *)HeapHandle + 43) = (char *)HeapHandle + 336;
        *v44 = v44;
        v45 = (char *)HeapHandle + 272;
        *((_QWORD *)HeapHandle + 35) = (char *)HeapHandle + 272;
        *v45 = v45;
        v46 = (char *)HeapHandle + 288;
        *((_QWORD *)HeapHandle + 37) = (char *)HeapHandle + 288;
        *v46 = v46;
        v47 = (char *)HeapHandle + 240;
        *((_QWORD *)HeapHandle + 31) = (char *)HeapHandle + 240;
        *v47 = v47;
        if ( v73 || (v43 & 1) != 0 )
        {
LABEL_81:
          *((_QWORD *)HeapHandle + 44) = v73;
          *((_DWORD *)HeapHandle + 30) |= 0x80000000;
          if ( (unsigned __int8)RtlpInitializeHeapSegment(
                                  HeapHandle,
                                  v71,
                                  (__int64)v72,
                                  v37,
                                  (__int64)v72 + *(_QWORD *)v69 - v26) )
          {
            if ( v67 )
              memset_thunk_772440563353939046(v41, 0, 0x80uLL);
            *((_DWORD *)v41 + 2) = 128;
            *((_QWORD *)v41 + 5) = v41 + 56;
            *((_QWORD *)v41 + 4) = (char *)HeapHandle + 336;
            *((_QWORD *)v41 + 6) = v41 + 72;
            RtlpPopulateListIndex(HeapHandle, v41);
            *((_WORD *)HeapHandle + 104) = 0;
            *((_QWORD *)HeapHandle + 20) = *((_QWORD *)&v90 + 1);
            *((_QWORD *)HeapHandle + 21) = v91;
            *((_QWORD *)HeapHandle + 22) = *((_QWORD *)&v91 + 1) >> 4;
            *((_QWORD *)HeapHandle + 23) = (unsigned __int64)v92 >> 4;
            *((_QWORD *)HeapHandle + 25) = *((_QWORD *)&v92 + 1);
            *((_DWORD *)HeapHandle + 37) = (unsigned __int64)(v93 + 15) >> 4;
            *((_QWORD *)HeapHandle + 45) = RtlpHeapKey ^ *((_QWORD *)&v94 + 1);
            *((_DWORD *)HeapHandle + 172) = 4;
            *((_QWORD *)HeapHandle + 87) = 2088960LL;
            if ( (RtlpDisableHeapLookaside & 1) != 0 )
              *((_DWORD *)HeapHandle + 30) = 1;
            v48 = v68[0];
            *((_QWORD *)HeapHandle + 32) = 31LL;
            *((_QWORD *)HeapHandle + 33) = -16LL;
            v49 = HeapHandle;
            if ( (*((_BYTE *)HeapHandle + 112) & 0x20) != 0 )
            {
              *((_QWORD *)HeapHandle + 32) += 16LL;
              v49 = HeapHandle;
            }
            v49[51] = 0LL;
            *((_WORD *)HeapHandle + 208) = 0;
            *((_BYTE *)HeapHandle + 418) = 0;
            *((_BYTE *)HeapHandle + 419) = 0;
            *((_QWORD *)HeapHandle + 40) = 0LL;
            if ( (v48 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
              goto LABEL_91;
            *((_QWORD *)HeapHandle + 53) = RtlAllocateHeap(HeapHandle, 0x80000Au, 0x100uLL);
            v13 = *((_QWORD *)HeapHandle + 53);
            if ( v13 )
            {
              *(_BYTE *)(v13 - 1) = 1;
              *((_WORD *)HeapHandle + 216) = 128;
LABEL_91:
              *((_BYTE *)HeapHandle + 563) = 0;
              *((_QWORD *)HeapHandle + 46) = 0LL;
              if ( (int)RtlpProcessHeapsInsert(HeapHandle) < 0 )
              {
                v27 = 0LL;
                v28 = v73;
                v25 = v67;
                goto LABEL_43;
              }
              if ( RtlGetCurrentServiceSessionId() )
                v50 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v50 = 2147353472LL;
              if ( *(_BYTE *)v50 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                if ( RtlGetCurrentServiceSessionId() )
                  v39 = (__int64)NtCurrentPeb()->SharedData + 550;
                RtlpLogHeapCreateEvent((int)HeapHandle, v48, v69[0], v70, (HANDLE)*(unsigned __int8 *)v39);
              }
              v51 = 2147353482LL;
              if ( RtlGetCurrentServiceSessionId() )
                v52 = (__int64)NtCurrentPeb()->SharedData + 560;
              else
                v52 = 2147353482LL;
              if ( *(_BYTE *)v52 )
              {
                if ( RtlGetCurrentServiceSessionId() )
                  v51 = (__int64)NtCurrentPeb()->SharedData + 560;
                RtlpLogHeapCreateEvent((int)HeapHandle, v48, v69[0], v70, (HANDLE)*(unsigned __int8 *)v51);
              }
              if ( RtlGetCurrentServiceSessionId() )
                v13 = (unsigned __int64)NtCurrentPeb()->SharedData + 558;
              else
                v13 = 2147353480LL;
              if ( *(_BYTE *)v13 )
                RtlpHeapLogRangeCreate((__int64)HeapHandle, *(__int64 *)v69, v48);
              *((_DWORD *)HeapHandle + 30) &= ~0x80000000;
              v27 = (volatile signed __int32 *)HeapHandle;
              HeapHandle = 0LL;
              v25 = v67;
              goto LABEL_42;
            }
          }
          v27 = 0LL;
          v28 = v73;
          v25 = v67;
          goto LABEL_43;
        }
        v73 = (_RTL_CRITICAL_SECTION *)v41;
        if ( RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)v41, 0, 0x10000000u) >= 0 )
        {
          v41 += 40;
          goto LABEL_81;
        }
        goto LABEL_171;
      }
    }
    else if ( ZwQueryVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                v67,
                MemoryBasicInformation,
                &MemoryInformation,
                0x30uLL,
                0LL) >= 0 )
    {
      v37 = (char *)MemoryInformation;
      if ( (PVOID)MemoryInformation == v67 && (_DWORD)v85 != 0x10000 )
      {
        v13 = MemoryInformation;
        v72 = (PVOID)MemoryInformation;
        if ( (_DWORD)v85 == 4096 )
        {
          if ( (v20 & 0x40000) != 0 && (BYTE4(v85) & 0x40) == 0 )
          {
            v27 = 0LL;
            goto LABEL_43;
          }
          memset_thunk_772440563353939046((void *)MemoryInformation, 0, 0x1000uLL);
          if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v67, MemoryRegionInformation, &v87, 0x30uLL, 0LL) < 0 )
          {
            v27 = 0LL;
            goto LABEL_43;
          }
          *(_QWORD *)v69 = v88;
          v70 = *((_QWORD *)&v84 + 1);
          v13 = (unsigned __int64)v72;
          v37 = (char *)v72 + *((_QWORD *)&v84 + 1);
        }
        else
        {
          *(_QWORD *)v69 = *((_QWORD *)&v84 + 1);
          v64 = v70;
          if ( v70 > *((_QWORD *)&v84 + 1) )
          {
            v64 = *((_QWORD *)&v84 + 1);
            v70 = *((_QWORD *)&v84 + 1);
          }
          if ( v64 < 0x2000 )
          {
            v27 = 0LL;
            goto LABEL_43;
          }
        }
        goto LABEL_154;
      }
    }
    v27 = 0LL;
    goto LABEL_43;
  }
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v75 = 0LL;
  if ( !*((_QWORD *)&v94 + 1) )
  {
    v32 = qword_1801CFF00;
    do
    {
      v33 = ((((v32 ^ (v32 >> 12)) << 25) ^ v32 ^ (v32 >> 12)) >> 27) ^ ((v32 ^ (v32 >> 12)) << 25) ^ v32 ^ (v32 >> 12);
      v34 = v32;
      v32 = _InterlockedCompareExchange64(&qword_1801CFF00, v33, v32);
    }
    while ( v34 != v32 );
    v75 = (unsigned __int64)((-3 * (_BYTE)v33) & 0x1F) << 16;
    RegionSize = *(_QWORD *)v69 + v75;
    if ( *(_QWORD *)v69 + v75 < *(_QWORD *)v69 )
    {
      RegionSize = *(_QWORD *)v69;
      v75 = 0LL;
    }
    Protect = 64;
    if ( (v20 & 0x40000) == 0 )
      Protect = 4;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
    {
      v27 = 0LL;
      v25 = v67;
      goto LABEL_43;
    }
    v36 = (char *)BaseAddress;
    HeapHandle = BaseAddress;
    *(_QWORD *)v69 = RegionSize;
    if ( v75 )
    {
      RtlpSecMemFreeVirtualMemory(v13, &BaseAddress, &v75, 0x8000LL);
      v36 = (char *)BaseAddress + v75;
      HeapHandle = (char *)BaseAddress + v75;
      *(_QWORD *)v69 = RegionSize - v75;
    }
    v13 = (unsigned __int64)v36;
    v72 = v36;
    v37 = v36;
    goto LABEL_65;
  }
  v27 = 0LL;
LABEL_44:
  if ( v28 && v28 != (_RTL_CRITICAL_SECTION *)v29 )
    RtlDeleteCriticalSection(v28);
  if ( HeapHandle )
  {
    if ( !v25 )
    {
      *(_QWORD *)v69 = 0LL;
      RtlpSecMemFreeVirtualMemory(v13, &HeapHandle, v69, 0x8000LL);
    }
  }
  return (__int64)v27;
}
