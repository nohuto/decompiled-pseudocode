/*
 * XREFs of Bulk_Stage_MapIntoRing @ 0x1400058A0
 * Callers:
 *     Bulk_EvtDmaCallback @ 0x140004630 (Bulk_EvtDmaCallback.c)
 *     Bulk_MapStage @ 0x14001C3D0 (Bulk_MapStage.c)
 * Callees:
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x140004518 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x140006770 (TR_AddTRBRangeToSecureTransferRing.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x140006AB0 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDDDq @ 0x140007DA4 (WPP_RECORDER_SF_DDDDq.c)
 *     WPP_RECORDER_SF_DDDDqDD @ 0x140007EE0 (WPP_RECORDER_SF_DDDDqDD.c)
 *     memmove @ 0x1400597C0 (memmove.c)
 */

__int64 __fastcall Bulk_Stage_MapIntoRing(__int64 a1)
{
  unsigned int v2; // r13d
  __int64 v3; // rbx
  __int64 v4; // r9
  unsigned int v5; // r8d
  __int64 v6; // rcx
  unsigned int v7; // r14d
  bool v8; // cf
  unsigned int v9; // ecx
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  __int64 v17; // r10
  __int64 v18; // rdx
  unsigned int v19; // r14d
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // r13d
  unsigned int v24; // r8d
  unsigned int v25; // edx
  unsigned int v26; // r14d
  unsigned int v27; // edx
  __int64 v28; // r13
  int v29; // eax
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ecx
  unsigned int v34; // r13d
  __int64 v35; // rdx
  __int64 v36; // r10
  unsigned int v37; // edx
  _QWORD *v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  int v42; // r9d
  int v43; // r9d
  unsigned int v44; // r9d
  __int64 v45; // rdx
  unsigned int v46; // r9d
  int v47; // r8d
  __int64 v48; // rcx
  int v49; // r8d
  __int64 v50; // rax
  _QWORD *v51; // rdx
  _QWORD *v52; // rax
  KIRQL v53; // al
  __int64 v54; // rcx
  KIRQL v55; // dl
  __int64 v56; // rcx
  __int64 result; // rax
  __int64 v58; // r8
  __int64 v59; // rdi
  __int64 v60; // rdx
  int v61; // ebx
  _QWORD *v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rdx
  int v65; // edx
  __int64 v66; // rax
  int v67; // r9d
  __int64 v68; // rdx
  unsigned int v69; // r9d
  int v70; // r8d
  __int64 v71; // rcx
  unsigned int v72; // r8d
  __int64 v73; // rax
  _QWORD *v74; // r8
  _QWORD *v75; // rax
  _QWORD *v76; // rdx
  __int64 v77; // rax
  __int64 v78; // r11
  _QWORD *v79; // rcx
  _QWORD *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rdx
  int v83; // r9d
  int v84; // r9d
  unsigned int v85; // r9d
  __int64 v86; // rdx
  unsigned int v87; // r9d
  int v88; // r8d
  __int64 v89; // rcx
  int v90; // r8d
  __int64 v91; // rax
  KIRQL v92; // al
  _QWORD *v93; // rcx
  _QWORD *v94; // rdx
  int v95; // eax
  __int64 v96; // rdx
  int v97; // eax
  unsigned int v98; // ecx
  __int64 v99; // rax
  __int64 v100; // rdx
  int v101; // ecx
  __int64 v102; // rax
  __int64 v103; // rdx
  int v104; // ecx
  __int64 v105; // rax
  __int64 v106; // rdx
  int v107; // ecx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rdx
  int v112; // ecx
  __int64 v113; // rax
  __int64 v114; // rdx
  int v115; // ecx
  __int64 v116; // rax
  BOOLEAN refreshed; // al
  signed __int32 v118[8]; // [rsp+0h] [rbp-C9h] BYREF
  int v119; // [rsp+20h] [rbp-A9h]
  __int128 v120; // [rsp+60h] [rbp-69h] BYREF
  __int64 v121; // [rsp+70h] [rbp-59h]
  unsigned int v122; // [rsp+78h] [rbp-51h]
  __int64 v123; // [rsp+80h] [rbp-49h]
  int v124; // [rsp+88h] [rbp-41h]
  unsigned int v125; // [rsp+8Ch] [rbp-3Dh]
  unsigned int v126; // [rsp+90h] [rbp-39h]
  _OWORD *v127; // [rsp+98h] [rbp-31h]
  __int64 v128; // [rsp+A0h] [rbp-29h]
  __int64 v129; // [rsp+A8h] [rbp-21h]
  __int64 v130; // [rsp+B0h] [rbp-19h]
  unsigned __int64 v131; // [rsp+B8h] [rbp-11h]
  __int128 v132; // [rsp+C0h] [rbp-9h]
  __int128 v133; // [rsp+D0h] [rbp+7h]
  unsigned int v134; // [rsp+130h] [rbp+67h]
  unsigned int v135; // [rsp+138h] [rbp+6Fh]
  unsigned int v136; // [rsp+140h] [rbp+77h]
  _QWORD *v137; // [rsp+148h] [rbp+7Fh]
  _QWORD *v138; // [rsp+148h] [rbp+7Fh]
  _QWORD *v139; // [rsp+148h] [rbp+7Fh]

  v129 = *(_QWORD *)a1;
  v2 = 0;
  v134 = 0;
  v3 = *(_QWORD *)(v129 + 56);
  v4 = *(_QWORD *)(v129 + 48);
  v5 = *(_DWORD *)(a1 + 40);
  v6 = *(_QWORD *)(v3 + 40);
  v128 = *(_QWORD *)(v6 + 856);
  if ( _bittest64((const signed __int64 *)(v6 + 736), 0x22u)
    && (v35 = *(_QWORD *)(v3 + 48), *(_DWORD *)(v35 + 40))
    && (v36 = *(_QWORD *)(v3 + 56), *(char *)(v36 + 98) < 0)
    && *(_DWORD *)(v35 + 20) <= 1u
    && (v37 = v5 % (*(_WORD *)(v36 + 100) & 0x7FFu)) != 0 )
  {
    v7 = (*(_WORD *)(v36 + 100) & 0x7FF) - v37;
  }
  else
  {
    v7 = 0;
  }
  v135 = v7;
  v8 = *(_BYTE *)(v6 + 720) == 0;
  v124 = *(_DWORD *)(v4 + 32) & 1;
  if ( v8 )
  {
    v122 = 0;
  }
  else
  {
    v9 = *(_WORD *)(*(_QWORD *)(v3 + 56) + 100LL) & 0x7FF;
    v122 = (v9 + v5 - 1) / v9;
  }
  v10 = *(_DWORD *)(a1 + 80);
  v11 = 0;
  *(_DWORD *)(a1 + 88) = 0;
  v12 = 5;
  v13 = 16LL * *(unsigned int *)(v3 + 192) + *(_QWORD *)(v3 + 184);
  v121 = 0LL;
  v123 = v13;
  v136 = 0;
  if ( (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 736LL) & 8) != 0 )
  {
    v62 = *(_QWORD **)(a1 + 8);
    v63 = (_QWORD *)(a1 + 8);
    v138 = v62;
    if ( v62 == (_QWORD *)(a1 + 8) )
    {
      if ( !KdRefreshDebuggerNotPresent() )
        goto LABEL_116;
    }
    else
    {
      if ( (_QWORD *)v62[1] != v63 )
        goto LABEL_93;
      v64 = *v62;
      if ( *(_QWORD **)(*v62 + 8LL) != v62 )
        goto LABEL_93;
      *v63 = v64;
      *(_QWORD *)(v64 + 8) = v63;
      v62[1] = v62;
      *v62 = v62;
      v65 = *(_DWORD *)(v3 + 200);
      v131 = 0LL;
      v66 = *(_QWORD *)(v3 + 40);
      v67 = 6145 - (v65 != 0);
      HIDWORD(v131) = v67;
      if ( (*(_QWORD *)(v66 + 736) & 0x800LL) != 0 )
        v67 = 6161 - (v65 != 0);
      v68 = v62[3];
      v69 = v67 & 0xFFFFFFFD;
      v70 = *(unsigned __int16 *)(v3 + 112);
      v71 = 2LL * *(unsigned int *)(v3 + 192);
      v130 = v68;
      v72 = v131 & 0x3FFFFF | (v70 << 22);
      v73 = *(_QWORD *)(v3 + 184);
      v131 = __PAIR64__(v69, v72);
      *(_QWORD *)(v73 + 8 * v71) = v68;
      *(_DWORD *)(v73 + 8 * v71 + 8) = v72;
      *(_DWORD *)(v73 + 8 * v71 + 12) = v69;
      *(_BYTE *)(v3 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      v74 = *(_QWORD **)(a1 + 32);
      v75 = *(_QWORD **)(v3 + 176);
      if ( *v74 != a1 + 24 )
LABEL_93:
        __fastfail(3u);
      *v75 = a1 + 24;
      v75[1] = v74;
      *v74 = v75;
      *(_QWORD *)(a1 + 32) = v75;
      v76 = v138;
      *(_QWORD *)(v3 + 176) = v138;
      v77 = v138[2];
      *(_DWORD *)(v3 + 192) = 0;
LABEL_76:
      *(_QWORD *)(v3 + 184) = v77;
      *(_QWORD *)(a1 + 112) = v76;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
    }
  }
LABEL_6:
  while ( 2 )
  {
    LODWORD(v14) = 0;
    while ( 1 )
    {
      v15 = *(_DWORD *)(v3 + 192);
      v16 = *(_DWORD *)(v3 + 196);
      v17 = *(_QWORD *)(v3 + 184) + 16LL * v15;
      v127 = (_OWORD *)v17;
      v120 = 0LL;
      if ( v15 + v10 > v16 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_DDDDq(
            *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
            *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
            v15,
            17,
            v119,
            *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
            *(_DWORD *)(v3 + 64),
            v15,
            v17);
          v17 = (__int64)v127;
        }
        v38 = *(_QWORD **)(a1 + 8);
        v39 = (_QWORD *)(a1 + 8);
        v137 = v38;
        v132 = 0LL;
        if ( v38 != (_QWORD *)(a1 + 8) )
        {
          if ( (_QWORD *)v38[1] != v39 )
            goto LABEL_93;
          v40 = *v38;
          if ( *(_QWORD **)(*v38 + 8LL) != v38 )
            goto LABEL_93;
          *v39 = v40;
          *(_QWORD *)(v40 + 8) = v39;
          v41 = v123;
          v38[1] = v38;
          *v38 = v38;
          v42 = *(_DWORD *)(v3 + 200);
          *((_QWORD *)&v132 + 1) = 0LL;
          if ( v17 == v41 )
            v43 = 6145 - (v42 != 0);
          else
            v43 = v42 & 1 | 0x1800;
          if ( (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 736LL) & 0x800LL) == 0 )
          {
            if ( v17 == v41 )
            {
              v44 = v43 & 0xFFFFFFEF;
LABEL_61:
              v45 = v38[3];
              v46 = v44 & 0xFFFFFFFD;
              v47 = *(unsigned __int16 *)(v3 + 112);
              v48 = 2LL * *(unsigned int *)(v3 + 192);
              *(_QWORD *)&v132 = v45;
              v49 = DWORD2(v132) & 0x3FFFFF | (v47 << 22);
              v50 = *(_QWORD *)(v3 + 184);
              *((_QWORD *)&v132 + 1) = __PAIR64__(v46, v49);
              *(_QWORD *)(v50 + 8 * v48) = v45;
              *(_DWORD *)(v50 + 8 * v48 + 8) = v49;
              *(_DWORD *)(v50 + 8 * v48 + 12) = v46;
              *(_BYTE *)(v3 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
              v51 = *(_QWORD **)(a1 + 32);
              v52 = *(_QWORD **)(v3 + 176);
              if ( *v51 != a1 + 24 )
                goto LABEL_93;
              *v52 = a1 + 24;
              v52[1] = v51;
              *v51 = v52;
              *(_QWORD *)(a1 + 32) = v52;
              *(_QWORD *)(v3 + 176) = v137;
              *(_QWORD *)(v3 + 184) = v137[2];
              *(_DWORD *)(v3 + 192) = 0;
              *(_QWORD *)(a1 + 112) = v137;
              KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
              goto LABEL_6;
            }
            if ( v12 != 7 && v12 != 5 )
            {
              v44 = v43 & 0xFFFFFFEF;
              goto LABEL_61;
            }
          }
          v44 = v43 | 0x10;
          goto LABEL_61;
        }
        if ( KdRefreshDebuggerNotPresent() )
          goto LABEL_6;
LABEL_116:
        __debugbreak();
        goto LABEL_6;
      }
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 736LL) & 0x2000000000000LL) == 0 )
        break;
      v14 = *(_QWORD *)(v3 + 48);
      v18 = v3 + 48;
      if ( *(_DWORD *)(v14 + 20) != 3 )
        break;
      v78 = *(_QWORD *)(v3 + 56);
      if ( *(_DWORD *)(v78 + 120) != 6 )
        break;
      if ( v12 != 7 || v15 + 9 <= v16 )
        goto LABEL_10;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_DDDDq(
          *(_QWORD *)(v78 + 80),
          *(unsigned __int8 *)(v14 + 135),
          v15,
          18,
          v119,
          *(_BYTE *)(v14 + 135),
          *(_DWORD *)(v78 + 144),
          *(_DWORD *)(v3 + 64),
          v15,
          v17);
        v17 = (__int64)v127;
      }
      v79 = *(_QWORD **)(a1 + 8);
      v80 = (_QWORD *)(a1 + 8);
      v139 = v79;
      v133 = 0LL;
      if ( v79 != (_QWORD *)(a1 + 8) )
      {
        if ( (_QWORD *)v79[1] != v80 )
          goto LABEL_93;
        v81 = *v79;
        if ( *(_QWORD **)(*v79 + 8LL) != v79 )
          goto LABEL_93;
        *v80 = v81;
        *(_QWORD *)(v81 + 8) = v80;
        v82 = v123;
        v79[1] = v79;
        *v79 = v79;
        v83 = *(_DWORD *)(v3 + 200);
        *((_QWORD *)&v133 + 1) = 0LL;
        v84 = v17 == v82 ? 6145 - (v83 != 0) : v83 & 1 | 0x1800;
        v85 = (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 736LL) & 0x800LL) != 0 || v17 != v82 ? v84 | 0x10 : v84 & 0xFFFFFFEF;
        v86 = v79[3];
        v87 = v85 & 0xFFFFFFFD;
        v88 = *(unsigned __int16 *)(v3 + 112);
        v89 = 2LL * *(unsigned int *)(v3 + 192);
        *(_QWORD *)&v133 = v86;
        v90 = DWORD2(v133) & 0x3FFFFF | (v88 << 22);
        v91 = *(_QWORD *)(v3 + 184);
        *((_QWORD *)&v133 + 1) = __PAIR64__(v87, v90);
        *(_QWORD *)(v91 + 8 * v89) = v86;
        *(_DWORD *)(v91 + 8 * v89 + 8) = v90;
        *(_DWORD *)(v91 + 8 * v89 + 12) = v87;
        v92 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
        v93 = *(_QWORD **)(v3 + 176);
        *(_BYTE *)(v3 + 104) = v92;
        v94 = *(_QWORD **)(a1 + 32);
        if ( *v94 != a1 + 24 )
          goto LABEL_93;
        v93[1] = v94;
        *v93 = a1 + 24;
        *v94 = v93;
        v76 = v139;
        *(_QWORD *)(a1 + 32) = v93;
        *(_QWORD *)(v3 + 176) = v139;
        v77 = v139[2];
        *(_DWORD *)(v3 + 192) = 0;
        goto LABEL_76;
      }
      refreshed = KdRefreshDebuggerNotPresent();
      LODWORD(v14) = 0;
      if ( !refreshed )
        __debugbreak();
    }
    v18 = v3 + 48;
