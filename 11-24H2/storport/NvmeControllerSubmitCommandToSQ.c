/*
 * XREFs of NvmeControllerSubmitCommandToSQ @ 0x140129E50
 * Callers:
 *     NvmeControllerSendNonReadWriteCommand @ 0x140129D10 (NvmeControllerSendNonReadWriteCommand.c)
 * Callees:
 *     NvmeStartIoPolling @ 0x140125F10 (NvmeStartIoPolling.c)
 *     StorPushRequestToDeviceQueue @ 0x1401277F0 (StorPushRequestToDeviceQueue.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeControllerSubmitCommandToSQ(
        _BYTE *a1,
        _DWORD *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 *a5)
{
  int v7; // eax
  __int16 v8; // r15
  int v9; // esi
  signed __int16 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r14
  int v14; // esi
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned __int16 Next_high; // r12
  PVOID v18; // r14
  bool v19; // zf
  __int64 v20; // r9
  __int64 v21; // rax
  const wchar_t *v22; // rdx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  __int64 v25; // rax
  const wchar_t *v26; // r8
  __int64 v27; // rax
  int v28; // ecx
  const wchar_t *v29; // rcx
  const wchar_t *v30; // rax
  const wchar_t *v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  const wchar_t *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  unsigned int v39; // edi
  union _SLIST_HEADER *v40; // rcx
  PSLIST_ENTRY v41; // r9
  int v42; // r8d
  signed __int16 v43; // dx
  char v44; // al
  PSLIST_ENTRY v45; // rdx
  __int64 v46; // rsi
  unsigned int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // r14d
  __int64 v50; // rdi
  unsigned int v51; // r12d
  PSLIST_ENTRY v52; // r8
  signed __int16 v53; // dx
  __int64 v54; // rax
  __int16 v55; // dx
  __int64 v56; // rcx
  __int64 v57; // r10
  unsigned __int64 v58; // rdi
  __int64 v59; // rax
  unsigned int v60; // ecx
  unsigned int v61; // edx
  __int64 v62; // rax
  _DWORD *v63; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  _OWORD *v65; // rdx
  _OWORD *v66; // rcx
  __int128 v67; // xmm1
  char v68; // dl
  __int64 v69; // rax
  unsigned __int64 v70; // r9
  unsigned int v71; // ecx
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int16 v77; // si
  __int64 v78; // rdx
  unsigned int v79; // r8d
  __int64 v80; // rcx
  unsigned int v81; // edx
  __int64 v82; // rdi
  _QWORD *v83; // rcx
  __int128 v84; // xmm1
  signed __int32 v86[6]; // [rsp+8h] [rbp-100h] BYREF
  LPCGUID ActivityId; // [rsp+28h] [rbp-E0h]
  KIRQL v88; // [rsp+48h] [rbp-C0h]
  char v89; // [rsp+49h] [rbp-BFh]
  unsigned int v90; // [rsp+4Ch] [rbp-BCh]
  unsigned int v91; // [rsp+50h] [rbp-B8h] BYREF
  int v92; // [rsp+54h] [rbp-B4h]
  __int64 v93; // [rsp+58h] [rbp-B0h]
  PVOID SystemArgument2; // [rsp+60h] [rbp-A8h]
  __int64 v95; // [rsp+68h] [rbp-A0h]
  __int64 v96; // [rsp+70h] [rbp-98h]
  __int64 v97; // [rsp+78h] [rbp-90h] BYREF
  __int64 v98; // [rsp+80h] [rbp-88h] BYREF
  __int64 v99; // [rsp+88h] [rbp-80h] BYREF
  __int64 v100; // [rsp+90h] [rbp-78h] BYREF
  __int64 v101; // [rsp+98h] [rbp-70h] BYREF
  __int64 v102; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v103; // [rsp+A8h] [rbp-60h] BYREF
  __int64 DepthSList; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v105; // [rsp+B8h] [rbp-50h]
  __int128 v106; // [rsp+C8h] [rbp-40h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D8h] [rbp-30h] BYREF
  GUID v108; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v110; // [rsp+108h] [rbp+0h]
  __int64 v111; // [rsp+110h] [rbp+8h]
  const wchar_t *v112; // [rsp+118h] [rbp+10h]
  int v113; // [rsp+120h] [rbp+18h]
  int v114; // [rsp+124h] [rbp+1Ch]
  const wchar_t *v115; // [rsp+128h] [rbp+20h]
  int v116; // [rsp+130h] [rbp+28h]
  int v117; // [rsp+134h] [rbp+2Ch]
  char *v118; // [rsp+138h] [rbp+30h]
  __int64 v119; // [rsp+140h] [rbp+38h]
  char *v120; // [rsp+148h] [rbp+40h]
  __int64 v121; // [rsp+150h] [rbp+48h]
  const wchar_t *v122; // [rsp+158h] [rbp+50h]
  int v123; // [rsp+160h] [rbp+58h]
  int v124; // [rsp+164h] [rbp+5Ch]
  char *v125; // [rsp+168h] [rbp+60h]
  int v126; // [rsp+170h] [rbp+68h]
  int v127; // [rsp+174h] [rbp+6Ch]
  char *v128; // [rsp+178h] [rbp+70h]
  int v129; // [rsp+180h] [rbp+78h]
  int v130; // [rsp+184h] [rbp+7Ch]
  const wchar_t *v131; // [rsp+188h] [rbp+80h]
  __int64 v132; // [rsp+190h] [rbp+88h]
  const wchar_t *v133; // [rsp+198h] [rbp+90h]
  __int64 v134; // [rsp+1A0h] [rbp+98h]
  __int64 *v135; // [rsp+1A8h] [rbp+A0h]
  __int64 v136; // [rsp+1B0h] [rbp+A8h]
  const wchar_t *v137; // [rsp+1B8h] [rbp+B0h]
  __int64 v138; // [rsp+1C0h] [rbp+B8h]
  __int64 *v139; // [rsp+1C8h] [rbp+C0h]
  __int64 v140; // [rsp+1D0h] [rbp+C8h]
  const wchar_t *v141; // [rsp+1D8h] [rbp+D0h]
  __int64 v142; // [rsp+1E0h] [rbp+D8h]
  __int64 *v143; // [rsp+1E8h] [rbp+E0h]
  __int64 v144; // [rsp+1F0h] [rbp+E8h]
  const wchar_t *v145; // [rsp+1F8h] [rbp+F0h]
  __int64 v146; // [rsp+200h] [rbp+F8h]
  __int64 *v147; // [rsp+208h] [rbp+100h]
  __int64 v148; // [rsp+210h] [rbp+108h]
  const wchar_t *v149; // [rsp+218h] [rbp+110h]
  __int64 v150; // [rsp+220h] [rbp+118h]
  __int64 *v151; // [rsp+228h] [rbp+120h]
  __int64 v152; // [rsp+230h] [rbp+128h]
  const wchar_t *v153; // [rsp+238h] [rbp+130h]
  __int64 v154; // [rsp+240h] [rbp+138h]
  __int64 *v155; // [rsp+248h] [rbp+140h]
  __int64 v156; // [rsp+250h] [rbp+148h]
  const wchar_t *v157; // [rsp+258h] [rbp+150h]
  __int64 v158; // [rsp+260h] [rbp+158h]
  __int64 *v159; // [rsp+268h] [rbp+160h]
  __int64 v160; // [rsp+270h] [rbp+168h]
  const wchar_t *v161; // [rsp+278h] [rbp+170h]
  __int64 v162; // [rsp+280h] [rbp+178h]
  __int64 *p_DepthSList; // [rsp+288h] [rbp+180h]
  __int64 v164; // [rsp+290h] [rbp+188h]

  v89 = a1[1728];
  v7 = a2[12];
  HIBYTE(v8) = 0;
  SystemArgument2 = a1;
  LOWORD(v9) = 0;
  v90 = a4;
  LOBYTE(v92) = 0;
  v91 = 0;
  v10 = 0;
  LODWORD(v96) = v7 & 4;
  v88 = KfRaiseIrql(2u);
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 128));
  if ( **(_DWORD **)(*(_QWORD *)(a3 + 88) + 1288LL) == 1
    && !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 1288LL) + 4LL) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
    goto LABEL_4;
  }
  if ( a5 )
  {
    v16 = *(_DWORD *)(a3 + 124);
    while ( 1 )
    {
      v9 = *(unsigned __int16 *)(a3 + 142);
      v10 = 0;
      if ( (unsigned __int16)(v9 + 1) < v16 )
        v10 = v9 + 1;
      if ( v10 == *(_WORD *)(a3 + 140) )
        break;
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a3 + 142), v10, v9) == v9 )
      {
        Next_high = *a5;
        goto LABEL_80;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
    v18 = SystemArgument2;
    DepthSList = ExQueryDepthSList((PSLIST_HEADER)(a3 + 64));
    v19 = (*((_BYTE *)SystemArgument2 + 136) & 2) == 0;
    v20 = *((_QWORD *)SystemArgument2 + 16);
    v103 = *((unsigned int *)SystemArgument2 + 2);
    v102 = *((unsigned __int16 *)SystemArgument2 + 13);
    v101 = *((unsigned __int16 *)SystemArgument2 + 11);
    v100 = *a5;
    v99 = *(unsigned __int16 *)(a3 + 142);
    v98 = *(unsigned __int16 *)(a3 + 140);
    v97 = *(unsigned __int16 *)(a3 + 136);
    v108 = 0LL;
    EventDescriptor = (EVENT_DESCRIPTOR)EventNVMeControllerError;
    if ( !v19 )
      EventDescriptor.Keyword |= 0x8000uLL;
    v21 = *(_QWORD *)(v20 + 16);
    v22 = *(const wchar_t **)(v21 + 48);
    if ( v22 )
    {
      v23 = *(unsigned __int16 *)(v21 + 40);
      if ( (_WORD)v23 )
      {
        v24 = v23 >> 1;
        if ( v24 )
        {
          while ( 1 )
          {
            v25 = v24 - 1;
            v26 = &v22[v25];
            --v24;
            if ( *v26 == 92 )
              break;
            if ( !(_DWORD)v25 )
              goto LABEL_29;
          }
          if ( v26 )
            v22 = v26 + 1;
        }
      }
    }
LABEL_29:
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = v20 + 56;
    v110 = v20 + 1032;
    v111 = 16LL;
    if ( v22 )
    {
      v27 = -1LL;
      do
        v19 = v22[++v27] == 0;
      while ( !v19 );
      v28 = 2 * v27 + 2;
    }
    else
    {
      v28 = 10;
    }
    v113 = v28;
    v29 = (const wchar_t *)*((_QWORD *)SystemArgument2 + 99);
    v30 = L"NULL";
    if ( v22 )
      v30 = v22;
    v114 = 0;
    v112 = v30;
    v31 = &word_140150F48;
    if ( v29 )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( *((_BYTE *)v29 + v32) );
      v33 = v32 + 1;
    }
    else
    {
      v33 = 1;
      v29 = &word_140150F48;
    }
    v116 = v33;
    v115 = v29;
    v34 = (const wchar_t *)*((_QWORD *)SystemArgument2 + 94);
    v118 = (char *)SystemArgument2 + 4;
    v120 = (char *)SystemArgument2 + 744;
    v117 = 0;
    v119 = 2LL;
    v121 = 1LL;
    if ( v34 )
      v31 = v34;
    else
      v34 = &word_140150F48;
    v35 = -1LL;
    do
      ++v35;
    while ( *((_BYTE *)v34 + v35) );
    v122 = v31;
    v123 = v35 + 1;
    v36 = -1LL;
    v124 = 0;
    v125 = (char *)SystemArgument2 + 800;
    do
      ++v36;
    while ( *((_BYTE *)SystemArgument2 + v36 + 800) );
    v127 = 0;
    v126 = v36 + 1;
    v37 = -1LL;
    v128 = (char *)SystemArgument2 + 841;
    do
      ++v37;
    while ( *((_BYTE *)SystemArgument2 + v37 + 841) );
    v130 = 0;
    v129 = v37 + 1;
    v132 = 102LL;
    v131 = L"Failed to get free slot for non-read/write command";
    v134 = 12LL;
    v133 = L"SQ ID";
    v135 = &v97;
    v137 = L"SQ head";
    v139 = &v98;
    v141 = L"SQ tail";
    v143 = &v99;
    v145 = L"Command ID";
    v147 = &v100;
    v149 = L"IO SQ count";
    v151 = &v101;
    v153 = L"IO CQ count";
    v155 = &v102;
    v157 = L"Queue depth";
    v159 = &v103;
    v161 = L"Free command ID count";
    p_DepthSList = &DepthSList;
    v136 = 8LL;
    v138 = 16LL;
    v140 = 8LL;
    v142 = 16LL;
    v144 = 8LL;
    v146 = 22LL;
    v148 = 8LL;
    v150 = 24LL;
    v152 = 8LL;
    v154 = 24LL;
    v156 = 8LL;
    v158 = 24LL;
    v160 = 8LL;
    v162 = 44LL;
    v164 = 8LL;
    EtwWriteEx(StorPortEventProvider_Context, &EventDescriptor, 0LL, 1u, &v108, 0LL, 0x1Au, &UserData);
    v15 = -1073741595;
    v38 = *(_DWORD *)(*(_QWORD *)a2 + 4256LL) >> 11;
    LOBYTE(v38) = (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x800) == 0;
    v92 = v38;
  }
  else
  {
    v39 = *(_DWORD *)(a3 + 124);
    v40 = (union _SLIST_HEADER *)(a3 + 64);
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 1) == 0 )
    {
      v45 = ExpInterlockedPopEntrySList(v40);
      if ( v45 )
      {
        _InterlockedOr(v86, 0);
        while ( 1 )
        {
          v9 = *(unsigned __int16 *)(a3 + 142);
          v10 = 0;
          if ( (unsigned __int16)(v9 + 1) < v39 )
            v10 = v9 + 1;
          if ( v10 == *(_WORD *)(a3 + 140) )
            break;
          if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a3 + 142), v10, v9) == v9 )
          {
            Next_high = HIWORD(v45[3].Next);
            goto LABEL_80;
          }
        }
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(a3 + 64), v45);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
      v46 = *(_QWORD *)(a3 + 88);
      v95 = v46;
      v47 = *(unsigned __int16 *)(v46 + 22);
      if ( v47 != 1 )
      {
        v48 = *(unsigned __int16 *)(a3 + 136);
        LODWORD(v93) = v48 - 1;
        v49 = v48 % v47;
        if ( v48 % v47 < v47 )
        {
          do
          {
            v50 = *(_QWORD *)(*(_QWORD *)(a3 + 88) + 728LL) + 192LL * v49;
            _InterlockedIncrement((volatile signed __int32 *)(v50 + 128));
            v51 = *(_DWORD *)(v50 + 124);
            v52 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v50 + 64));
            if ( v52 )
            {
              _InterlockedOr(v86, 0);
              while ( 1 )
              {
                v9 = *(unsigned __int16 *)(v50 + 142);
                v53 = 0;
                if ( (unsigned __int16)(v9 + 1) < v51 )
                  v53 = v9 + 1;
                if ( v53 == *(_WORD *)(v50 + 140) )
                  break;
                if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v50 + 142), v53, v9) == v9 )
                {
                  Next_high = HIWORD(v52[3].Next);
                  v10 = v53;
                  a3 = v50;
                  goto LABEL_80;
                }
              }
              ExpInterlockedPushEntrySList((PSLIST_HEADER)(v50 + 64), v52);
              v46 = v95;
            }
            v60 = *(unsigned __int16 *)(v46 + 22);
            _InterlockedDecrement((volatile signed __int32 *)(v50 + 128));
            v61 = (v49 + 1) % v60;
            v49 = v61;
          }
          while ( v61 != (_DWORD)v93 && v61 < *(unsigned __int16 *)(v46 + 22) );
        }
      }
      goto LABEL_4;
    }
    v41 = ExpInterlockedPopEntrySList(v40);
    if ( v41 )
    {
      _InterlockedOr(v86, 0);
      while ( 1 )
      {
        v42 = *(unsigned __int16 *)(a3 + 142);
        v43 = 0;
        if ( (unsigned __int16)(v42 + 1) < v39 )
          v43 = v42 + 1;
        if ( v43 == *(_WORD *)(a3 + 140) )
          break;
        if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a3 + 142), v43, v42) == v42 )
        {
          Next_high = HIWORD(v41[3].Next);
          LOWORD(v9) = v42;
          v10 = v43;
          v44 = 1;
          goto LABEL_61;
        }
      }
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a3 + 64), v41);
    }
    v44 = 0;
    Next_high = 0;
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
LABEL_61:
    if ( !v44 )
    {
LABEL_4:
      v11 = *(_QWORD *)(a3 + 88);
      if ( *(_QWORD *)a2 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)a2 + 4184LL);
        if ( v12 )
          *(_BYTE *)(*(_QWORD *)(v12 + 184) + 3LL) |= 1u;
      }
      v13 = v90;
      v14 = *(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 1;
      StorPushRequestToDeviceQueue(*(_QWORD *)(v11 + 1024), v90, (signed __int64)a2);
      _InterlockedOr(v86, 0);
      if ( !_InterlockedCompareExchange(*(volatile signed __int32 **)(*(_QWORD *)(v11 + 1024) + 8 * v13 + 64), 1, 0) )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 956));
      if ( !(_BYTE)v14 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 960));
      v15 = -2147483631;
      KeLowerIrql(v88);
      goto LABEL_144;
    }
LABEL_80:
    v54 = *(_QWORD *)a2;
    v55 = v90;
    a2[16] = v90;
    v56 = *(_QWORD *)(a3 + 32);
    v57 = *(_QWORD *)(v54 + 4184);
    LOWORD(v54) = *((_WORD *)a2 + 26);
    v58 = (unsigned __int64)Next_high << 7;
    v95 = v57;
    *(_WORD *)(v56 + v58 + 58) = v54;
    v59 = *(_QWORD *)(*(_QWORD *)a2 + 4216LL);
    if ( v59 )
      *(_DWORD *)(v58 + *(_QWORD *)(a3 + 32) + 88) = *(_DWORD *)(v59 + 56);
    else
      *(_DWORD *)(v58 + *(_QWORD *)(a3 + 32) + 88) = 0;
    *(_QWORD *)(v58 + *(_QWORD *)(a3 + 32) + 64) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 1288LL) + 40LL);
    _interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
    *(_DWORD *)(*(_QWORD *)a2 + 4268LL) = 0;
    *(_QWORD *)(v58 + *(_QWORD *)(a3 + 32) + 24) = v57;
    *(_WORD *)(v58 + *(_QWORD *)(a3 + 32) + 56) = v9;
    *(_QWORD *)(v58 + *(_QWORD *)(a3 + 32) + 16) = 0LL;
    *(_WORD *)(v58 + *(_QWORD *)(a3 + 32) + 52) = v55;
    *(_DWORD *)(v58 + *(_QWORD *)(a3 + 32) + 48) = *(_DWORD *)(*(_QWORD *)a2 + 4248LL);
    *(_QWORD *)(v58 + *(_QWORD *)(a3 + 32) + 40) = 0LL;
    *(_QWORD *)(v58 + *(_QWORD *)(a3 + 32) + 32) = *(_QWORD *)(*(_QWORD *)a2 + 4192LL);
    *(_QWORD *)(v58 + *(_QWORD *)(a3 + 32) + 40) = *(_QWORD *)(*(_QWORD *)a2 + 4200LL);
    *(_BYTE *)(v58 + *(_QWORD *)(a3 + 32) + 60) = 0;
    *(_BYTE *)(v58 + *(_QWORD *)(a3 + 32) + 61) = 0;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x20) != 0 )
      *(_BYTE *)(v58 + *(_QWORD *)(a3 + 32) + 60) |= 2u;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x40) != 0 )
      *(_BYTE *)(v58 + *(_QWORD *)(a3 + 32) + 60) |= 0x10u;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x100) != 0 )
      *(_BYTE *)(v58 + *(_QWORD *)(a3 + 32) + 60) |= 0x20u;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x800) == 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x1000) != 0 )
      {
        LOBYTE(v92) = 1;
      }
      else
      {
        *(_QWORD *)(v58 + *(_QWORD *)(a3 + 32) + 80) = a2;
        *(_BYTE *)(v58 + *(_QWORD *)(a3 + 32) + 61) |= 1u;
      }
    }
    v62 = *(_QWORD *)(a3 + 32);
    if ( !*(_WORD *)(v58 + v62 + 58) )
      *(_BYTE *)(v58 + *(_QWORD *)(a3 + 32) + 60) = *(_BYTE *)(v58 + v62 + 60) | 0x40;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x10000) != 0 )
      *(_BYTE *)(v58 + *(_QWORD *)(a3 + 32) + 61) |= 2u;
    v19 = FeatureFixTRIMAddSCSIPassthrough == 0;
    v63 = *(_DWORD **)a2;
    *((_WORD *)a2 + 27) = *(_WORD *)(a3 + 136);
    a2[17] = v63[1024];
    a2[18] = v63[1034];
    a2[19] = v63[1035];
    if ( v19 )
    {
      *((_QWORD *)a2 + 10) = *(_QWORD *)(v58 + *(_QWORD *)(a3 + 32) + 64);
    }
    else
    {
      if ( UseQPCTime )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      v57 = v95;
      *((LARGE_INTEGER *)a2 + 10) = PerformanceCounter;
    }
    *(_BYTE *)(v58 + *(_QWORD *)(a3 + 32) + 60) |= 4u;
    *(_WORD *)(*(_QWORD *)a2 + 4098LL) = Next_high;
    v65 = *(_OWORD **)a2;
    v66 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * (unsigned __int16)v9);
    *v66 = *(_OWORD *)(*(_QWORD *)a2 + 4096LL);
    v66[1] = v65[257];
    v66[2] = v65[258];
    v67 = v65[259];
    v68 = v89;
    v66[3] = v67;
    *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * (unsigned __int16)v9 + 8) = Next_high;
    if ( v68 == 1 )
    {
      v69 = *(_QWORD *)(a3 + 56);
      if ( v69 )
      {
        v70 = (unsigned __int64)(unsigned __int16)v9 << 6;
        *(_OWORD *)(v70 + v69) = 0LL;
        *(_OWORD *)(v70 + v69 + 16) = 0LL;
        *(_OWORD *)(v70 + v69 + 32) = 0LL;
        *(_OWORD *)(v70 + v69 + 48) = 0LL;
        *(_DWORD *)(v70 + *(_QWORD *)(a3 + 56)) = 1;
        *(_DWORD *)(*(_QWORD *)(a3 + 56) + v70 + 8) = *(unsigned __int16 *)(a3 + 136);
        *(_DWORD *)(*(_QWORD *)(a3 + 56) + v70 + 12) = (unsigned __int16)v9;
        *(_QWORD *)(*(_QWORD *)(a3 + 56) + v70 + 16) = *(_QWORD *)(*(_QWORD *)a2 + 4160LL);
      }
    }
    if ( v57 )
      *(_BYTE *)(*(_QWORD *)(v57 + 184) + 3LL) |= 1u;
    _InterlockedOr(v86, 0);
    _interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 0xEu);
    *(_BYTE *)(*(_QWORD *)(a3 + 32) + v58 + 60) |= 1u;
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
    v71 = v91 & 0xFFFF0000 | (unsigned __int16)(v9 + 1);
    v91 = v71;
    if ( (unsigned __int16)(v9 + 1) == *(_DWORD *)(a3 + 124) )
      v91 = v71 & 0xFFFF0000;
    if ( (_DWORD)v96 && (_BYTE)v92 )
      _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)a2 + 4264LL));
    _InterlockedOr(v86, 0);
    if ( *(_WORD *)(a3 + 142) == v10 )
    {
      while ( _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 132), 1, 0) )
      {
        if ( *(_WORD *)(a3 + 142) != v10 )
          goto LABEL_120;
      }
      while ( *(_DWORD *)(a3 + 128) )
        _InterlockedOr(v86, 0);
      v19 = *(_WORD *)(a3 + 142) == (unsigned __int16)v10;
      v18 = SystemArgument2;
      if ( v19 )
      {
        if ( v68 == 1 )
        {
          v74 = *((_QWORD *)SystemArgument2 + 16);
          v75 = *((_QWORD *)SystemArgument2 + 206);
          ActivityId = (LPCGUID)&v91;
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(v74 + 528))(v75 + 64, *(unsigned int *)(a3 + 16), 4LL);
        }
        else
        {
          **(_DWORD **)(a3 + 16) = v91;
          _InterlockedOr(v86, 0);
        }
      }
      _InterlockedOr(v86, 0);
      _InterlockedExchange((volatile __int32 *)(a3 + 132), 0);
      if ( (*((_BYTE *)v18 + 1360) & 4) != 0 )
      {
        v19 = *(_DWORD *)v18 == 1314276178;
        v76 = *(_QWORD *)a2;
        v77 = *(_WORD *)(a3 + 136);
        WORD1(v105) = *(_WORD *)(a3 + 138);
        *((_QWORD *)&v105 + 1) = *(_QWORD *)(v76 + 4184);
        DWORD1(v105) = *(_DWORD *)(v76 + 4096);
        v106 = 0LL;
        LOWORD(v105) = v77;
        if ( v19 )
        {
          v78 = *(_QWORD *)(*((_QWORD *)v18 + 171) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
          v79 = *(_DWORD *)(v78 + 12);
          v80 = v78 + 64;
          _InterlockedOr(v86, 0);
          if ( v79 )
          {
            if ( v78 != -64 )
            {
              v81 = _InterlockedIncrement((volatile signed __int32 *)v78) % v79;
              v82 = v80 + ((unsigned __int64)v81 << 6);
              if ( (*((_DWORD *)v18 + 334) & 1) != 0 )
                *(_DWORD *)(v82 + 4) = _InterlockedIncrement((volatile signed __int32 *)v18 + 352);
              else
                *(_DWORD *)(v82 + 4) = v81;
              *(_WORD *)v82 = 0;
              v83 = (_QWORD *)(v82 + 8);
              LOBYTE(v8) = v77 != 0;
              *(_WORD *)(v82 + 2) = v8;
              if ( (*((_DWORD *)v18 + 334) & 2) != 0 )
                KeQuerySystemTimePrecise(v83);
              else
                *v83 = MEMORY[0xFFFFF78000000014];
              v84 = v106;
              *(_OWORD *)(v82 + 16) = v105;
              *(_OWORD *)(v82 + 32) = v84;
            }
          }
        }
      }
    }
    else
    {
LABEL_120:
      v18 = SystemArgument2;
    }
    v15 = 259;
  }
  KeLowerIrql(v88);
  if ( (_BYTE)v92 && (v72 = *((_QWORD *)v18 + 16), v73 = *(_QWORD *)(v72 + 160), *(_BYTE *)v73 == 1) )
  {
    LODWORD(v13) = v90;
    if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v73 + 16) + 8LL * v90), 0xFFFFFFFF) == 1 )
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v72 + 160) + 8LL), 0LL, 2LL);
  }
  else
  {
    LODWORD(v13) = v90;
  }
LABEL_144:
  if ( **((_BYTE **)SystemArgument2 + 217) && *(_WORD *)(a3 + 136) )
    NvmeStartIoPolling(SystemArgument2, a3, v13);
  return v15;
}
