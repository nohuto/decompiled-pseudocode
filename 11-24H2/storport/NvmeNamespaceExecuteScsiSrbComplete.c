/*
 * XREFs of NvmeNamespaceExecuteScsiSrbComplete @ 0x140100360
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

void __fastcall NvmeNamespaceExecuteScsiSrbComplete(__int64 a1, __int64 *a2, __int64 a3)
{
  int v5; // edi
  __int64 v6; // rsi
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
  __int64 v17; // rcx
  bool v18; // zf
  int v19; // ecx
  unsigned int v20; // edx
  bool v21; // zf
  char v22; // al
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // dl
  void **v26; // rcx
  int v27; // eax
  __int64 v28; // rbx
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  int *v31; // rax
  const EVENT_DESCRIPTOR *v32; // rdx
  unsigned __int64 v33; // rdx
  char v34; // r15
  _BYTE *v35; // r9
  unsigned __int8 v36; // r10
  char v37; // r11
  char v38; // r13
  char v39; // r12
  char *v40; // rbx
  unsigned int v41; // r14d
  unsigned __int64 v42; // rbp
  __int64 v43; // r8
  int v44; // ecx
  char v45; // cl
  char v46; // r8
  _BYTE *v47; // rax
  unsigned int v48; // eax
  char v49; // al
  __int64 v50; // [rsp+20h] [rbp-98h]
  char v51; // [rsp+60h] [rbp-58h]
  unsigned int v52; // [rsp+64h] [rbp-54h]
  GUID v53; // [rsp+68h] [rbp-50h] BYREF

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
            v21 = v14 == 1;
LABEL_93:
            if ( !v21 )
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
        v19 = (unsigned __int8)v10 - 24;
        v18 = (unsigned __int8)v10 == 24;
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
  v20 = v7 >> 1;
  if ( (unsigned __int8)v20 > 0x80u )
  {
    if ( (unsigned __int8)v20 == 129 )
      goto LABEL_25;
    v14 = (unsigned __int8)v20 - 130;
    if ( (unsigned __int8)v20 != 130 )
      goto LABEL_74;
    v15 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v20 == 128 )
      goto LABEL_25;
    if ( (unsigned __int8)v20 <= 0xEu )
    {
      if ( (unsigned __int8)v20 == 14 )
        goto LABEL_25;
      if ( (unsigned __int8)v20 > 7u )
      {
        if ( (unsigned __int8)v20 != 8 && (unsigned __int8)v20 != 9 && (unsigned __int8)v20 != 10 )
        {
          if ( (unsigned __int8)v20 == 11 )
            goto LABEL_25;
          v14 = (unsigned __int8)v20 - 12;
          if ( (unsigned __int8)v20 == 12 )
          {
            v15 = -1073740758;
            goto LABEL_26;
          }
          goto LABEL_74;
        }
      }
      else if ( (unsigned __int8)v20 != 7 )
      {
        if ( !(_BYTE)v20 )
        {
          v15 = 0;
          goto LABEL_26;
        }
        if ( (unsigned __int8)v20 == 1 || (unsigned __int8)v20 == 2 )
          goto LABEL_25;
        if ( (unsigned __int8)v20 == 3 || (unsigned __int8)v20 == 4 )
          goto LABEL_94;
        v19 = (unsigned __int8)v20 - 5;
        v18 = (unsigned __int8)v20 == 5;
LABEL_44:
        if ( !v18 && v19 != 1 )
          goto LABEL_94;
        goto LABEL_46;
      }
LABEL_76:
      v15 = -1073741248;
      goto LABEL_26;
    }
    if ( (unsigned __int8)v20 <= 0x16u )
    {
      if ( (unsigned __int8)v20 == 22
        || (unsigned __int8)v20 == 15
        || (unsigned __int8)v20 == 16
        || (unsigned __int8)v20 == 17
        || (unsigned __int8)v20 == 18
        || (unsigned __int8)v20 == 19 )
      {
        goto LABEL_25;
      }
      v9 = (unsigned __int8)v20 - 20;
      if ( (unsigned __int8)v20 != 20 )
        goto LABEL_85;
LABEL_46:
      v15 = -1073741436;
      goto LABEL_26;
    }
    if ( (unsigned __int8)v20 == 24 )
      goto LABEL_25;
    if ( (unsigned __int8)v20 != 25 && (unsigned __int8)v20 != 26 )
    {
      if ( (unsigned __int8)v20 != 27 )
      {
        if ( (unsigned __int8)v20 == 28 )
          goto LABEL_94;
        v21 = (unsigned __int8)v20 == 30;
        goto LABEL_93;
      }
      goto LABEL_76;
    }
    v15 = -1073741643;
  }
LABEL_26:
  v16 = *(_QWORD *)(v6 + 4184);
  if ( v15 < 0 )
  {
    *(_DWORD *)(v16 + 48) = v15;
    v17 = 0LL;
  }
  else
  {
    *(_DWORD *)(v16 + 48) = 0;
    v17 = *(unsigned int *)(*a2 + 4248);
  }
  *(_QWORD *)(v16 + 56) = v17;
  v22 = RaidNtStatusToSrbStatus(v15);
  if ( *(char *)(v24 + 3) < 0 )
    v22 |= 0x80u;
  *(_BYTE *)(v24 + 3) = v22;
  if ( (*(_QWORD *)(a1 + 136) & 0x100000000LL) == 0
    && (*(_DWORD *)(*a2 + 4256) & 2) != 0
    && *(_QWORD *)(*a2 + 4160)
    && *(_DWORD *)(*a2 + 4248) )
  {
    if ( (int)v23 >= 0 )
    {
      v25 = *(_BYTE *)(v24 + 2);
      v26 = (void **)(v24 + 24);
      v27 = v25 == 40 ? *(_DWORD *)v26 : *(_DWORD *)(v24 + 12);
      if ( (v27 & 0x40) != 0 )
      {
        if ( v25 == 40 )
          v26 = (void **)(v24 + 64);
        memmove(*v26, *(const void **)(*a2 + 4160), *(unsigned int *)(*a2 + 4248));
      }
    }
    NvmeFreeDmaBuffer(a1, *(_DWORD *)(*a2 + 4248), v23, *(_QWORD *)(*a2 + 4160), *(_QWORD *)(*a2 + 4168));
  }
  v28 = *(_QWORD *)(*a2 + 4216);
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  NvmeControllerReclaimExtendedCommand(a1, a2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v28 + 120));
  v11 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v16 + 141) = -84;
  if ( v11 )
    goto LABEL_177;
  v53 = 0LL;
  IoGetActivityIdIrp(v16, &v53);
  v30 = *(_QWORD *)(v16 + 184);
  if ( *(_BYTE *)v30 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_177;
    v32 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_176;
  }
  if ( *(_BYTE *)v30 != 15 )
  {
    if ( *(_BYTE *)v30 != 27 )
      goto LABEL_177;
    if ( *(_BYTE *)(v30 + 1) == 7 && !*(_DWORD *)(v30 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v31 = *(int **)(v16 + 56);
        if ( v31 )
          v5 = *v31;
        LODWORD(v50) = v5;
        McTemplateK0pqd_EtwWriteTransfer(v29, v30, &v53, v16, v50, *(_DWORD *)(v16 + 48));
      }
      goto LABEL_177;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_177;
    v32 = &EventPnpRequestComplete;
LABEL_176:
    LODWORD(v50) = *(_DWORD *)(v16 + 48);
    McTemplateK0pd_EtwWriteTransfer(v29, v32, &v53, v16, v50);
    goto LABEL_177;
  }
  if ( (byte_140171461 & 0x80) == 0 )
    goto LABEL_177;
  v33 = *(_QWORD *)(v30 + 8);
  v34 = 0;
  v35 = 0LL;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  if ( *(_BYTE *)(v33 + 2) != 40 )
  {
    v45 = *(_BYTE *)(v33 + 72);
    v35 = *(_BYTE **)(v33 + 32);
    v36 = *(_BYTE *)(v33 + 11);
    v34 = *(_BYTE *)(v33 + 4);
    if ( *(_BYTE *)(v33 + 2) )
      goto LABEL_177;
LABEL_155:
    LOBYTE(v29) = v45 - 8;
    if ( (v29 & 0x5D) != 0 )
      goto LABEL_177;
    v46 = *(_BYTE *)(v33 + 3);
    if ( v46 == 1 || !v35 || !v36 )
      goto LABEL_172;
    LOBYTE(v33) = 0;
    v29 = (unsigned __int64)&v35[v36];
    v47 = v35 + 8;
    if ( (unsigned __int8)((*v35 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v47 > v29 )
        goto LABEL_170;
      v38 = v35[2];
      v37 = v35[1] & 0xF;
      v39 = v35[3];
    }
    else
    {
      if ( (unsigned __int64)v47 > v29 )
        goto LABEL_170;
      v37 = v35[2] & 0xF;
      v48 = v36;
      if ( (unsigned int)(unsigned __int8)v35[7] + 8 <= v36 )
        v48 = (unsigned __int8)v35[7] + 8;
      v29 = (unsigned __int64)(v35 + 13);
      v33 = (unsigned __int64)&v35[v48];
      if ( (unsigned __int64)(v35 + 13) <= v33 )
        v38 = v35[12];
      if ( (unsigned __int64)(v35 + 14) <= v33 )
        v39 = *(_BYTE *)v29;
    }
    LOBYTE(v33) = 1;
LABEL_170:
    if ( (_BYTE)v33 )
    {
      LOBYTE(v5) = v38;
      v49 = v39;
LABEL_173:
      LODWORD(v50) = *(_DWORD *)(v16 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v29, v33, &v53, v16, v50, v46, v34, v37, v5, v49, v16);
      goto LABEL_177;
    }
LABEL_172:
    v37 = 0;
    v49 = 0;
    goto LABEL_173;
  }
  v40 = 0LL;
  v51 = 0;
  if ( *(_DWORD *)(v33 + 20) )
    goto LABEL_177;
  v41 = 0;
  v52 = *(_DWORD *)(v33 + 56);
  if ( !v52 )
    goto LABEL_152;
  while ( 1 )
  {
    v29 = *(unsigned int *)(v33 + 4LL * v41 + 120);
    if ( (unsigned int)v29 >= 0x80 )
    {
      v42 = *(unsigned int *)(v33 + 16);
      if ( (unsigned int)v29 < (unsigned int)v42 )
        break;
    }
LABEL_146:
    if ( ++v41 >= v52 )
      goto LABEL_152;
  }
  v43 = (unsigned int)v29;
  v44 = *(_DWORD *)(v29 + v33) - 64;
  if ( v44 )
  {
    v29 = (unsigned int)(v44 - 1);
    if ( (_DWORD)v29 )
    {
      if ( (_DWORD)v29 == 1 )
      {
        v29 = v43 + 40;
        if ( v43 + 40 <= v42 )
        {
          if ( *(_DWORD *)(v43 + v33 + 12) )
            v40 = (char *)(v43 + v33 + 32);
          v35 = *(_BYTE **)(v43 + v33 + 24);
          goto LABEL_151;
        }
      }
    }
    else
    {
      v29 = v43 + 56;
      if ( v43 + 56 <= v42 )
      {
        v51 = 1;
        if ( *(_BYTE *)(v43 + v33 + 10) )
          v40 = (char *)(v43 + v33 + 24);
        v34 = *(_BYTE *)(v43 + v33 + 8);
        v35 = *(_BYTE **)(v43 + v33 + 16);
        v36 = *(_BYTE *)(v43 + v33 + 9);
      }
    }
    goto LABEL_145;
  }
  v29 = v43 + 40;
  if ( v43 + 40 > v42 )
  {
LABEL_145:
    if ( v51 )
      goto LABEL_152;
    goto LABEL_146;
  }
  if ( *(_BYTE *)(v43 + v33 + 10) )
    v40 = (char *)(v43 + v33 + 24);
  v35 = *(_BYTE **)(v43 + v33 + 16);
LABEL_151:
  v36 = *(_BYTE *)(v43 + v33 + 9);
  v34 = *(_BYTE *)(v43 + v33 + 8);
LABEL_152:
  if ( v40 )
  {
    v45 = *v40;
    goto LABEL_155;
  }
LABEL_177:
  IofCompleteRequest((PIRP)v16, 1);
}
