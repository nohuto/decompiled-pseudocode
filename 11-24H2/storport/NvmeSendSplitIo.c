/*
 * XREFs of NvmeSendSplitIo @ 0x140124340
 * Callers:
 *     NvmeContinueScatterGatherProcessIO @ 0x14011C250 (NvmeContinueScatterGatherProcessIO.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011CB50 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessPendingIo @ 0x14011E5A0 (NvmeProcessPendingIo.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x140120370 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x140122190 (NvmeProcessPendingIoInSpecifiedGroup.c)
 *     NvmeProcessPendingLowPriorityIo @ 0x140123160 (NvmeProcessPendingLowPriorityIo.c)
 *     NvmeSplitIoParallel @ 0x1401256A0 (NvmeSplitIoParallel.c)
 * Callees:
 *     AllocateNewNVMePrpListBufferEntry @ 0x140119600 (AllocateNewNVMePrpListBufferEntry.c)
 *     FreeNVMePrpListBufferEntry @ 0x14011A2E0 (FreeNVMePrpListBufferEntry.c)
 *     NvmeNamespaceQueueIo @ 0x14011D6B0 (NvmeNamespaceQueueIo.c)
 *     NvmeRingSQDoorbellForBatchingSplitIo @ 0x140124210 (NvmeRingSQDoorbellForBatchingSplitIo.c)
 *     NvmeStartIoPolling @ 0x140125F10 (NvmeStartIoPolling.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeSendSplitIo(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 *a4,
        bool *a5,
        __int64 *a6,
        int *a7,
        __int16 *a8,
        char a9)
{
  __int64 v9; // rsi
  __int64 v11; // r9
  __int64 v13; // r12
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  signed __int32 v21; // ecx
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // ebx
  int v28; // esi
  int v29; // edx
  unsigned __int16 Next_high; // r13
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // rax
  const wchar_t *v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  __int64 v37; // rax
  const wchar_t *v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // r8d
  const wchar_t *v42; // rax
  const wchar_t *v43; // r8
  const wchar_t *v44; // rdx
  __int64 v45; // rax
  int v46; // eax
  const wchar_t *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 v51; // rdx
  int v52; // r13d
  PSLIST_ENTRY v53; // r8
  signed __int16 v54; // dx
  __int64 v55; // r13
  unsigned int v56; // ecx
  unsigned int v57; // eax
  unsigned int v58; // r14d
  __int64 v59; // rbx
  unsigned int v60; // r15d
  __int64 *v61; // rcx
  __int64 v62; // r15
  __int64 v63; // r10
  unsigned __int64 v64; // rbx
  __int16 v65; // dx
  __int64 v66; // rcx
  int v67; // ecx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v69; // ecx
  unsigned int v70; // edx
  __int64 v71; // rdx
  signed __int32 v72; // eax
  unsigned int v73; // esi
  char v74; // bl
  char v75; // si
  bool v76; // zf
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v78; // rax
  __int64 v79; // r14
  __int64 v80; // rax
  _OWORD *v81; // rcx
  __int64 v82; // rcx
  int v83; // r8d
  int v84; // r10d
  __int64 v85; // rdx
  unsigned int v86; // r9d
  unsigned int v87; // eax
  __int64 v88; // r11
  __int64 v89; // r10
  __int64 v90; // rdx
  unsigned int v91; // r9d
  __int64 v92; // r14
  __m128i *v93; // r8
  __int64 v94; // rdx
  __int64 v95; // rax
  __m128i v96; // xmm0
  __int64 v97; // rax
  __int64 v98; // rcx
  unsigned int v99; // eax
  unsigned int v100; // r11d
  _QWORD *v101; // r15
  unsigned int v102; // r12d
  unsigned int v103; // ebx
  _DWORD *v104; // rcx
  char *v105; // r8
  char *v106; // r14
  char *v107; // r13
  int v108; // edi
  _DWORD *v109; // rsi
  __int64 v110; // r9
  __int64 v111; // r10
  unsigned int v112; // eax
  int v113; // ecx
  __int64 v114; // r15
  __int16 v115; // cx
  unsigned __int16 v116; // dx
  __int64 v117; // rcx
  signed __int16 v118; // ax
  char v119; // dl
  __int64 v120; // r12
  __int64 v121; // rax
  __int64 v122; // r8
  __int64 v123; // rcx
  __int64 v124; // rax
  void (__fastcall *v125)(__int64, _QWORD, bool); // rax
  unsigned int v126; // eax
  __int16 v127; // cx
  __int64 v128; // rax
  __int64 v129; // rcx
  void (__fastcall *v130)(__int64, _QWORD, __int64); // rax
  __int64 v131; // rsi
  __int64 v132; // rdx
  unsigned int v133; // r8d
  __int64 v134; // rcx
  unsigned int v135; // edx
  __int64 v136; // rbx
  _QWORD *v137; // rcx
  __int128 v138; // xmm1
  _BYTE **v139; // rcx
  signed __int32 v141[8]; // [rsp+0h] [rbp-100h] BYREF
  LPCGUID ActivityId; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v143; // [rsp+40h] [rbp-C0h]
  ULONG v144; // [rsp+44h] [rbp-BCh]
  char v145; // [rsp+48h] [rbp-B8h]
  bool v146; // [rsp+49h] [rbp-B7h]
  KIRQL v147; // [rsp+4Ah] [rbp-B6h]
  __int64 v148; // [rsp+50h] [rbp-B0h]
  unsigned int v149; // [rsp+58h] [rbp-A8h]
  char v150; // [rsp+5Ch] [rbp-A4h]
  unsigned __int16 v151; // [rsp+5Eh] [rbp-A2h]
  __int64 NewNVMePrpListBufferEntry; // [rsp+60h] [rbp-A0h] BYREF
  int v153; // [rsp+68h] [rbp-98h]
  unsigned int v154; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v155; // [rsp+70h] [rbp-90h]
  __int64 v156; // [rsp+78h] [rbp-88h] BYREF
  char *v157; // [rsp+80h] [rbp-80h]
  __int64 v158; // [rsp+88h] [rbp-78h]
  __int64 v159; // [rsp+90h] [rbp-70h]
  __int64 v160; // [rsp+98h] [rbp-68h]
  __int64 v161; // [rsp+A0h] [rbp-60h]
  __int64 *v162; // [rsp+A8h] [rbp-58h]
  __int64 v163; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v164; // [rsp+C0h] [rbp-40h] BYREF
  __int16 *v165; // [rsp+C8h] [rbp-38h]
  int *v166; // [rsp+D0h] [rbp-30h]
  unsigned __int64 DepthSList; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v168; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v169; // [rsp+E8h] [rbp-18h]
  __int64 v170; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v171; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v172; // [rsp+100h] [rbp+0h] BYREF
  __int64 v173; // [rsp+110h] [rbp+10h]
  __int128 v174; // [rsp+118h] [rbp+18h]
  __int128 v175; // [rsp+128h] [rbp+28h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+138h] [rbp+38h] BYREF
  GUID v177; // [rsp+148h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+60h] BYREF
  __int64 v179; // [rsp+170h] [rbp+70h]
  __int64 v180; // [rsp+178h] [rbp+78h]
  const wchar_t *v181; // [rsp+180h] [rbp+80h]
  int v182; // [rsp+188h] [rbp+88h]
  int v183; // [rsp+18Ch] [rbp+8Ch]
  const wchar_t *v184; // [rsp+190h] [rbp+90h]
  int v185; // [rsp+198h] [rbp+98h]
  int v186; // [rsp+19Ch] [rbp+9Ch]
  __int64 v187; // [rsp+1A0h] [rbp+A0h]
  __int64 v188; // [rsp+1A8h] [rbp+A8h]
  __int64 v189; // [rsp+1B0h] [rbp+B0h]
  __int64 v190; // [rsp+1B8h] [rbp+B8h]
  const wchar_t *v191; // [rsp+1C0h] [rbp+C0h]
  int v192; // [rsp+1C8h] [rbp+C8h]
  int v193; // [rsp+1CCh] [rbp+CCh]
  __int64 v194; // [rsp+1D0h] [rbp+D0h]
  int v195; // [rsp+1D8h] [rbp+D8h]
  int v196; // [rsp+1DCh] [rbp+DCh]
  __int64 v197; // [rsp+1E0h] [rbp+E0h]
  int v198; // [rsp+1E8h] [rbp+E8h]
  int v199; // [rsp+1ECh] [rbp+ECh]
  const wchar_t *v200; // [rsp+1F0h] [rbp+F0h]
  __int64 v201; // [rsp+1F8h] [rbp+F8h]
  const wchar_t *v202; // [rsp+200h] [rbp+100h]
  __int64 v203; // [rsp+208h] [rbp+108h]
  __int64 *v204; // [rsp+210h] [rbp+110h]
  __int64 v205; // [rsp+218h] [rbp+118h]
  const wchar_t *v206; // [rsp+220h] [rbp+120h]
  __int64 v207; // [rsp+228h] [rbp+128h]
  __int64 *p_NewNVMePrpListBufferEntry; // [rsp+230h] [rbp+130h]
  __int64 v209; // [rsp+238h] [rbp+138h]
  const wchar_t *v210; // [rsp+240h] [rbp+140h]
  __int64 v211; // [rsp+248h] [rbp+148h]
  __int64 *v212; // [rsp+250h] [rbp+150h]
  __int64 v213; // [rsp+258h] [rbp+158h]
  const wchar_t *v214; // [rsp+260h] [rbp+160h]
  __int64 v215; // [rsp+268h] [rbp+168h]
  __int64 *v216; // [rsp+270h] [rbp+170h]
  __int64 v217; // [rsp+278h] [rbp+178h]
  const wchar_t *v218; // [rsp+280h] [rbp+180h]
  __int64 v219; // [rsp+288h] [rbp+188h]
  __int64 *v220; // [rsp+290h] [rbp+190h]
  __int64 v221; // [rsp+298h] [rbp+198h]
  const wchar_t *v222; // [rsp+2A0h] [rbp+1A0h]
  __int64 v223; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v224; // [rsp+2B0h] [rbp+1B0h]
  __int64 v225; // [rsp+2B8h] [rbp+1B8h]
  const wchar_t *v226; // [rsp+2C0h] [rbp+1C0h]
  __int64 v227; // [rsp+2C8h] [rbp+1C8h]
  __int64 *v228; // [rsp+2D0h] [rbp+1D0h]
  __int64 v229; // [rsp+2D8h] [rbp+1D8h]
  const wchar_t *v230; // [rsp+2E0h] [rbp+1E0h]
  __int64 v231; // [rsp+2E8h] [rbp+1E8h]
  unsigned __int64 *p_DepthSList; // [rsp+2F0h] [rbp+1F0h]
  __int64 v233; // [rsp+2F8h] [rbp+1F8h]

  v9 = a1;
  v11 = *(_QWORD *)(a1 + 16);
  v162 = a6;
  v13 = *(unsigned int *)(a1 + 52);
  v166 = a7;
  v165 = a8;
  v154 = 0;
  NewNVMePrpListBufferEntry = 0LL;
  v147 = 0;
  LOBYTE(v143) = 0;
  v14 = a2;
  v15 = *(_QWORD *)(v11 + 16);
  v158 = a1;
  v144 = v14;
  v149 = 259;
  v150 = *(_BYTE *)(v15 + 1728);
  v16 = HIDWORD(*(_QWORD *)(v15 + 136));
  LOBYTE(v16) = v16 & 1;
  v148 = v11;
  v156 = v16;
  LODWORD(v164) = *(unsigned __int16 *)(a1 + 34) + 1;
  LODWORD(v163) = *(unsigned __int16 *)(a1 + 32);
  v17 = *(_QWORD *)(a1 + 24);
  v18 = *(_DWORD *)(a1 + 56);
  v157 = *(char **)(v17 + 184);
  v76 = *v157 == 3;
  v145 = *v157;
  v19 = *((_QWORD *)v157 + 3);
  v146 = v76;
  v161 = v19;
  v20 = ((unsigned __int64)(v18 & 0xFFF) + v13 + 4095) >> 12;
  DepthSList = v20;
  if ( (unsigned int)v20 > 2 )
  {
    NewNVMePrpListBufferEntry = (__int64)ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v15 + 880) + 8 * v14));
    if ( !NewNVMePrpListBufferEntry )
    {
      NewNVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(*(_QWORD *)(v148 + 16), v144);
      if ( !NewNVMePrpListBufferEntry )
      {
        v21 = -1073741670;
LABEL_59:
        v51 = v161;
        *(_DWORD *)(v9 + 112) = v21;
        _InterlockedExchange((volatile __int32 *)(v9 + 104), 5);
        v149 = v21;
        _InterlockedCompareExchange((volatile signed __int32 *)(v51 + 112), v21, 0);
        v52 = _InterlockedIncrement((volatile signed __int32 *)(v51 + 116));
        if ( a5 )
          *a5 = v52 >= *(unsigned __int16 *)(v51 + 32);
LABEL_100:
        v74 = v143;
        if ( v162 && *v162 )
        {
          v75 = 1;
          NvmeRingSQDoorbellForBatchingSplitIo(*(_QWORD *)(v148 + 16), *v162, *v166, *v165, v143 ^ 1);
        }
        else
        {
          v75 = 0;
        }
        if ( v74 )
          goto LABEL_220;
        goto LABEL_221;
      }
    }
    LODWORD(v14) = v144;
    v11 = v148;
  }
  if ( a4 )
  {
    v22 = a3;
  }
  else
  {
    v23 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v23 + 136) & 2) != 0 )
      v22 = *(_QWORD *)(v23 + 728) + 192LL * (unsigned int)v14;
    else
      v22 = 192LL * *(unsigned __int16 *)(*(_QWORD *)(v23 + 872) + 2LL * (unsigned int)v14)
          + *(_QWORD *)(v23 + 728)
          - 192LL;
  }
  v159 = v22;
  v147 = KfRaiseIrql(2u);
  LOBYTE(v143) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(v22 + 128));
  if ( *(_BYTE *)(*(_QWORD *)(v22 + 88) + 1228LL) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v22 + 128));
    if ( NewNVMePrpListBufferEntry )
      FreeNVMePrpListBufferEntry(*(_QWORD *)(v148 + 16), v144, NewNVMePrpListBufferEntry);
    v21 = -1073741810;
    goto LABEL_59;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v22 + 88) + 948LL) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v22 + 128));
    v24 = v148;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 104), 3, 1) == 1
      && !_interlockedbittestandset((volatile signed __int32 *)(v161 + 108), 0) )
    {
      NvmeNamespaceQueueIo(v148, *(_QWORD *)(v9 + 24), v144);
    }
    v25 = NewNVMePrpListBufferEntry;
    if ( !NewNVMePrpListBufferEntry )
      goto LABEL_99;
    v26 = v144;
LABEL_98:
    FreeNVMePrpListBufferEntry(*(_QWORD *)(v24 + 16), v26, v25);
LABEL_99:
    v149 = -2147483631;
    goto LABEL_100;
  }
  v27 = *(_DWORD *)(v22 + 124);
  if ( !a4 )
  {
    v53 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v22 + 64));
    if ( v53 )
    {
      _InterlockedOr(v141, 0);
      while ( 1 )
      {
        v54 = 0;
        v151 = *(_WORD *)(v22 + 142);
        v28 = v151;
        if ( (unsigned __int16)(v151 + 1) < v27 )
          v54 = v151 + 1;
        if ( v54 == *(_WORD *)(v22 + 140) )
          break;
        if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v22 + 142), v54, v151) == v28 )
          goto LABEL_78;
      }
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v22 + 64), v53);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v22 + 128));
    v55 = *(_QWORD *)(v22 + 88);
    v56 = *(unsigned __int16 *)(v55 + 22);
    if ( v56 != 1 )
    {
      v57 = *(unsigned __int16 *)(v22 + 136);
      v153 = v57 - 1;
      v58 = v57 % v56;
      if ( v57 % v56 < v56 )
      {
        do
        {
          v59 = *(_QWORD *)(*(_QWORD *)(v22 + 88) + 728LL) + 192LL * v58;
          _InterlockedIncrement((volatile signed __int32 *)(v59 + 128));
          v60 = *(_DWORD *)(v59 + 124);
          v53 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v59 + 64));
          if ( v53 )
          {
            _InterlockedOr(v141, 0);
            while ( 1 )
            {
              v54 = 0;
              v151 = *(_WORD *)(v59 + 142);
              v28 = v151;
              if ( (unsigned __int16)(v151 + 1) < v60 )
                v54 = v151 + 1;
              if ( v54 == *(_WORD *)(v59 + 140) )
                break;
              if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v59 + 142), v54, v151) == v28 )
              {
                LODWORD(v20) = DepthSList;
                v22 = v59;
                v159 = v59;
LABEL_78:
                Next_high = HIWORD(v53[3].Next);
                LOWORD(v153) = v54;
                goto LABEL_79;
              }
            }
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v59 + 64), v53);
          }
          v69 = *(unsigned __int16 *)(v55 + 22);
          _InterlockedDecrement((volatile signed __int32 *)(v59 + 128));
          v70 = (v58 + 1) % v69;
          v58 = v70;
        }
        while ( v70 != v153 && v70 < *(unsigned __int16 *)(v55 + 22) );
      }
    }
    v71 = v158;
    v72 = _InterlockedCompareExchange((volatile signed __int32 *)(v158 + 104), 3, 1);
    v73 = v144;
    v24 = v148;
    if ( v72 == 1 && !_interlockedbittestandset((volatile signed __int32 *)(v161 + 108), 0) )
      NvmeNamespaceQueueIo(v24, *(_QWORD *)(v71 + 24), v73);
    v25 = NewNVMePrpListBufferEntry;
    if ( !NewNVMePrpListBufferEntry )
      goto LABEL_99;
    v26 = v73;
    goto LABEL_98;
  }
  do
  {
    v29 = 0;
    v151 = *(_WORD *)(v22 + 142);
    LOWORD(v28) = v151;
    if ( (unsigned __int16)(v151 + 1) < v27 )
      LOWORD(v29) = v151 + 1;
    v153 = v29;
    if ( (_WORD)v29 == *(_WORD *)(v22 + 140) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v22 + 128));
      DepthSList = ExQueryDepthSList((PSLIST_HEADER)(v22 + 64));
      v31 = *(_QWORD *)(v148 + 16);
      v177 = 0LL;
      EventDescriptor = (EVENT_DESCRIPTOR)EventNVMeControllerError;
      v172 = *(unsigned int *)(v31 + 8);
      v171 = *(unsigned __int16 *)(v31 + 26);
      v170 = *(unsigned __int16 *)(v31 + 22);
      v163 = *a4;
      v164 = *(unsigned __int16 *)(v22 + 142);
      NewNVMePrpListBufferEntry = *(unsigned __int16 *)(v22 + 140);
      v156 = *(unsigned __int16 *)(v22 + 136);
      v32 = *(_QWORD *)(v31 + 128);
      if ( (*(_BYTE *)(v31 + 136) & 2) != 0 )
        EventDescriptor.Keyword |= 0x8000uLL;
      v33 = *(_QWORD *)(v32 + 16);
      v34 = *(const wchar_t **)(v33 + 48);
      if ( v34 )
      {
        v35 = *(unsigned __int16 *)(v33 + 40);
        if ( (_WORD)v35 )
        {
          v36 = v35 >> 1;
          if ( v36 )
          {
            while ( 1 )
            {
              v37 = v36 - 1;
              v38 = &v34[v37];
              --v36;
              if ( *v38 == 92 )
                break;
              if ( !(_DWORD)v37 )
                goto LABEL_37;
            }
            if ( v38 )
              v34 = v38 + 1;
          }
        }
      }
LABEL_37:
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = v32 + 56;
      v180 = 16LL;
      v179 = v32 + 1032;
      v39 = -1LL;
      if ( v34 )
      {
        v40 = -1LL;
        do
          v76 = v34[++v40] == 0;
        while ( !v76 );
        v41 = 2 * v40 + 2;
      }
      else
      {
        v41 = 10;
      }
      v182 = v41;
      v42 = L"NULL";
      v183 = 0;
      if ( v34 )
        v42 = v34;
      v43 = &word_140150F48;
      v44 = *(const wchar_t **)(v31 + 792);
      v181 = v42;
      if ( v44 )
      {
        v45 = -1LL;
        do
          ++v45;
        while ( *((_BYTE *)v44 + v45) );
        v46 = v45 + 1;
      }
      else
      {
        v46 = 1;
        v44 = &word_140150F48;
      }
      v185 = v46;
      v184 = v44;
      v47 = *(const wchar_t **)(v31 + 752);
      v187 = v31 + 4;
      v189 = v31 + 744;
      v186 = 0;
      v188 = 2LL;
      v190 = 1LL;
      if ( v47 )
        v43 = v47;
      else
        v47 = &word_140150F48;
      v48 = -1LL;
      do
        ++v48;
      while ( *((_BYTE *)v47 + v48) );
      v191 = v43;
      v192 = v48 + 1;
      v49 = -1LL;
      v193 = 0;
      v194 = v31 + 800;
      do
        ++v49;
      while ( *(_BYTE *)(v31 + 800 + v49) );
      v196 = 0;
      v50 = v31 + 841;
      v195 = v49 + 1;
      v197 = v50;
      do
        ++v39;
      while ( *(_BYTE *)(v50 + v39) );
      v199 = 0;
      v200 = L"Failed to get free slot for split IO";
      v201 = 74LL;
      v202 = L"SQ ID";
      v198 = v39 + 1;
      v204 = &v156;
      v203 = 12LL;
      v206 = L"SQ head";
      p_NewNVMePrpListBufferEntry = &NewNVMePrpListBufferEntry;
      v210 = L"SQ tail";
      v212 = &v164;
      v214 = L"Command ID";
      v216 = &v163;
      v218 = L"IO SQ count";
      v220 = &v170;
      v222 = L"IO CQ count";
      v224 = &v171;
      v226 = L"Queue depth";
      v228 = &v172;
      v230 = L"Free command ID count";
      p_DepthSList = &DepthSList;
      v205 = 8LL;
      v207 = 16LL;
      v209 = 8LL;
      v211 = 16LL;
      v213 = 8LL;
      v215 = 22LL;
      v217 = 8LL;
      v219 = 24LL;
      v221 = 8LL;
      v223 = 24LL;
      v225 = 8LL;
      v227 = 24LL;
      v229 = 8LL;
      v231 = 44LL;
      v233 = 8LL;
      EtwWriteEx(StorPortEventProvider_Context, &EventDescriptor, 0LL, 1u, &v177, 0LL, 0x1Au, &UserData);
      v9 = v158;
      v21 = -1073741595;
      goto LABEL_59;
    }
  }
  while ( _InterlockedCompareExchange16((volatile signed __int16 *)(v22 + 142), v29, v151) != v151 );
  Next_high = *a4;
LABEL_79:
  v143 = Next_high;
  if ( (_BYTE)v156 )
  {
    v61 = v162;
    if ( v162 )
    {
      if ( *v162 && *v162 != v22 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v22 + 156));
        _InterlockedDecrement((volatile signed __int32 *)(v22 + 128));
        NvmeRingSQDoorbellForBatchingSplitIo(*(_QWORD *)(v148 + 16), *v61, *v166, *v165, 0);
        _InterlockedIncrement((volatile signed __int32 *)(v22 + 128));
        _InterlockedDecrement((volatile signed __int32 *)(v22 + 156));
      }
    }
  }
  v62 = v158;
  v63 = v148;
  v64 = (unsigned __int64)Next_high << 7;
  _InterlockedExchange((volatile __int32 *)(v158 + 104), 2);
  v65 = *(_WORD *)(v63 + 652);
  v66 = *(_QWORD *)(v22 + 32);
  v169 = v64;
  if ( !v65 )
    v65 = *(_WORD *)(v63 + 424);
  *(_WORD *)(v66 + v64 + 58) = v65;
  *(_DWORD *)(v64 + *(_QWORD *)(v22 + 32) + 88) = *(_DWORD *)(v63 + 56);
  v67 = *(_DWORD *)(*(_QWORD *)(v63 + 608) + 4LL);
  if ( FeatureFixTRIMAddSCSIPassthrough )
  {
    if ( (v67 & 1) != 0 )
    {
      if ( UseQPCTime )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      v63 = v148;
      *(LARGE_INTEGER *)(v64 + *(_QWORD *)(v22 + 32) + 72) = PerformanceCounter;
    }
    v76 = *(_WORD *)(v63 + 652) == 0;
  }
  else
  {
    v76 = (v67 & 1) == 0;
  }
  if ( v76 )
  {
    *(_QWORD *)(v64 + *(_QWORD *)(v22 + 32) + 64) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v22 + 88) + 1288LL) + 40LL);
  }
  else
  {
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v63 = v148;
    *(_QWORD *)(v64 + *(_QWORD *)(v22 + 32) + 64) = UnbiasedInterruptTime;
  }
  v78 = *(_QWORD *)(v22 + 24);
  v173 = 16LL * (unsigned __int16)v28;
  v79 = *(_QWORD *)(v173 + v78);
  v80 = *(_QWORD *)(v22 + 32);
  v160 = v79;
  if ( (*(_BYTE *)(v64 + v80 + 60) & 4) != 0 )
  {
    v81 = *(_OWORD **)(*(_QWORD *)(v22 + 24) + 16LL * (unsigned __int16)v28);
    *v81 = 0LL;
    v81[1] = 0LL;
    v81[2] = 0LL;
    v81[3] = 0LL;
  }
  if ( FeatureFixFUAForReadIoPerf )
  {
    if ( v145 == 3 )
    {
      v82 = *(unsigned int *)(v63 + 64);
      v83 = 0;
      v84 = *(_DWORD *)(v63 + 56);
      v85 = *(_QWORD *)(v62 + 40);
      v86 = *(_DWORD *)(v62 + 52) / (unsigned int)v82;
      *(_BYTE *)v79 = 2;
      *(_QWORD *)(v79 + 16) = 0LL;
    }
    else
    {
      if ( FUAEnabled && (v157[2] & 4) != 0 )
        v83 = 0x40000000;
      else
        v83 = 0;
      v82 = *(unsigned int *)(v63 + 64);
      v84 = *(_DWORD *)(v63 + 56);
      v87 = *(_DWORD *)(v62 + 52) / (unsigned int)v82;
      v85 = *(_QWORD *)(v62 + 40);
      *(_DWORD *)(v79 + 48) &= 0xFF0FFFFF;
      LOWORD(v86) = v87;
      *(_BYTE *)v79 = 1;
      *(_WORD *)(v79 + 54) = 0;
      *(_QWORD *)(v79 + 16) = 0LL;
    }
  }
  else
  {
    if ( FUAEnabled && (v157[2] & 4) != 0 )
      v83 = 0x40000000;
    else
      v83 = 0;
    v82 = *(unsigned int *)(v63 + 64);
    v84 = *(_DWORD *)(v63 + 56);
    v85 = *(_QWORD *)(v62 + 40);
    v86 = *(_DWORD *)(v62 + 52) / (unsigned int)v82;
    if ( v145 == 3 )
    {
      *(_BYTE *)v79 = 2;
    }
    else
    {
      *(_DWORD *)(v79 + 48) &= 0xFF0FFFFF;
      *(_BYTE *)v79 = 1;
      *(_WORD *)(v79 + 54) = 0;
    }
    *(_QWORD *)(v79 + 16) = 0LL;
  }
  *(_DWORD *)v79 &= 0xFFFFFCFF;
  *(_BYTE *)(v79 + 52) &= 0xF0u;
  *(_DWORD *)(v79 + 4) = v84;
  *(_QWORD *)(v79 + 40) = v85 / v82;
  *(_WORD *)(v79 + 48) = v86 - 1;
  *(_DWORD *)(v79 + 48) = v83 & 0x7FFFFFFF | *(_DWORD *)(v79 + 48) & 0x3FFFFFF;
  *(_BYTE *)(v79 + 52) = 0;
  *(_QWORD *)(v79 + 56) = 0LL;
  *(_WORD *)(v79 + 2) = Next_high;
  if ( !(_BYTE)v156 )
  {
    v99 = *(_DWORD *)(v62 + 52);
    v100 = 0;
    v101 = 0LL;
    v155 = v99;
    v102 = 2;
    v168 = 0LL;
    v103 = 0;
    v90 = NewNVMePrpListBufferEntry;
    v104 = *(_DWORD **)(*(_QWORD *)(v158 + 88) + 24LL);
    v157 = (char *)(v79 + 24);
    v105 = (char *)(v79 + 24);
    if ( NewNVMePrpListBufferEntry )
    {
      v101 = *(_QWORD **)(NewNVMePrpListBufferEntry + 16);
      v102 = *(unsigned __int16 *)(NewNVMePrpListBufferEntry + 36) + 1;
      v168 = *(_QWORD *)(NewNVMePrpListBufferEntry + 24);
    }
    if ( !*v104 )
    {
LABEL_175:
      if ( v90 )
        *(_DWORD *)(v90 + 32) = v100 - 1;
      v64 = v169;
      *(_BYTE *)(v169 + *(_QWORD *)(v22 + 32) + 60) = -120;
      goto LABEL_178;
    }
    v106 = (char *)(v79 + 32);
    v107 = v105;
    v108 = 0;
    v109 = v104;
    while ( 1 )
    {
      v110 = *(_QWORD *)&v109[6 * v108 + 4];
      v111 = (unsigned int)v109[6 * v108 + 6];
      if ( v111 + v110 % 4096 > 4096 )
      {
        if ( (_DWORD)v111 )
        {
          while ( 1 )
          {
            *(_QWORD *)v105 = v110;
            v113 = v110 & 0xFFF;
            v103 += 4096 - v113;
            if ( (unsigned int)(v113 + v111) <= 0x1000 )
              break;
            LODWORD(v111) = v113 + v111 - 4096;
            v110 += (unsigned int)(4096 - v113);
            if ( v105 == v157 )
            {
              v105 = v106;
            }
            else if ( v105 == v106 )
            {
              if ( v101 )
                v105 = (char *)(v101 + 1);
            }
            else
            {
              v105 += 8;
            }
            if ( ++v100 >= v102 )
              goto LABEL_172;
            v112 = v155;
            if ( v103 >= v155 )
              goto LABEL_172;
            if ( !(_DWORD)v111 )
              goto LABEL_162;
          }
          v112 = v155;
LABEL_162:
          v107 = v157;
          goto LABEL_163;
        }
      }
      else
      {
        *(_QWORD *)v105 = v110;
        v103 += v109[6 * v108 + 6];
      }
      v112 = v155;
LABEL_163:
      if ( v105 == v107 )
      {
        v105 = v106;
      }
      else if ( v105 == v106 )
      {
        if ( v101 )
          v105 = (char *)(v101 + 1);
      }
      else
      {
        v105 += 8;
      }
      if ( ++v100 < v102 && v103 < v112 && (unsigned int)++v108 < *v109 )
        continue;
LABEL_172:
      v22 = v159;
      LOWORD(v28) = v151;
      v90 = NewNVMePrpListBufferEntry;
      if ( v100 > 2 )
      {
        *v101 = *(_QWORD *)v106;
        *(_QWORD *)v106 = v168;
      }
      v79 = v160;
      goto LABEL_175;
    }
  }
  v88 = *(unsigned int *)(v62 + 60);
  v89 = *(_QWORD *)(*(_QWORD *)(v62 + 24) + 8LL) + 48LL;
  *(_QWORD *)(v79 + 24) = *(unsigned int *)(v62 + 56) + (*(_QWORD *)(v89 + 8 * v88) << 12);
  if ( (_DWORD)v20 == 1 )
    goto LABEL_132;
  if ( (_DWORD)v20 == 2 )
  {
    *(_QWORD *)(v79 + 32) = *(_QWORD *)(v89 + 8LL * (unsigned int)(v88 + 1)) << 12;
LABEL_132:
    v90 = NewNVMePrpListBufferEntry;
    *(_BYTE *)(v64 + *(_QWORD *)(v22 + 32) + 60) = 8;
  }
  else
  {
    v91 = 1;
    v92 = (unsigned int)(v20 - 1);
    v93 = *(__m128i **)(NewNVMePrpListBufferEntry + 16);
    if ( (unsigned int)v20 > 1 )
    {
      if ( (unsigned int)v92 < 8
        || (unsigned __int64)&v93->m128i_u64[1] <= v89 + 8 * (unsigned __int64)(unsigned int)(v88 + v92)
        && (unsigned __int64)v93 + 8 * v92 >= v89 + 8 * (unsigned __int64)(unsigned int)(v88 + 1) )
      {
        goto LABEL_230;
      }
      v94 = (unsigned int)(v88 + 5);
      do
      {
        v91 += 8;
        *v93 = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v89 + 8LL * (unsigned int)(v94 - 4))), 0xCu);
        v95 = (unsigned int)(v94 + 2);
        v93[1] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v89 + 8LL * (unsigned int)(v94 - 2))), 0xCu);
        v96 = _mm_loadu_si128((const __m128i *)(v89 + 8 * v94));
        v94 = (unsigned int)(v94 + 8);
        v93[2] = _mm_slli_epi64(v96, 0xCu);
        v93[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v89 + 8 * v95)), 0xCu);
        v93 += 4;
      }
      while ( v91 < (unsigned int)v20 - (((_BYTE)v20 - 1) & 7) );
      if ( v91 < (unsigned int)v20 )
      {
LABEL_230:
        do
        {
          v97 = v91 + (unsigned int)v88;
          ++v91;
          v93 = (__m128i *)((char *)v93 + 8);
          v93[-1].m128i_i64[1] = *(_QWORD *)(v89 + 8 * v97) << 12;
        }
        while ( v91 < (unsigned int)v20 );
      }
    }
    v90 = NewNVMePrpListBufferEntry;
    v98 = v160;
    v64 = v169;
    *(_QWORD *)(v160 + 32) = *(_QWORD *)(NewNVMePrpListBufferEntry + 24);
    *(_DWORD *)(v90 + 32) = v92;
    v79 = v98;
    *(_BYTE *)(v64 + *(_QWORD *)(v22 + 32) + 60) = 8;
  }
LABEL_178:
  v114 = v158;
  *(_BYTE *)(v64 + *(_QWORD *)(v22 + 32) + 61) = 0;
  *(_QWORD *)(v64 + *(_QWORD *)(v22 + 32) + 24) = *(_QWORD *)(v114 + 24);
  v115 = v144;
  *(_QWORD *)(v64 + *(_QWORD *)(v22 + 32) + 40) = v114;
  *(_WORD *)(v64 + *(_QWORD *)(v22 + 32) + 56) = v28;
  *(_QWORD *)(v64 + *(_QWORD *)(v22 + 32) + 16) = v90;
  v116 = v143;
  *(_WORD *)(v64 + *(_QWORD *)(v22 + 32) + 52) = v115;
  *(_DWORD *)(v64 + *(_QWORD *)(v22 + 32) + 48) = *(_DWORD *)(v114 + 52);
  v117 = v173;
  *(_QWORD *)(v64 + *(_QWORD *)(v22 + 32) + 32) = 0LL;
  *(_WORD *)(*(_QWORD *)(v22 + 24) + v117 + 8) = v116;
  v118 = _InterlockedExchangeAdd16((volatile signed __int16 *)(v161 + 120), 1u);
  v119 = v156;
  v120 = v148;
  if ( !v118 )
  {
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v114 + 24) + 184LL) + 3LL) |= 1u;
    if ( v119 )
    {
      v121 = *(_QWORD *)(v120 + 16);
      v122 = *(_QWORD *)(v121 + 128) + 1144LL;
      if ( *(_QWORD *)(*(_QWORD *)(v114 + 24) + 8LL) )
      {
        if ( *(_QWORD *)(v121 + 128) != -1144LL )
        {
          v123 = *(_QWORD *)v122;
          if ( *(_QWORD *)v122 )
          {
            v124 = *(_QWORD *)(v123 + 8);
            if ( v124 )
            {
              if ( *(int *)(v122 + 28) >= 3
                && (v125 = *(void (__fastcall **)(__int64, _QWORD, bool))(v124 + 240)) != 0LL )
              {
                v125(v123, *(_QWORD *)(*(_QWORD *)(v114 + 24) + 8LL), v146);
              }
              else
              {
                LOBYTE(v122) = 1;
                KeFlushIoBuffers(*(_QWORD *)(*(_QWORD *)(v114 + 24) + 8LL), v146, v122);
              }
              v119 = v156;
            }
          }
        }
      }
    }
  }
  _InterlockedOr(v141, 0);
  *(_BYTE *)(*(_QWORD *)(v22 + 32) + v64 + 60) |= 1u;
  _InterlockedDecrement((volatile signed __int32 *)(v22 + 128));
  v126 = v154 & 0xFFFF0000 | (unsigned __int16)(v28 + 1);
  v154 = v126;
  if ( (unsigned __int16)(v28 + 1) == *(_DWORD *)(v22 + 124) )
  {
    v126 &= 0xFFFF0000;
    v154 = v126;
  }
  if ( v119 )
  {
    if ( !a9 && (_DWORD)v164 != (_DWORD)v163 )
    {
      v75 = 0;
      *v162 = v22;
      *v166 = v126;
      *v165 = v153;
      goto LABEL_220;
    }
    if ( v162 )
      *v162 = 0LL;
  }
  _InterlockedOr(v141, 0);
  v127 = v153;
  v75 = 1;
  LOBYTE(v143) = 1;
  if ( *(_WORD *)(v22 + 142) == (_WORD)v153 )
  {
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 132), 1, 0) )
    {
      if ( *(_WORD *)(v22 + 142) != v127 )
        goto LABEL_220;
    }
    while ( *(_DWORD *)(v22 + 128) )
      _InterlockedOr(v141, 0);
    if ( *(_WORD *)(v22 + 142) == v127 )
    {
      if ( v150 == 1 )
      {
        v128 = *(_QWORD *)(v120 + 16);
        v129 = *(_QWORD *)(v128 + 1648) + 64LL;
        v130 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v128 + 128) + 528LL);
        ActivityId = (LPCGUID)&v154;
        v130(v129, *(unsigned int *)(v22 + 16), 4LL);
      }
      else
      {
        **(_DWORD **)(v22 + 16) = v154;
        _InterlockedOr(v141, 0);
      }
    }
    _InterlockedOr(v141, 0);
    _InterlockedExchange((volatile __int32 *)(v22 + 132), 0);
    v131 = *(_QWORD *)(v120 + 16);
    if ( (*(_BYTE *)(v131 + 1360) & 1) != 0 )
    {
      LODWORD(v174) = *(_DWORD *)(v22 + 136);
      *((_QWORD *)&v174 + 1) = *(_QWORD *)(v114 + 24);
      DWORD1(v174) = *(_DWORD *)v79;
      v175 = 0LL;
      if ( v131 )
      {
        if ( *(_DWORD *)v131 == 1314276178 )
        {
          v132 = *(_QWORD *)(*(_QWORD *)(v131 + 1368) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
          v133 = *(_DWORD *)(v132 + 12);
          v134 = v132 + 64;
          _InterlockedOr(v141, 0);
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
              *(_DWORD *)v136 = 0x20000;
              v137 = (_QWORD *)(v136 + 8);
              if ( (*(_DWORD *)(v131 + 1336) & 2) != 0 )
                KeQuerySystemTimePrecise(v137);
              else
                *v137 = MEMORY[0xFFFFF78000000014];
              v138 = v175;
              *(_OWORD *)(v136 + 16) = v174;
              *(_OWORD *)(v136 + 32) = v138;
            }
          }
        }
      }
    }
    v75 = v143;
  }
LABEL_220:
  KeLowerIrql(v147);
LABEL_221:
  if ( v75 )
  {
    v139 = *(_BYTE ***)(v148 + 16);
    if ( *v139[217] )
      NvmeStartIoPolling(v139);
  }
  return v149;
}
