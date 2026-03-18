/*
 * XREFs of NVMeHwBuildIo @ 0x140002520
 * Callers:
 *     <none>
 * Callees:
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 *     IoctlToNVMe @ 0x140003580 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1400062C0 (ProtocolCommandToNVMe.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     ProcessCommandNvmePacket @ 0x14002C8E8 (ProcessCommandNvmePacket.c)
 *     memmove @ 0x1400311C0 (memmove.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

char __fastcall NVMeHwBuildIo(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  _BYTE *v10; // rsi
  unsigned __int8 v11; // r14
  char v12; // r10
  char *v13; // r15
  unsigned int v14; // eax
  unsigned int *v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // esi
  _BYTE *v20; // rsi
  char v21; // r10
  unsigned int v22; // eax
  unsigned int *v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  unsigned __int8 v28; // r9
  char v29; // r8
  char v30; // dl
  int v31; // eax
  int v32; // eax
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // rax
  char v38; // si
  int v39; // esi
  __int64 SrbDataBuffer; // r14
  unsigned __int8 v41; // cl
  __int64 v42; // rcx
  _OWORD *v43; // rcx
  char v44; // si
  int v45; // esi
  __int64 v46; // rax
  __int64 v47; // r14
  _OWORD *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  _DWORD *v51; // rsi
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // eax
  char *v55; // rcx
  unsigned int v56; // eax
  __int128 Src; // [rsp+30h] [rbp-30h] BYREF
  __int16 v58; // [rsp+40h] [rbp-20h]
  void *v59; // [rsp+80h] [rbp+20h] BYREF
  unsigned int *v60; // [rsp+88h] [rbp+28h] BYREF

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  if ( a1 && (*(_DWORD *)(a1 + 4064) & 0x1000) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_63;
  }
  v5 = v4 + 4096;
  *(_OWORD *)v5 = 0LL;
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_OWORD *)(v5 + 32) = 0LL;
  *(_OWORD *)(v5 + 48) = 0LL;
  *(_OWORD *)(v5 + 64) = 0LL;
  *(_OWORD *)(v5 + 80) = 0LL;
  *(_OWORD *)(v5 + 96) = 0LL;
  *(_OWORD *)(v5 + 112) = 0LL;
  *(_QWORD *)(v5 + 128) = 0LL;
  v6 = *(unsigned __int8 *)(a2 + 2);
  if ( (_BYTE)v6 == 40 )
    v7 = *(_DWORD *)(a2 + 20);
  else
    v7 = v6;
  if ( v7 )
  {
    switch ( v7 )
    {
      case 2:
        v27 = *(_DWORD *)(a1 + 24);
        if ( (v27 & 1) == 0 )
        {
          v28 = 37;
          v29 = 5;
          v30 = 8;
          goto LABEL_58;
        }
        if ( (v27 & 0x10) != 0 )
          goto LABEL_59;
        IoctlToNVMe(a1, a2);
        goto LABEL_13;
      case 8:
        goto LABEL_70;
      case 9:
        v32 = *(_DWORD *)(a1 + 24);
        if ( (v32 & 1) == 0 )
        {
          v28 = 37;
          v29 = 5;
          v30 = 8;
          goto LABEL_58;
        }
        if ( (v32 & 0x10) != 0 )
          goto LABEL_59;
        ProtocolCommandToNVMe(a1, a2);
        break;
      case 10:
        v31 = *(_DWORD *)(a1 + 24);
        if ( (v31 & 1) != 0 )
        {
          if ( (v31 & 0x10) != 0 )
          {
LABEL_59:
            v28 = 0;
            v30 = 14;
            v29 = 0;
LABEL_58:
            NVMeSetSenseData(a2, v30, v29, v28);
          }
          else
          {
            ProcessCommandNvmePacket(a1, a2);
          }
        }
        else
        {
          NVMeSetSenseData(a2, 8, 5, 0x25u);
        }
        break;
      case 36:
        if ( (_BYTE)v6 == 40 )
          v33 = *(_BYTE *)(*(unsigned int *)(a2 + 120) + a2 + 8) == 1;
        else
          v33 = *(_BYTE *)(a2 + 4) == 1;
        v38 = 1;
        if ( !v33 )
          v38 = 6;
        *(_BYTE *)(a2 + 3) = v38;
        goto LABEL_13;
      case 38:
        v39 = 0;
        v60 = 0LL;
        v59 = 0LL;
        SrbDataBuffer = GetSrbDataBuffer(a2, &v60);
        if ( !SrbDataBuffer || *v60 < 0x48 || (*(_DWORD *)(a1 + 56) & 0x10) == 0 )
          goto LABEL_103;
        if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 152LL, 1701672526LL) || !v59 )
          goto LABEL_102;
        if ( *(_BYTE *)(a2 + 2) == 40 )
          v41 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
        else
          v41 = *(_BYTE *)(a2 + 7);
        if ( (unsigned int)v41 < *(_DWORD *)(a1 + 224) )
        {
          v42 = *(_QWORD *)(a1 + 8LL * v41 + 1672);
          if ( v42 )
            v39 = *(_DWORD *)(v42 + 16);
        }
        memset(v59, 0, 0x98uLL);
        *(_DWORD *)SrbDataBuffer = 7340288;
        *(_QWORD *)(SrbDataBuffer + 64) = v59;
        *(_WORD *)v59 = *(_WORD *)(a1 + 4);
        *((_WORD *)v59 + 1) = *(_WORD *)(a1 + 6);
        *((_BYTE *)v59 + 4) = *(_BYTE *)(a1 + 8);
        v43 = v59;
        *((_OWORD *)v59 + 1) = *(_OWORD *)(a1 + 32);
        v43[2] = *(_OWORD *)(a1 + 48);
        v43[3] = *(_OWORD *)(a1 + 64);
        v43[4] = *(_OWORD *)(a1 + 80);
        v43[5] = *(_OWORD *)(a1 + 96);
        v43[6] = *(_OWORD *)(a1 + 112);
        v43[7] = *(_OWORD *)(a1 + 128);
        v43[8] = *(_OWORD *)(a1 + 144);
        *((_DWORD *)v43 + 36) = *(_DWORD *)(a1 + 160);
        *((_DWORD *)v59 + 10) &= ~8u;
        *((_QWORD *)v59 + 1) = *(_QWORD *)(a1 + 168);
        *((_DWORD *)v59 + 37) = v39;
LABEL_70:
        *(_BYTE *)(a2 + 3) = 1;
        goto LABEL_13;
      case 39:
        v59 = 0LL;
        v34 = GetSrbDataBuffer(a2, &v59);
        if ( !v34 || *(_DWORD *)v59 < 0x48u )
          goto LABEL_108;
        v36 = *(_QWORD *)(v34 + 64);
        goto LABEL_105;
      case 42:
        v45 = 0;
        v60 = 0LL;
        v59 = 0LL;
        v46 = GetSrbDataBuffer(a2, &v60);
        v47 = v46;
        if ( v46 && *v60 >= 0x20 && *(_DWORD *)(v46 + 8) == 1196246089 )
        {
          if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 152LL, 1701672526LL) || !v59 )
          {
LABEL_102:
            *(_BYTE *)(a2 + 3) = 4;
          }
          else
          {
            memset(v59, 0, 0x98uLL);
            *(_WORD *)v59 = *(_WORD *)(a1 + 4);
            *((_WORD *)v59 + 1) = *(_WORD *)(a1 + 6);
            *((_BYTE *)v59 + 4) = *(_BYTE *)(a1 + 8);
            v48 = v59;
            *((_OWORD *)v59 + 1) = *(_OWORD *)(a1 + 32);
            v48[2] = *(_OWORD *)(a1 + 48);
            v48[3] = *(_OWORD *)(a1 + 64);
            v48[4] = *(_OWORD *)(a1 + 80);
            v48[5] = *(_OWORD *)(a1 + 96);
            v48[6] = *(_OWORD *)(a1 + 112);
            v48[7] = *(_OWORD *)(a1 + 128);
            v48[8] = *(_OWORD *)(a1 + 144);
            *((_DWORD *)v48 + 36) = *(_DWORD *)(a1 + 160);
            *((_DWORD *)v59 + 10) &= ~8u;
            *((_QWORD *)v59 + 1) = *(_QWORD *)(a1 + 168);
            *(_BYTE *)(a2 + 3) = 1;
            if ( *(_WORD *)(v47 + 16) == 1 && *(_DWORD *)(v47 + 20) >= 4u )
            {
              v49 = *(unsigned __int8 *)(v47 + 26);
              if ( (unsigned int)v49 < *(_DWORD *)(a1 + 224) )
              {
                _mm_lfence();
                v50 = *(_QWORD *)(a1 + 8 * v49 + 1672);
                if ( v50 )
                  v45 = *(_DWORD *)(v50 + 16);
              }
              *((_DWORD *)v59 + 37) = v45;
            }
            else
            {
              *(_BYTE *)(a2 + 3) = 6;
            }
            if ( *(_BYTE *)(a2 + 3) == 1 )
            {
              if ( *(_BYTE *)(a2 + 2) == 40 )
                v51 = *(_DWORD **)(a2 + 64);
              else
                v51 = *(_DWORD **)(a2 + 24);
              v52 = *v60;
              if ( (*v60 & 3) != 0 )
              {
                if ( v52 )
                  memset(v51, 0, *v60);
              }
              else
              {
                v53 = v52 >> 2;
                if ( v53 )
                  memset(v51, 0, 4LL * v53);
              }
              *v51 = 24;
              v51[1] = 24;
              v51[2] = 1297105993;
              *((_QWORD *)v51 + 2) = v59;
            }
          }
        }
        else
        {
LABEL_103:
          *(_BYTE *)(a2 + 3) = 6;
        }
        goto LABEL_13;
      case 43:
        v59 = 0LL;
        v37 = GetSrbDataBuffer(a2, &v59);
        if ( v37 && *(_DWORD *)v59 >= 0x18u && *(_DWORD *)(v37 + 8) == 1179468873 )
        {
          v36 = *(_QWORD *)(v37 + 16);
LABEL_105:
          v44 = 1;
          if ( (unsigned int)StorPortExtendedFunction(1LL, a1, v36, v35) )
            v44 = 4;
        }
        else
        {
LABEL_108:
          v44 = 6;
        }
        *(_BYTE *)(a2 + 3) = v44;
        goto LABEL_13;
      default:
        goto LABEL_13;
    }
    goto LABEL_13;
  }
  v8 = *(_DWORD *)(a1 + 24);
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 0x10) == 0 )
    {
      ScsiToNVMe(a1, a2);
      goto LABEL_13;
    }
    Src = 0LL;
    BYTE2(Src) = 0;
    v20 = 0LL;
    v58 = 0;
    v11 = 0;
    *(_BYTE *)(a2 + 3) = 14;
    v21 = 0;
    LOBYTE(Src) = -16;
    BYTE7(Src) = 10;
    v13 = 0LL;
    WORD6(Src) = 0;
    if ( (_BYTE)v6 == 40 && !*(_DWORD *)(a2 + 20) )
    {
      v22 = *(_DWORD *)(a2 + 56);
      if ( v22 )
      {
        v23 = (unsigned int *)(a2 + 120);
        v24 = v22;
        while ( 1 )
        {
          v25 = *v23;
          if ( (unsigned int)v25 < 0x80 || (unsigned int)v25 > *(_DWORD *)(a2 + 16) )
            goto LABEL_44;
          v26 = a2 + v25;
          if ( *(_DWORD *)(a2 + v25) == 64 || *(_DWORD *)(a2 + v25) == 65 )
            break;
          if ( *(_DWORD *)(a2 + v25) == 66 )
          {
            v13 = *(char **)(v26 + 24);
LABEL_133:
            v11 = *(_BYTE *)(v26 + 9);
            v20 = (_BYTE *)(v26 + 8);
            v21 = 1;
          }
LABEL_44:
          ++v23;
          if ( !--v24 )
            goto LABEL_45;
        }
        v13 = *(char **)(v26 + 16);
        goto LABEL_133;
      }
    }
LABEL_45:
    if ( *(_BYTE *)(a2 + 2) )
    {
      if ( !v21 )
        goto LABEL_13;
    }
    else
    {
      v13 = *(char **)(a2 + 32);
      v20 = (_BYTE *)(a2 + 4);
      v11 = *(_BYTE *)(a2 + 11);
    }
    if ( v20 )
      *v20 = 2;
    if ( v13 && v11 )
    {
      v19 = 18;
      if ( v11 > 0x12u )
      {
LABEL_135:
        memmove(v13, &Src, v19);
        *(_BYTE *)(a2 + 3) |= 0x80u;
        if ( v11 > v19 )
        {
          v54 = v11 - v19;
          v55 = &v13[v19];
          if ( (v54 & 3) != 0 )
          {
            if ( v54 )
              memset(v55, 0, v54);
          }
          else
          {
            v56 = v54 >> 2;
            if ( v56 )
              memset(v55, 0, 4LL * v56);
          }
        }
        goto LABEL_13;
      }
LABEL_134:
      v19 = v11;
      goto LABEL_135;
    }
    goto LABEL_13;
  }
  *(_BYTE *)(a2 + 3) = 8;
  Src = 0LL;
  v58 = 0;
  v10 = 0LL;
  v11 = 0;
  LOBYTE(Src) = -16;
  BYTE7(Src) = 10;
  v12 = 0;
  BYTE2(Src) = 5;
  WORD6(Src) = 37;
  v13 = 0LL;
  if ( (_BYTE)v6 == 40 && !*(_DWORD *)(a2 + 20) )
  {
    v14 = *(_DWORD *)(a2 + 56);
    if ( v14 )
    {
      v15 = (unsigned int *)(a2 + 120);
      v16 = v14;
      while ( 1 )
      {
        v17 = *v15;
        if ( (unsigned int)v17 < 0x80 || (unsigned int)v17 > *(_DWORD *)(a2 + 16) )
          goto LABEL_24;
        v18 = a2 + v17;
        if ( *(_DWORD *)(a2 + v17) == 64 || *(_DWORD *)(a2 + v17) == 65 )
          break;
        if ( *(_DWORD *)(a2 + v17) == 66 )
        {
          v13 = *(char **)(v18 + 24);
LABEL_132:
          v11 = *(_BYTE *)(v18 + 9);
          v10 = (_BYTE *)(v18 + 8);
          v12 = 1;
        }
LABEL_24:
        ++v15;
        if ( !--v16 )
          goto LABEL_25;
      }
      v13 = *(char **)(v18 + 16);
      goto LABEL_132;
    }
  }
LABEL_25:
  if ( *(_BYTE *)(a2 + 2) )
  {
    if ( !v12 )
      goto LABEL_13;
  }
  else
  {
    v13 = *(char **)(a2 + 32);
    v10 = (_BYTE *)(a2 + 4);
    v11 = *(_BYTE *)(a2 + 11);
  }
  if ( v10 )
    *v10 = 2;
  if ( v13 && v11 )
  {
    v19 = 18;
    if ( v11 > 0x12u )
      goto LABEL_135;
    goto LABEL_134;
  }
LABEL_13:
  if ( !*(_BYTE *)(a2 + 3) )
    return 1;
LABEL_63:
  StorPortNotification(0LL, a1, a2);
  return 0;
}
