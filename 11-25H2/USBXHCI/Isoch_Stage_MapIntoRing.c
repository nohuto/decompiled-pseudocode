/*
 * XREFs of Isoch_Stage_MapIntoRing @ 0x140006F00
 * Callers:
 *     Isoch_EvtDmaCallback @ 0x140006E60 (Isoch_EvtDmaCallback.c)
 *     Isoch_MapStage @ 0x14001EC00 (Isoch_MapStage.c)
 * Callees:
 *     XilUsbDevice_WriteDoorbell @ 0x140005820 (XilUsbDevice_WriteDoorbell.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x140006770 (TR_AddTRBRangeToSecureTransferRing.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x140006AB0 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Isoch_InsertLinkTrb @ 0x140025020 (Isoch_InsertLinkTrb.c)
 *     Isoch_Stage_Release @ 0x140025A1C (Isoch_Stage_Release.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x140025BC8 (Isoch_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDqqDDD @ 0x14004D680 (WPP_RECORDER_SF_DDqqDDD.c)
 */

void __fastcall Isoch_Stage_MapIntoRing(__int64 *a1)
{
  __int64 v1; // r11
  unsigned int *v2; // rsi
  __int64 v3; // r15
  __int64 v5; // rbx
  __int64 v6; // rdi
  _DWORD *v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // r9d
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r12d
  __int64 v14; // r10
  unsigned int v15; // r12d
  unsigned int *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r13
  int v19; // edi
  __int64 v20; // rax
  char v21; // r10
  _OWORD *v22; // r14
  _OWORD *v23; // rax
  char v24; // si
  int v25; // r9d
  int v26; // eax
  int v27; // r10d
  __int64 v28; // rdx
  int v29; // r12d
  unsigned int v30; // r8d
  unsigned int v31; // r8d
  unsigned int v32; // r9d
  unsigned int v33; // r8d
  unsigned int v34; // ecx
  unsigned int v35; // r10d
  unsigned int v36; // r11d
  unsigned int v37; // r8d
  __int64 v38; // rax
  char v39; // cl
  __int64 v40; // rsi
  unsigned int v41; // eax
  __int64 v42; // r11
  unsigned int v43; // edx
  __int64 v44; // rdi
  int v45; // ecx
  unsigned int v46; // r9d
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rcx
  __int64 v51; // rdx
  int v52; // ebx
  char v53; // r9
  KIRQL v54; // al
  int v55; // eax
  __int64 v56; // rcx
  int v57; // r9d
  _DWORD *v58; // rdx
  int v59; // edx
  unsigned int v60; // eax
  __int64 v61; // r8
  unsigned int v62; // edx
  __int64 v63; // rcx
  unsigned int v64; // r9d
  __int64 v65; // rax
  __int64 v66; // rdx
  int v67; // r12d
  __int64 v68; // r13
  _QWORD *v69; // rax
  __int64 *v70; // rsi
  __int64 v71; // rcx
  int v72; // ecx
  __int64 v73; // rax
  int v74; // r9d
  unsigned int v75; // r9d
  int v76; // r8d
  __int64 v77; // rcx
  int v78; // r8d
  __int64 v79; // rax
  __int64 **v80; // r8
  __int64 *v81; // rax
  unsigned int v82; // esi
  __int64 v83; // rdx
  unsigned int v84; // edi
  unsigned int v85; // r8d
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rtt
  int v88; // eax
  unsigned int v89; // ecx
  unsigned int v90; // edi
  __int64 v91; // rdx
  __int64 *v92; // rsi
  __int64 v93; // r13
  _QWORD *v94; // rax
  __int64 v95; // rcx
  int v96; // ecx
  __int64 v97; // rax
  int v98; // r9d
  unsigned int v99; // r9d
  int v100; // r8d
  __int64 v101; // rcx
  unsigned int v102; // r8d
  __int64 v103; // rax
  KIRQL v104; // al
  __int64 *v105; // rdx
  __int64 **v106; // rax
  unsigned int v107; // ecx
  __int64 v108; // rax
  __int64 v109; // rcx
  char v110; // zf
  __int64 v111; // r8
  unsigned int v112; // eax
  __int16 v113; // r9
  __int64 v114; // rax
  int v115; // r9d
  __int16 v116; // r11
  int v117; // r10d
  unsigned int v118; // eax
  unsigned int v119; // ecx
  unsigned int v120; // ecx
  unsigned int v121; // eax
  KIRQL v122; // al
  KIRQL v123; // dl
  signed __int32 v124[8]; // [rsp+0h] [rbp-D9h] BYREF
  __int64 v125; // [rsp+20h] [rbp-B9h]
  __int64 v126; // [rsp+28h] [rbp-B1h]
  unsigned int v127; // [rsp+60h] [rbp-79h]
  unsigned int v128; // [rsp+64h] [rbp-75h]
  __int128 v129; // [rsp+68h] [rbp-71h]
  int v130; // [rsp+78h] [rbp-61h]
  unsigned int v131; // [rsp+7Ch] [rbp-5Dh]
  __int64 v132; // [rsp+80h] [rbp-59h]
  unsigned int v133; // [rsp+88h] [rbp-51h]
  __int64 v134; // [rsp+90h] [rbp-49h]
  unsigned int v135; // [rsp+98h] [rbp-41h]
  unsigned int v136; // [rsp+9Ch] [rbp-3Dh]
  unsigned int v137; // [rsp+A0h] [rbp-39h]
  unsigned int v138; // [rsp+A8h] [rbp-31h]
  unsigned int v139; // [rsp+ACh] [rbp-2Dh]
  __int64 v140; // [rsp+B0h] [rbp-29h]
  unsigned int *v141; // [rsp+B8h] [rbp-21h]
  __int128 v142; // [rsp+C0h] [rbp-19h]
  _DWORD *v143; // [rsp+D0h] [rbp-9h]
  __int64 v144; // [rsp+D8h] [rbp-1h]
  unsigned __int64 v145; // [rsp+E0h] [rbp+7h]
  __int64 v146; // [rsp+E8h] [rbp+Fh]
  char v148; // [rsp+148h] [rbp+6Fh]
  char i; // [rsp+150h] [rbp+77h]
  char v150; // [rsp+158h] [rbp+7Fh]

  v1 = *a1;
  v2 = (unsigned int *)(a1 + 5);
  v3 = *((unsigned int *)a1 + 10);
  v148 = 0;
  v136 = 0;
  v5 = *(_QWORD *)(v1 + 56);
  v6 = *(_QWORD *)(v1 + 48);
  v140 = a1[9];
  v7 = (_DWORD *)(v6 + 128);
  v8 = *(_QWORD *)(v5 + 40);
  v9 = *(_DWORD *)(v5 + 192);
  v131 = 0;
  v128 = 0;
  LOBYTE(v8) = ~(unsigned __int8)(*(_QWORD *)(v8 + 736) >> 33);
  v137 = 0;
  v138 = 0;
  v146 = v8 & 1;
  v10 = *(_DWORD *)(v140 + 24);
  v132 = *(_QWORD *)(v140 + 16);
  *((_DWORD *)a1 + 22) = v9;
  v11 = *(_QWORD *)(v5 + 56);
  v139 = 0;
  v12 = *(_QWORD *)(v1 + 48) + 140LL;
  v127 = v10;
  v135 = *(_DWORD *)(v11 + 152);
  LODWORD(v11) = *(_DWORD *)(v1 + 96) - 1;
  v134 = v1;
  v143 = v7;
  v141 = v2;
  v130 = v3;
  v133 = v9;
  if ( (_DWORD)v3 == (_DWORD)v11 )
    v13 = *(_DWORD *)(v1 + 80);
  else
    v13 = *(_DWORD *)(v12 + 12LL * (unsigned int)(v3 + 1));
  v14 = *(_QWORD *)(v5 + 40);
  v15 = v13 - *(_DWORD *)(v12 + 12 * v3);
  if ( !_bittest64((const signed __int64 *)(v14 + 736), 0x29u) )
  {
    v16 = (unsigned int *)(a1 + 5);
LABEL_5:
    v17 = *(unsigned int *)(v5 + 192);
    v18 = 0LL;
    v19 = 4;
    if ( (unsigned int)v17 >= *(_DWORD *)(v5 + 196) )
    {
      v92 = (__int64 *)a1[1];
      v93 = 16 * v17;
      v94 = a1 + 1;
      v18 = *(_QWORD *)(v5 + 184) + v93;
      if ( v92 == a1 + 1 )
      {
        v141 = v16;
      }
      else
      {
        if ( (_QWORD *)v92[1] != v94 )
          goto LABEL_108;
        v95 = *v92;
        if ( *(__int64 **)(*v92 + 8) != v92 )
          goto LABEL_108;
        *v94 = v95;
        *(_QWORD *)(v95 + 8) = v94;
        v92[1] = (__int64)v92;
        *v92 = (__int64)v92;
        v96 = *(_DWORD *)(v5 + 200);
        v145 = 0LL;
        v97 = *(_QWORD *)(v5 + 40);
        v98 = 6145 - (v96 != 0);
        HIDWORD(v145) = v98;
        if ( (*(_QWORD *)(v97 + 736) & 0x800LL) != 0 )
          v98 = 6161 - (v96 != 0);
        v99 = v98 & 0xFFFFFFFD;
        v100 = *(unsigned __int16 *)(v5 + 112);
        v101 = 2LL * *(unsigned int *)(v5 + 192);
        v144 = v92[3];
        v102 = v145 & 0x3FFFFF | (v100 << 22);
        v103 = *(_QWORD *)(v5 + 184);
        v145 = __PAIR64__(v99, v102);
        *(_QWORD *)(v103 + 8 * v101) = v144;
        *(_DWORD *)(v103 + 8 * v101 + 8) = v102;
        *(_DWORD *)(v103 + 8 * v101 + 12) = v99;
        v104 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
        v105 = *(__int64 **)(v5 + 176);
        *(_BYTE *)(v5 + 104) = v104;
        v106 = (__int64 **)a1[4];
        if ( *v106 != a1 + 3 )
LABEL_108:
          __fastfail(3u);
        *v105 = (__int64)(a1 + 3);
        v105[1] = (__int64)v106;
        *v106 = v105;
        a1[4] = (__int64)v105;
        *(_QWORD *)(v5 + 176) = v92;
        *(_QWORD *)(v5 + 184) = v92[2];
        *(_DWORD *)(v5 + 192) = 0;
        a1[12] = (__int64)v92;
        KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
        v1 = v134;
        v141 = (unsigned int *)(a1 + 5);
      }
      v133 = 0;
    }
    v20 = *(_QWORD *)(v5 + 40);
    v21 = *(_BYTE *)(v20 + 1008);
    v150 = *(_BYTE *)(v20 + 1007);
    for ( i = v21; ; v21 = i )
    {
      v22 = (_OWORD *)(*(_QWORD *)(v5 + 184) + 16LL * *(unsigned int *)(v5 + 192));
      v23 = v22;
      v129 = 0LL;
      if ( v18 )
        v23 = (_OWORD *)v18;
      v24 = 0;
      v18 = (__int64)v23;
      if ( v19 == 5 )
      {
        v31 = DWORD2(v129);
        v32 = 1024;
        goto LABEL_19;
      }
      if ( v19 == 7 )
        goto LABEL_11;
      if ( v19 == 4 )
        break;
      if ( v19 == 6 )
      {
LABEL_11:
        v25 = HIDWORD(v129) & 0xFFFF03DF | 0x1C20;
        *(_QWORD *)&v129 = 1LL;
        WORD1(v129) = v3;
        v3 = (unsigned int)(v3 + 1);
        HIDWORD(v129) = v25;
        DWORD1(v129) = *v143;
        v26 = v25;
        v130 = v3;
        if ( v19 == 7 || (v27 = *(_DWORD *)(v1 + 96), (_DWORD)v3 == v27) )
        {
          v30 = DWORD2(v129);
          v19 = 9;
        }
        else
        {
          if ( (v3 & 0x7F) != 0 )
          {
            v25 = v25 & 0xFFFFFDFF | ((_DWORD)v146 << 9);
            HIDWORD(v129) = v26 & 0xFFFFFDFF | ((_DWORD)v146 << 9);
          }
          v28 = *(_QWORD *)(v1 + 48);
          v128 = 0;
          if ( (_DWORD)v3 == v27 - 1 )
            v29 = *(_DWORD *)(v1 + 80);
          else
            v29 = *(_DWORD *)(v28 + 12LL * (unsigned int)(v3 + 1) + 140);
          v15 = v29 - *(_DWORD *)(v28 + 12 * v3 + 140);
          v19 = 4;
          v30 = DWORD2(v129);
        }
        goto LABEL_34;
      }
      v30 = DWORD2(v129);
      if ( v19 == 10 )
      {
        v25 = 1042;
        v39 = 1;
        HIDWORD(v129) = 1042;
        v30 = DWORD2(v129) & 0xFFC00000;
        v148 = 1;
        v19 = 6;
      }
      else
      {
        if ( v19 != 11 )
        {
          v25 = HIDWORD(v129);
          goto LABEL_34;
        }
        v25 = 1042;
        v39 = 1;
        HIDWORD(v129) = 1042;
        v30 = DWORD2(v129) & 0xFFC00000;
        v148 = 1;
        v19 = 7;
      }
LABEL_35:
      if ( v22 != (_OWORD *)v18 )
        HIDWORD(v129) = v25 & 0xFFFFFFFE | *(_DWORD *)(v5 + 200) & 1;
      DWORD2(v129) = v30 & 0x3FFFFF | (*(unsigned __int16 *)(v5 + 112) << 22);
      *v22 = v129;
      ++*(_DWORD *)(v5 + 192);
      if ( v39 )
      {
        Isoch_InsertLinkTrb(v5, a1, 5LL);
        v148 = 0;
      }
      if ( v19 != 9 && v19 != 4 )
      {
        v40 = v134;
        goto LABEL_42;
      }
      *((_DWORD *)a1 + 26) = *(_DWORD *)(v5 + 192);
      *(_OWORD *)(*(_QWORD *)(v5 + 184) + 16LL * *(unsigned int *)(v5 + 192)) = 0LL;
      if ( v19 == 9 )
      {
        v54 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
        v40 = v134;
        *(_BYTE *)(v5 + 104) = v54;
        v55 = v3 - *(_DWORD *)(v40 + 108);
        ++*(_DWORD *)(v40 + 116);
        v56 = *(_QWORD *)(v40 + 48);
        *(_DWORD *)(v40 + 104) = v55;
        v57 = *((_DWORD *)a1 + 11);
        v58 = (_DWORD *)(v56 + 140 + 12LL * *v141);
        if ( v57 == *(_DWORD *)(v40 + 96) - 1 )
          v59 = *(_DWORD *)(v40 + 80) - *v58;
        else
          v59 = *(_DWORD *)(v56 + 140 + 12LL * (unsigned int)(v57 + 1)) - *v58;
        *(_DWORD *)(v40 + 88) += v59;
        ++*(_DWORD *)(v5 + 384);
        v60 = v137;
        *(_DWORD *)(v5 + 336) |= 0x20u;
        *(_DWORD *)(v5 + 372) = v60;
LABEL_77:
        *(_DWORD *)(v5 + 336) |= 0x11u;
LABEL_78:
        KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
        goto LABEL_48;
      }
      if ( *(_BYTE *)(v5 + 341) )
      {
        v122 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
        v110 = *(_BYTE *)(v5 + 341) == 0;
        v40 = v134;
        *(_BYTE *)(v5 + 104) = v122;
        if ( !v110 )
          goto LABEL_77;
        goto LABEL_78;
      }
      v40 = v134;
LABEL_48:
      *(_BYTE *)(v18 + 12) ^= 1u;
      _InterlockedOr(v124, 0);
      v18 = 0LL;
      if ( *(_BYTE *)(v5 + 341) )
      {
        v109 = *(_QWORD *)(v5 + 56);
        v110 = *(_BYTE *)(v5 + 288) == 0;
        v111 = *(unsigned int *)(v5 + 64);
        *(_BYTE *)(v5 + 341) = 0;
        XilUsbDevice_WriteDoorbell(*(_QWORD *)(v109 + 16), *(unsigned int *)(v109 + 144), v111, v110);
      }
      if ( v19 != 9 )
      {
        v138 = v131;
        if ( v131 < *(_DWORD *)v140 )
          v139 = v132 - *(_DWORD *)(v140 + 24LL * v131 + 16);
        v133 = *(_DWORD *)(v5 + 192);
      }
LABEL_42:
      v41 = *(_DWORD *)(v5 + 192);
      if ( v41 == *(_DWORD *)(v5 + 196) )
      {
        if ( v19 != 4 )
        {
          if ( v19 == 9 )
          {
LABEL_69:
            v45 = *(_DWORD *)(v5 + 192);
            v46 = *((_DWORD *)a1 + 22);
            *((_DWORD *)a1 + 26) = v45;
            TR_AddTRBRangeToSecureTransferRing(v5, a1 + 3, (_QWORD *)a1[12], v46, v45, (_OWORD *)a1 + 8);
            v48 = *(_QWORD *)(v5 + 56);
            v49 = *(_QWORD *)(v48 + 16);
            if ( *(_QWORD *)(v49 + 160) )
            {
              v50 = *(unsigned int *)(v5 + 64);
              v51 = *(unsigned int *)(v48 + 144);
              v52 = (unsigned __int8)v51 | (*(_DWORD *)(v5 + 64) << 16);
              if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
              {
                v53 = *(_BYTE *)(v49 + 135);
                LODWORD(v126) = v50;
                LODWORD(v125) = v51;
                McTemplateK0uqq_EtwWriteTransfer(v50, v51, v47, v53, v125, v126);
              }
              **(_DWORD **)(v49 + 160) = v52;
              _InterlockedOr(v124, 0);
            }
            return;
          }
          v61 = v140;
          v62 = v139;
          v63 = v138;
          v64 = v133;
          *(_DWORD *)(v5 + 192) = v133;
          v131 = v63;
          v63 *= 3LL;
          v128 = 0;
          v127 = *(_DWORD *)(v61 + 8 * v63 + 24) - v62;
          v65 = *(_QWORD *)(v61 + 8 * v63 + 16) + v62;
          v66 = *(_QWORD *)(v40 + 48);
          v132 = v65;
          if ( (_DWORD)v3 == *(_DWORD *)(v40 + 96) - 1 )
            v67 = *(_DWORD *)(v40 + 80);
          else
            v67 = *(_DWORD *)(v66 + 12LL * (unsigned int)(v3 + 1) + 140);
          v15 = v67 - *(_DWORD *)(v66 + 12LL * (unsigned int)v3 + 140);
          v19 = 4;
          v41 = v64;
        }
        v68 = v41;
        v69 = a1 + 1;
        v18 = *(_QWORD *)(v5 + 184) + 16 * v68;
        v142 = 0LL;
        v70 = (__int64 *)a1[1];
        if ( v70 != a1 + 1 )
        {
          if ( (_QWORD *)v70[1] != v69 )
            goto LABEL_108;
          v71 = *v70;
          if ( *(__int64 **)(*v70 + 8) != v70 )
            goto LABEL_108;
          *v69 = v71;
          *(_QWORD *)(v71 + 8) = v69;
          v70[1] = (__int64)v70;
          *v70 = (__int64)v70;
          v72 = *(_DWORD *)(v5 + 200);
          *((_QWORD *)&v142 + 1) = 0LL;
          v73 = *(_QWORD *)(v5 + 40);
          v74 = 6145 - (v72 != 0);
          HIDWORD(v142) = v74;
          if ( (*(_QWORD *)(v73 + 736) & 0x800LL) != 0 )
            v74 = 6161 - (v72 != 0);
          v75 = v74 & 0xFFFFFFFD;
          v76 = *(unsigned __int16 *)(v5 + 112);
          v77 = 2LL * *(unsigned int *)(v5 + 192);
          *(_QWORD *)&v142 = v70[3];
          v78 = DWORD2(v142) & 0x3FFFFF | (v76 << 22);
          v79 = *(_QWORD *)(v5 + 184);
          *((_QWORD *)&v142 + 1) = __PAIR64__(v75, v78);
          *(_QWORD *)(v79 + 8 * v77) = v142;
          *(_DWORD *)(v79 + 8 * v77 + 8) = v78;
          *(_DWORD *)(v79 + 8 * v77 + 12) = v75;
          *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
          v80 = (__int64 **)a1[4];
          v81 = *(__int64 **)(v5 + 176);
          if ( *v80 != a1 + 3 )
            goto LABEL_108;
          *v81 = (__int64)(a1 + 3);
          v81[1] = (__int64)v80;
          *v80 = v81;
          a1[4] = (__int64)v81;
          *(_QWORD *)(v5 + 176) = v70;
          *(_QWORD *)(v5 + 184) = v70[2];
          *(_DWORD *)(v5 + 192) = 0;
          a1[12] = (__int64)v70;
          KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
          v133 = 0;
        }
      }
      if ( v19 == 9 )
        goto LABEL_69;
      v1 = v134;
    }
    v24 = v150;
    v113 = *(_WORD *)v143 + (unsigned int)v3 / *(_DWORD *)(v5 + 364);
    v137 = *v143 + (unsigned int)v3 / *(_DWORD *)(v5 + 364);
    v114 = *(_QWORD *)(v5 + 56);
    v115 = ((v113 & 0x7FF) << 20) | 0x1400;
    v116 = *(_WORD *)(v114 + 100);
    v117 = *(_DWORD *)(v114 + 148);
    v118 = (v15 + (v116 & 0x7FF) - 1) / (v116 & 0x7FFu);
    v119 = v117 + 1;
    if ( v150 )
    {
      if ( !v118 )
        v118 = 1;
      v31 = DWORD2(v129) & 0xFFC1FFFF | ((((unsigned __int8)((v117 + v118) / v119) - 1) & 0x1F) << 17);
    }
    else
    {
      if ( !v118 )
        v118 = 1;
      v115 ^= (((unsigned __int8)((v117 + v118) / v119) - 1) & 3) << 7;
      v31 = DWORD2(v129);
    }
    v120 = v117 + 1;
    v121 = (v15 + (v116 & 0x7FF) - 1) / (v116 & 0x7FFu);
    v136 = v121;
    if ( !v121 )
      v121 = 1;
    if ( v121 % v120 )
      v117 = v121 % v120 - 1;
    v32 = (v115 ^ (v117 << 16)) & 0xF0000 ^ v115;
    if ( !*(_BYTE *)(*(_QWORD *)(v5 + 40) + 720LL) )
      v136 = 0;
    v21 = i;
LABEL_19:
    v33 = v31 & 0xFFFE0000;
    if ( v127 <= v15 )
    {
      v15 -= v127;
      *(_QWORD *)&v129 = v132;
      v30 = v127 & 0x1FFFF | v33;
      v42 = v131 + 1;
      v131 = v42;
      v43 = *(_DWORD *)v140;
      if ( (unsigned int)v42 >= *(_DWORD *)v140 )
      {
        v44 = 0LL;
        v127 = 0;
      }
      else
      {
        v44 = *(_QWORD *)(v140 + 24 * v42 + 16);
        v127 = *(_DWORD *)(v140 + 24 * v42 + 24);
      }
      v34 = v128;
      v132 = v44;
      if ( v128 + (v30 & 0x1FFFF) > v135 )
      {
        v107 = v127;
        v30 ^= (v30 ^ (v135 - v128)) & 0x1FFFF;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !v15 )
            {
              v34 = v128;
              goto LABEL_94;
            }
            if ( v107 <= v15 )
              break;
            v107 -= v15;
            v44 += v15;
            v127 = v107;
            v132 = v44;
            v15 = 0;
          }
          v42 = (unsigned int)(v42 + 1);
          v15 -= v107;
          v131 = v42;
          if ( (unsigned int)v42 >= v43 )
            break;
          v44 = *(_QWORD *)(v140 + 24 * v42 + 16);
          v107 = *(_DWORD *)(v140 + 24 * v42 + 24);
          v132 = v44;
          v127 = v107;
        }
        v132 = 0LL;
        v127 = 0;
        v34 = v128;
      }
      if ( v15 )
      {
        v19 = 5;
      }
      else
      {
LABEL_94:
        if ( i )
          v32 = v32 & 0xFFFFFE7F | 0x80;
        v19 = ((_DWORD)v3 == *((_DWORD *)a1 + 11)) + 6;
      }
    }
    else
    {
      *(_QWORD *)&v129 = v132;
      v127 -= v15;
      v30 = v15 & 0x1FFFF | v33;
      v132 += v15;
      if ( v128 + (v30 & 0x1FFFF) > v135 )
        v30 ^= (v30 ^ (v135 - v128)) & 0x1FFFF;
      if ( v21 )
        v32 = v32 & 0xFFFFFE7F | 0x80;
      v19 = 6;
      v34 = v128;
    }
    v35 = v30;
    v36 = v32;
    v128 = (v30 & 0x1FFFF) + v34;
    if ( !v24 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v5 + 40) + 720LL) && (unsigned int)(v19 - 6) > 1 )
      {
        v37 = v136 - v128 / (*(_WORD *)(*(_QWORD *)(v5 + 56) + 100LL) & 0x7FFu);
        if ( v37 > 0x1F )
          v37 = 31;
      }
      else
      {
        v37 = 0;
      }
      v30 = v35 ^ (v35 ^ (v37 << 17)) & 0x3E0000;
    }
    v38 = *(_QWORD *)(v5 + 40);
    v25 = v32 | 0x10;
    HIDWORD(v129) = v25;
    if ( _bittest64((const signed __int64 *)(v38 + 736), 0x2Fu) )
    {
      v108 = *(_QWORD *)(v5 + 48);
      if ( *(_DWORD *)(v108 + 20) == 1 )
      {
        if ( *(_DWORD *)(v108 + 40) )
        {
          if ( v19 == 6 )
          {
            if ( (unsigned int)(*(_DWORD *)(v5 + 196) - *(_DWORD *)(v5 + 192) - 1) < *(_DWORD *)(v5 + 440) )
            {
              v19 = 10;
              goto LABEL_33;
            }
LABEL_32:
            v25 = v36 | 0x12;
            HIDWORD(v129) = v36 | 0x12;
LABEL_33:
            LODWORD(v3) = v130;
LABEL_34:
            v39 = v148;
            goto LABEL_35;
          }
          if ( v19 == 7 )
          {
            v19 = 11;
            goto LABEL_33;
          }
        }
      }
    }
    if ( v19 != 6 && v19 != 7 )
      goto LABEL_33;
    goto LABEL_32;
  }
  v82 = *v7 + (unsigned int)v3 / *(_DWORD *)(v5 + 364);
  v137 = v82;
  v83 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v14 + 844) / 10000LL;
  v84 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v14 + 88) + 40LL) + 2) >> 3;
  v85 = v84 & 0x7FF;
  _m_prefetchw((const void *)(v14 + 832));
  v86 = *(_QWORD *)(v14 + 832);
  do
  {
    v87 = v86;
    v86 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 832), v86, v86);
  }
  while ( v87 != v86 );
  v88 = v83 + ((_DWORD)v86 << 11) - (v86 >> 21);
  v89 = v88 & 0x7FF;
  v90 = v88 ^ ((unsigned __int16)v88 ^ (unsigned __int16)v84) & 0x7FF;
  if ( v89 < v85 )
  {
    v112 = v90 - 2048;
    v85 -= v89;
    if ( v85 <= 0x400 )
      v112 = v90;
    v90 = v112;
  }
  else if ( v89 - v85 > 0x400 )
  {
    v90 += 2048;
  }
  v91 = _InterlockedExchange64(
          (volatile __int64 *)(v14 + 832),
          ((unsigned __int64)v90 >> 11) | ((v83 - (v90 & 0x7FF)) << 21));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v91) = 5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v14 + 72),
      v91,
      4,
      188,
      (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
      v90);
    v1 = v134;
  }
  if ( (int)(v90 - v82) < 0 )
  {
    v16 = (unsigned int *)(a1 + 5);
    v141 = (unsigned int *)(a1 + 5);
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqqDDD(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
      v85,
      v9,
      v125,
      *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
      *(_QWORD *)(v1 + 24),
      (char)a1,
      v90,
      v3,
      v82);
  Isoch_Stage_FreeScatterGatherList(v5, a1);
  *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  Isoch_Stage_Release(v5, a1);
  v123 = *(_BYTE *)(v5 + 104);
  *(_DWORD *)(v5 + 336) |= 0x10u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v123);
  XilUsbDevice_WriteDoorbell(
    *(_QWORD *)(*(_QWORD *)(v5 + 56) + 16LL),
    *(unsigned int *)(*(_QWORD *)(v5 + 56) + 144LL),
    *(unsigned int *)(v5 + 64),
    1);
  *(_DWORD *)(v5 + 360) = 1;
}