LABEL_10:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDDDqDD(
        *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)v18 + 135LL),
        v15,
        v14,
        v119,
        *(_BYTE *)(*(_QWORD *)v18 + 135LL),
        *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
        *(_DWORD *)(v3 + 64),
        v15,
        v17,
        *(_DWORD *)(a1 + 88),
        v10);
    if ( v12 != 5 )
    {
      v27 = DWORD2(v120);
      if ( v12 == 7 )
      {
        v12 = 9;
        v26 = HIDWORD(v120) & 0xFFFF03DF | 0x1C20;
        v32 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 56) + 99LL);
        HIDWORD(v120) = v26;
        ++*(_DWORD *)(a1 + 88);
        *(_QWORD *)&v120 = v32 ^ (a1 ^ v32) & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_28;
      }
      v12 = 7;
      v135 = 0;
      v27 = v7 & 0x1FFFF | DWORD2(v120) & 0xFFC00000;
      v26 = HIDWORD(v120) & 0xFFFF03EF | 0x410;
      *(_QWORD *)&v120 = *(_QWORD *)(v128 + 24);
      ++*(_DWORD *)(a1 + 88);
      goto LABEL_27;
    }
    v19 = HIDWORD(v120) & 0xFFFF03FF | 0x400;
    HIDWORD(v120) = v19;
    v20 = *(_DWORD *)(v129 + 76);
    if ( v20 == 3 )
    {
      if ( v11 )
      {
        v22 = v121;
      }
      else
      {
        v21 = *(_QWORD *)(a1 + 56);
        v22 = *(_QWORD *)(v21 + 24LL * v2 + 16);
        v11 = *(_DWORD *)(v21 + 24LL * v2 + 24);
        v121 = v22;
      }
      *(_QWORD *)&v120 = v22;
      if ( v11 > 0x10000 )
      {
        v23 = DWORD2(v120) & 0xFFFE0000 | 0x10000;
        v121 = v22 + 0x10000;
        v11 -= 0x10000;
        v12 = 5;
      }
      else
      {
        v23 = v11 & 0x1FFFF | DWORD2(v120) & 0xFFFE0000;
        v11 = 0;
        ++v134;
        v12 = 7;
        if ( **(_DWORD **)(a1 + 56) != v134 )
          v12 = 5;
      }
    }
    else if ( v20 )
    {
      v33 = v20 - 1;
      if ( v33 )
      {
        if ( v33 != 1 )
        {
          v23 = DWORD2(v120);
          goto LABEL_20;
        }
        if ( !v124 )
          memmove(*(void **)(*(_QWORD *)(a1 + 72) + 16LL), *(const void **)(a1 + 64), *(unsigned int *)(a1 + 40));
        v34 = *(_DWORD *)(a1 + 40);
        *(_QWORD *)&v120 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
      }
      else
      {
        v34 = *(_DWORD *)(a1 + 40);
        memmove(&v120, *(const void **)(a1 + 64), v34);
        v19 = HIDWORD(v120) | 0x40;
      }
      v12 = 7;
      v23 = DWORD2(v120) & 0xFFFE0000 | v34 & 0x1FFFF;
    }
    else
    {
      v12 = 7;
      v23 = DWORD2(v120) & 0xFFFE0000;
    }
