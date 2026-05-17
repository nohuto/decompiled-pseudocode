/*
 * XREFs of RtlpCreateHeap @ 0x1800A7550
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x180006F10 (LdrEnsureMrdataHeapExists.c)
 *     LdrpInitializeTlsHeap @ 0x18008EE94 (LdrpInitializeTlsHeap.c)
 *     LdrpInitializeProcessHeap @ 0x1800A5FB8 (LdrpInitializeProcessHeap.c)
 *     CsrpConnectToServer @ 0x1800A7080 (CsrpConnectToServer.c)
 *     RtlCreateHeap @ 0x1800A7520 (RtlCreateHeap.c)
 *     RtlDetectHeapLeaks @ 0x18010A5F0 (RtlDetectHeapLeaks.c)
 *     RtlHeapTrkInitialize @ 0x1801134A0 (RtlHeapTrkInitialize.c)
 *     RtlDebugCreateHeap @ 0x180115F3C (RtlDebugCreateHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18008FA40 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlDeleteCriticalSection @ 0x18008FEC0 (RtlDeleteCriticalSection.c)
 *     RtlpHpHeapDestroy @ 0x180090050 (RtlpHpHeapDestroy.c)
 *     RtlInitializeCriticalSectionEx @ 0x18009BD70 (RtlInitializeCriticalSectionEx.c)
 *     RtlpHpHeapLoggingStateSync @ 0x1800A5F50 (RtlpHpHeapLoggingStateSync.c)
 *     RtlpHpConvertCreationFlags @ 0x1800A62E0 (RtlpHpConvertCreationFlags.c)
 *     RtlpHpHeapCreate @ 0x1800A6374 (RtlpHpHeapCreate.c)
 *     RtlpHeapLogRangeCreate @ 0x1800A6FE4 (RtlpHeapLogRangeCreate.c)
 *     RtlpCreateHeapEncoding @ 0x1800A8818 (RtlpCreateHeapEncoding.c)
 *     RtlpInitializeHeapSegment @ 0x1800A88DC (RtlpInitializeHeapSegment.c)
 *     RtlpProcessHeapsInsert @ 0x1800A8C18 (RtlpProcessHeapsInsert.c)
 *     RtlpPopulateListIndex @ 0x1800A9058 (RtlpPopulateListIndex.c)
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
 *     RtlpHpParametersVerify @ 0x18010A8FC (RtlpHpParametersVerify.c)
 *     RtlpDebugPageHeapCreate @ 0x18010D240 (RtlpDebugPageHeapCreate.c)
 *     RtlpLogHeapCommit @ 0x180114118 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x180115370 (RtlpLogHeapCreateEvent.c)
 *     RtlDebugCreateHeap @ 0x180115F3C (RtlDebugCreateHeap.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18011D844 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpReportHeapFailure @ 0x18011F4EC (RtlpReportHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x180162350 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpCreateHeap(
        int a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        __int64 a6,
        unsigned int a7)
{
  int v7; // r14d
  __int64 v9; // r12
  unsigned int NtGlobalFlag; // r15d
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned int v14; // r13d
  char v15; // bl
  void *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  _BYTE *v19; // r14
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // ecx
  int v23; // edi
  struct _PEB *v24; // rcx
  __int64 v25; // rax
  void *v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 *v29; // r15
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
  char *v44; // r10
  char v45; // dl
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  int v50; // edi
  char *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // rcx
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v56; // r10
  unsigned __int64 v57; // rdi
  __int8 v58; // dl
  int v59; // r8d
  int v60; // eax
  __int64 v61; // rcx
  unsigned __int64 v62; // r12
  unsigned __int64 v63; // rbx
  unsigned int v64; // eax
  unsigned __int64 v65; // rax
  volatile signed __int32 **v66; // rdx
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rax
  char *v69; // [rsp+40h] [rbp-258h] BYREF
  __int64 *v70; // [rsp+48h] [rbp-250h]
  void *v71; // [rsp+50h] [rbp-248h]
  unsigned __int64 v72; // [rsp+58h] [rbp-240h]
  unsigned __int64 v73; // [rsp+60h] [rbp-238h] BYREF
  unsigned __int64 v74; // [rsp+68h] [rbp-230h] BYREF
  int v75; // [rsp+70h] [rbp-228h]
  char *v76; // [rsp+78h] [rbp-220h] BYREF
  __int64 *v77; // [rsp+80h] [rbp-218h]
  unsigned int v78; // [rsp+88h] [rbp-210h]
  unsigned __int64 v79; // [rsp+90h] [rbp-208h] BYREF
  unsigned __int64 v80; // [rsp+98h] [rbp-200h] BYREF
  char *v81; // [rsp+A0h] [rbp-1F8h] BYREF
  int v82; // [rsp+A8h] [rbp-1F0h]
  unsigned __int64 v83; // [rsp+B0h] [rbp-1E8h]
  __m128i v84; // [rsp+C0h] [rbp-1D8h]
  void *v85; // [rsp+D8h] [rbp-1C0h]
  __int64 v86; // [rsp+E0h] [rbp-1B8h]
  void *v87[2]; // [rsp+E8h] [rbp-1B0h] BYREF
  __int128 v88; // [rsp+F8h] [rbp-1A0h]
  __int128 v89; // [rsp+108h] [rbp-190h]
  __m128i v90; // [rsp+120h] [rbp-178h] BYREF
  __int128 v91; // [rsp+130h] [rbp-168h] BYREF
  __int128 v92; // [rsp+140h] [rbp-158h]
  __int128 v93; // [rsp+150h] [rbp-148h]
  __int128 v94; // [rsp+160h] [rbp-138h] BYREF
  __int128 v95; // [rsp+170h] [rbp-128h]
  __int128 v96; // [rsp+180h] [rbp-118h]
  __int128 v97; // [rsp+190h] [rbp-108h]
  __int128 v98; // [rsp+1A0h] [rbp-F8h]
  __int128 v99; // [rsp+1B0h] [rbp-E8h]
  _BYTE v100[80]; // [rsp+1C0h] [rbp-D8h] BYREF
  _BYTE SystemInformation[40]; // [rsp+210h] [rbp-88h] BYREF
  __int64 v102; // [rsp+238h] [rbp-60h]

  v7 = a4;
  v83 = a4;
  v72 = a3;
  v71 = a2;
  v70 = a5;
  v85 = a2;
  v86 = (__int64)a5;
  v9 = a6;
  v78 = a7;
  v76 = 0LL;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  *(_OWORD *)v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v75 = 0;
  DWORD1(v94) = 0;
  v74 = 0LL;
  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  memset_thunk_772440563353939046(v100, 0, 0x50uLL);
  v14 = a7 != 0;
  v69 = 0LL;
  v15 = 0;
  v77 = 0LL;
  v16 = v71;
  v17 = (unsigned __int64)a5;
  if ( dword_1801CC578 && !v71 && !v70 )
  {
    v28 = RtlpDebugPageHeapCreate(a1, 0, v72, v7, 0LL, a6);
    if ( v28 )
    {
      v26 = v71;
      goto LABEL_42;
    }
    if ( a6 != -1 )
      goto LABEL_173;
    v9 = 0LL;
    v15 = 1;
    v17 = (unsigned __int64)v70;
    v16 = v71;
  }
  v18 = a1 & 0xF1FFFFFF;
  v19 = 0LL;
  if ( (v18 & 0x100) != 0 )
  {
    if ( (v18 & 2) == 0 || v16 || v17 )
      goto LABEL_173;
    if ( v9 == -1 && dword_1801CC588 )
    {
      v9 = 0LL;
      v15 = 1;
    }
    if ( v9 )
    {
      v19 = (_BYTE *)v9;
      if ( !(unsigned int)RtlpHpParametersVerify(v9) )
        goto LABEL_173;
    }
    else
    {
      v19 = v100;
    }
  }
  else if ( (RtlpHpHeapFeatures & 1) != 0
         && (v18 & 2) != 0
         && !v16
         && (!v9 || !*(_QWORD *)(v9 + 8) && !*(_QWORD *)(v9 + 16) && !*(_QWORD *)(v9 + 48) && !*(_QWORD *)(v9 + 72)) )
  {
    v19 = v100;
    if ( v17 )
      v19 = 0LL;
  }
  if ( v19 )
  {
    if ( v19 == v100 )
    {
      *(_QWORD *)(v19 + 4) = 0LL;
      *(_QWORD *)(v19 + 20) = 0LL;
      *(_QWORD *)(v19 + 28) = 0LL;
      *(_QWORD *)(v19 + 36) = 0LL;
      *(_QWORD *)(v19 + 44) = 0LL;
      *(_QWORD *)(v19 + 52) = 0LL;
      *(_QWORD *)(v19 + 60) = 0LL;
      *(_QWORD *)(v19 + 68) = 0LL;
      *((_DWORD *)v19 + 19) = 0;
      *(_DWORD *)v19 = 5242883;
      *((_DWORD *)v19 + 3) = 1;
      *((_DWORD *)v19 + 4) = -1;
      if ( v15 )
        *((_DWORD *)v19 + 1) = 2;
    }
    if ( (v19[4] & 1) == 0 )
    {
      v58 = BYTE2(RtlpHpEnvHandle);
      _BitScanReverse((unsigned int *)&v59, *((_DWORD *)v19 + 3));
      v82 = v59;
      v60 = *((_DWORD *)v19 + 4);
      if ( v60 != -1 )
        v58 = v60 + 1;
      v61 = *((_QWORD *)v19 + 3);
      v84.m128i_i8[0] = RtlpHpEnvHandle;
      v84.m128i_i8[1] = v59;
      v84.m128i_i8[2] = v58;
      *(__int32 *)((char *)v84.m128i_i32 + 3) = *(_DWORD *)((char *)&RtlpHpEnvHandle + 3);
      v84.m128i_i8[7] = BYTE7(RtlpHpEnvHandle);
      v84.m128i_i64[1] = v61;
      v62 = v83;
      v63 = v83;
      if ( v72 )
        v63 = v72;
      if ( v83 > v63 )
        v62 = v63;
      v64 = RtlpHpConvertCreationFlags(v18, NtGlobalFlag, (__int64)v19);
      v90 = v84;
      v65 = RtlpHpHeapCreate(v64, v63, v62, &v90);
      v28 = v65;
      if ( v65 )
      {
        if ( (v18 & 1) != 0 )
          v14 |= 2u;
        if ( (int)RtlpProcessHeapsInsert(v65, v14) < 0 )
        {
          RtlpHpHeapDestroy(v28);
          v28 = 0LL;
        }
        if ( *(_DWORD *)(v28 + 16) == -571548178 )
        {
          RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpHpStackTrackingContext, v66, v67);
          if ( (dword_1801CE8C8 & 1) != 0 && (dword_1801CE8C8 & 2) != 0 )
            _InterlockedOr((volatile signed __int32 *)(v28 + 20), 0x40u);
          RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
        }
        RtlpHpHeapLoggingStateSync(v28);
      }
      v26 = v71;
      goto LABEL_42;
    }
    v26 = v71;
    if ( dword_1801CC588 )
    {
      v28 = RtlpDebugPageHeapCreate(v18, (int)v71, v72, v83, 0LL, 0LL);
      goto LABEL_42;
    }
LABEL_41:
    v28 = 0LL;
LABEL_42:
    v29 = 0LL;
LABEL_43:
    v30 = (__int64)v70;
    goto LABEL_44;
  }
  if ( (v18 & 0x10000000) != 0 )
    goto LABEL_6;
  if ( RtlpHeapErrorHandlerThreshold >= 2 )
  {
    if ( (v18 & 0xFFF80C00) == 0 )
      goto LABEL_6;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
    if ( !byte_1801D2908 )
      RtlpReportHeapFailure(2LL);
  }
  if ( (v18 & 0xFFF80C00) != 0 )
    v18 &= 0x7F3FFu;
LABEL_6:
  memset_thunk_772440563353939046(&v94, 0, 0x60uLL);
  if ( v9 && *(_DWORD *)v9 == 96 )
  {
    v94 = *(_OWORD *)v9;
    v95 = *(_OWORD *)(v9 + 16);
    v96 = *(_OWORD *)(v9 + 32);
    v97 = *(_OWORD *)(v9 + 48);
    v98 = *(_OWORD *)(v9 + 64);
    v99 = *(_OWORD *)(v9 + 80);
  }
  if ( (NtGlobalFlag & 0x10) != 0 )
    v18 |= 0x20u;
  v20 = v18 | 0x40;
  if ( (NtGlobalFlag & 0x20) == 0 )
    v20 = v18;
  v21 = v20 | 0x80;
  if ( (NtGlobalFlag & 0x200000) == 0 )
    v21 = v20;
  v22 = v21 | 0x40000000;
  if ( (NtGlobalFlag & 0x40) == 0 )
    v22 = v21;
  v11 = v22;
  LODWORD(v11) = v22 | 0x20000000;
  if ( (NtGlobalFlag & 0x80u) == 0 )
    v11 = v22;
  v23 = v11 | 0x8000000;
  if ( (NtGlobalFlag & 0x1000) == 0 )
    v23 = v11;
  v24 = NtCurrentPeb();
  if ( !*((_QWORD *)&v94 + 1) )
    *((_QWORD *)&v94 + 1) = v24->HeapSegmentReserve;
  if ( !(_QWORD)v95 )
    *(_QWORD *)&v95 = v24->HeapSegmentCommit;
  if ( !*((_QWORD *)&v95 + 1) )
    *((_QWORD *)&v95 + 1) = v24->HeapDeCommitFreeBlockThreshold;
  if ( !(_QWORD)v96 )
    *(_QWORD *)&v96 = v24->HeapDeCommitTotalFreeThreshold;
  v25 = qword_1801CE6F8;
  if ( !qword_1801CE6F8 )
  {
    qword_1801CE700 = 0x10000LL;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      v25 = v102;
      qword_1801CE6F8 = v102;
      goto LABEL_28;
    }
LABEL_173:
    v26 = v71;
    goto LABEL_41;
  }
LABEL_28:
  if ( !*((_QWORD *)&v96 + 1) )
    *((_QWORD *)&v96 + 1) = v25 - qword_1801CE700 - 4096;
  if ( (unsigned __int64)(v97 - 1) > 0xFEFFF )
    *(_QWORD *)&v97 = 1044480LL;
  if ( v83 )
    v13 = (v83 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v13 = 0x2000LL;
  v74 = v13;
  if ( v72 )
    v12 = (v72 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v12 = (v13 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v73 = v12;
  v17 = v13;
  if ( v13 > v12 )
  {
    v13 = v12;
    v74 = v12;
    v17 = v12;
  }
  v26 = v71;
  if ( (v23 & 2) == 0 || v71 )
  {
    v27 = 0LL;
  }
  else
  {
    v27 = 4096LL;
    v75 = 2;
    if ( v12 - 4096 < v17 )
    {
      v12 = (v12 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v73 = v12;
    }
  }
  if ( !v13 || !v12 )
    goto LABEL_41;
  LOBYTE(v17) = (v23 & 0x61000000) != 0;
  if ( ((unsigned __int8)v17 & ((v23 & 0x10000000) == 0)) != 0 )
    return RtlDebugCreateHeap(v23, (_DWORD)v71, v12, v13, (__int64)v70, (__int64)&v94, v78);
  v32 = 704;
  v30 = (__int64)v70;
  if ( (v23 & 1) != 0 )
  {
    LODWORD(v72) = v23;
    v29 = 0LL;
    if ( v70 )
    {
      v28 = 0LL;
      goto LABEL_44;
    }
  }
  else
  {
    if ( v70 )
      v23 |= 0x80000000;
    LODWORD(v72) = v23;
    v17 = 744LL;
    if ( !v70 )
      v32 = 744;
    v29 = v70;
    if ( !v70 )
      v29 = 0LL;
    v77 = v29;
  }
  if ( v71 )
  {
    if ( *((_QWORD *)&v98 + 1) )
    {
      v17 = *((_QWORD *)&v97 + 1);
      if ( *((_QWORD *)&v97 + 1) && (_QWORD)v98 && *((_QWORD *)&v97 + 1) <= (unsigned __int64)v98 && (v23 & 2) == 0 )
      {
        v76 = (char *)v71;
        v38 = (char *)v71 + *((_QWORD *)&v97 + 1);
        v73 = v98;
        memset_thunk_772440563353939046(v71, 0, 0x1000uLL);
        v17 = (unsigned __int64)v71;
LABEL_156:
        v75 |= 1u;
        v37 = (char *)v71;
        v69 = (char *)v71;
LABEL_65:
        if ( (char *)v17 == v38 )
        {
          v39 = 64;
          if ( (v72 & 0x40000) == 0 )
            v39 = 4;
          if ( (int)ZwAllocateVirtualMemory(-1LL, &v76, 0LL, &v74, 4096, v39) < 0 )
          {
            v28 = 0LL;
            v26 = v71;
            goto LABEL_43;
          }
          v40 = 2147353472LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v41 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v41 = 2147353472LL;
          if ( *(_BYTE *)v41 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(v69, v76, v74, 1LL);
          v38 += v74;
          v37 = v69;
        }
        else
        {
          v40 = 2147353472LL;
        }
        v42 = (__int64)(v37 + 704);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          v57 = (v42 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          *((_QWORD *)v69 + 41) = v57;
          v32 += 2064;
          v42 = v57 + 2064;
          LODWORD(v72) = v72 | 0x4000000;
        }
        v43 = (v32 + 15) & 0xFFFFFFF0;
        *((_WORD *)v69 + 4) = v43 >> 4;
        v69[10] = 1;
        v69[15] = 1;
        *((_DWORD *)v69 + 38) = -285217025;
        *((_DWORD *)v69 + 28) = v72 & 0xEFFFFFFF;
        *((_DWORD *)v69 + 36) = 0;
        memset_thunk_772440563353939046(v69 + 568, 0, 0x78uLL);
        RtlpCreateHeapEncoding(v69);
        *((_DWORD *)v69 + 162) = 1;
        v44 = v69;
        if ( (*((_DWORD *)v69 + 28) & 0x8000000) != 0 )
        {
          HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
          *(_DWORD *)(v56 + 144) = HeapInterceptorIndex;
          *((_DWORD *)v69 + 28) &= ~0x40u;
          v44 = v69;
        }
        v45 = v72;
        *((_DWORD *)v44 + 29) = v72 & 0x6001007D;
        *((_WORD *)v69 + 105) = v42 - (_WORD)v69;
        *((_QWORD *)v69 + 27) = 0LL;
        v46 = v69 + 336;
        *((_QWORD *)v69 + 43) = v69 + 336;
        *v46 = v46;
        v47 = v69 + 272;
        *((_QWORD *)v69 + 35) = v69 + 272;
        *v47 = v47;
        v48 = v69 + 288;
        *((_QWORD *)v69 + 37) = v69 + 288;
        *v48 = v48;
        v49 = v69 + 240;
        *((_QWORD *)v69 + 31) = v69 + 240;
        *v49 = v49;
        if ( v77 || (v45 & 1) != 0 )
        {
LABEL_81:
          *((_QWORD *)v69 + 44) = v77;
          *((_DWORD *)v69 + 30) |= 0x80000000;
          if ( (unsigned __int8)RtlpInitializeHeapSegment(
                                  (_DWORD)v69,
                                  (_DWORD)v69,
                                  v43 + 1104,
                                  v13,
                                  v75,
                                  (__int64)v76,
                                  (__int64)v38,
                                  (__int64)&v76[v73 - v27]) )
          {
            if ( v71 )
              memset_thunk_772440563353939046((void *)v42, 0, 0x80uLL);
            *(_DWORD *)(v42 + 8) = 128;
            *(_QWORD *)(v42 + 40) = v42 + 56;
            *(_QWORD *)(v42 + 32) = v69 + 336;
            *(_QWORD *)(v42 + 48) = v42 + 72;
            RtlpPopulateListIndex(v69, v42);
            *((_WORD *)v69 + 104) = 0;
            *((_QWORD *)v69 + 20) = *((_QWORD *)&v94 + 1);
            *((_QWORD *)v69 + 21) = v95;
            *((_QWORD *)v69 + 22) = *((_QWORD *)&v95 + 1) >> 4;
            *((_QWORD *)v69 + 23) = (unsigned __int64)v96 >> 4;
            *((_QWORD *)v69 + 25) = *((_QWORD *)&v96 + 1);
            *((_DWORD *)v69 + 37) = (unsigned __int64)(v97 + 15) >> 4;
            *((_QWORD *)v69 + 45) = RtlpHeapKey ^ *((_QWORD *)&v98 + 1);
            *((_DWORD *)v69 + 172) = 4;
            *((_QWORD *)v69 + 87) = 2088960LL;
            if ( (RtlpDisableHeapLookaside & 1) != 0 )
              *((_DWORD *)v69 + 30) = 1;
            v50 = v72;
            *((_QWORD *)v69 + 32) = 31LL;
            *((_QWORD *)v69 + 33) = -16LL;
            v51 = v69;
            if ( (v69[112] & 0x20) != 0 )
            {
              *((_QWORD *)v69 + 32) += 16LL;
              v51 = v69;
            }
            *((_QWORD *)v51 + 51) = 0LL;
            *((_WORD *)v69 + 208) = 0;
            v69[418] = 0;
            v69[419] = 0;
            *((_QWORD *)v69 + 40) = 0LL;
            if ( (v50 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
              goto LABEL_91;
            *((_QWORD *)v69 + 53) = RtlAllocateHeap((__int64)v69, 0x80000Au, 0x100uLL);
            v17 = *((_QWORD *)v69 + 53);
            if ( v17 )
            {
              *(_BYTE *)(v17 - 1) = 1;
              *((_WORD *)v69 + 216) = 128;
LABEL_91:
              v69[563] = 0;
              *((_QWORD *)v69 + 46) = 0LL;
              if ( (int)RtlpProcessHeapsInsert(v69, v78) < 0 )
              {
                v28 = 0LL;
                v29 = v77;
                v26 = v71;
                goto LABEL_43;
              }
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                v52 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v52 = 2147353472LL;
              if ( *(_BYTE *)v52 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                  v40 = (__int64)NtCurrentPeb()->SharedData + 550;
                RtlpLogHeapCreateEvent((_DWORD)v69, v50, v73, v74, *(unsigned __int8 *)v40);
              }
              v53 = 2147353482LL;
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                v54 = (__int64)NtCurrentPeb()->SharedData + 560;
              else
                v54 = 2147353482LL;
              if ( *(_BYTE *)v54 )
              {
                if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                  v53 = (__int64)NtCurrentPeb()->SharedData + 560;
                RtlpLogHeapCreateEvent((_DWORD)v69, v50, v73, v74, *(unsigned __int8 *)v53);
              }
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                v17 = (unsigned __int64)NtCurrentPeb()->SharedData + 558;
              else
                v17 = 2147353480LL;
              if ( *(_BYTE *)v17 )
                RtlpHeapLogRangeCreate((__int64)v69, v73, v50);
              *((_DWORD *)v69 + 30) &= ~0x80000000;
              v28 = (__int64)v69;
              v69 = 0LL;
              v26 = v71;
              goto LABEL_42;
            }
          }
          v28 = 0LL;
          v29 = v77;
          v26 = v71;
          goto LABEL_43;
        }
        v77 = (__int64 *)v42;
        if ( (int)RtlInitializeCriticalSectionEx(v42, 0, 0x10000000) >= 0 )
        {
          v42 += 40LL;
          goto LABEL_81;
        }
        goto LABEL_173;
      }
    }
    else if ( (int)ZwQueryVirtualMemory(-1LL, v71, 0LL, v87, 48LL, 0LL) >= 0 )
    {
      v38 = (char *)v87[0];
      if ( v87[0] == v71 && (_DWORD)v89 != 0x10000 )
      {
        v17 = (unsigned __int64)v87[0];
        v76 = (char *)v87[0];
        if ( (_DWORD)v89 == 4096 )
        {
          if ( (v23 & 0x40000) != 0 && (BYTE4(v89) & 0x40) == 0 )
          {
            v28 = 0LL;
            goto LABEL_43;
          }
          memset_thunk_772440563353939046(v87[0], 0, 0x1000uLL);
          if ( (int)ZwQueryVirtualMemory(-1LL, v71, 3LL, &v91, 48LL, 0LL) < 0 )
          {
            v28 = 0LL;
            goto LABEL_43;
          }
          v73 = v92;
          v74 = *((_QWORD *)&v88 + 1);
          v17 = (unsigned __int64)v76;
          v38 = &v76[*((_QWORD *)&v88 + 1)];
        }
        else
        {
          v11 = *((_QWORD *)&v88 + 1);
          v73 = *((_QWORD *)&v88 + 1);
          v68 = v74;
          if ( v74 > *((_QWORD *)&v88 + 1) )
          {
            v68 = *((_QWORD *)&v88 + 1);
            v74 = *((_QWORD *)&v88 + 1);
          }
          if ( v68 < 0x2000 )
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
  v81 = 0LL;
  v80 = 0LL;
  v79 = 0LL;
  if ( !*((_QWORD *)&v98 + 1) )
  {
    v33 = qword_1801CDF00;
    do
    {
      v34 = ((((v33 ^ (v33 >> 12)) << 25) ^ v33 ^ (v33 >> 12)) >> 27) ^ ((v33 ^ (v33 >> 12)) << 25) ^ v33 ^ (v33 >> 12);
      v35 = v33;
      v33 = _InterlockedCompareExchange64(&qword_1801CDF00, v34, v33);
    }
    while ( v35 != v33 );
    v79 = (unsigned __int64)((-3 * (_BYTE)v34) & 0x1F) << 16;
    v80 = v73 + v79;
    if ( v73 + v79 < v73 )
    {
      v80 = v73;
      v79 = 0LL;
    }
    v36 = 64;
    if ( (v23 & 0x40000) == 0 )
      v36 = 4;
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v81, 0LL, &v80, 0x2000, v36) < 0 )
    {
      v28 = 0LL;
      v26 = v71;
      goto LABEL_43;
    }
    v37 = v81;
    v69 = v81;
    v73 = v80;
    if ( v79 )
    {
      RtlpSecMemFreeVirtualMemory(v17, (__int64 *)&v81, (__int64 *)&v79, 0x8000LL);
      v37 = &v81[v79];
      v69 = &v81[v79];
      v73 = v80 - v79;
    }
    v17 = (unsigned __int64)v37;
    v76 = v37;
    v38 = v37;
    goto LABEL_65;
  }
  v28 = 0LL;
LABEL_44:
  if ( v29 && v29 != (__int64 *)v30 )
    RtlDeleteCriticalSection(v29, v11, v12, v13);
  if ( v69 )
  {
    if ( !v26 )
    {
      v73 = 0LL;
      RtlpSecMemFreeVirtualMemory(v17, (__int64 *)&v69, (__int64 *)&v73, 0x8000LL);
    }
  }
  return v28;
}
