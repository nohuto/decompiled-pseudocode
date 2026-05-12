/*
 * XREFs of NvmeSubmitIoToSQ @ 0x140126050
 * Callers:
 *     NvmeContinueScatterGatherProcessIO @ 0x14011C250 (NvmeContinueScatterGatherProcessIO.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011CB50 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessIoIrp @ 0x14011DC30 (NvmeProcessIoIrp.c)
 *     NvmeProcessPendingIo @ 0x14011E5A0 (NvmeProcessPendingIo.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x140120370 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x140122190 (NvmeProcessPendingIoInSpecifiedGroup.c)
 *     NvmeProcessPendingLowPriorityIo @ 0x140123160 (NvmeProcessPendingLowPriorityIo.c)
 * Callees:
 *     FreeNVMePrpListBufferEntry @ 0x14011A2E0 (FreeNVMePrpListBufferEntry.c)
 *     NvmeNamespaceQueueIo @ 0x14011D6B0 (NvmeNamespaceQueueIo.c)
 *     NvmeStartIoPolling @ 0x140125F10 (NvmeStartIoPolling.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeSubmitIoToSQ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        __int16 a10,
        unsigned __int8 a11,
        unsigned __int16 *a12)
{
  __int64 v12; // rax
  __int64 v14; // rbx
  __int64 v16; // r13
  __int64 v17; // rax
  char v18; // cl
  _DWORD *v19; // rax
  unsigned int v20; // edx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned int v23; // eax
  int v24; // ecx
  KIRQL v25; // r8
  __int64 v26; // r12
  unsigned int v28; // ebx
  __int64 v29; // r8
  unsigned int v30; // esi
  int v31; // edi
  int v32; // edx
  unsigned __int16 Next_high; // r15
  USHORT DepthSList; // ax
  __int64 v35; // r9
  __int64 v36; // r10
  __int64 v37; // rax
  const wchar_t *v38; // rdx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  __int64 v41; // rax
  const wchar_t *v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // r8d
  const wchar_t *v46; // rax
  const wchar_t *v47; // r8
  const wchar_t *v48; // rdx
  __int64 v49; // rax
  int v50; // eax
  const wchar_t *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r9
  PSLIST_ENTRY v55; // r9
  int v56; // r8d
  __int64 v57; // r13
  unsigned int v58; // ecx
  unsigned int v59; // eax
  unsigned int v60; // esi
  unsigned int v61; // r14d
  __int64 v62; // rax
  unsigned __int64 v63; // rsi
  _OWORD *v64; // rdx
  __int64 v65; // r14
  __int16 v66; // ax
  LARGE_INTEGER v67; // rax
  unsigned int v68; // ecx
  unsigned int v69; // edx
  __int64 v70; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  bool v72; // zf
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v74; // rdx
  unsigned __int8 *v75; // rax
  int v76; // ecx
  __int64 v77; // r9
  __int64 v78; // r10
  __m128i *v79; // r13
  unsigned __int8 v80; // r15
  __int64 v81; // rcx
  __int32 v82; // edx
  int v83; // r8d
  unsigned int v84; // ecx
  unsigned int v85; // ecx
  __m128i *v86; // r8
  int v87; // r12d
  unsigned int v88; // r14d
  __int64 v89; // r10
  __int64 v90; // r11
  unsigned int v91; // r9d
  unsigned int v92; // esi
  __int64 v93; // rdx
  __int64 v94; // rax
  __m128i v95; // xmm0
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // r9
  __int64 v100; // rcx
  __int64 v101; // rax
  void (__fastcall *v102)(__int64, _QWORD, _QWORD); // rax
  __int64 v103; // rax
  __int64 *v104; // r8
  _QWORD *v105; // r14
  unsigned int v106; // r10d
  unsigned int v107; // r12d
  unsigned int v108; // esi
  unsigned int *v109; // rcx
  __m128i *v110; // r15
  unsigned int v111; // ebx
  __int64 *v112; // r13
  unsigned int *v113; // rdi
  __int64 v114; // r9
  __int64 v115; // r11
  unsigned int v116; // eax
  int v117; // ecx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r11
  __int64 v121; // r8
  char v122; // r9
  __int64 v123; // rax
  __int64 v124; // r10
  __int64 v125; // rcx
  unsigned int v126; // ecx
  __int16 v127; // cx
  __int64 v128; // rax
  __int64 v129; // rcx
  void (__fastcall *v130)(__int64, _QWORD, __int64); // rax
  __int64 v131; // rsi
  __int64 v132; // rdx
  unsigned int v133; // r8d
  __int64 v134; // rcx
  unsigned int v135; // edx
  __int64 v136; // rdi
  _QWORD *v137; // rcx
  __int128 v138; // xmm1
  __int64 v139; // rcx
  signed __int32 v140[8]; // [rsp+0h] [rbp-100h] BYREF
  LPCGUID ActivityId; // [rsp+20h] [rbp-E0h]
  KIRQL v142; // [rsp+40h] [rbp-C0h]
  char v143; // [rsp+41h] [rbp-BFh]
  char v144; // [rsp+42h] [rbp-BEh]
  unsigned __int16 v145; // [rsp+44h] [rbp-BCh]
  unsigned __int16 v146; // [rsp+46h] [rbp-BAh]
  unsigned int v147; // [rsp+48h] [rbp-B8h] BYREF
  int v148; // [rsp+4Ch] [rbp-B4h]
  __int64 v149; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v150; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v151; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v152; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v153; // [rsp+70h] [rbp-90h]
  unsigned __int64 v154; // [rsp+78h] [rbp-88h]
  __int64 v155; // [rsp+80h] [rbp-80h] BYREF
  __int64 v156; // [rsp+88h] [rbp-78h] BYREF
  __int64 v157; // [rsp+90h] [rbp-70h]
  __m128i *v158; // [rsp+98h] [rbp-68h]
  unsigned __int64 v159; // [rsp+A0h] [rbp-60h]
  __int64 v160; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v161; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v162; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v163; // [rsp+D0h] [rbp-30h]
  __int128 v164; // [rsp+E0h] [rbp-20h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+100h] [rbp+0h] BYREF
  int v166; // [rsp+110h] [rbp+10h] BYREF
  __int128 v167; // [rsp+114h] [rbp+14h]
  int v168; // [rsp+124h] [rbp+24h]
  __int64 v169; // [rsp+128h] [rbp+28h]
  int v170; // [rsp+130h] [rbp+30h] BYREF
  __int128 v171; // [rsp+134h] [rbp+34h]
  int v172; // [rsp+144h] [rbp+44h]
  __int64 v173; // [rsp+148h] [rbp+48h]
  GUID v174; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+60h] BYREF
  __int64 v176; // [rsp+170h] [rbp+70h]
  __int64 v177; // [rsp+178h] [rbp+78h]
  const wchar_t *v178; // [rsp+180h] [rbp+80h]
  int v179; // [rsp+188h] [rbp+88h]
  int v180; // [rsp+18Ch] [rbp+8Ch]
  const wchar_t *v181; // [rsp+190h] [rbp+90h]
  int v182; // [rsp+198h] [rbp+98h]
  int v183; // [rsp+19Ch] [rbp+9Ch]
  __int64 v184; // [rsp+1A0h] [rbp+A0h]
  __int64 v185; // [rsp+1A8h] [rbp+A8h]
  __int64 v186; // [rsp+1B0h] [rbp+B0h]
  __int64 v187; // [rsp+1B8h] [rbp+B8h]
  const wchar_t *v188; // [rsp+1C0h] [rbp+C0h]
  int v189; // [rsp+1C8h] [rbp+C8h]
  int v190; // [rsp+1CCh] [rbp+CCh]
  __int64 v191; // [rsp+1D0h] [rbp+D0h]
  int v192; // [rsp+1D8h] [rbp+D8h]
  int v193; // [rsp+1DCh] [rbp+DCh]
  __int64 v194; // [rsp+1E0h] [rbp+E0h]
  int v195; // [rsp+1E8h] [rbp+E8h]
  int v196; // [rsp+1ECh] [rbp+ECh]
  const wchar_t *v197; // [rsp+1F0h] [rbp+F0h]
  __int64 v198; // [rsp+1F8h] [rbp+F8h]
  const wchar_t *v199; // [rsp+200h] [rbp+100h]
  __int64 v200; // [rsp+208h] [rbp+108h]
  __int64 *v201; // [rsp+210h] [rbp+110h]
  __int64 v202; // [rsp+218h] [rbp+118h]
  const wchar_t *v203; // [rsp+220h] [rbp+120h]
  __int64 v204; // [rsp+228h] [rbp+128h]
  __int64 *v205; // [rsp+230h] [rbp+130h]
  __int64 v206; // [rsp+238h] [rbp+138h]
  const wchar_t *v207; // [rsp+240h] [rbp+140h]
  __int64 v208; // [rsp+248h] [rbp+148h]
  __int64 *v209; // [rsp+250h] [rbp+150h]
  __int64 v210; // [rsp+258h] [rbp+158h]
  const wchar_t *v211; // [rsp+260h] [rbp+160h]
  __int64 v212; // [rsp+268h] [rbp+168h]
  __int64 *v213; // [rsp+270h] [rbp+170h]
  __int64 v214; // [rsp+278h] [rbp+178h]
  const wchar_t *v215; // [rsp+280h] [rbp+180h]
  __int64 v216; // [rsp+288h] [rbp+188h]
  __int64 *v217; // [rsp+290h] [rbp+190h]
  __int64 v218; // [rsp+298h] [rbp+198h]
  const wchar_t *v219; // [rsp+2A0h] [rbp+1A0h]
  __int64 v220; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v221; // [rsp+2B0h] [rbp+1B0h]
  __int64 v222; // [rsp+2B8h] [rbp+1B8h]
  const wchar_t *v223; // [rsp+2C0h] [rbp+1C0h]
  __int64 v224; // [rsp+2C8h] [rbp+1C8h]
  __int64 *v225; // [rsp+2D0h] [rbp+1D0h]
  __int64 v226; // [rsp+2D8h] [rbp+1D8h]
  const wchar_t *v227; // [rsp+2E0h] [rbp+1E0h]
  __int64 v228; // [rsp+2E8h] [rbp+1E8h]
  __int64 *v229; // [rsp+2F0h] [rbp+1F0h]
  __int64 v230; // [rsp+2F8h] [rbp+1F8h]

  v12 = *(_QWORD *)(a2 + 184);
  v14 = a3;
  v149 = a1;
  v150 = a4;
  v16 = a2;
  v147 = 0;
  v155 = 0LL;
  v151 = v12;
  v17 = *(_QWORD *)(a1 + 16);
  v152 = a2;
  v157 = a3;
  v18 = *(_BYTE *)(v17 + 1728);
  LOBYTE(v17) = *(_BYTE *)(v17 + 1729);
  v144 = v18;
  v143 = v17;
  v19 = *(_DWORD **)(a2 + 8);
  v20 = v19[11];
  v21 = ((((_WORD)v20 + (unsigned __int16)v19[8]) & 0xFFF) + (unsigned __int64)(unsigned int)v19[10] + 4095) >> 12;
  v22 = ((v20 & 0xFFF) + (unsigned __int64)a7 + 4095) >> 12;
  v154 = v22;
  if ( !(_DWORD)v22 )
    return 3221225488LL;
  v23 = v20 >> 12;
  if ( v20 < 0x1000 )
    v23 = 0;
  v24 = v20 & 0xFFF;
  LODWORD(v156) = v23;
  if ( v20 < 0x1000 )
    v24 = v20;
  v153 = v24;
  if ( (unsigned int)v22 + v23 > (unsigned int)v21 )
    return 3221225488LL;
  v25 = KfRaiseIrql(2u);
  v142 = v25;
  _InterlockedIncrement((volatile signed __int32 *)(v14 + 128));
  v26 = v14 + 88;
  if ( *(_BYTE *)(*(_QWORD *)(v14 + 88) + 1228LL) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v14 + 128));
    if ( a4 )
    {
      FreeNVMePrpListBufferEntry(*(_QWORD *)(a1 + 16), a5, a4);
      v25 = v142;
    }
    KeLowerIrql(v25);
    return 3221225486LL;
  }
  if ( *(_DWORD *)(*(_QWORD *)v26 + 948LL) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v14 + 128));
    v28 = a5;
    NvmeNamespaceQueueIo(a1, v16, a5);
    if ( !a4 )
    {
LABEL_84:
      KeLowerIrql(v142);
      return 2147483665LL;
    }
    v29 = a4;
LABEL_83:
    FreeNVMePrpListBufferEntry(*(_QWORD *)(a1 + 16), v28, v29);
    goto LABEL_84;
  }
  v30 = *(_DWORD *)(v14 + 124);
  if ( !a12 )
  {
    v55 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v14 + 64));
    if ( !v55 )
    {
LABEL_60:
      _InterlockedDecrement((volatile signed __int32 *)(v14 + 128));
      v57 = *(_QWORD *)v26;
      v58 = *(unsigned __int16 *)(*(_QWORD *)v26 + 22LL);
      if ( v58 != 1 )
      {
        v59 = *(unsigned __int16 *)(v14 + 136);
        v148 = v59 - 1;
        v60 = v59 % v58;
        if ( v59 % v58 < v58 )
        {
          do
          {
            v14 = *(_QWORD *)(*(_QWORD *)v26 + 728LL) + 192LL * v60;
            v157 = v14;
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 128));
            v61 = *(_DWORD *)(v14 + 124);
            v55 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v14 + 64));
            if ( v55 )
            {
              _InterlockedOr(v140, 0);
              while ( 1 )
              {
                v56 = 0;
                v145 = *(_WORD *)(v14 + 142);
                v31 = v145;
                if ( (unsigned __int16)(v145 + 1) < v61 )
                  LOWORD(v56) = v145 + 1;
                if ( (_WORD)v56 == *(_WORD *)(v14 + 140) )
                  break;
                if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v14 + 142), v56, v145) == v31 )
                {
                  v16 = v152;
                  goto LABEL_69;
                }
              }
              ExpInterlockedPushEntrySList((PSLIST_HEADER)(v14 + 64), v55);
            }
            v68 = *(unsigned __int16 *)(v57 + 22);
            _InterlockedDecrement((volatile signed __int32 *)(v14 + 128));
            v69 = (v60 + 1) % v68;
            v60 = v69;
          }
          while ( v69 != v148 && v69 < *(unsigned __int16 *)(v57 + 22) );
        }
      }
      v28 = a5;
      NvmeNamespaceQueueIo(a1, v152, a5);
      if ( !v150 )
        goto LABEL_84;
      v29 = v150;
      goto LABEL_83;
    }
    _InterlockedOr(v140, 0);
    do
    {
      v56 = 0;
      v145 = *(_WORD *)(v14 + 142);
      v31 = v145;
      if ( (unsigned __int16)(v145 + 1) < v30 )
        LOWORD(v56) = v145 + 1;
      if ( (_WORD)v56 == *(_WORD *)(v14 + 140) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v14 + 64), v55);
        goto LABEL_60;
      }
    }
    while ( _InterlockedCompareExchange16((volatile signed __int16 *)(v14 + 142), v56, v145) != v31 );
LABEL_69:
    Next_high = HIWORD(v55[3].Next);
    v148 = v56;
LABEL_70:
    v62 = *(_QWORD *)(v14 + 32);
    v63 = (unsigned __int64)Next_high << 7;
    v146 = Next_high;
    v159 = v63;
    if ( (*(_BYTE *)(v62 + v63 + 60) & 4) != 0 )
    {
      v64 = *(_OWORD **)(*(_QWORD *)(v14 + 24) + 16LL * (unsigned __int16)v31);
      *v64 = 0LL;
      v64[1] = 0LL;
      v64[2] = 0LL;
      v64[3] = 0LL;
    }
    v65 = v149;
    v66 = *(_WORD *)(v149 + 652);
    if ( !v66 )
      v66 = *(_WORD *)(v149 + 424);
    *(_WORD *)(v63 + *(_QWORD *)(v14 + 32) + 58LL) = v66;
    *(_DWORD *)(v63 + *(_QWORD *)(v14 + 32) + 88) = *(_DWORD *)(v65 + 56);
    if ( FeatureFixTRIMAddSCSIPassthrough )
    {
      if ( (int)IoGetIoAttributionHandle(v16, &v155) < 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v65 + 608) + 4LL) & 1) != 0 )
        {
          if ( UseQPCTime )
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
          else
            PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
          *(LARGE_INTEGER *)(v63 + *(_QWORD *)(v14 + 32) + 72) = PerformanceCounter;
        }
      }
      else
      {
        if ( UseQPCTime )
          v67 = KeQueryPerformanceCounter(0LL);
        else
          v67.QuadPart = KeQueryUnbiasedInterruptTime();
        v70 = *(_QWORD *)(v14 + 32);
        v167 = 0LL;
        v168 = 0;
        v166 = 1;
        *(LARGE_INTEGER *)(v63 + v70 + 72) = v67;
        LODWORD(v70) = **(unsigned __int8 **)(v16 + 184);
        v169 = *(_QWORD *)(v63 + *(_QWORD *)(v14 + 32) + 72);
        LODWORD(v167) = v70 | _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFF00 | 0x100;
        IoRecordIoAttribution(v155, &v166);
      }
      v72 = *(_WORD *)(v65 + 652) == 0;
    }
    else
    {
      if ( (int)IoGetIoAttributionHandle(v16, &v155) >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(v14 + 32) + v63 + 64) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)(v63 + *(_QWORD *)(v14 + 32) + 64LL));
        v74 = *(_QWORD *)(v63 + *(_QWORD *)(v14 + 32) + 64);
        v75 = *(unsigned __int8 **)(v16 + 184);
        v171 = 0LL;
        v172 = 0;
        v170 = 1;
        v76 = *v75;
        v173 = v74;
        LODWORD(v171) = v76 | _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFF00 | 0x100;
        IoRecordIoAttribution(v155, &v170);
        goto LABEL_100;
      }
      v72 = (*(_DWORD *)(*(_QWORD *)(v65 + 608) + 4LL) & 1) == 0;
    }
    if ( v72 )
      UnbiasedInterruptTime = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v14 + 88) + 1288LL) + 40LL);
    else
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    *(_QWORD *)(*(_QWORD *)(v14 + 32) + v63 + 64) = UnbiasedInterruptTime;
LABEL_100:
    v77 = v151;
    v78 = (unsigned __int16)v31;
    v72 = FeatureFixFUAForReadIoPerf == 0;
    v158 = *(__m128i **)(*(_QWORD *)(v14 + 24) + 16LL * (unsigned __int16)v31);
    v79 = v158;
    v158->m128i_i16[1] = Next_high;
    if ( v72 )
    {
      if ( FUAEnabled && (*(_BYTE *)(v77 + 2) & 4) != 0 )
        v83 = 0x40000000;
      else
        v83 = 0;
      v80 = a11;
      v81 = *(unsigned int *)(v65 + 64);
      v82 = *(_DWORD *)(v65 + 56);
      if ( a11 )
      {
        v79->m128i_i8[0] = 2;
LABEL_109:
        v79->m128i_i32[0] &= 0xFFFFFCFF;
        v79[3].m128i_i8[4] &= 0xF0u;
        v79->m128i_i32[1] = v82;
        v79[1].m128i_i64[0] = 0LL;
        v79[2].m128i_i64[1] = a8 / v81;
        v79[3].m128i_i16[0] = a10 - 1;
        v84 = v79[3].m128i_i32[0] & 0xC3FFFFFF;
        v79[3].m128i_i32[0] = v84;
        v85 = v83 | v84 & 0xBFFFFFFF;
        v86 = v79;
        v72 = v143 == 0;
        v79[3].m128i_i32[0] = v85 & 0x7FFFFFFF;
        v79[3].m128i_i8[4] = 0;
        v79[3].m128i_i64[1] = 0LL;
        if ( v72 )
          goto LABEL_174;
        if ( (*(_QWORD *)(*(_QWORD *)(v65 + 16) + 136LL) & 0x100000000LL) == 0 )
        {
          v103 = *(_QWORD *)(v77 + 24);
          v104 = &v79[1].m128i_i64[1];
          v154 = 0LL;
          v105 = 0LL;
          v106 = 0;
          v107 = 2;
          v108 = 0;
          v109 = *(unsigned int **)(v103 + 24);
          if ( v150 )
          {
            v105 = *(_QWORD **)(v150 + 16);
            v154 = *(_QWORD *)(v150 + 24);
            v107 = *(unsigned __int16 *)(v150 + 36) + 1;
          }
          if ( *v109 )
          {
            v110 = v79 + 2;
            v111 = 0;
            v112 = &v79[1].m128i_i64[1];
            v113 = v109;
            do
            {
              v114 = *(_QWORD *)&v113[6 * v111 + 4];
              v115 = v113[6 * v111 + 6];
              if ( v115 + v114 % 4096 > 4096 )
              {
                if ( (_DWORD)v115 )
                {
                  while ( 1 )
                  {
                    *v104 = v114;
                    v117 = v114 & 0xFFF;
                    v108 += 4096 - v117;
                    if ( (unsigned int)(v117 + v115) <= 0x1000 )
                      break;
                    LODWORD(v115) = v117 + v115 - 4096;
                    v114 += (unsigned int)(4096 - v117);
                    if ( v104 == v112 )
                    {
                      v104 = (__int64 *)v110;
                    }
                    else if ( v104 == (__int64 *)v110 )
                    {
                      if ( v105 )
                        v104 = v105 + 1;
                    }
                    else
                    {
                      ++v104;
                    }
                    if ( ++v106 >= v107 )
                      goto LABEL_168;
                    v116 = a7;
                    if ( v108 >= a7 )
                      goto LABEL_168;
                    if ( !(_DWORD)v115 )
                      goto LABEL_147;
                  }
                }
              }
              else
              {
                *v104 = v114;
                v108 += v113[6 * v111 + 6];
              }
              v116 = a7;
LABEL_147:
              if ( v104 == v112 )
              {
                v104 = (__int64 *)v110;
              }
              else if ( v104 == (__int64 *)v110 )
              {
                if ( v105 )
                  v104 = v105 + 1;
              }
              else
              {
                ++v104;
              }
              if ( ++v106 >= v107 )
                break;
              if ( v108 >= v116 )
                break;
              ++v111;
            }
            while ( v111 < *v113 );
LABEL_168:
            v14 = v157;
            LOWORD(v31) = v145;
            v79 = v158;
            if ( v106 > 2 )
            {
              *v105 = v158[2].m128i_i64[0];
              v79[2].m128i_i64[0] = v154;
            }
          }
          if ( v150 )
            *(_DWORD *)(v150 + 32) = v106 - 1;
          v63 = v159;
          *(_BYTE *)(*(_QWORD *)(v14 + 32) + v159 + 60) = 0x80;
          goto LABEL_173;
        }
        v87 = v156;
        v88 = v154;
        v89 = *(_QWORD *)(v152 + 8) + 48LL;
        v79[1].m128i_i64[1] = v153 + (*(_QWORD *)(v89 + 8LL * (unsigned int)v156) << 12);
        if ( v88 == 1 )
        {
LABEL_131:
          v98 = *(_QWORD *)(v149 + 16);
          v99 = *(_QWORD *)(v98 + 128) + 1144LL;
          if ( *(_QWORD *)(v152 + 8) )
          {
            if ( *(_QWORD *)(v98 + 128) != -1144LL )
            {
              v100 = *(_QWORD *)v99;
              if ( *(_QWORD *)v99 )
              {
                v101 = *(_QWORD *)(v100 + 8);
                if ( v101 )
                {
                  if ( *(int *)(v99 + 28) >= 3 )
                  {
                    v102 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v101 + 240);
                    if ( v102 )
                    {
                      v102(v100, *(_QWORD *)(v152 + 8), v80);
                      *(_BYTE *)(*(_QWORD *)(v14 + 32) + v63 + 60) = 0;
LABEL_173:
                      v78 = (unsigned __int16)v31;
LABEL_174:
                      v118 = v150;
                      v119 = v146;
                      v120 = v152;
                      v121 = v146;
                      *(_BYTE *)(*(_QWORD *)(v14 + 32) + v63 + 61) = 0;
                      *(_QWORD *)(*(_QWORD *)(v14 + 32) + (v119 << 7) + 24) = v120;
                      *(_WORD *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v121 << 7) + 56) = v31;
                      *(_QWORD *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v121 << 7) + 16) = v118;
                      *(_WORD *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v121 << 7) + 52) = a5;
                      *(_DWORD *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v121 << 7) + 48) = a7;
                      *(_QWORD *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v121 << 7) + 40) = 0LL;
                      *(_QWORD *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v121 << 7) + 32) = 0LL;
                      *(_QWORD *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v121 << 7) + 40) = 0LL;
                      *(_WORD *)(*(_QWORD *)(v14 + 24) + 16 * v78 + 8) = v121;
                      v122 = v144;
                      if ( v144 == 1 )
                      {
                        v123 = *(_QWORD *)(v14 + 56);
                        if ( v123 )
                        {
                          v124 = v78 << 6;
                          *(_OWORD *)(v123 + v124) = 0LL;
                          *(_OWORD *)(v123 + v124 + 16) = 0LL;
                          *(_OWORD *)(v123 + v124 + 32) = 0LL;
                          *(_OWORD *)(v123 + v124 + 48) = 0LL;
                          *(_DWORD *)(v124 + *(_QWORD *)(v14 + 56)) = 1;
                          *(_DWORD *)(v124 + *(_QWORD *)(v14 + 56) + 8) = *(unsigned __int16 *)(v14 + 136);
                          *(_DWORD *)(v124 + *(_QWORD *)(v14 + 56) + 12) = (unsigned __int16)v31;
                          *(_QWORD *)(v124 + *(_QWORD *)(v14 + 56) + 40) |= 1uLL;
                          *(_QWORD *)(*(_QWORD *)(v14 + 56) + v124 + 40) = *(_QWORD *)(*(_QWORD *)(v14 + 56) + v124 + 40) & 0xFFFFFFFFFFFFFFFDuLL | ((*(_DWORD *)(v120 + 16) & 0x42) != 0 ? 2 : 0);
                          v125 = *(_QWORD *)(v14 + 56);
                          if ( *(char *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v121 << 7) + 60) >= 0 )
                            *(_QWORD *)(v124 + v125 + 32) = *(_QWORD *)(v120 + 8);
                          else
                            *(_QWORD *)(v124 + v125 + 24) = *(_QWORD *)(*(_QWORD *)(v151 + 24) + 24LL);
                        }
                      }
                      *(_BYTE *)(*(_QWORD *)(v120 + 184) + 3LL) |= 1u;
                      _InterlockedOr(v140, 0);
                      *(_BYTE *)(*(_QWORD *)(v14 + 32) + (v121 << 7) + 60) |= 1u;
                      _InterlockedDecrement((volatile signed __int32 *)(v14 + 128));
                      v126 = v147 & 0xFFFF0000 | (unsigned __int16)(v31 + 1);
                      v147 = v126;
                      if ( (unsigned __int16)(v31 + 1) == *(_DWORD *)(v14 + 124) )
                        v147 = v126 & 0xFFFF0000;
                      _InterlockedOr(v140, 0);
                      v127 = v148;
                      if ( *(_WORD *)(v14 + 142) == (_WORD)v148 )
                      {
                        while ( _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 132), 1, 0) )
                        {
                          if ( *(_WORD *)(v14 + 142) != v127 )
                            goto LABEL_203;
                        }
                        while ( *(_DWORD *)(v14 + 128) )
                          _InterlockedOr(v140, 0);
                        if ( *(_WORD *)(v14 + 142) == v127 )
                        {
                          if ( v122 == 1 )
                          {
                            v128 = *(_QWORD *)(v149 + 16);
                            v129 = *(_QWORD *)(v128 + 1648) + 64LL;
                            v130 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v128 + 128) + 528LL);
                            ActivityId = (LPCGUID)&v147;
                            v130(v129, *(unsigned int *)(v14 + 16), 4LL);
                            v120 = v152;
                          }
                          else
                          {
                            **(_DWORD **)(v14 + 16) = v147;
                            _InterlockedOr(v140, 0);
                          }
                        }
                        _InterlockedOr(v140, 0);
                        _InterlockedExchange((volatile __int32 *)(v14 + 132), 0);
                        v131 = *(_QWORD *)(v149 + 16);
                        if ( (*(_BYTE *)(v131 + 1360) & 1) != 0 )
                        {
                          LODWORD(v163) = *(_DWORD *)(v14 + 136);
                          DWORD1(v163) = v79->m128i_i32[0];
                          *((_QWORD *)&v163 + 1) = v120;
                          v164 = 0LL;
                          if ( v131 )
                          {
                            if ( *(_DWORD *)v131 == 1314276178 )
                            {
                              v132 = *(_QWORD *)(*(_QWORD *)(v131 + 1368) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
                              v133 = *(_DWORD *)(v132 + 12);
                              v134 = v132 + 64;
                              _InterlockedOr(v140, 0);
                              if ( v133 )
                              {
                                if ( v132 != -64 )
                                {
                                  v135 = _InterlockedIncrement((volatile signed __int32 *)v132) % v133;
                                  v136 = v134 + ((unsigned __int64)v135 << 6);
                                  if ( (*(_DWORD *)(v131 + 1336) & 1) != 0 )
                                    *(_DWORD *)(v136 + 4) = _InterlockedIncrement((volatile signed __int32 *)(v131 + 1408));
                                  else
                                    *(_DWORD *)(v136 + 4) = v135;
                                  *(_DWORD *)v136 = 0x10000;
                                  v137 = (_QWORD *)(v136 + 8);
                                  if ( (*(_DWORD *)(v131 + 1336) & 2) != 0 )
                                    KeQuerySystemTimePrecise(v137);
                                  else
                                    *v137 = MEMORY[0xFFFFF78000000014];
                                  v138 = v164;
                                  *(_OWORD *)(v136 + 16) = v163;
                                  *(_OWORD *)(v136 + 32) = v138;
                                }
                              }
                            }
                          }
                        }
                      }
LABEL_203:
                      KeLowerIrql(v142);
                      v139 = *(_QWORD *)(v149 + 16);
                      if ( **(_BYTE **)(v139 + 1736) )
                        NvmeStartIoPolling((_QWORD *)v139, v14, a5);
                      return 259LL;
                    }
                  }
                  LOBYTE(v86) = 1;
                  KeFlushIoBuffers(*(_QWORD *)(v152 + 8), v80, v86);
                }
              }
            }
          }
          *(_BYTE *)(*(_QWORD *)(v14 + 32) + v63 + 60) = 0;
          goto LABEL_173;
        }
        if ( v88 == 2 )
        {
          v79[2].m128i_i64[0] = *(_QWORD *)(v89 + 8LL * (unsigned int)(v87 + 1)) << 12;
          goto LABEL_131;
        }
        v90 = v88 - 1;
        v91 = 1;
        v86 = *(__m128i **)(v150 + 16);
        if ( v88 > 1 )
        {
          if ( (unsigned int)v90 >= 8 )
          {
            if ( (unsigned __int64)&v86->m128i_u64[1] <= v89 + 8 * (unsigned __int64)(unsigned int)(v90 + v87)
              && (unsigned __int64)v86 + 8 * v90 >= v89 + 8 * (unsigned __int64)(unsigned int)(v87 + 1) )
            {
              v88 = v154;
            }
            else
            {
              v88 = v154;
              v92 = v154 - (v90 & 7);
              v93 = (unsigned int)(v87 + 5);
              do
              {
                v91 += 8;
                *v86 = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v89 + 8LL * (unsigned int)(v93 - 4))), 0xCu);
                v94 = (unsigned int)(v93 + 2);
                v86[1] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v89 + 8LL * (unsigned int)(v93 - 2))), 0xCu);
                v95 = _mm_loadu_si128((const __m128i *)(v89 + 8 * v93));
                v93 = (unsigned int)(v93 + 8);
                v86[2] = _mm_slli_epi64(v95, 0xCu);
                v86[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v89 + 8 * v94)), 0xCu);
                v86 += 4;
              }
              while ( v91 < v92 );
              if ( v91 >= v88 )
                goto LABEL_130;
            }
          }
          do
          {
            v96 = v91 + v87;
            ++v91;
            v86 = (__m128i *)((char *)v86 + 8);
            v86[-1].m128i_i64[1] = *(_QWORD *)(v89 + 8 * v96) << 12;
          }
          while ( v91 < v88 );
        }
LABEL_130:
        v97 = v150;
        v63 = v159;
        v79[2].m128i_i64[0] = *(_QWORD *)(v150 + 24);
        *(_DWORD *)(v97 + 32) = v90;
        goto LABEL_131;
      }
    }
    else
    {
      v80 = a11;
      if ( a11 )
      {
        v81 = *(unsigned int *)(v65 + 64);
        v82 = *(_DWORD *)(v65 + 56);
        v83 = 0;
        v79->m128i_i8[0] = 2;
        goto LABEL_109;
      }
      if ( FUAEnabled && (*(_BYTE *)(v77 + 2) & 4) != 0 )
        v83 = 0x40000000;
      else
        v83 = 0;
      v82 = *(_DWORD *)(v65 + 56);
      v81 = *(unsigned int *)(v65 + 64);
    }
    v79[3].m128i_i32[0] &= 0xFF0FFFFF;
    v79->m128i_i8[0] = 1;
    v79[3].m128i_i16[3] = 0;
    goto LABEL_109;
  }
  while ( 1 )
  {
    v32 = 0;
    v145 = *(_WORD *)(v14 + 142);
    LOWORD(v31) = v145;
    if ( (unsigned __int16)(v145 + 1) < v30 )
      LOWORD(v32) = v145 + 1;
    v148 = v32;
    if ( (_WORD)v32 == *(_WORD *)(v14 + 140) )
      break;
    if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v14 + 142), v32, v145) == v145 )
    {
      Next_high = *a12;
      goto LABEL_70;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v14 + 128));
  KeLowerIrql(v25);
  DepthSList = ExQueryDepthSList((PSLIST_HEADER)(v14 + 64));
  v35 = *(_QWORD *)(a1 + 16);
  v162 = DepthSList;
  v161 = *(unsigned int *)(v35 + 8);
  v160 = *(unsigned __int16 *)(v35 + 26);
  v156 = *(unsigned __int16 *)(v35 + 22);
  v149 = *a12;
  v150 = *(unsigned __int16 *)(v14 + 142);
  v151 = *(unsigned __int16 *)(v14 + 140);
  v152 = *(unsigned __int16 *)(v14 + 136);
  v72 = (*(_BYTE *)(v35 + 136) & 2) == 0;
  v36 = *(_QWORD *)(v35 + 128);
  v174 = 0LL;
  EventDescriptor = (EVENT_DESCRIPTOR)EventNVMeControllerError;
  if ( !v72 )
    EventDescriptor.Keyword |= 0x8000uLL;
  v37 = *(_QWORD *)(v36 + 16);
  v38 = *(const wchar_t **)(v37 + 48);
  if ( v38 )
  {
    v39 = *(unsigned __int16 *)(v37 + 40);
    if ( (_WORD)v39 )
    {
      v40 = v39 >> 1;
      if ( v40 )
      {
        while ( 1 )
        {
          v41 = v40 - 1;
          v42 = &v38[v41];
          --v40;
          if ( *v42 == 92 )
            break;
          if ( !(_DWORD)v41 )
            goto LABEL_30;
        }
        if ( v42 )
          v38 = v42 + 1;
      }
    }
  }
LABEL_30:
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = v36 + 56;
  v177 = 16LL;
  v176 = v36 + 1032;
  v43 = -1LL;
  if ( v38 )
  {
    v44 = -1LL;
    do
      v72 = v38[++v44] == 0;
    while ( !v72 );
    v45 = 2 * v44 + 2;
  }
  else
  {
    v45 = 10;
  }
  v179 = v45;
  v46 = L"NULL";
  v180 = 0;
  if ( v38 )
    v46 = v38;
  v47 = &word_140150F48;
  v48 = *(const wchar_t **)(v35 + 792);
  v178 = v46;
  if ( v48 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( *((_BYTE *)v48 + v49) );
    v50 = v49 + 1;
  }
  else
  {
    v50 = 1;
    v48 = &word_140150F48;
  }
  v182 = v50;
  v181 = v48;
  v51 = *(const wchar_t **)(v35 + 752);
  v184 = v35 + 4;
  v186 = v35 + 744;
  v183 = 0;
  v185 = 2LL;
  v187 = 1LL;
  if ( v51 )
    v47 = v51;
  else
    v51 = &word_140150F48;
  v52 = -1LL;
  do
    ++v52;
  while ( *((_BYTE *)v51 + v52) );
  v188 = v47;
  v189 = v52 + 1;
  v53 = -1LL;
  v190 = 0;
  v191 = v35 + 800;
  do
    ++v53;
  while ( *(_BYTE *)(v35 + 800 + v53) );
  v193 = 0;
  v54 = v35 + 841;
  v192 = v53 + 1;
  v194 = v54;
  do
    ++v43;
  while ( *(_BYTE *)(v54 + v43) );
  v196 = 0;
  v197 = L"Failed to get free slot";
  v198 = 48LL;
  v199 = L"SQ ID";
  v195 = v43 + 1;
  v201 = &v152;
  v200 = 12LL;
  v203 = L"SQ head";
  v205 = &v151;
  v207 = L"SQ tail";
  v209 = &v150;
  v211 = L"Command ID";
  v213 = &v149;
  v215 = L"IO SQ count";
  v217 = &v156;
  v219 = L"IO CQ count";
  v221 = &v160;
  v223 = L"Queue depth";
  v225 = &v161;
  v227 = L"Free command ID count";
  v229 = &v162;
  v202 = 8LL;
  v204 = 16LL;
  v206 = 8LL;
  v208 = 16LL;
  v210 = 8LL;
  v212 = 22LL;
  v214 = 8LL;
  v216 = 24LL;
  v218 = 8LL;
  v220 = 24LL;
  v222 = 8LL;
  v224 = 24LL;
  v226 = 8LL;
  v228 = 44LL;
  v230 = 8LL;
  EtwWriteEx(StorPortEventProvider_Context, &EventDescriptor, 0LL, 1u, &v174, 0LL, 0x1Au, &UserData);
  return 3221225701LL;
}