LABEL_20:
    v24 = (v23 & 0x1FFFF) + v136;
    v136 = v24;
    if ( v12 == 7 || !*(_BYTE *)(*(_QWORD *)(v3 + 40) + 720LL) )
    {
      LOBYTE(v25) = 0;
    }
    else
    {
      v25 = v122 - v24 / (*(_WORD *)(*(_QWORD *)(v3 + 56) + 100LL) & 0x7FFu);
      if ( v25 > 0x1F )
        LOBYTE(v25) = 31;
    }
    v26 = v19 | 0x10;
    v27 = v23 & 0xFFC1FFFF | ((v25 & 0x1F) << 17);
    HIDWORD(v120) = v26;
    --v10;
    v28 = v121;
    v125 = v135;
    v29 = *(_DWORD *)(a1 + 88) + 1;
    v126 = v134;
    *(_DWORD *)(a1 + 88) = v29;
    if ( v12 == 7 )
    {
      v121 = v28;
      v135 = v125;
      if ( v125 )
      {
        v134 = v126;
        v121 = v28;
        v135 = v125;
        if ( v128 )
        {
          v134 = v126;
          v121 = v28;
          v135 = v125;
          v12 = 8;
          v27 = v27 & 0xFFC1FFFF | ((v27 & 0xFFFE0000) + 0x20000) & 0x3E0000;
          goto LABEL_28;
        }
      }
LABEL_27:
      v26 |= 2u;
      v10 = 1;
      HIDWORD(v120) = v26;
      goto LABEL_28;
    }
    v121 = v28;
    if ( !v10 )
    {
      v10 = *(_DWORD *)(a1 + 80);
      v30 = *(_DWORD *)(a1 + 84) - v29;
      v121 = v28;
      if ( v10 >= v30 )
        v10 = v30;
    }
