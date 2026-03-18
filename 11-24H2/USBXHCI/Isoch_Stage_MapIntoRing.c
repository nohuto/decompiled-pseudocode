/*
 * XREFs of Isoch_Stage_MapIntoRing @ 0x14001FE60
 * Callers:
 *     Isoch_MapStage @ 0x140010000 (Isoch_MapStage.c)
 *     Isoch_EvtDmaCallback @ 0x14001FDC0 (Isoch_EvtDmaCallback.c)
 * Callees:
 *     XilUsbDevice_WriteDoorbell @ 0x14000C6B0 (XilUsbDevice_WriteDoorbell.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x14000C730 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x140019000 (TR_AddTRBRangeToSecureTransferRing.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     TR_GetPacketCount @ 0x140020F50 (TR_GetPacketCount.c)
 *     Isoch_Stage_Release @ 0x140022B24 (Isoch_Stage_Release.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x140022CD0 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_InsertLinkTrb @ 0x140024D40 (Isoch_InsertLinkTrb.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_DDqqDDD @ 0x14004CD70 (WPP_RECORDER_SF_DDqqDDD.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

void __fastcall Isoch_Stage_MapIntoRing(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // r13d
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r9
  __int64 v7; // rax
  _DWORD *v8; // rbx
  int v9; // r11d
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // ecx
  int v14; // r12d
  unsigned int v15; // r12d
  __int64 v16; // r10
  unsigned int v17; // r11d
  __int64 v18; // rdx
  unsigned int v19; // ebx
  unsigned int v20; // r8d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rtt
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // ebx
  unsigned int v26; // eax
  _UNKNOWN **v27; // rdx
  KIRQL v28; // dl
  __int64 v29; // rax
  __int64 v30; // rbx
  unsigned int v31; // esi
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rbx
  int v36; // ecx
  __int64 v37; // rax
  int v38; // r9d
  unsigned int v39; // r9d
  int v40; // r8d
  __int64 v41; // rcx
  unsigned int v42; // r8d
  __int64 v43; // rax
  _QWORD *v44; // r8
  _QWORD *v45; // rax
  __int64 v46; // rax
  unsigned __int8 v47; // r10
  __int64 v48; // r8
  __int64 v49; // rax
  unsigned int v50; // ebx
  __int64 v51; // r12
  unsigned int v52; // r14d
  char v53; // dl
  __int64 v54; // rdx
  __int64 v55; // rbx
  int v56; // esi
  int v57; // r14d
  int v58; // r14d
  __int64 v59; // r8
  __int64 v60; // r9
  unsigned __int16 v61; // ax
  unsigned int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rdx
  unsigned int v65; // ebx
  unsigned __int16 v66; // ax
  unsigned int v67; // eax
  __int64 v68; // rsi
  unsigned int v69; // r15d
  unsigned __int16 v70; // ax
  unsigned int v71; // eax
  unsigned int v72; // edx
  unsigned int v73; // r14d
  int PacketCount; // eax
  unsigned int v75; // eax
  __int64 v76; // rcx
  _DWORD *v77; // rdx
  unsigned int v78; // ebx
  unsigned int v79; // r12d
  __int64 v80; // r13
  __int64 v81; // rdx
  __int64 v82; // r10
  unsigned int v83; // r15d
  __int64 v84; // rcx
  unsigned int v85; // r11d
  unsigned int v86; // r13d
  __int64 v87; // r15
  unsigned __int16 v88; // ax
  unsigned int v89; // ecx
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // r14
  KIRQL v93; // al
  bool v94; // zf
  KIRQL v95; // al
  __int64 v96; // r10
  int v97; // eax
  __int64 v98; // r9
  __int64 v99; // r9
  int v100; // r8d
  _DWORD *v101; // rdx
  int v102; // edx
  int v103; // eax
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // r14
  __int64 v108; // r8
  __int64 v109; // rax
  __int64 v110; // rbx
  __int64 v111; // rax
  __int64 v112; // rcx
  int v113; // eax
  int v114; // edx
  int v115; // ebx
  char v116; // r9
  unsigned int *v117; // rdx
  unsigned int v118; // r8d
  unsigned int v119; // r11d
  unsigned int v120; // eax
  __int64 v121; // r9
  __int64 v122; // rax
  __int64 v123; // r8
  __int64 v124; // r8
  __int64 v125; // r14
  _DWORD *v126; // rdx
  int v127; // edx
  char inserted; // al
  int v129; // ecx
  unsigned int v130; // r9d
  _QWORD *v131; // r8
  __int64 v132; // r8
  __int64 v133; // rdx
  __int64 v134; // rsi
  __int64 v135; // rcx
  __int64 v136; // rdx
  int v137; // ebx
  char v138; // r9
  signed __int32 v139[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v140; // [rsp+20h] [rbp-E0h]
  _OWORD *v141; // [rsp+28h] [rbp-D8h]
  char v142; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v143; // [rsp+61h] [rbp-9Fh]
  unsigned __int8 v144; // [rsp+62h] [rbp-9Eh]
  unsigned int v145; // [rsp+64h] [rbp-9Ch]
  unsigned int v146; // [rsp+68h] [rbp-98h]
  int v147; // [rsp+6Ch] [rbp-94h]
  unsigned int v148; // [rsp+70h] [rbp-90h]
  unsigned __int8 v149; // [rsp+74h] [rbp-8Ch]
  unsigned int v150; // [rsp+78h] [rbp-88h]
  __int64 v151; // [rsp+80h] [rbp-80h]
  __int128 v152; // [rsp+88h] [rbp-78h]
  int v153; // [rsp+98h] [rbp-68h]
  __int64 v154; // [rsp+A0h] [rbp-60h]
  int v155; // [rsp+A8h] [rbp-58h]
  unsigned int v156; // [rsp+ACh] [rbp-54h]
  __int64 v157; // [rsp+B0h] [rbp-50h]
  unsigned int v158; // [rsp+B8h] [rbp-48h]
  int v159; // [rsp+BCh] [rbp-44h]
  int v160; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v161; // [rsp+C4h] [rbp-3Ch]
  unsigned int *v162; // [rsp+D0h] [rbp-30h]
  __int64 v163; // [rsp+D8h] [rbp-28h]
  _DWORD *v164; // [rsp+E0h] [rbp-20h]
  __int64 v165; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v166; // [rsp+F0h] [rbp-10h]
  __int64 v167; // [rsp+F8h] [rbp-8h]
  _OWORD *v168; // [rsp+100h] [rbp+0h]
  GUID v169; // [rsp+108h] [rbp+8h] BYREF
  __int64 v170; // [rsp+118h] [rbp+18h]
  __int64 v171; // [rsp+120h] [rbp+20h]
  __int128 v172; // [rsp+128h] [rbp+28h]

  v1 = *(_QWORD *)a1;
  v142 = 0;
  v151 = a1;
  v159 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 56);
  v5 = *(_QWORD *)(a1 + 72);
  v6 = *(unsigned int *)(a1 + 40);
  v7 = *(_QWORD *)(v4 + 40);
  v8 = (_DWORD *)(*(_QWORD *)(v1 + 48) + 128LL);
  v9 = *(_DWORD *)(v4 + 192);
  v150 = 0;
  v148 = 0;
  LOBYTE(v7) = ~(unsigned __int8)(*(_QWORD *)(v7 + 736) >> 33);
  v155 = 0;
  v156 = 0;
  v167 = v7 & 1;
  v154 = *(_QWORD *)(v5 + 16);
  v161 = 0;
  v162 = (unsigned int *)v5;
  v10 = *(_DWORD *)(v5 + 24);
  *(_DWORD *)(a1 + 88) = v9;
  v11 = *(_QWORD *)(v4 + 56);
  v12 = *(_QWORD *)(v1 + 48) + 140LL;
  v163 = v1;
  v164 = v8;
  v13 = *(_DWORD *)(v11 + 160);
  LODWORD(v11) = *(_DWORD *)(v1 + 96) - 1;
  v158 = v13;
  v145 = v6;
  v146 = v10;
  v153 = v9;
  if ( (_DWORD)v6 == (_DWORD)v11 )
    v14 = *(_DWORD *)(v1 + 80);
  else
    v14 = *(_DWORD *)(v12 + 12LL * (unsigned int)(v6 + 1));
  v15 = v14 - *(_DWORD *)(v12 + 12 * v6);
  v16 = *(_QWORD *)(v4 + 40);
  v147 = v15;
  if ( _bittest64((const signed __int64 *)(v16 + 736), 0x29u) )
  {
    v17 = *v8 + (unsigned int)v6 / *(_DWORD *)(v4 + 364);
    v155 = v17;
    v18 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v16 + 844) / 10000LL;
    v19 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v16 + 88) + 40LL) + 2) >> 3;
    v20 = v19 & 0x7FF;
    _m_prefetchw((const void *)(v16 + 832));
    v21 = *(_QWORD *)(v16 + 832);
    do
    {
      v22 = v21;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 832), v21, v21);
    }
    while ( v22 != v21 );
    v23 = v18 + ((_DWORD)v21 << 11) - (v21 >> 21);
    v24 = v23 & 0x7FF;
    v25 = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)v19) & 0x7FF;
    if ( v24 >= v20 )
    {
      if ( v24 - v20 > 0x400 )
        v25 += 2048;
    }
    else
    {
      v26 = v25 - 2048;
      if ( v20 - v24 <= 0x400 )
        v26 = v25;
      v25 = v26;
    }
    _InterlockedExchange64(
      (volatile __int64 *)(v16 + 832),
      ((unsigned __int64)v25 >> 11) | ((v18 - (v25 & 0x7FF)) << 21));
    v27 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v27) = 5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v16 + 72),
        (_DWORD)v27,
        4,
        185,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v25);
      v6 = v145;
      v17 = v155;
    }
    if ( (int)(v25 - v17) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqqDDD(
          *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
          (unsigned int)&WPP_RECORDER_INITIALIZED,
          *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 143LL),
          v6,
          v140,
          *(_BYTE *)(*(_QWORD *)(v4 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(v4 + 56) + 152LL),
          *(_QWORD *)(v1 + 24),
          a1,
          v25,
          v6,
          v17);
      Isoch_Stage_FreeScatterGatherList(v4, a1);
      *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
      Isoch_Stage_Release(v4, a1);
      v28 = *(_BYTE *)(v4 + 104);
      *(_DWORD *)(v4 + 336) |= 0x10u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v28);
      XilUsbDevice_WriteDoorbell(
        *(_QWORD *)(*(_QWORD *)(v4 + 56) + 16LL),
        *(unsigned int *)(*(_QWORD *)(v4 + 56) + 152LL),
        *(unsigned int *)(v4 + 64),
        1);
      *(_DWORD *)(v4 + 360) = 1;
      return;
    }
  }
  v29 = *(unsigned int *)(v4 + 192);
  v30 = 0LL;
  v31 = 4;
  if ( (unsigned int)v29 >= *(_DWORD *)(v4 + 196) )
  {
    v32 = (_QWORD *)(a1 + 8);
    v157 = *(_QWORD *)(v4 + 184) + 16 * v29;
    v33 = *(_QWORD **)(a1 + 8);
    if ( v33 != (_QWORD *)(a1 + 8) )
    {
      if ( (_QWORD *)v33[1] != v32 || (v34 = *v33, *(_QWORD **)(*v33 + 8LL) != v33) )
        __fastfail(3u);
      *v32 = v34;
      v35 = v33;
      *(_QWORD *)(v34 + 8) = v32;
      v33[1] = v33;
      *v33 = v33;
      v36 = *(_DWORD *)(v4 + 200);
      v166 = 0LL;
      v37 = *(_QWORD *)(v4 + 40);
      v38 = 6145 - (v36 != 0);
      HIDWORD(v166) = v38;
      if ( (*(_QWORD *)(v37 + 736) & 0x800LL) != 0 )
        v38 = 6161 - (v36 != 0);
      v39 = v38 & 0xFFFFFFFD;
      v40 = *(unsigned __int16 *)(v4 + 112);
      v41 = 2LL * *(unsigned int *)(v4 + 192);
      v165 = v35[3];
      v42 = v166 & 0x3FFFFF | (v40 << 22);
      v43 = *(_QWORD *)(v4 + 184);
      v166 = __PAIR64__(v39, v42);
      *(_QWORD *)(v43 + 8 * v41) = v165;
      *(_DWORD *)(v43 + 8 * v41 + 8) = v42;
      *(_DWORD *)(v43 + 8 * v41 + 12) = v39;
      *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
      v44 = *(_QWORD **)(a1 + 32);
      v45 = *(_QWORD **)(v4 + 176);
      if ( *v44 != a1 + 24 )
        __fastfail(3u);
      *v45 = a1 + 24;
      v45[1] = v44;
      *v44 = v45;
      *(_QWORD *)(a1 + 32) = v45;
      *(_QWORD *)(v4 + 176) = v35;
      *(_QWORD *)(v4 + 184) = v35[2];
      *(_DWORD *)(v4 + 192) = 0;
      *(_QWORD *)(a1 + 96) = v35;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
    }
    v30 = v157;
    v153 = 0;
  }
  v46 = *(_QWORD *)(v4 + 40);
  v47 = *(_BYTE *)(v46 + 1005);
  v48 = *(unsigned __int8 *)(v46 + 1006);
  v144 = v47;
  v143 = v48;
  do
  {
    while ( 1 )
    {
      v49 = 16LL * *(unsigned int *)(v4 + 192) + *(_QWORD *)(v4 + 184);
      v168 = (_OWORD *)v49;
      v152 = 0LL;
      if ( v30 )
        v49 = v30;
      LOBYTE(v6) = 0;
      v157 = v49;
      switch ( v31 )
      {
        case 5u:
          v65 = DWORD2(v152);
          v73 = 1024;
          goto LABEL_82;
        case 7u:
          goto LABEL_73;
        case 4u:
          v54 = v145 % *(_DWORD *)(v4 + 364);
          v55 = *(_QWORD *)(v4 + 56);
          v56 = *(_DWORD *)(v55 + 156);
          v57 = (*v164 + v145 / *(_DWORD *)(v4 + 364)) & 0x7FF;
          v155 = *v164 + v145 / *(_DWORD *)(v4 + 364);
          v58 = (v57 << 20) | 0x1400;
          if ( v47 )
          {
            if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(v164, v54, v48, v6)
              || *(_WORD *)(v55 + 100)
              || !*(_BYTE *)(v55 + 39)
              || ((*(_DWORD *)(v55 + 128) - 1) & 0xFFFFFFFB) != 0 )
            {
              v61 = *(_WORD *)(v55 + 100) & 0x7FF;
            }
            else
            {
              v61 = *(_WORD *)(v55 + 105);
            }
            v62 = (v15 + v61 - 1) / v61;
            if ( !v62 )
              v62 = 1;
            HIDWORD(v64) = 0;
            v63 = (unsigned int)(v56 + 1);
            LODWORD(v64) = (v56 + v62) % (unsigned int)v63;
            v65 = DWORD2(v152) & 0xFFC1FFFF | ((((unsigned __int8)((v56 + v62) / (unsigned int)v63) - 1) & 0x1F) << 17);
          }
          else
          {
            if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(v164, v54, v48, v6)
              || *(_WORD *)(v55 + 100)
              || !*(_BYTE *)(v55 + 39)
              || ((*(_DWORD *)(v55 + 128) - 1) & 0xFFFFFFFB) != 0 )
            {
              v66 = *(_WORD *)(v55 + 100) & 0x7FF;
            }
            else
            {
              v66 = *(_WORD *)(v55 + 105);
            }
            v65 = DWORD2(v152);
            v67 = (v15 + v66 - 1) / v66;
            if ( !v67 )
              v67 = 1;
            HIDWORD(v64) = 0;
            v63 = (unsigned int)(v56 + 1);
            LODWORD(v64) = (v56 + v67) % (unsigned int)v63;
            v58 ^= ((unsigned __int16)v58 ^ (unsigned __int16)(((unsigned __int16)((v56 + v67) / (unsigned int)v63) - 1) << 7)) & 0x180;
          }
          v68 = *(_QWORD *)(v4 + 56);
          v149 = v144;
          v69 = *(_DWORD *)(v68 + 156);
          if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(v63, v64, v59, v60)
            || *(_WORD *)(v68 + 100)
            || !*(_BYTE *)(v68 + 39)
            || ((*(_DWORD *)(v68 + 128) - 1) & 0xFFFFFFFB) != 0 )
          {
            v70 = *(_WORD *)(v68 + 100) & 0x7FF;
          }
          else
          {
            v70 = *(_WORD *)(v68 + 105);
          }
          v71 = (v15 + v70 - 1) / v70;
          if ( !v71 )
            v71 = 1;
          v72 = v71 % (v69 + 1);
          if ( v72 )
            v69 = v72 - 1;
          v73 = (v58 ^ (v69 << 16)) & 0xF0000 ^ v58;
          PacketCount = TR_GetPacketCount(v4, v15);
          v6 = v149;
          v48 = v143;
          v10 = v146;
          v159 = PacketCount;
LABEL_82:
          v78 = v65 & 0xFFFE0000;
          if ( v10 > v15 )
          {
            v85 = v148;
            v81 = v158;
            v50 = v15 & 0x1FFFF | v78;
            *(_QWORD *)&v152 = v154;
            v84 = v50;
            v146 = v10 - v15;
            v154 += v15;
            if ( v148 + (v50 & 0x1FFFF) > v158 )
              v50 ^= (v50 ^ (v158 - v148)) & 0x1FFFF;
            if ( (_BYTE)v48 )
              v73 = v73 & 0xFFFFFE7F | 0x80;
            v31 = 6;
          }
          else
          {
            v79 = v15 - v10;
            v80 = v3 + 1;
            *(_QWORD *)&v152 = v154;
            v147 = v79;
            v50 = v10 & 0x1FFFF | v78;
            v150 = v80;
            v48 = *v162;
            v81 = v50;
            if ( (unsigned int)v80 >= (unsigned int)v48 )
            {
              v82 = 0LL;
              v83 = 0;
            }
            else
            {
              v82 = *(_QWORD *)&v162[6 * v80 + 4];
              v83 = v162[6 * v80 + 6];
            }
            v84 = v148;
            v146 = v83;
            v154 = v82;
            if ( v148 + (v50 & 0x1FFFF) <= v158 )
            {
LABEL_93:
              if ( v79 )
              {
                v85 = v148;
                v31 = 5;
                goto LABEL_104;
              }
            }
            else
            {
              v50 ^= (v50 ^ (v158 - v148)) & 0x1FFFF;
              if ( v79 )
              {
                while ( v83 <= v79 )
                {
                  v79 -= v83;
                  v80 = (unsigned int)(v80 + 1);
                  v147 = v79;
                  v150 = v80;
                  if ( (unsigned int)v80 >= (unsigned int)v48 )
                  {
                    v154 = 0LL;
                    v146 = 0;
                    goto LABEL_93;
                  }
                  v84 = 3 * v80;
                  v82 = *(_QWORD *)&v162[6 * v80 + 4];
                  v83 = v162[6 * v80 + 6];
                  v154 = v82;
                  v146 = v83;
                  if ( !v79 )
                    goto LABEL_94;
                }
                v146 = v83 - v79;
                v81 = 0LL;
                v154 = v79 + v82;
                v147 = 0;
              }
            }
LABEL_94:
            if ( v143 )
              v73 = v73 & 0xFFFFFE7F | 0x80;
            v84 = v151;
            v85 = v148;
            v31 = (v145 == *(_DWORD *)(v151 + 44)) + 6;
          }
LABEL_104:
          v86 = v73;
          v148 = (v50 & 0x1FFFF) + v85;
          if ( !(_BYTE)v6 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v4 + 40) + 720LL) && v31 - 6 > 1 )
            {
              v87 = *(_QWORD *)(v4 + 56);
              LOBYTE(v84) = v31 - 6 <= 1;
              if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(v84, v81, v48, v6)
                || *(_WORD *)(v87 + 100)
                || !*(_BYTE *)(v87 + 39)
                || ((*(_DWORD *)(v87 + 128) - 1) & 0xFFFFFFFB) != 0 )
              {
                v88 = *(_WORD *)(v87 + 100) & 0x7FF;
              }
              else
              {
                v88 = *(_WORD *)(v87 + 105);
              }
              v89 = v159 - v148 / v88;
              if ( v89 > 0x1F )
                v89 = 31;
            }
            else
            {
              v89 = 0;
            }
            v50 ^= (v50 ^ (v89 << 17)) & 0x3E0000;
          }
          v90 = *(_QWORD *)(v4 + 40);
          v52 = v73 | 0x10;
          HIDWORD(v152) = v52;
          if ( _bittest64((const signed __int64 *)(v90 + 736), 0x2Fu) )
          {
            v91 = *(_QWORD *)(v4 + 48);
            if ( *(_DWORD *)(v91 + 20) == 1 )
            {
              if ( *(_DWORD *)(v91 + 40) )
              {
                if ( v31 == 6 )
                {
                  if ( (unsigned int)(*(_DWORD *)(v4 + 196) - *(_DWORD *)(v4 + 192) - 1) < *(_DWORD *)(v4 + 440) )
                  {
                    v31 = 10;
LABEL_129:
                    LODWORD(v51) = v145;
                    v3 = v150;
                    v10 = v146;
                    goto LABEL_130;
                  }
LABEL_128:
                  v52 = v86 | 0x12;
                  HIDWORD(v152) = v86 | 0x12;
                  goto LABEL_129;
                }
                if ( v31 == 7 )
                {
                  v31 = 11;
                  goto LABEL_129;
                }
              }
            }
          }
          if ( v31 != 6 && v31 != 7 )
            goto LABEL_129;
          goto LABEL_128;
        case 6u:
LABEL_73:
          v52 = HIDWORD(v152) & 0xFFFF03DF | 0x1C20;
          *(_QWORD *)&v152 = 1LL;
          WORD1(v152) = v145;
          v51 = v145 + 1;
          HIDWORD(v152) = v52;
          DWORD1(v152) = *v164;
          v75 = v52;
          ++v145;
          if ( v31 == 7 || (v6 = *(unsigned int *)(v163 + 96), (_DWORD)v51 == (_DWORD)v6) )
          {
            v50 = DWORD2(v152);
            v31 = 9;
          }
          else
          {
            if ( (v51 & 0x7F) != 0 )
            {
              v52 = v52 & 0xFFFFFDFF | ((_DWORD)v167 << 9);
              HIDWORD(v152) = v75 & 0xFFFFFDFF | ((_DWORD)v167 << 9);
            }
            v76 = *(_QWORD *)(v163 + 48);
            v148 = 0;
            v77 = (_DWORD *)(v76 + 140 + 12 * v51);
            if ( (_DWORD)v51 == (_DWORD)v6 - 1 )
            {
              v31 = 4;
              v50 = DWORD2(v152);
              v147 = *(_DWORD *)(v163 + 80) - *v77;
            }
            else
            {
              v50 = DWORD2(v152);
              v31 = 4;
              v147 = *(_DWORD *)(v76 + 140 + 12LL * (unsigned int)(v51 + 1)) - *v77;
            }
          }
          goto LABEL_130;
      }
      v50 = DWORD2(v152);
      LODWORD(v51) = v145;
      if ( v31 == 10 )
      {
        v52 = 1042;
        v53 = 1;
        HIDWORD(v152) = 1042;
        v50 = DWORD2(v152) & 0xFFC00000;
        v142 = 1;
        v31 = 6;
        goto LABEL_131;
      }
      if ( v31 == 11 )
      {
        v52 = 1042;
        v142 = 1;
        HIDWORD(v152) = 1042;
        v31 = 7;
        v50 = DWORD2(v152) & 0xFFC00000;
        v53 = 1;
        goto LABEL_131;
      }
      v52 = HIDWORD(v152);
LABEL_130:
      v53 = v142;
LABEL_131:
      if ( v168 != (_OWORD *)v157 )
        HIDWORD(v152) = v52 & 0xFFFFFFFE | *(_DWORD *)(v4 + 200) & 1;
      v92 = v151;
      DWORD2(v152) = v50 & 0x3FFFFF | (*(unsigned __int16 *)(v4 + 112) << 22);
      *v168 = v152;
      ++*(_DWORD *)(v4 + 192);
      if ( v53 )
      {
        Isoch_InsertLinkTrb(v4, v92, 5LL);
        v142 = 0;
      }
      if ( v31 != 9 && v31 != 4 )
      {
        v117 = v162;
LABEL_165:
        v118 = v156;
        v119 = v153;
        goto LABEL_166;
      }
      *(_DWORD *)(v92 + 104) = *(_DWORD *)(v4 + 192);
      *(_OWORD *)(*(_QWORD *)(v4 + 184) + 16LL * *(unsigned int *)(v4 + 192)) = 0LL;
      if ( v31 == 9 )
      {
        v95 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
        v96 = v163;
        *(_BYTE *)(v4 + 104) = v95;
        v97 = v51 - *(_DWORD *)(v96 + 108);
        ++*(_DWORD *)(v96 + 116);
        v98 = *(_QWORD *)(v96 + 48);
        *(_DWORD *)(v96 + 104) = v97;
        v99 = v98 + 140;
        v100 = *(_DWORD *)(v92 + 44);
        v101 = (_DWORD *)(v99 + 12LL * *(unsigned int *)(v92 + 40));
        if ( v100 == *(_DWORD *)(v96 + 96) - 1 )
          v102 = *(_DWORD *)(v96 + 80) - *v101;
        else
          v102 = *(_DWORD *)(v99 + 12LL * (unsigned int)(v100 + 1)) - *v101;
        *(_DWORD *)(v96 + 88) += v102;
        ++*(_DWORD *)(v4 + 384);
        v103 = v155;
        *(_DWORD *)(v4 + 336) |= 0x20u;
        *(_DWORD *)(v4 + 372) = v103;
LABEL_145:
        *(_DWORD *)(v4 + 336) |= 0x11u;
        goto LABEL_146;
      }
      if ( !*(_BYTE *)(v4 + 341) )
        goto LABEL_147;
      v93 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
      v94 = *(_BYTE *)(v4 + 341) == 0;
      *(_BYTE *)(v4 + 104) = v93;
      if ( !v94 )
        goto LABEL_145;
LABEL_146:
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
LABEL_147:
      *(_BYTE *)(v157 + 12) ^= 1u;
      _InterlockedOr(v139, 0);
      v6 = 0LL;
      v157 = 0LL;
      if ( *(_BYTE *)(v4 + 341) )
      {
        v104 = *(_QWORD *)(v4 + 56);
        v105 = *(unsigned __int8 *)(v4 + 288);
        v106 = *(unsigned int *)(v4 + 64);
        *(_BYTE *)(v4 + 341) = 0;
        v107 = *(_QWORD *)(v104 + 16);
        v108 = *(unsigned int *)(v104 + 152);
        if ( *(_QWORD *)(v107 + 168) )
        {
          v115 = ((_DWORD)v106 << 16) | (unsigned __int8)v108;
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
          {
            v116 = *(_BYTE *)(v107 + 143);
            LODWORD(v141) = v106;
            LODWORD(v140) = v108;
            McTemplateK0uqq_EtwWriteTransfer(v105, v106, v108, v116, v140, (__int64)v141);
          }
          **(_DWORD **)(v107 + 168) = v115;
          _InterlockedOr(v139, 0);
        }
        else if ( !(_BYTE)v105 )
        {
          v109 = *(_QWORD *)(v107 + 672);
          v160 = 0;
          LODWORD(v140) = 4;
          v110 = *(_QWORD *)(v109 + 8);
          v111 = *(_QWORD *)(v107 + 616);
          v112 = *(_QWORD *)(v110 + 112);
          v172 = 0LL;
          BYTE8(v172) = v108;
          WORD5(v172) = v106;
          v170 = 0LL;
          v171 = v111;
          v169 = 0LL;
          LODWORD(v172) = 32;
          v113 = SecureChannel_SendRequestSynchronously(v112, &v169, 48, (__int64)&v160, 4);
          if ( v113 >= 0 )
          {
            if ( v160 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v114) = 2;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v110 + 72),
                v114,
                12,
                13,
                (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids,
                v160);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v114) = 2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(v110 + 72),
              v114,
              12,
              12,
              (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids,
              v113);
          }
        }
        v92 = v151;
      }
      v117 = v162;
      if ( v31 == 9 )
        goto LABEL_165;
      v118 = v3;
      v156 = v3;
      if ( v3 < *v162 )
        v161 = v154 - v162[6 * v3 + 4];
      v119 = *(_DWORD *)(v4 + 192);
      v153 = v119;
LABEL_166:
      v120 = *(_DWORD *)(v4 + 192);
      if ( v120 != *(_DWORD *)(v4 + 196) )
        break;
      if ( v31 == 9 )
        goto LABEL_177;
      if ( v31 != 4 )
      {
        v121 = v163;
        v3 = v118;
        v122 = v118;
        *(_DWORD *)(v4 + 192) = v119;
        v150 = v118;
        v123 = *(_QWORD *)(v121 + 48);
        v148 = 0;
        v124 = v123 + 140;
        v10 = v117[6 * v122 + 6] - v161;
        v125 = *(_QWORD *)&v117[6 * v122 + 4] + v161;
        v146 = v10;
        v154 = v125;
        v126 = (_DWORD *)(v124 + 12LL * (unsigned int)v51);
        if ( (_DWORD)v51 == *(_DWORD *)(v121 + 96) - 1 )
          v127 = *(_DWORD *)(v121 + 80) - *v126;
        else
          v127 = *(_DWORD *)(v124 + 12LL * (unsigned int)(v51 + 1)) - *v126;
        v92 = v151;
        v31 = 4;
        v147 = v127;
        v120 = v119;
      }
      v30 = *(_QWORD *)(v4 + 184) + 16LL * v120;
      inserted = Isoch_InsertLinkTrb(v4, v92, v31);
      v15 = v147;
      v48 = v143;
      v47 = v144;
      if ( inserted )
      {
        v153 = 0;
        goto LABEL_176;
      }
    }
    v30 = v157;
LABEL_176:
    v15 = v147;
    v48 = v143;
    v47 = v144;
  }
  while ( v31 != 9 );
LABEL_177:
  v129 = *(_DWORD *)(v4 + 192);
  v130 = *(_DWORD *)(v92 + 88);
  v131 = *(_QWORD **)(v92 + 96);
  v141 = (_OWORD *)(v92 + 128);
  LODWORD(v140) = v129;
  *(_DWORD *)(v92 + 104) = v129;
  TR_AddTRBRangeToSecureTransferRing(v4, (_QWORD *)(v92 + 24), v131, v130, v140, v141);
  v133 = *(_QWORD *)(v4 + 56);
  v134 = *(_QWORD *)(v133 + 16);
  if ( *(_QWORD *)(v134 + 168) )
  {
    v135 = *(unsigned int *)(v4 + 64);
    v136 = *(unsigned int *)(v133 + 152);
    v137 = (unsigned __int8)v136 | (*(_DWORD *)(v4 + 64) << 16);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      v138 = *(_BYTE *)(v134 + 143);
      LODWORD(v141) = *(_DWORD *)(v4 + 64);
      LODWORD(v140) = v136;
      McTemplateK0uqq_EtwWriteTransfer(v135, v136, v132, v138, v140, (__int64)v141);
    }
    **(_DWORD **)(v134 + 168) = v137;
    _InterlockedOr(v139, 0);
  }
}
