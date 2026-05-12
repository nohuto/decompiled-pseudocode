/*
 * XREFs of NvmeNamespaceExecuteScsiSrbExComplete @ 0x140100E50
 * Callers:
 *     <none>
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x1400059F0 (RaidNtStatusToSrbStatus.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

void __fastcall NvmeNamespaceExecuteScsiSrbExComplete(__int64 a1, __int64 *a2, __int64 a3)
{
  int v5; // edi
  __int64 v6; // rbp
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // edx
  bool v11; // zf
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rsi
  int v17; // ebp
  __int64 v18; // rcx
  bool v19; // zf
  int v20; // ecx
  unsigned int v21; // edx
  bool v22; // zf
  char v23; // al
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r10d
  char v27; // dl
  void **v28; // rcx
  int v29; // eax
  _QWORD *v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rbx
  CCHAR v33; // dl
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  int *v36; // rax
  const EVENT_DESCRIPTOR *v37; // rdx
  unsigned __int64 v38; // rdx
  char v39; // r15
  _BYTE *v40; // r9
  unsigned __int8 v41; // r10
  char v42; // r11
  char v43; // r13
  char v44; // r12
  char *v45; // rbx
  unsigned int v46; // r14d
  unsigned __int64 v47; // rbp
  __int64 v48; // r8
  int v49; // ecx
  char v50; // cl
  char v51; // r8
  _BYTE *v52; // rax
  unsigned int v53; // eax
  char v54; // al
  __int64 v55; // [rsp+20h] [rbp-98h]
  char v56; // [rsp+60h] [rbp-58h]
  unsigned int v57; // [rsp+64h] [rbp-54h]
  GUID v58; // [rsp+68h] [rbp-50h] BYREF

  v5 = 0;
  *(_WORD *)(*a2 + 4260) = *(_WORD *)(a3 + 14);
  v6 = *a2;
  v7 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((v7 >> 9) & 7) != 0 )
  {
    if ( ((v7 >> 9) & 7) != 1 )
    {
      if ( ((v7 >> 9) & 7) == 2 )
      {
        v8 = v7 >> 1;
        if ( (unsigned __int8)v8 != 128
          && (unsigned __int8)v8 != 129
          && (unsigned __int8)v8 != 130
          && (unsigned __int8)v8 != 131
          && (unsigned __int8)v8 != 132 )
        {
          v9 = (unsigned __int8)v8 - 133;
          if ( (unsigned __int8)v8 != 133 )
          {
LABEL_85:
            if ( v9 == 1 )
              goto LABEL_86;
          }
        }
      }
LABEL_94:
      v15 = -1073741435;
      goto LABEL_26;
    }
    v10 = v7 >> 1;
    if ( (unsigned __int8)v10 > 0x80u )
    {
      if ( (unsigned __int8)v10 == 129 )
        goto LABEL_25;
      v14 = (unsigned __int8)v10 - 130;
      if ( (unsigned __int8)v10 != 130 )
        goto LABEL_74;
    }
    else
    {
      if ( (unsigned __int8)v10 == 128 )
        goto LABEL_25;
      if ( (unsigned __int8)v10 <= 0x11u )
      {
        if ( (unsigned __int8)v10 != 17 )
        {
          if ( (unsigned __int8)v10 <= 9u )
          {
            if ( (unsigned __int8)v10 == 9
              || !(_BYTE)v10
              || (unsigned __int8)v10 == 1
              || (unsigned __int8)v10 == 2
              || (unsigned __int8)v10 == 3 )
            {
              goto LABEL_25;
            }
            v12 = (unsigned __int8)v10 - 5;
            v11 = (unsigned __int8)v10 == 5;
LABEL_22:
            if ( v11 )
              goto LABEL_25;
            v13 = v12 - 1;
            if ( !v13 )
              goto LABEL_25;
            v14 = v13 - 1;
            if ( !v14 )
              goto LABEL_25;
LABEL_74:
            v22 = v14 == 1;
LABEL_93:
            if ( !v22 )
              goto LABEL_94;
LABEL_25:
            v15 = -1073741808;
            goto LABEL_26;
          }
          if ( (unsigned __int8)v10 == 10 )
            goto LABEL_25;
          if ( (unsigned __int8)v10 != 11 )
          {
            if ( (unsigned __int8)v10 == 12
              || (unsigned __int8)v10 == 13
              || (unsigned __int8)v10 == 14
              || (unsigned __int8)v10 == 15 )
            {
              goto LABEL_25;
            }
            if ( (unsigned __int8)v10 != 16 )
              goto LABEL_94;
          }
        }
        v15 = -2147483210;
        goto LABEL_26;
      }
      if ( (unsigned __int8)v10 <= 0x1Au )
      {
        switch ( (unsigned __int8)v10 )
        {
          case 0x1Au:
          case 0x12u:
          case 0x13u:
            goto LABEL_46;
          case 0x14u:
            v15 = -1073741800;
            goto LABEL_26;
          case 0x15u:
            goto LABEL_94;
          case 0x16u:
            goto LABEL_46;
        }
        v20 = (unsigned __int8)v10 - 24;
        v19 = (unsigned __int8)v10 == 24;
        goto LABEL_44;
      }
      if ( (unsigned __int8)v10 == 27 )
      {
        v15 = -1073741637;
        goto LABEL_26;
      }
      if ( (unsigned __int8)v10 == 28 )
        goto LABEL_25;
      if ( (unsigned __int8)v10 != 30 )
      {
        v12 = (unsigned __int8)v10 - 31;
        v11 = (unsigned __int8)v10 == 31;
        goto LABEL_22;
      }
    }
LABEL_86:
    v15 = -1073741790;
    goto LABEL_26;
  }
  v21 = v7 >> 1;
  if ( (unsigned __int8)v21 > 0x80u )
  {
    if ( (unsigned __int8)v21 == 129 )
      goto LABEL_25;
    v14 = (unsigned __int8)v21 - 130;
    if ( (unsigned __int8)v21 != 130 )
      goto LABEL_74;
    v15 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v21 == 128 )
      goto LABEL_25;
    if ( (unsigned __int8)v21 <= 0xEu )
    {
      if ( (unsigned __int8)v21 == 14 )
        goto LABEL_25;
      if ( (unsigned __int8)v21 > 7u )
      {
        if ( (unsigned __int8)v21 != 8 && (unsigned __int8)v21 != 9 && (unsigned __int8)v21 != 10 )
        {
          if ( (unsigned __int8)v21 == 11 )
            goto LABEL_25;
          v14 = (unsigned __int8)v21 - 12;
          if ( (unsigned __int8)v21 == 12 )
          {
            v15 = -1073740758;
            goto LABEL_26;
          }
          goto LABEL_74;
        }
      }
      else if ( (unsigned __int8)v21 != 7 )
      {
        if ( !(_BYTE)v21 )
        {
          v15 = 0;
          goto LABEL_26;
        }
        if ( (unsigned __int8)v21 == 1 || (unsigned __int8)v21 == 2 )
          goto LABEL_25;
        if ( (unsigned __int8)v21 == 3 || (unsigned __int8)v21 == 4 )
          goto LABEL_94;
        v20 = (unsigned __int8)v21 - 5;
        v19 = (unsigned __int8)v21 == 5;
LABEL_44:
        if ( !v19 && v20 != 1 )
          goto LABEL_94;
        goto LABEL_46;
      }
LABEL_76:
      v15 = -1073741248;
      goto LABEL_26;
    }
    if ( (unsigned __int8)v21 <= 0x16u )
    {
      if ( (unsigned __int8)v21 == 22
        || (unsigned __int8)v21 == 15
        || (unsigned __int8)v21 == 16
        || (unsigned __int8)v21 == 17
        || (unsigned __int8)v21 == 18
        || (unsigned __int8)v21 == 19 )
      {
        goto LABEL_25;
      }
      v9 = (unsigned __int8)v21 - 20;
      if ( (unsigned __int8)v21 != 20 )
        goto LABEL_85;
LABEL_46:
      v15 = -1073741436;
      goto LABEL_26;
    }
    if ( (unsigned __int8)v21 == 24 )
      goto LABEL_25;
    if ( (unsigned __int8)v21 != 25 && (unsigned __int8)v21 != 26 )
    {
      if ( (unsigned __int8)v21 != 27 )
      {
        if ( (unsigned __int8)v21 == 28 )
          goto LABEL_94;
        v22 = (unsigned __int8)v21 == 30;
        goto LABEL_93;
      }
      goto LABEL_76;
    }
    v15 = -1073741643;
  }
LABEL_26:
  v16 = *(_QWORD *)(v6 + 4184);
  v17 = *(_DWORD *)(v6 + 4256) & 0x20000;
  if ( v15 < 0 )
  {
    *(_DWORD *)(v16 + 48) = v15;
    v18 = 0LL;
  }
  else
  {
    *(_DWORD *)(v16 + 48) = 0;
    v18 = *(unsigned int *)(*a2 + 4248);
  }
  *(_QWORD *)(v16 + 56) = v18;
  v23 = RaidNtStatusToSrbStatus(v15);
  if ( *(char *)(v25 + 3) < 0 )
    v23 |= 0x80u;
  *(_BYTE *)(v25 + 3) = v23;
  if ( (*(_QWORD *)(a1 + 136) & 0x100000000LL) == 0 && (*(_DWORD *)(*a2 + 4256) & 2) != 0 )
  {
    if ( *(_QWORD *)(*a2 + 4160) )
    {
      v26 = *(_DWORD *)(*a2 + 4248);
      if ( v26 )
      {
        if ( (int)v24 >= 0 )
        {
          v27 = *(_BYTE *)(v25 + 2);
          v28 = (void **)(v25 + 24);
          v29 = v27 == 40 ? *(_DWORD *)v28 : *(_DWORD *)(v25 + 12);
          if ( (v29 & 0x40) != 0 )
          {
            v30 = (_QWORD *)(v25 + 64);
            if ( v27 != 40 )
              v30 = (_QWORD *)(v25 + 24);
            if ( *v30 )
            {
              v31 = v27 == 40 ? *(_DWORD *)(v25 + 60) : *(_DWORD *)(v25 + 16);
              if ( v31 >= v26 )
              {
                if ( v27 == 40 )
                  v28 = (void **)(v25 + 64);
                memmove(*v28, *(const void **)(*a2 + 4160), *(unsigned int *)(*a2 + 4248));
              }
            }
          }
        }
        NvmeFreeDmaBuffer(a1, *(_DWORD *)(*a2 + 4248), v24, *(_QWORD *)(*a2 + 4160), *(_QWORD *)(*a2 + 4168));
      }
    }
  }
  v32 = *(_QWORD *)(*a2 + 4216);
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  NvmeControllerReclaimExtendedCommand(a1, a2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v32 + 120));
  if ( !v17 )
  {
    v11 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v16 + 141) = -84;
    if ( v11 )
      goto LABEL_186;
    v58 = 0LL;
    IoGetActivityIdIrp(v16, &v58);
    v35 = *(_QWORD *)(v16 + 184);
    if ( *(_BYTE *)v35 == 14 )
    {
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_186;
      v37 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_185;
    }
    if ( *(_BYTE *)v35 != 15 )
    {
      if ( *(_BYTE *)v35 != 27 )
        goto LABEL_186;
      if ( *(_BYTE *)(v35 + 1) == 7 && !*(_DWORD *)(v35 + 8) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v36 = *(int **)(v16 + 56);
          if ( v36 )
            v5 = *v36;
          LODWORD(v55) = v5;
          McTemplateK0pqd_EtwWriteTransfer(v34, v35, &v58, v16, v55, *(_DWORD *)(v16 + 48));
        }
        goto LABEL_186;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_186;
      v37 = &EventPnpRequestComplete;
LABEL_185:
      LODWORD(v55) = *(_DWORD *)(v16 + 48);
      McTemplateK0pd_EtwWriteTransfer(v34, v37, &v58, v16, v55);
      goto LABEL_186;
    }
    if ( (byte_140171461 & 0x80) == 0 )
      goto LABEL_186;
    v38 = *(_QWORD *)(v35 + 8);
    v39 = 0;
    v40 = 0LL;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    if ( *(_BYTE *)(v38 + 2) == 40 )
    {
      v45 = 0LL;
      v56 = 0;
      if ( *(_DWORD *)(v38 + 20) )
        goto LABEL_186;
      v46 = 0;
      v57 = *(_DWORD *)(v38 + 56);
      if ( !v57 )
        goto LABEL_161;
      while ( 1 )
      {
        v34 = *(unsigned int *)(v38 + 4LL * v46 + 120);
        if ( (unsigned int)v34 >= 0x80 )
        {
          v47 = *(unsigned int *)(v38 + 16);
          if ( (unsigned int)v34 < (unsigned int)v47 )
          {
            v48 = (unsigned int)v34;
            v49 = *(_DWORD *)(v34 + v38) - 64;
            if ( v49 )
            {
              v34 = (unsigned int)(v49 - 1);
              if ( (_DWORD)v34 )
              {
                if ( (_DWORD)v34 == 1 )
                {
                  v34 = v48 + 40;
                  if ( v48 + 40 <= v47 )
                  {
                    if ( *(_DWORD *)(v48 + v38 + 12) )
                      v45 = (char *)(v48 + v38 + 32);
                    v40 = *(_BYTE **)(v48 + v38 + 24);
                    goto LABEL_160;
                  }
                }
              }
              else
              {
                v34 = v48 + 56;
                if ( v48 + 56 <= v47 )
                {
                  v56 = 1;
                  if ( *(_BYTE *)(v48 + v38 + 10) )
                    v45 = (char *)(v48 + v38 + 24);
                  v39 = *(_BYTE *)(v48 + v38 + 8);
                  v40 = *(_BYTE **)(v48 + v38 + 16);
                  v41 = *(_BYTE *)(v48 + v38 + 9);
                }
              }
            }
            else
            {
              v34 = v48 + 40;
              if ( v48 + 40 <= v47 )
              {
                if ( *(_BYTE *)(v48 + v38 + 10) )
                  v45 = (char *)(v48 + v38 + 24);
                v40 = *(_BYTE **)(v48 + v38 + 16);
LABEL_160:
                v41 = *(_BYTE *)(v48 + v38 + 9);
                v39 = *(_BYTE *)(v48 + v38 + 8);
LABEL_161:
                if ( v45 )
                {
                  v50 = *v45;
                  goto LABEL_164;
                }
                goto LABEL_186;
              }
            }
            if ( v56 )
              goto LABEL_161;
          }
        }
        if ( ++v46 >= v57 )
          goto LABEL_161;
      }
    }
    v50 = *(_BYTE *)(v38 + 72);
    v40 = *(_BYTE **)(v38 + 32);
    v41 = *(_BYTE *)(v38 + 11);
    v39 = *(_BYTE *)(v38 + 4);
    if ( *(_BYTE *)(v38 + 2) )
      goto LABEL_186;
LABEL_164:
    LOBYTE(v34) = v50 - 8;
    if ( (v34 & 0x5D) != 0 )
    {
LABEL_186:
      v33 = 1;
      goto LABEL_187;
    }
    v51 = *(_BYTE *)(v38 + 3);
    if ( v51 == 1 || !v40 || !v41 )
      goto LABEL_181;
    LOBYTE(v38) = 0;
    v34 = (unsigned __int64)&v40[v41];
    v52 = v40 + 8;
    if ( (unsigned __int8)((*v40 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v52 > v34 )
        goto LABEL_179;
      v43 = v40[2];
      v42 = v40[1] & 0xF;
      v44 = v40[3];
    }
    else
    {
      if ( (unsigned __int64)v52 > v34 )
        goto LABEL_179;
      v42 = v40[2] & 0xF;
      v53 = v41;
      if ( (unsigned int)(unsigned __int8)v40[7] + 8 <= v41 )
        v53 = (unsigned __int8)v40[7] + 8;
      v34 = (unsigned __int64)(v40 + 13);
      v38 = (unsigned __int64)&v40[v53];
      if ( (unsigned __int64)(v40 + 13) <= v38 )
        v43 = v40[12];
      if ( (unsigned __int64)(v40 + 14) <= v38 )
        v44 = *(_BYTE *)v34;
    }
    LOBYTE(v38) = 1;
LABEL_179:
    if ( (_BYTE)v38 )
    {
      LOBYTE(v5) = v43;
      v54 = v44;
LABEL_182:
      LODWORD(v55) = *(_DWORD *)(v16 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v34, v38, &v58, v16, v55, v51, v39, v42, v5, v54, v16);
      goto LABEL_186;
    }
LABEL_181:
    v42 = 0;
    v54 = 0;
    goto LABEL_182;
  }
  v33 = 0;
LABEL_187:
  IofCompleteRequest((PIRP)v16, v33);
}