LABEL_28:
    if ( v127 != (_OWORD *)v123 )
      HIDWORD(v120) = v26 & 0xFFFFFFFE | *(_DWORD *)(v3 + 200) & 1;
    DWORD2(v120) = v27 & 0x3FFFFF | (*(unsigned __int16 *)(v3 + 112) << 22);
    *v127 = v120;
    v31 = (unsigned int)(*(_DWORD *)(v3 + 192) + 1);
    *(_DWORD *)(v3 + 192) = v31;
    if ( v12 != 9 )
    {
      v2 = v134;
      v7 = v135;
      continue;
    }
    break;
  }
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v3 + 40) + 736LL), 0x31u)
    && *(_DWORD *)(*(_QWORD *)(v3 + 48) + 20LL) == 3
    && *(_DWORD *)(*(_QWORD *)(v3 + 56) + 120LL) == 6 )
  {
    v95 = *(_DWORD *)(v3 + 200) & 1;
    v120 = 0LL;
    HIDWORD(v120) = v95 | 0x2000;
    *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16 * v31) = v120;
    v96 = (unsigned int)++*(_DWORD *)(v3 + 192);
    v97 = *(_DWORD *)(v3 + 200) & 1;
    v120 = 0LL;
    v98 = v97 | _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12)) & 0xFFFF23FE;
    v99 = *(_QWORD *)(v3 + 184);
    HIDWORD(v120) = v98 | 0x2000;
    *(_OWORD *)(v99 + 16 * v96) = v120;
    v100 = (unsigned int)++*(_DWORD *)(v3 + 192);
    LODWORD(v99) = *(_DWORD *)(v3 + 200) & 1;
    v120 = 0LL;
    v101 = v99 | _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12)) & 0xFFFF23FE;
    v102 = *(_QWORD *)(v3 + 184);
    HIDWORD(v120) = v101 | 0x2000;
    *(_OWORD *)(v102 + 16 * v100) = v120;
    v103 = (unsigned int)++*(_DWORD *)(v3 + 192);
    LODWORD(v102) = *(_DWORD *)(v3 + 200) & 1;
    v120 = 0LL;
    v104 = v102 | _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12)) & 0xFFFF23FE;
    v105 = *(_QWORD *)(v3 + 184);
    HIDWORD(v120) = v104 | 0x2000;
    *(_OWORD *)(v105 + 16 * v103) = v120;
    v106 = (unsigned int)++*(_DWORD *)(v3 + 192);
    LODWORD(v105) = *(_DWORD *)(v3 + 200) & 1;
    v120 = 0LL;
    v107 = v105 | _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12)) & 0xFFFF23FE;
    v108 = *(_QWORD *)(v3 + 184);
    HIDWORD(v120) = v107 | 0x2000;
    *(_OWORD *)(v108 + 16 * v106) = v120;
    v109 = (unsigned int)++*(_DWORD *)(v3 + 192);
    v120 = 0LL;
    v110 = *(_QWORD *)(v3 + 184);
    HIDWORD(v120) = *(_DWORD *)(v3 + 200) & 1 | _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12)) & 0xFFFF23FE | 0x2000;
    *(_OWORD *)(v110 + 16 * v109) = v120;
    v111 = (unsigned int)++*(_DWORD *)(v3 + 192);
    LODWORD(v110) = *(_DWORD *)(v3 + 200) & 1;
    v120 = 0LL;
    v112 = v110 | _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12)) & 0xFFFF23FE;
    v113 = *(_QWORD *)(v3 + 184);
    HIDWORD(v120) = v112 | 0x2000;
    *(_OWORD *)(v113 + 16 * v111) = v120;
    v114 = (unsigned int)++*(_DWORD *)(v3 + 192);
    LODWORD(v113) = *(_DWORD *)(v3 + 200) & 1;
    v120 = 0LL;
    v115 = v113 | _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12)) & 0xFFFF23FE;
    v116 = *(_QWORD *)(v3 + 184);
    HIDWORD(v120) = v115 | 0x2000;
    *(_OWORD *)(v116 + 16 * v114) = v120;
    ++*(_DWORD *)(v3 + 192);
  }
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v3 + 192);
  *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16LL * *(unsigned int *)(v3 + 192)) = 0LL;
  v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  v54 = v129;
  *(_BYTE *)(v3 + 104) = v53;
  ++*(_DWORD *)(v54 + 120);
  *(_DWORD *)(v54 + 112) += *(_DWORD *)(a1 + 40);
  v55 = *(_BYTE *)(v3 + 104);
  ++*(_DWORD *)(v3 + 356);
  *(_DWORD *)(v3 + 332) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v55);
  *(_BYTE *)(v123 + 12) ^= 1u;
  _InterlockedOr(v118, 0);
  TR_AddTRBRangeToSecureTransferRing(
    v3,
    a1 + 24,
    *(_QWORD *)(a1 + 112),
    *(_DWORD *)(a1 + 104),
    *(_DWORD *)(a1 + 120),
    a1 + 128);
  LOBYTE(v56) = *(_BYTE *)(v3 + 288) == 0;
  result = *(_QWORD *)(v3 + 56);
  v58 = *(unsigned int *)(v3 + 64);
  v59 = *(_QWORD *)(result + 16);
  v60 = *(unsigned int *)(result + 144);
  if ( *(_QWORD *)(v59 + 160) )
  {
    v61 = ((_DWORD)v58 << 16) | (unsigned __int8)v60;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0uqq_EtwWriteTransfer(v56, v60, v58, *(unsigned __int8 *)(v59 + 135), v60, v58);
    result = *(_QWORD *)(v59 + 160);
    *(_DWORD *)result = v61;
    _InterlockedOr(v118, 0);
  }
  else if ( !*(_BYTE *)(v3 + 288) )
  {
    return XilUsbDevice_SendRequestToRingDoorbell((__int64 *)(v59 + 608), v60, v58);
  }
  return result;
}
