/*
 * XREFs of ?VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140025370
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140023BF0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     ?VidSchiLogFrontBufferTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x14004F56C (-VidSchiLogFrontBufferTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 */

void __fastcall VidSchiLogAggregatedTelemetry(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r14
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  struct _VIDSCH_GLOBAL *v7; // rdi
  unsigned int v8; // esi
  __int64 *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // r12
  unsigned int v15; // eax
  __int64 v16; // rcx
  void (*v17)(_QWORD, __int64, __int64, const wchar_t *, ...); // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // r13
  unsigned int v21; // eax
  __int64 v22; // rcx
  void (*v23)(_QWORD, __int64, __int64, const wchar_t *, ...); // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int128 v26; // xmm2
  __int64 v27; // r13
  unsigned int v28; // eax
  void (*v29)(_QWORD, __int64, __int64, const wchar_t *, ...); // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int128 v32; // xmm2
  __int64 v33; // xmm1_8
  __int64 v34; // r13
  unsigned int v35; // eax
  __int64 v36; // rcx
  void (*v37)(_QWORD, __int64, __int64, const wchar_t *, ...); // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int128 v40; // xmm2
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r10
  __int64 v44; // rdx
  __int64 v45; // r11
  __int64 v46; // rdx
  __int64 v47; // r11
  __int64 v48; // r10
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r12
  __int64 v52; // r15
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // rcx
  __int64 v58; // rax
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-D8h]
  int v60; // [rsp+50h] [rbp-B0h]
  __int16 v61; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v62; // [rsp+58h] [rbp-A8h]
  struct _VIDSCH_GLOBAL *v63; // [rsp+60h] [rbp-A0h]
  __int128 v64; // [rsp+68h] [rbp-98h]
  __int64 v65; // [rsp+78h] [rbp-88h]
  int v66; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v67; // [rsp+84h] [rbp-7Ch] BYREF
  int v68; // [rsp+88h] [rbp-78h] BYREF
  __int64 v69; // [rsp+90h] [rbp-70h]
  __int64 v70; // [rsp+98h] [rbp-68h]
  __int64 v71; // [rsp+A0h] [rbp-60h]
  __int128 v72; // [rsp+A8h] [rbp-58h]
  __int64 v73; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v74; // [rsp+C0h] [rbp-40h]
  char *v75; // [rsp+C8h] [rbp-38h]
  __int64 v76; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v77; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v78; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v80; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v81; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v82; // [rsp+100h] [rbp+0h] BYREF
  __int64 v83; // [rsp+108h] [rbp+8h] BYREF
  __int64 v84; // [rsp+110h] [rbp+10h] BYREF
  __int64 v85; // [rsp+118h] [rbp+18h] BYREF
  __int64 v86; // [rsp+120h] [rbp+20h] BYREF
  __int64 v87; // [rsp+128h] [rbp+28h] BYREF
  __int64 v88; // [rsp+130h] [rbp+30h] BYREF
  __int64 v89; // [rsp+138h] [rbp+38h] BYREF
  __int64 v90; // [rsp+140h] [rbp+40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+148h] [rbp+48h] BYREF
  __int64 v92; // [rsp+158h] [rbp+58h]
  unsigned __int64 v93; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+170h] [rbp+70h] BYREF
  void *v95; // [rsp+180h] [rbp+80h]
  int v96; // [rsp+188h] [rbp+88h]
  int v97; // [rsp+18Ch] [rbp+8Ch]
  __int64 *v98; // [rsp+190h] [rbp+90h]
  __int64 v99; // [rsp+198h] [rbp+98h]
  __int16 *v100; // [rsp+1A0h] [rbp+A0h]
  __int64 v101; // [rsp+1A8h] [rbp+A8h]
  __int64 *v102; // [rsp+1B0h] [rbp+B0h]
  __int64 v103; // [rsp+1B8h] [rbp+B8h]
  int *v104; // [rsp+1C0h] [rbp+C0h]
  __int64 v105; // [rsp+1C8h] [rbp+C8h]
  unsigned int *v106; // [rsp+1D0h] [rbp+D0h]
  __int64 v107; // [rsp+1D8h] [rbp+D8h]
  int *v108; // [rsp+1E0h] [rbp+E0h]
  __int64 v109; // [rsp+1E8h] [rbp+E8h]
  __int64 *v110; // [rsp+1F0h] [rbp+F0h]
  __int64 v111; // [rsp+1F8h] [rbp+F8h]
  __int64 *v112; // [rsp+200h] [rbp+100h]
  __int64 v113; // [rsp+208h] [rbp+108h]
  __int64 *v114; // [rsp+210h] [rbp+110h]
  __int64 v115; // [rsp+218h] [rbp+118h]
  __int64 *v116; // [rsp+220h] [rbp+120h]
  __int64 v117; // [rsp+228h] [rbp+128h]
  __int64 *v118; // [rsp+230h] [rbp+130h]
  __int64 v119; // [rsp+238h] [rbp+138h]
  __int64 *v120; // [rsp+240h] [rbp+140h]
  __int64 v121; // [rsp+248h] [rbp+148h]
  __int64 *v122; // [rsp+250h] [rbp+150h]
  __int64 v123; // [rsp+258h] [rbp+158h]
  __int64 *v124; // [rsp+260h] [rbp+160h]
  __int64 v125; // [rsp+268h] [rbp+168h]
  __int64 *v126; // [rsp+270h] [rbp+170h]
  __int64 v127; // [rsp+278h] [rbp+178h]
  __int64 *v128; // [rsp+280h] [rbp+180h]
  __int64 v129; // [rsp+288h] [rbp+188h]
  __int64 *v130; // [rsp+290h] [rbp+190h]
  __int64 v131; // [rsp+298h] [rbp+198h]
  __int64 *v132; // [rsp+2A0h] [rbp+1A0h]
  __int64 v133; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v134; // [rsp+2B0h] [rbp+1B0h]
  __int64 v135; // [rsp+2B8h] [rbp+1B8h]
  char *v136; // [rsp+2C0h] [rbp+1C0h]
  int v137; // [rsp+2C8h] [rbp+1C8h]
  int v138; // [rsp+2CCh] [rbp+1CCh]
  __int64 *v139; // [rsp+2D0h] [rbp+1D0h]
  __int64 v140; // [rsp+2D8h] [rbp+1D8h]
  char v141[272]; // [rsp+2E0h] [rbp+1E0h] BYREF

  v63 = a1;
  v2 = MEMORY[0xFFFFF78000000320];
  if ( (unsigned __int64)KeQueryTimeIncrement() * (v2 - *((_QWORD *)a1 + 333)) >= 0x19254D3800LL )
  {
    *((_QWORD *)a1 + 333) = v2;
    VidSchiLogFrontBufferTelemetry(a1);
    v74 = 0LL;
    v3 = 0LL;
    memset(v141, 0, 0x104uLL);
    v4 = (_QWORD *)((char *)a1 + 352);
    v5 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 != v4 )
    {
      do
      {
        if ( !*((_DWORD *)v5 + 462) )
        {
          v6 = *(v5 - 8);
          if ( *(_QWORD *)(v6 + 2816) - *(_QWORD *)(v6 + 2824) > v3 )
          {
            v3 = *(_QWORD *)(v6 + 2816) - *(_QWORD *)(v6 + 2824);
            strcpy_s(v141, 0x104uLL, *(const char **)(v6 + 2648));
          }
          *(_QWORD *)(v6 + 2824) = *(_QWORD *)(v6 + 2816);
        }
        v5 = (_QWORD *)*v5;
      }
      while ( v5 != v4 );
      v74 = v3;
    }
    v7 = v63;
    if ( !*((_BYTE *)v63 + 2468) )
    {
      v62 = 1;
      v8 = 0;
LABEL_13:
      v9 = (__int64 *)((char *)v63 + 3432);
      v75 = (char *)v63 + 3432;
      v92 = 0x400000000010LL;
      while ( 1 )
      {
        v10 = *v9;
        v11 = 0LL;
        v12 = *((_QWORD *)v7 + 2);
        v13 = 0LL;
        v69 = 0LL;
        v14 = 0LL;
        v72 = 0uLL;
        v70 = 0LL;
        v71 = 0LL;
        v73 = 0LL;
        v15 = *(_DWORD *)(v12 + 1856);
        v64 = 0uLL;
        v65 = 0LL;
        if ( v8 < v15 )
        {
          v18 = *(_QWORD *)(v12 + 4408);
          if ( v18 )
          {
            if ( (*(_DWORD *)(v12 + 2976) & 0x10) != 0 )
              v19 = *(_DWORD *)(112LL * v8 + v18 + 8);
            else
              v19 = *(_DWORD *)(v18 + 8);
            v60 = v19;
            if ( v19 )
            {
LABEL_23:
              v20 = *((_QWORD *)v7 + 2);
              v21 = *(_DWORD *)(v20 + 1856);
              if ( v8 < v21 )
              {
                v24 = *(_QWORD *)(v20 + 4408);
                if ( v24 )
                {
                  if ( (*(_DWORD *)(v20 + 2976) & 0x10) != 0 )
                    v25 = v24 + 112LL * v8;
                  else
                    v25 = *(_QWORD *)(v20 + 4408);
                  v26 = *(_OWORD *)(v25 + 40);
                  v13 = *(_QWORD *)(v25 + 48);
                  v65 = *(_QWORD *)(v25 + 56);
                  v11 = v26;
                  v14 = v65;
                  v64 = v26;
                }
              }
              else
              {
                WdLogSingleEntry2(2LL, v8, v21);
                v22 = *(unsigned int *)(v20 + 1856);
                v23 = (void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88];
                WdLogGlobalForLineNumber = 2435;
                v23(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Invalid VidPnSourceId:%u. Should be less than :%u",
                  v8,
                  v22,
                  0LL,
                  0LL,
                  0LL);
                v7 = v63;
              }
              v27 = *((_QWORD *)v7 + 2);
              v28 = *(_DWORD *)(v27 + 1856);
              if ( v8 < v28 )
              {
                v30 = *(_QWORD *)(v27 + 4408);
                if ( v30 )
                {
                  if ( (*(_DWORD *)(v27 + 2976) & 0x10) != 0 )
                    v31 = v30 + 112LL * v8;
                  else
                    v31 = *(_QWORD *)(v27 + 4408);
                  v32 = *(_OWORD *)(v31 + 64);
                  v33 = *(_QWORD *)(v31 + 72);
                  v73 = *(_QWORD *)(v31 + 80);
                  v71 = v73;
                  v72 = v32;
                  v70 = v33;
                  v69 = v32;
                }
              }
              else
              {
                WdLogSingleEntry2(2LL, v8, v28);
                v29 = (void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88];
                UserData = (PEVENT_DATA_DESCRIPTOR)*(unsigned int *)(v27 + 1856);
                WdLogGlobalForLineNumber = 2435;
                v29(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Invalid VidPnSourceId:%u. Should be less than :%u",
                  v8,
                  UserData,
                  0LL,
                  0LL,
                  0LL);
                v7 = v63;
              }
              if ( !v11 )
              {
                v34 = *((_QWORD *)v7 + 2);
                v35 = *(_DWORD *)(v34 + 1856);
                if ( v8 < v35 )
                {
                  v38 = *(_QWORD *)(v34 + 4408);
                  if ( v38 )
                  {
                    if ( (*(_DWORD *)(v34 + 2976) & 0x10) != 0 )
                      v39 = v38 + 112LL * v8;
                    else
                      v39 = *(_QWORD *)(v34 + 4408);
                    v40 = *(_OWORD *)(v39 + 16);
                    v13 = *(_QWORD *)(v39 + 24);
                    v65 = *(_QWORD *)(v39 + 32);
                    v11 = v40;
                    v14 = v65;
                    v64 = v40;
                  }
                }
                else
                {
                  WdLogSingleEntry2(2LL, v8, v35);
                  v36 = *(unsigned int *)(v34 + 1856);
                  v37 = (void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88];
                  WdLogGlobalForLineNumber = 2435;
                  v37(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"Invalid VidPnSourceId:%u. Should be less than :%u",
                    v8,
                    v36,
                    0LL,
                    0LL,
                    0LL);
                  v7 = v63;
                }
              }
              v41 = v69;
              v42 = v70;
              v43 = v71;
              if ( *((_BYTE *)v7 + 59) )
              {
                v11 += *(_QWORD *)(v10 + 78696);
                v13 += *(_QWORD *)(v10 + 78704);
                v14 += *(_QWORD *)(v10 + 78712);
                v41 = *(_QWORD *)(v10 + 78720) + v69;
                v42 = *(_QWORD *)(v10 + 78728) + v70;
                v43 = *(_QWORD *)(v10 + 78736) + v71;
                v73 = v43;
                *(_QWORD *)&v64 = v11;
                *((_QWORD *)&v64 + 1) = v13;
                v65 = v14;
                *(_QWORD *)&v72 = v41;
                *((_QWORD *)&v72 + 1) = v42;
              }
              v44 = *(_QWORD *)(v10 + 78912);
              v45 = *(_QWORD *)(v10 + 78880);
              if ( v44 )
                v46 = v44 - *(_QWORD *)(v10 + 78848);
              else
                v46 = (v45 - *(_QWORD *)(v10 + 78816)) * (unsigned int)(10000 * *(_DWORD *)(v10 + 83104));
              if ( (unsigned int)dword_140081048 > 5
                && (qword_140081058 & 0x400000000010LL) != 0
                && (v92 & qword_140081060) == qword_140081060 )
              {
                v47 = v45 - *(_QWORD *)(v10 + 78816);
                v48 = v43 - *(_QWORD *)(v10 + 78808);
                v49 = v42 - *(_QWORD *)(v10 + 78800);
                v50 = v41 - *(_QWORD *)(v10 + 78792);
                v51 = v14 - *(_QWORD *)(v10 + 78784);
                v52 = v13 - *(_QWORD *)(v10 + 78776);
                v76 = *(_QWORD *)(v10 + 78936) - *(_QWORD *)(v10 + 78872);
                v77 = *(_QWORD *)(v10 + 78920) - *(_QWORD *)(v10 + 78856);
                v53 = *(_QWORD *)(v10 + 78904) - *(_QWORD *)(v10 + 78840);
                v93 = v74;
                v79 = v53;
                v54 = *(_QWORD *)(v10 + 78888) - *(_QWORD *)(v10 + 78824);
                v66 = v60;
                v68 = *((unsigned __int8 *)v7 + 2468);
                v55 = *((_QWORD *)v7 + 2);
                v80 = v54;
                v56 = v11 - *(_QWORD *)(v10 + 78768);
                v82 = *(_QWORD *)(v10 + 78896) - *(_QWORD *)(v10 + 78832);
                v88 = v56;
                v78 = v46;
                v81 = v47;
                v83 = v48;
                v84 = v49;
                v85 = v50;
                v86 = v51;
                v87 = v52;
                v67 = v8;
                v57 = *(_QWORD *)(v55 + 412);
                v61 = 5;
                v139 = (__int64 *)&v93;
                v58 = -1LL;
                v89 = v57;
                v90 = 0x1000000LL;
                v140 = 8LL;
                do
                  ++v58;
                while ( v141[v58] );
                v138 = 0;
                v137 = v58 + 1;
                v136 = v141;
                v134 = &v76;
                v135 = 8LL;
                v132 = &v77;
                v130 = &v78;
                v128 = &v79;
                v126 = &v80;
                v124 = &v81;
                v122 = &v82;
                v120 = &v83;
                v118 = &v84;
                v116 = &v85;
                v114 = &v86;
                v112 = &v87;
                v110 = &v88;
                v108 = &v66;
                v106 = &v67;
                v104 = &v68;
                v102 = &v89;
                v100 = &v61;
                v98 = &v90;
                *(_DWORD *)&EventDescriptor.Level = 5;
                EventDescriptor.Keyword = 0x400000000010LL;
                v94.Ptr = (ULONGLONG)off_140081050;
                v133 = 8LL;
                v131 = 8LL;
                v129 = 8LL;
                v127 = 8LL;
                v125 = 8LL;
                v123 = 8LL;
                v121 = 8LL;
                v119 = 8LL;
                v117 = 8LL;
                v115 = 8LL;
                v113 = 8LL;
                v111 = 8LL;
                v109 = 4LL;
                v107 = 4LL;
                v105 = 4LL;
                v103 = 8LL;
                v101 = 2LL;
                v99 = 8LL;
                *(_DWORD *)&EventDescriptor.Id = 184549376;
                v94.Size = *(unsigned __int16 *)off_140081050;
                v95 = &unk_14007567B;
                v94.Reserved = 2;
                v96 = 518;
                v97 = 1;
                EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0x17u, &v94);
                v43 = v73;
                v42 = *((_QWORD *)&v72 + 1);
                v41 = v72;
                v14 = v65;
                v13 = *((_QWORD *)&v64 + 1);
                v11 = v64;
              }
              *(_QWORD *)(v10 + 78768) = v11;
              *(_QWORD *)(v10 + 78776) = v13;
              *(_QWORD *)(v10 + 78784) = v14;
              *(_QWORD *)(v10 + 78792) = v41;
              *(_QWORD *)(v10 + 78800) = v42;
              *(_QWORD *)(v10 + 78808) = v43;
              *(_OWORD *)(v10 + 78816) = *(_OWORD *)(v10 + 78880);
              *(_OWORD *)(v10 + 78832) = *(_OWORD *)(v10 + 78896);
              *(_OWORD *)(v10 + 78848) = *(_OWORD *)(v10 + 78912);
              *(_OWORD *)(v10 + 78864) = *(_OWORD *)(v10 + 78928);
              goto LABEL_57;
            }
          }
          else
          {
            v60 = 0;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v8, v15);
          v16 = *(unsigned int *)(v12 + 1856);
          v17 = (void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88];
          WdLogGlobalForLineNumber = 2469;
          v17(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Invalid VidPnSourceId:%u. Should be less than :%u",
            v8,
            v16,
            0LL,
            0LL,
            0LL);
          v7 = v63;
          v60 = 0;
        }
        if ( *(_QWORD *)(v10 + 44352) )
          goto LABEL_23;
LABEL_57:
        ++v8;
        v9 = (__int64 *)(v75 + 8);
        v75 += 8;
        if ( v8 >= v62 )
          return;
      }
    }
    v8 = 0;
    v62 = *((_DWORD *)v63 + 10);
    if ( v62 )
      goto LABEL_13;
  }
}
