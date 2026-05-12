/*
 * XREFs of NvmeAdapterFirmwareGetInfoIoctlCompletion @ 0x1400D2AE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     GetNvmeFirmwareGranularity @ 0x1400CB700 (GetNvmeFirmwareGranularity.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void __fastcall NvmeAdapterFirmwareGetInfoIoctlCompletion(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rcx
  __int16 v7; // ax
  __int64 v8; // rsi
  unsigned int v9; // edx
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  bool v16; // zf
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  int v20; // ebx
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  bool v36; // zf
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  bool v52; // zf
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  __int64 v64; // rax
  _DWORD *v65; // rbx
  unsigned __int64 v66; // rbp
  _BYTE *v67; // r12
  char v68; // dl
  char v69; // al
  unsigned int NvmeFirmwareGranularity; // eax
  unsigned int v71; // r9d
  int v72; // eax
  unsigned int v73; // ecx
  __int64 v74; // rdx
  unsigned int v75; // r10d
  __int64 v76; // r9
  unsigned __int64 v77; // rcx
  __int64 v78; // rdx
  int *v79; // rax
  const EVENT_DESCRIPTOR *v80; // rdx
  __int64 v81; // rdx
  char v82; // bp
  _BYTE *v83; // r9
  unsigned __int8 v84; // r10
  char v85; // r11
  char v86; // r13
  char v87; // r12
  char *v88; // rbx
  unsigned int v89; // r15d
  unsigned __int64 v90; // r14
  __int64 v91; // r8
  int v92; // ecx
  char v93; // cl
  char v94; // r8
  _BYTE *v95; // rax
  char *v96; // r12
  unsigned int v97; // eax
  char v98; // al
  __int64 v99; // [rsp+20h] [rbp-D8h]
  __int64 v100; // [rsp+28h] [rbp-D0h]
  __int64 v101; // [rsp+30h] [rbp-C8h]
  __int64 v102; // [rsp+38h] [rbp-C0h]
  __int64 v103; // [rsp+40h] [rbp-B8h]
  __int64 v104; // [rsp+48h] [rbp-B0h]
  char v105; // [rsp+A0h] [rbp-58h]
  unsigned int v106; // [rsp+A4h] [rbp-54h]
  GUID v107; // [rsp+A8h] [rbp-50h] BYREF

  v3 = 0;
  v5 = *a2;
  if ( a3 )
  {
    v7 = *(_WORD *)(a3 + 14);
  }
  else
  {
    *(_WORD *)(v5 + 4260) = 0;
    *(_WORD *)(*a2 + 4260) &= 0xF1FFu;
    v5 = *a2;
    v7 = *(_WORD *)(*a2 + 4260) & 0xFE01 | 0xC;
  }
  *(_WORD *)(v5 + 4260) = v7;
  v8 = *a2;
  v9 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 0 )
  {
    if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 1 )
    {
      if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) == 2
        && (unsigned __int8)(v9 >> 1) != 128
        && (unsigned __int8)(v9 >> 1) != 129
        && (unsigned __int8)(v9 >> 1) != 130
        && (unsigned __int8)(v9 >> 1) != 131
        && (unsigned __int8)(v9 >> 1) != 132 )
      {
        v10 = (unsigned __int8)(v9 >> 1) - 133;
        if ( (unsigned __int8)(v9 >> 1) != 133 )
        {
LABEL_88:
          if ( v10 == 1 )
            goto LABEL_89;
        }
      }
LABEL_97:
      v20 = -1073741435;
      goto LABEL_29;
    }
    v11 = v9 >> 1;
    v12 = (unsigned __int8)(v9 >> 1);
    if ( v12 > 0x80 )
    {
      v41 = v12 - 129;
      if ( !v41 )
        goto LABEL_28;
      v19 = v41 - 1;
      if ( v19 )
        goto LABEL_77;
    }
    else
    {
      if ( (unsigned __int8)v11 == 128 )
        goto LABEL_28;
      if ( v12 <= 0x11 )
      {
        if ( v12 != 17 )
        {
          if ( v12 <= 9 )
          {
            if ( v12 == 9 )
              goto LABEL_28;
            if ( !(_BYTE)v11 )
              goto LABEL_28;
            v13 = v12 - 1;
            if ( !v13 )
              goto LABEL_28;
            v14 = v13 - 1;
            if ( !v14 )
              goto LABEL_28;
            v15 = v14 - 1;
            if ( !v15 )
              goto LABEL_28;
            v17 = v15 - 2;
            v16 = v17 == 0;
LABEL_25:
            if ( v16 )
              goto LABEL_28;
            v18 = v17 - 1;
            if ( !v18 )
              goto LABEL_28;
            v19 = v18 - 1;
            if ( !v19 )
              goto LABEL_28;
LABEL_77:
            v52 = v19 == 1;
LABEL_96:
            if ( !v52 )
              goto LABEL_97;
LABEL_28:
            v20 = -1073741808;
            goto LABEL_29;
          }
          v25 = v12 - 10;
          if ( !v25 )
            goto LABEL_28;
          v26 = v25 - 1;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( !v27 )
              goto LABEL_28;
            v28 = v27 - 1;
            if ( !v28 )
              goto LABEL_28;
            v29 = v28 - 1;
            if ( !v29 )
              goto LABEL_28;
            v30 = v29 - 1;
            if ( !v30 )
              goto LABEL_28;
            if ( v30 != 1 )
              goto LABEL_97;
          }
        }
        v20 = -2147483210;
        goto LABEL_29;
      }
      if ( v12 <= 0x1A )
      {
        if ( v12 == 26 )
          goto LABEL_49;
        v31 = v12 - 18;
        if ( !v31 )
          goto LABEL_49;
        v32 = v31 - 1;
        if ( !v32 )
          goto LABEL_49;
        v33 = v32 - 1;
        if ( !v33 )
        {
          v20 = -1073741800;
          goto LABEL_29;
        }
        v34 = v33 - 1;
        if ( !v34 )
          goto LABEL_97;
        v35 = v34 - 1;
        if ( !v35 )
          goto LABEL_49;
        v37 = v35 - 2;
        v36 = v37 == 0;
        goto LABEL_47;
      }
      v38 = v12 - 27;
      if ( !v38 )
      {
        v20 = -1073741637;
        goto LABEL_29;
      }
      v39 = v38 - 1;
      if ( !v39 )
        goto LABEL_28;
      v40 = v39 - 2;
      if ( v40 )
      {
        v17 = v40 - 1;
        v16 = v17 == 0;
        goto LABEL_25;
      }
    }
LABEL_89:
    v20 = -1073741790;
    goto LABEL_29;
  }
  v42 = v9 >> 1;
  v43 = (unsigned __int8)(v9 >> 1);
  if ( v43 > 0x80 )
  {
    v63 = v43 - 129;
    if ( !v63 )
      goto LABEL_28;
    v19 = v63 - 1;
    if ( v19 )
      goto LABEL_77;
    v20 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v42 == 128 )
      goto LABEL_28;
    if ( v43 <= 0xE )
    {
      if ( v43 == 14 )
        goto LABEL_28;
      if ( v43 > 7 )
      {
        v48 = v43 - 8;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            v50 = v49 - 1;
            if ( v50 )
            {
              v51 = v50 - 1;
              if ( !v51 )
                goto LABEL_28;
              v19 = v51 - 1;
              if ( !v19 )
              {
                v20 = -1073740758;
                goto LABEL_29;
              }
              goto LABEL_77;
            }
          }
        }
      }
      else if ( v43 != 7 )
      {
        if ( !(_BYTE)v42 )
        {
          v20 = 0;
          goto LABEL_29;
        }
        v44 = v43 - 1;
        if ( !v44 )
          goto LABEL_28;
        v45 = v44 - 1;
        if ( !v45 )
          goto LABEL_28;
        v46 = v45 - 1;
        if ( !v46 )
          goto LABEL_97;
        v47 = v46 - 1;
        if ( !v47 )
          goto LABEL_97;
        v37 = v47 - 1;
        v36 = v37 == 0;
LABEL_47:
        if ( !v36 && v37 != 1 )
          goto LABEL_97;
        goto LABEL_49;
      }
LABEL_79:
      v20 = -1073741248;
      goto LABEL_29;
    }
    if ( v43 <= 0x16 )
    {
      if ( v43 == 22 )
        goto LABEL_28;
      v53 = v43 - 15;
      if ( !v53 )
        goto LABEL_28;
      v54 = v53 - 1;
      if ( !v54 )
        goto LABEL_28;
      v55 = v54 - 1;
      if ( !v55 )
        goto LABEL_28;
      v56 = v55 - 1;
      if ( !v56 )
        goto LABEL_28;
      v57 = v56 - 1;
      if ( !v57 )
        goto LABEL_28;
      v10 = v57 - 1;
      if ( v10 )
        goto LABEL_88;
LABEL_49:
      v20 = -1073741436;
      goto LABEL_29;
    }
    v58 = v43 - 24;
    if ( !v58 )
      goto LABEL_28;
    v59 = v58 - 1;
    if ( v59 )
    {
      v60 = v59 - 1;
      if ( v60 )
      {
        v61 = v60 - 1;
        if ( v61 )
        {
          v62 = v61 - 1;
          if ( !v62 )
            goto LABEL_97;
          v52 = v62 == 2;
          goto LABEL_96;
        }
        goto LABEL_79;
      }
    }
    v20 = -1073741643;
  }
LABEL_29:
  v21 = *(_QWORD *)(v8 + 4224);
  v22 = *(_QWORD *)(v8 + 4184);
  if ( v20 >= 0 )
  {
    v64 = *(_QWORD *)(v22 + 184);
    v65 = *(_DWORD **)(v22 + 24);
    *(_DWORD *)(v22 + 48) = 0;
    v66 = *(unsigned int *)(v64 + 8);
    v67 = *(_BYTE **)(*a2 + 4160);
    memset_0(v65, 0, (unsigned int)v66);
    v68 = *((_BYTE *)v65 + 8);
    *v65 = 56;
    v65[1] = 56;
    *((_BYTE *)v65 + 8) = v68 ^ (v68 ^ (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 256LL) >> 2)) & 1;
    *((_BYTE *)v65 + 9) = (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 260LL) >> 1) & 7;
    *((_BYTE *)v65 + 10) = *v67 & 7;
    v69 = -1;
    if ( ((*v67 >> 4) & 7) != 0 )
      v69 = (*v67 >> 4) & 7;
    *((_BYTE *)v65 + 11) = v69;
    *((_BYTE *)v65 + 12) = 1;
    NvmeFirmwareGranularity = GetNvmeFirmwareGranularity(a1);
    v71 = NvmeFirmwareGranularity;
    if ( NvmeFirmwareGranularity )
    {
      v65[4] = NvmeFirmwareGranularity;
      LODWORD(v23) = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 200LL);
      v72 = v23 - (unsigned int)v23 % NvmeFirmwareGranularity;
      if ( !((unsigned int)v23 % v71) )
        v72 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 200LL);
    }
    else
    {
      v65[4] = 4;
      v72 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 200LL);
    }
    v65[5] = v72;
    v73 = 0;
    v74 = *(_QWORD *)(a1 + 592);
    if ( (*(_BYTE *)(v74 + 260) & 0xE) != 0 )
    {
      while ( 1 )
      {
        v75 = v73 + 1;
        if ( v66 < 32 * (unsigned __int64)(v73 + 1) + 24 )
          break;
        if ( v73 )
          v65[1] += 32;
        v23 = 32LL * v73;
        v76 = v73;
        v65[(unsigned __int64)v23 / 4 + 6] = 32;
        v65[(unsigned __int64)v23 / 4 + 7] = 32;
        LOBYTE(v65[(unsigned __int64)v23 / 4 + 8]) = v73 + 1;
        if ( v73 )
          BYTE1(v65[(unsigned __int64)v23 / 4 + 8]) &= ~1u;
        else
          BYTE1(v65[(unsigned __int64)v23 / 4 + 8]) ^= (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 260LL) ^ BYTE1(v65[(unsigned __int64)v23 / 4 + 8])) & 1;
        ++v73;
        *(_QWORD *)&v65[(unsigned __int64)v23 / 4 + 10] = *(_QWORD *)&v67[8 * v76 + 8];
        v74 = *(_QWORD *)(a1 + 592);
        if ( v75 >= ((*(unsigned __int8 *)(v74 + 260) >> 1) & 7u) )
          goto LABEL_119;
      }
      v65[1] = 32 * ((*(unsigned __int8 *)(v74 + 260) >> 1) & 7) + 24;
      *(_DWORD *)(v22 + 48) = -2147483643;
    }
LABEL_119:
    v24 = (unsigned int)v65[1];
    if ( (unsigned int)v66 < (unsigned int)v24 )
      v24 = (unsigned int)v66;
  }
  else
  {
    StorEtwNvmeControllerEvent(
      a1,
      1,
      2,
      (__int64)L"Failed to retrieve firmware slot information log from controller.",
      L"NVMeStatus",
      v9,
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
    v24 = 0LL;
    *(_DWORD *)(v22 + 48) = v20;
  }
  *(_QWORD *)(v22 + 56) = v24;
  NvmeFreeDmaBuffer(a1, *(_DWORD *)(*a2 + 4248), v23, *(_QWORD *)(*a2 + 4160), *(_QWORD *)(*a2 + 4168));
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  NvmeControllerReclaimExtendedCommand(a1, a2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v21 + 152));
  v16 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v22 + 141) = -84;
  if ( v16 )
    goto LABEL_184;
  v107 = 0LL;
  IoGetActivityIdIrp(v22, &v107);
  v78 = *(_QWORD *)(v22 + 184);
  if ( *(_BYTE *)v78 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_184;
    v80 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_183;
  }
  if ( *(_BYTE *)v78 != 15 )
  {
    if ( *(_BYTE *)v78 != 27 )
      goto LABEL_184;
    if ( *(_BYTE *)(v78 + 1) == 7 && !*(_DWORD *)(v78 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v79 = *(int **)(v22 + 56);
        if ( v79 )
          v3 = *v79;
        LODWORD(v100) = *(_DWORD *)(v22 + 48);
        LODWORD(v99) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v77, v78, &v107, v22, v99, v100);
      }
      goto LABEL_184;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_184;
    v80 = &EventPnpRequestComplete;
LABEL_183:
    LODWORD(v99) = *(_DWORD *)(v22 + 48);
    McTemplateK0pd_EtwWriteTransfer(v77, v80, &v107, v22, v99);
    goto LABEL_184;
  }
  if ( (byte_140171461 & 0x80) == 0 )
    goto LABEL_184;
  v81 = *(_QWORD *)(v78 + 8);
  v82 = 0;
  v83 = 0LL;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  if ( *(_BYTE *)(v81 + 2) != 40 )
  {
    v93 = *(_BYTE *)(v81 + 72);
    v83 = *(_BYTE **)(v81 + 32);
    v84 = *(_BYTE *)(v81 + 11);
    v82 = *(_BYTE *)(v81 + 4);
    if ( *(_BYTE *)(v81 + 2) )
      goto LABEL_184;
LABEL_161:
    LOBYTE(v77) = v93 - 8;
    if ( (v77 & 0x5D) != 0 )
      goto LABEL_184;
    if ( *(_BYTE *)(v81 + 3) == 1 || !v83 || !v84 )
      goto LABEL_179;
    v94 = 0;
    v77 = (unsigned __int64)&v83[v84];
    v95 = v83 + 8;
    if ( (unsigned __int8)((*v83 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v95 > v77 )
        goto LABEL_177;
      v86 = v83[2];
      v85 = v83[1] & 0xF;
      v87 = v83[3];
    }
    else
    {
      if ( (unsigned __int64)v95 > v77 )
        goto LABEL_177;
      v96 = v83 + 13;
      v85 = v83[2] & 0xF;
      v97 = v84;
      if ( (unsigned int)(unsigned __int8)v83[7] + 8 <= v84 )
        v97 = (unsigned __int8)v83[7] + 8;
      v77 = (unsigned __int64)&v83[v97];
      if ( (unsigned __int64)v96 <= v77 )
        v86 = v83[12];
      if ( (unsigned __int64)(v83 + 14) > v77 )
        v87 = 0;
      else
        v87 = *v96;
    }
    v94 = 1;
LABEL_177:
    if ( v94 )
    {
      LOBYTE(v3) = v86;
      v98 = v87;
LABEL_180:
      LOBYTE(v104) = v98;
      LOBYTE(v103) = v3;
      LOBYTE(v102) = v85;
      LOBYTE(v101) = v82;
      LOBYTE(v100) = *(_BYTE *)(v81 + 3);
      LODWORD(v99) = *(_DWORD *)(v22 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v77, v81, &v107, v22, v99, v100, v101, v102, v103, v104, v22);
      goto LABEL_184;
    }
LABEL_179:
    v85 = 0;
    v98 = 0;
    goto LABEL_180;
  }
  v88 = 0LL;
  v105 = 0;
  if ( *(_DWORD *)(v81 + 20) )
    goto LABEL_184;
  v89 = 0;
  v106 = *(_DWORD *)(v81 + 56);
  if ( !v106 )
    goto LABEL_158;
  while ( 1 )
  {
    v77 = *(unsigned int *)(v81 + 4LL * v89 + 120);
    if ( (unsigned int)v77 >= 0x80 )
    {
      v90 = *(unsigned int *)(v81 + 16);
      if ( (unsigned int)v77 < (unsigned int)v90 )
        break;
    }
LABEL_152:
    if ( ++v89 >= v106 )
      goto LABEL_158;
  }
  v91 = (unsigned int)v77;
  v92 = *(_DWORD *)(v77 + v81) - 64;
  if ( v92 )
  {
    v77 = (unsigned int)(v92 - 1);
    if ( (_DWORD)v77 )
    {
      if ( (_DWORD)v77 == 1 )
      {
        v77 = v91 + 40;
        if ( v91 + 40 <= v90 )
        {
          if ( *(_DWORD *)(v91 + v81 + 12) )
            v88 = (char *)(v91 + v81 + 32);
          v83 = *(_BYTE **)(v91 + v81 + 24);
          goto LABEL_157;
        }
      }
    }
    else
    {
      v77 = v91 + 56;
      if ( v91 + 56 <= v90 )
      {
        v105 = 1;
        if ( *(_BYTE *)(v91 + v81 + 10) )
          v88 = (char *)(v91 + v81 + 24);
        v82 = *(_BYTE *)(v91 + v81 + 8);
        v83 = *(_BYTE **)(v91 + v81 + 16);
        v84 = *(_BYTE *)(v91 + v81 + 9);
      }
    }
    goto LABEL_151;
  }
  v77 = v91 + 40;
  if ( v91 + 40 > v90 )
  {
LABEL_151:
    if ( v105 )
      goto LABEL_158;
    goto LABEL_152;
  }
  if ( *(_BYTE *)(v91 + v81 + 10) )
    v88 = (char *)(v91 + v81 + 24);
  v83 = *(_BYTE **)(v91 + v81 + 16);
LABEL_157:
  v84 = *(_BYTE *)(v91 + v81 + 9);
  v82 = *(_BYTE *)(v91 + v81 + 8);
LABEL_158:
  if ( v88 )
  {
    v93 = *v88;
    goto LABEL_161;
  }
LABEL_184:
  IofCompleteRequest((PIRP)v22, 1);
}
