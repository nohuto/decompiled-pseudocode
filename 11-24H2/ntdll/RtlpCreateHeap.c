/*
 * XREFs of RtlpCreateHeap @ 0x1800248B0
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180022B90 (RtlDetectHeapLeaks.c)
 *     RtlDebugCreateHeap @ 0x1800232B0 (RtlDebugCreateHeap.c)
 *     LdrpInitializeProcessHeap @ 0x18002385C (LdrpInitializeProcessHeap.c)
 *     CsrpConnectToServer @ 0x1800243D4 (CsrpConnectToServer.c)
 *     RtlCreateHeap @ 0x180024880 (RtlCreateHeap.c)
 *     LdrpInitializeTlsHeap @ 0x180026868 (LdrpInitializeTlsHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x180033910 (LdrEnsureMrdataHeapExists.c)
 *     RtlHeapTrkInitialize @ 0x18010E7A0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlpPopulateListIndex @ 0x18000C23C (RtlpPopulateListIndex.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpDebugPageHeapCreate @ 0x180023280 (RtlpDebugPageHeapCreate.c)
 *     RtlDebugCreateHeap @ 0x1800232B0 (RtlDebugCreateHeap.c)
 *     RtlpLogHeapCommit @ 0x1800235BC (RtlpLogHeapCommit.c)
 *     RtlpHpParametersVerify @ 0x18002366C (RtlpHpParametersVerify.c)
 *     RtlpLogHeapCreateEvent @ 0x180023758 (RtlpLogHeapCreateEvent.c)
 *     RtlpCreateHeapEncoding @ 0x180025B7C (RtlpCreateHeapEncoding.c)
 *     RtlpInitializeHeapSegment @ 0x180025C40 (RtlpInitializeHeapSegment.c)
 *     RtlpProcessHeapsInsert @ 0x180025F8C (RtlpProcessHeapsInsert.c)
 *     RtlpHeapLogRangeCreate @ 0x180026084 (RtlpHeapLogRangeCreate.c)
 *     RtlpHpHeapCreate @ 0x180026120 (RtlpHpHeapCreate.c)
 *     RtlpHpConvertCreationFlags @ 0x180026540 (RtlpHpConvertCreationFlags.c)
 *     RtlpHpHeapLoggingStateSync @ 0x1800265D4 (RtlpHpHeapLoggingStateSync.c)
 *     RtlpHpHeapDestroy @ 0x1800270BC (RtlpHpHeapDestroy.c)
 *     RtlDeleteCriticalSection @ 0x180027610 (RtlDeleteCriticalSection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028580 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlInitializeCriticalSectionEx @ 0x180030BC0 (RtlInitializeCriticalSectionEx.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18011BA74 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpReportHeapFailure @ 0x18011D71C (RtlpReportHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x180160710 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

char *__fastcall RtlpCreateHeap(
        unsigned int a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        _RTL_CRITICAL_SECTION *a5,
        __int64 a6,
        int a7)
{
  __int64 v8; // r12
  unsigned int NtGlobalFlag; // r15d
  char v10; // bl
  PVOID v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  _BYTE *v14; // r14
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // edi
  struct _PEB *v20; // rcx
  __int64 v21; // rax
  ULONG_PTR v22; // r9
  ULONG_PTR v23; // r8
  PVOID v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rbx
  _RTL_CRITICAL_SECTION *v27; // r15
  __int64 v28; // rax
  int v30; // r13d
  unsigned __int64 v31; // rax
  signed __int64 v32; // rdx
  unsigned __int64 v33; // rtt
  ULONG Protect; // eax
  char *v35; // rdi
  char *v36; // r14
  ULONG v37; // eax
  __int64 v38; // r15
  __int64 v39; // rcx
  char *v40; // rdi
  _DWORD *v41; // r10
  char v42; // dl
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  unsigned int v47; // edi
  _QWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rcx
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v53; // r10
  unsigned __int64 v54; // rdi
  char v55; // dl
  int v56; // r8d
  int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  void *v60; // rax
  ULONG_PTR v61; // rax
  PVOID HeapHandle; // [rsp+40h] [rbp-258h] BYREF
  _RTL_CRITICAL_SECTION *v63; // [rsp+48h] [rbp-250h]
  PVOID v64; // [rsp+50h] [rbp-248h]
  int v65[2]; // [rsp+58h] [rbp-240h]
  int v66[2]; // [rsp+60h] [rbp-238h] BYREF
  ULONG_PTR v67; // [rsp+68h] [rbp-230h] BYREF
  int v68; // [rsp+70h] [rbp-228h]
  PVOID v69; // [rsp+78h] [rbp-220h] BYREF
  _RTL_CRITICAL_SECTION *v70; // [rsp+80h] [rbp-218h]
  int v71; // [rsp+88h] [rbp-210h]
  unsigned __int64 v72; // [rsp+90h] [rbp-208h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp-200h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp-1F8h] BYREF
  int v75; // [rsp+A8h] [rbp-1F0h]
  __int64 v76; // [rsp+B0h] [rbp-1E8h]
  __int128 v77; // [rsp+C0h] [rbp-1D8h]
  void *v78; // [rsp+D8h] [rbp-1C0h]
  __int64 v79; // [rsp+E0h] [rbp-1B8h]
  __int128 MemoryInformation; // [rsp+E8h] [rbp-1B0h] BYREF
  __int128 v81; // [rsp+F8h] [rbp-1A0h]
  __int128 v82; // [rsp+108h] [rbp-190h]
  __int128 v83; // [rsp+120h] [rbp-178h]
  __int128 v84; // [rsp+130h] [rbp-168h] BYREF
  __int128 v85; // [rsp+140h] [rbp-158h]
  __int128 v86; // [rsp+150h] [rbp-148h]
  __int128 v87; // [rsp+160h] [rbp-138h] BYREF
  __int128 v88; // [rsp+170h] [rbp-128h]
  __int128 v89; // [rsp+180h] [rbp-118h]
  __int128 v90; // [rsp+190h] [rbp-108h]
  __int128 v91; // [rsp+1A0h] [rbp-F8h]
  __int128 v92; // [rsp+1B0h] [rbp-E8h]
  _BYTE v93[80]; // [rsp+1C0h] [rbp-D8h] BYREF
  _BYTE SystemInformation[40]; // [rsp+210h] [rbp-88h] BYREF
  __int64 v95; // [rsp+238h] [rbp-60h]

  v76 = a4;
  *(_QWORD *)v65 = a3;
  v64 = a2;
  v63 = a5;
  v78 = a2;
  v79 = (__int64)a5;
  v8 = a6;
  v71 = a7;
  v69 = 0LL;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  MemoryInformation = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v68 = 0;
  DWORD1(v87) = 0;
  v67 = 0LL;
  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  memset_thunk_772440563353939046(v93, 0, 0x50uLL);
  HeapHandle = 0LL;
  v10 = 0;
  v70 = 0LL;
  v11 = v64;
  v12 = (unsigned __int64)a5;
  if ( dword_1801CB578 && !v64 && !v63 )
  {
    v26 = RtlpDebugPageHeapCreate(a1, 0LL);
    if ( v26 )
    {
      v24 = v64;
      goto LABEL_42;
    }
    if ( a6 != -1 )
      goto LABEL_167;
    v8 = 0LL;
    v10 = 1;
    v12 = (unsigned __int64)v63;
    v11 = v64;
  }
  v13 = a1 & 0xF1FFFFFF;
  v14 = 0LL;
  if ( (v13 & 0x100) != 0 )
  {
    if ( (v13 & 2) == 0 || v11 || v12 )
      goto LABEL_167;
    if ( v8 == -1 && dword_1801CB588 )
    {
      v8 = 0LL;
      v10 = 1;
    }
    if ( v8 )
    {
      v14 = (_BYTE *)v8;
      if ( !(unsigned int)RtlpHpParametersVerify(v8) )
        goto LABEL_167;
    }
    else
    {
      v14 = v93;
    }
  }
  else if ( (RtlpHpHeapFeatures & 1) != 0
         && (v13 & 2) != 0
         && !v11
         && (!v8 || !*(_QWORD *)(v8 + 8) && !*(_QWORD *)(v8 + 16) && !*(_QWORD *)(v8 + 48) && !*(_QWORD *)(v8 + 72)) )
  {
    v14 = v93;
    if ( v12 )
      v14 = 0LL;
  }
  if ( v14 )
  {
    if ( v14 == v93 )
    {
      *(_QWORD *)(v14 + 4) = 0LL;
      *(_QWORD *)(v14 + 20) = 0LL;
      *(_QWORD *)(v14 + 28) = 0LL;
      *(_QWORD *)(v14 + 36) = 0LL;
      *(_QWORD *)(v14 + 44) = 0LL;
      *(_QWORD *)(v14 + 52) = 0LL;
      *(_QWORD *)(v14 + 60) = 0LL;
      *(_QWORD *)(v14 + 68) = 0LL;
      *((_DWORD *)v14 + 19) = 0;
      *(_DWORD *)v14 = 5242883;
      *((_DWORD *)v14 + 3) = 1;
      *((_DWORD *)v14 + 4) = -1;
      if ( v10 )
        *((_DWORD *)v14 + 1) = 2;
    }
    if ( (v14[4] & 1) == 0 )
    {
      v55 = BYTE2(RtlpHpEnvHandle);
      _BitScanReverse((unsigned int *)&v56, *((_DWORD *)v14 + 3));
      v75 = v56;
      v57 = *((_DWORD *)v14 + 4);
      if ( v57 != -1 )
        v55 = v57 + 1;
      v58 = *((_QWORD *)v14 + 3);
      LOBYTE(v77) = RtlpHpEnvHandle;
      BYTE1(v77) = v56;
      BYTE2(v77) = v55;
      *(_DWORD *)((char *)&v77 + 3) = *(_DWORD *)((char *)&RtlpHpEnvHandle + 3);
      BYTE7(v77) = BYTE7(RtlpHpEnvHandle);
      *((_QWORD *)&v77 + 1) = v58;
      v59 = RtlpHpConvertCreationFlags(v13, NtGlobalFlag, v14);
      v83 = v77;
      v60 = (void *)RtlpHpHeapCreate(v59);
      v26 = (__int64)v60;
      if ( v60 )
      {
        if ( (int)RtlpProcessHeapsInsert(v60) < 0 )
        {
          RtlpHpHeapDestroy(v26);
          v26 = 0LL;
        }
        if ( *(_DWORD *)(v26 + 16) == -571548178 )
        {
          RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
          if ( (dword_1801CD8B8 & 1) != 0 && (dword_1801CD8B8 & 2) != 0 )
            _InterlockedOr((volatile signed __int32 *)(v26 + 20), 0x40u);
          RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
        }
        RtlpHpHeapLoggingStateSync(v26);
      }
      v24 = v64;
      goto LABEL_42;
    }
    v24 = v64;
    if ( dword_1801CB588 )
    {
      v26 = RtlpDebugPageHeapCreate(v13, (__int64)v64);
      goto LABEL_42;
    }
LABEL_41:
    v26 = 0LL;
LABEL_42:
    v27 = 0LL;
LABEL_43:
    v28 = (__int64)v63;
    goto LABEL_44;
  }
  if ( (v13 & 0x10000000) != 0 )
    goto LABEL_6;
  if ( RtlpHeapErrorHandlerThreshold >= 2 )
  {
    if ( (v13 & 0xFFF80C00) == 0 )
      goto LABEL_6;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
    if ( !byte_1801D1908 )
      RtlpReportHeapFailure(2LL);
  }
  if ( (v13 & 0xFFF80C00) != 0 )
    v13 &= 0x7F3FFu;
LABEL_6:
  memset_thunk_772440563353939046(&v87, 0, 0x60uLL);
  if ( v8 && *(_DWORD *)v8 == 96 )
  {
    v87 = *(_OWORD *)v8;
    v88 = *(_OWORD *)(v8 + 16);
    v89 = *(_OWORD *)(v8 + 32);
    v90 = *(_OWORD *)(v8 + 48);
    v91 = *(_OWORD *)(v8 + 64);
    v92 = *(_OWORD *)(v8 + 80);
  }
  if ( (NtGlobalFlag & 0x10) != 0 )
    v13 |= 0x20u;
  v15 = v13 | 0x40;
  if ( (NtGlobalFlag & 0x20) == 0 )
    v15 = v13;
  v16 = v15 | 0x80;
  if ( (NtGlobalFlag & 0x200000) == 0 )
    v16 = v15;
  v17 = v16 | 0x40000000;
  if ( (NtGlobalFlag & 0x40) == 0 )
    v17 = v16;
  v18 = v17 | 0x20000000;
  if ( (NtGlobalFlag & 0x80u) == 0 )
    v18 = v17;
  v19 = v18 | 0x8000000;
  if ( (NtGlobalFlag & 0x1000) == 0 )
    v19 = v18;
  v20 = NtCurrentPeb();
  if ( !*((_QWORD *)&v87 + 1) )
    *((_QWORD *)&v87 + 1) = v20->HeapSegmentReserve;
  if ( !(_QWORD)v88 )
    *(_QWORD *)&v88 = v20->HeapSegmentCommit;
  if ( !*((_QWORD *)&v88 + 1) )
    *((_QWORD *)&v88 + 1) = v20->HeapDeCommitFreeBlockThreshold;
  if ( !(_QWORD)v89 )
    *(_QWORD *)&v89 = v20->HeapDeCommitTotalFreeThreshold;
  v21 = qword_1801CD6F0;
  if ( !qword_1801CD6F0 )
  {
    qword_1801CD6F8 = 0x10000LL;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      v21 = v95;
      qword_1801CD6F0 = v95;
      goto LABEL_28;
    }
LABEL_167:
    v24 = v64;
    goto LABEL_41;
  }
LABEL_28:
  if ( !*((_QWORD *)&v89 + 1) )
    *((_QWORD *)&v89 + 1) = v21 - qword_1801CD6F8 - 4096;
  if ( (unsigned __int64)(v90 - 1) > 0xFEFFF )
    *(_QWORD *)&v90 = 1044480LL;
  if ( v76 )
    v22 = (v76 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v22 = 0x2000LL;
  v67 = v22;
  if ( *(_QWORD *)v65 )
    v23 = (*(_QWORD *)v65 + 0x1FFFLL) & 0xFFFFFFFFFFFFE000uLL;
  else
    v23 = (v22 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  *(_QWORD *)v66 = v23;
  v12 = v22;
  if ( v22 > v23 )
  {
    v22 = v23;
    v67 = v23;
    v12 = v23;
  }
  v24 = v64;
  if ( (v19 & 2) == 0 || v64 )
  {
    v25 = 0LL;
  }
  else
  {
    v25 = 4096LL;
    v68 = 2;
    if ( v23 - 4096 < v12 )
    {
      v23 = (v23 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      *(_QWORD *)v66 = v23;
    }
  }
  if ( !v22 || !v23 )
    goto LABEL_41;
  LOBYTE(v12) = (v19 & 0x61000000) != 0;
  if ( ((unsigned __int8)v12 & ((v19 & 0x10000000) == 0)) != 0 )
    return RtlDebugCreateHeap(v19, v64, v23, v22, (__int64)v63, (__int64)&v87, v71);
  v30 = 712;
  v28 = (__int64)v63;
  if ( (v19 & 1) != 0 )
  {
    v65[0] = v19;
    v27 = 0LL;
    if ( v63 )
    {
      v26 = 0LL;
      goto LABEL_44;
    }
  }
  else
  {
    if ( v63 )
      v19 |= 0x80000000;
    v65[0] = v19;
    v12 = 752LL;
    if ( !v63 )
      v30 = 752;
    v27 = v63;
    if ( !v63 )
      v27 = 0LL;
    v70 = v27;
  }
  if ( v64 )
  {
    if ( *((_QWORD *)&v91 + 1) )
    {
      v12 = *((_QWORD *)&v90 + 1);
      if ( *((_QWORD *)&v90 + 1) && (_QWORD)v91 && *((_QWORD *)&v90 + 1) <= (unsigned __int64)v91 && (v19 & 2) == 0 )
      {
        v69 = v64;
        v36 = (char *)v64 + *((_QWORD *)&v90 + 1);
        *(_QWORD *)v66 = v91;
        memset_thunk_772440563353939046(v64, 0, 0x1000uLL);
        v12 = (unsigned __int64)v64;
LABEL_150:
        v68 |= 1u;
        v35 = (char *)v64;
        HeapHandle = v64;
LABEL_65:
        if ( (char *)v12 == v36 )
        {
          v37 = 64;
          if ( (v65[0] & 0x40000) == 0 )
            v37 = 4;
          if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v69, 0LL, &v67, 0x1000u, v37) < 0 )
          {
            v26 = 0LL;
            v24 = v64;
            goto LABEL_43;
          }
          v38 = 2147353472LL;
          if ( RtlGetCurrentServiceSessionId() )
            v39 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v39 = 2147353472LL;
          if ( *(_BYTE *)v39 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit((__int64)HeapHandle, (__int64)v69, v67, 1);
          v36 += v67;
          v35 = (char *)HeapHandle;
        }
        else
        {
          v38 = 2147353472LL;
        }
        v40 = v35 + 712;
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          v54 = (unsigned __int64)(v40 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          *((_QWORD *)HeapHandle + 41) = v54;
          v30 += 2064;
          v40 = (char *)(v54 + 2064);
          v65[0] |= 0x4000000u;
        }
        *((_WORD *)HeapHandle + 4) = ((v30 + 15) & 0xFFFFFFF0) >> 4;
        *((_BYTE *)HeapHandle + 10) = 1;
        *((_BYTE *)HeapHandle + 15) = 1;
        *((_DWORD *)HeapHandle + 38) = -285217025;
        *((_DWORD *)HeapHandle + 28) = v65[0] & 0xEFFFFFFF;
        *((_DWORD *)HeapHandle + 36) = 0;
        memset_thunk_772440563353939046((char *)HeapHandle + 568, 0, 0x80uLL);
        RtlpCreateHeapEncoding(HeapHandle);
        *((_DWORD *)HeapHandle + 164) = 1;
        v41 = HeapHandle;
        if ( (*((_DWORD *)HeapHandle + 28) & 0x8000000) != 0 )
        {
          HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
          *(_DWORD *)(v53 + 144) = HeapInterceptorIndex;
          *((_DWORD *)HeapHandle + 28) &= ~0x40u;
          v41 = HeapHandle;
        }
        v42 = v65[0];
        v41[29] = v65[0] & 0x6001007D;
        *((_WORD *)HeapHandle + 105) = (_WORD)v40 - (_WORD)HeapHandle;
        *((_QWORD *)HeapHandle + 27) = 0LL;
        v43 = (char *)HeapHandle + 336;
        *((_QWORD *)HeapHandle + 43) = (char *)HeapHandle + 336;
        *v43 = v43;
        v44 = (char *)HeapHandle + 272;
        *((_QWORD *)HeapHandle + 35) = (char *)HeapHandle + 272;
        *v44 = v44;
        v45 = (char *)HeapHandle + 288;
        *((_QWORD *)HeapHandle + 37) = (char *)HeapHandle + 288;
        *v45 = v45;
        v46 = (char *)HeapHandle + 240;
        *((_QWORD *)HeapHandle + 31) = (char *)HeapHandle + 240;
        *v46 = v46;
        if ( v70 || (v42 & 1) != 0 )
        {
LABEL_81:
          *((_QWORD *)HeapHandle + 44) = v70;
          *((_DWORD *)HeapHandle + 30) |= 0x80000000;
          if ( (unsigned __int8)RtlpInitializeHeapSegment(
                                  HeapHandle,
                                  v68,
                                  (__int64)v69,
                                  v36,
                                  (__int64)v69 + *(_QWORD *)v66 - v25) )
          {
            if ( v64 )
              memset_thunk_772440563353939046(v40, 0, 0x80uLL);
            *((_DWORD *)v40 + 2) = 128;
            *((_QWORD *)v40 + 5) = v40 + 56;
            *((_QWORD *)v40 + 4) = (char *)HeapHandle + 336;
            *((_QWORD *)v40 + 6) = v40 + 72;
            RtlpPopulateListIndex((__int64)HeapHandle, (__int64 *)v40);
            *((_WORD *)HeapHandle + 104) = 0;
            *((_QWORD *)HeapHandle + 20) = *((_QWORD *)&v87 + 1);
            *((_QWORD *)HeapHandle + 21) = v88;
            *((_QWORD *)HeapHandle + 22) = *((_QWORD *)&v88 + 1) >> 4;
            *((_QWORD *)HeapHandle + 23) = (unsigned __int64)v89 >> 4;
            *((_QWORD *)HeapHandle + 25) = *((_QWORD *)&v89 + 1);
            *((_DWORD *)HeapHandle + 37) = (unsigned __int64)(v90 + 15) >> 4;
            *((_QWORD *)HeapHandle + 45) = RtlpHeapKey ^ *((_QWORD *)&v91 + 1);
            *((_DWORD *)HeapHandle + 174) = 4;
            *((_QWORD *)HeapHandle + 88) = 2088960LL;
            if ( (RtlpDisableHeapLookaside & 1) != 0 )
              *((_DWORD *)HeapHandle + 30) = 1;
            v47 = v65[0];
            *((_QWORD *)HeapHandle + 32) = 31LL;
            *((_QWORD *)HeapHandle + 33) = -16LL;
            v48 = HeapHandle;
            if ( (*((_BYTE *)HeapHandle + 112) & 0x20) != 0 )
            {
              *((_QWORD *)HeapHandle + 32) += 16LL;
              v48 = HeapHandle;
            }
            v48[51] = 0LL;
            *((_WORD *)HeapHandle + 208) = 0;
            *((_BYTE *)HeapHandle + 418) = 0;
            *((_BYTE *)HeapHandle + 419) = 0;
            *((_QWORD *)HeapHandle + 40) = 0LL;
            if ( (v47 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
              goto LABEL_91;
            *((_QWORD *)HeapHandle + 53) = RtlAllocateHeap(HeapHandle, 0x80000Au, 0x100uLL);
            v12 = *((_QWORD *)HeapHandle + 53);
            if ( v12 )
            {
              *(_BYTE *)(v12 - 1) = 1;
              *((_WORD *)HeapHandle + 216) = 128;
LABEL_91:
              *((_BYTE *)HeapHandle + 563) = 0;
              *((_QWORD *)HeapHandle + 46) = 0LL;
              if ( (int)RtlpProcessHeapsInsert(HeapHandle) < 0 )
              {
                v26 = 0LL;
                v27 = v70;
                v24 = v64;
                goto LABEL_43;
              }
              if ( RtlGetCurrentServiceSessionId() )
                v49 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v49 = 2147353472LL;
              if ( *(_BYTE *)v49 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                if ( RtlGetCurrentServiceSessionId() )
                  v38 = (__int64)NtCurrentPeb()->SharedData + 550;
                RtlpLogHeapCreateEvent((__int64)HeapHandle, v47, *(__int64 *)v66, v67, (HANDLE)*(unsigned __int8 *)v38);
              }
              v50 = 2147353482LL;
              if ( RtlGetCurrentServiceSessionId() )
                v51 = (__int64)NtCurrentPeb()->SharedData + 560;
              else
                v51 = 2147353482LL;
              if ( *(_BYTE *)v51 )
              {
                if ( RtlGetCurrentServiceSessionId() )
                  v50 = (__int64)NtCurrentPeb()->SharedData + 560;
                RtlpLogHeapCreateEvent((__int64)HeapHandle, v47, *(__int64 *)v66, v67, (HANDLE)*(unsigned __int8 *)v50);
              }
              if ( RtlGetCurrentServiceSessionId() )
                v12 = (unsigned __int64)NtCurrentPeb()->SharedData + 558;
              else
                v12 = 2147353480LL;
              if ( *(_BYTE *)v12 )
                RtlpHeapLogRangeCreate(HeapHandle, *(_QWORD *)v66, v47);
              *((_DWORD *)HeapHandle + 30) &= ~0x80000000;
              v26 = (__int64)HeapHandle;
              HeapHandle = 0LL;
              v24 = v64;
              goto LABEL_42;
            }
          }
          v26 = 0LL;
          v27 = v70;
          v24 = v64;
          goto LABEL_43;
        }
        v70 = (_RTL_CRITICAL_SECTION *)v40;
        if ( RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)v40, 0, 0x10000000u) >= 0 )
        {
          v40 += 40;
          goto LABEL_81;
        }
        goto LABEL_167;
      }
    }
    else if ( ZwQueryVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                v64,
                MemoryBasicInformation,
                &MemoryInformation,
                0x30uLL,
                0LL) >= 0 )
    {
      v36 = (char *)MemoryInformation;
      if ( (PVOID)MemoryInformation == v64 && (_DWORD)v82 != 0x10000 )
      {
        v12 = MemoryInformation;
        v69 = (PVOID)MemoryInformation;
        if ( (_DWORD)v82 == 4096 )
        {
          if ( (v19 & 0x40000) != 0 && (BYTE4(v82) & 0x40) == 0 )
          {
            v26 = 0LL;
            goto LABEL_43;
          }
          memset_thunk_772440563353939046((void *)MemoryInformation, 0, 0x1000uLL);
          if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v64, MemoryRegionInformation, &v84, 0x30uLL, 0LL) < 0 )
          {
            v26 = 0LL;
            goto LABEL_43;
          }
          *(_QWORD *)v66 = v85;
          v67 = *((_QWORD *)&v81 + 1);
          v12 = (unsigned __int64)v69;
          v36 = (char *)v69 + *((_QWORD *)&v81 + 1);
        }
        else
        {
          *(_QWORD *)v66 = *((_QWORD *)&v81 + 1);
          v61 = v67;
          if ( v67 > *((_QWORD *)&v81 + 1) )
          {
            v61 = *((_QWORD *)&v81 + 1);
            v67 = *((_QWORD *)&v81 + 1);
          }
          if ( v61 < 0x2000 )
          {
            v26 = 0LL;
            goto LABEL_43;
          }
        }
        goto LABEL_150;
      }
    }
    v26 = 0LL;
    goto LABEL_43;
  }
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v72 = 0LL;
  if ( !*((_QWORD *)&v91 + 1) )
  {
    v31 = qword_1801CCF00;
    do
    {
      v32 = ((((v31 ^ (v31 >> 12)) << 25) ^ v31 ^ (v31 >> 12)) >> 27) ^ ((v31 ^ (v31 >> 12)) << 25) ^ v31 ^ (v31 >> 12);
      v33 = v31;
      v31 = _InterlockedCompareExchange64(&qword_1801CCF00, v32, v31);
    }
    while ( v33 != v31 );
    v72 = (unsigned __int64)((-3 * (_BYTE)v32) & 0x1F) << 16;
    RegionSize = *(_QWORD *)v66 + v72;
    if ( *(_QWORD *)v66 + v72 < *(_QWORD *)v66 )
    {
      RegionSize = *(_QWORD *)v66;
      v72 = 0LL;
    }
    Protect = 64;
    if ( (v19 & 0x40000) == 0 )
      Protect = 4;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
    {
      v26 = 0LL;
      v24 = v64;
      goto LABEL_43;
    }
    v35 = (char *)BaseAddress;
    HeapHandle = BaseAddress;
    *(_QWORD *)v66 = RegionSize;
    if ( v72 )
    {
      RtlpSecMemFreeVirtualMemory(v12, &BaseAddress, &v72, 0x8000LL);
      v35 = (char *)BaseAddress + v72;
      HeapHandle = (char *)BaseAddress + v72;
      *(_QWORD *)v66 = RegionSize - v72;
    }
    v12 = (unsigned __int64)v35;
    v69 = v35;
    v36 = v35;
    goto LABEL_65;
  }
  v26 = 0LL;
LABEL_44:
  if ( v27 && v27 != (_RTL_CRITICAL_SECTION *)v28 )
    RtlDeleteCriticalSection(v27);
  if ( HeapHandle )
  {
    if ( !v24 )
    {
      *(_QWORD *)v66 = 0LL;
      RtlpSecMemFreeVirtualMemory(v12, &HeapHandle, v66, 0x8000LL);
    }
  }
  return (char *)v26;
}
