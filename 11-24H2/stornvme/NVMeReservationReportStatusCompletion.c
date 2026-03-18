/*
 * XREFs of NVMeReservationReportStatusCompletion @ 0x140024370
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     GetScsiReservationType @ 0x140020354 (GetScsiReservationType.c)
 *     NVMeReservationReportStatus @ 0x140024174 (NVMeReservationReportStatus.c)
 *     memmove @ 0x1400311C0 (memmove.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeReservationReportStatusCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int *v7; // r10
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rbx
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // edx
  int v14; // r12d
  unsigned int v15; // r14d
  char v16; // di
  __int64 v17; // r8
  char v18; // r15
  _BYTE *v19; // r10
  char v20; // r14
  _BYTE *v21; // r11
  __int64 v22; // r12
  char v23; // r9
  char v24; // cl
  char v25; // al
  char v26; // al
  __int64 v27; // r8
  __int64 v28; // r10
  __int64 v29; // r11
  __int64 v30; // rax
  char v31; // cl
  char v32; // al
  char ScsiReservationType; // al
  int v34; // r12d
  char v35; // al
  _BYTE *v36; // r8
  __int16 v37; // r11
  char v38; // al
  unsigned __int64 v39; // rcx
  int v40; // r12d
  __int64 v41; // rdx
  char *v42; // rbx
  __int64 v43; // rcx
  char v44; // al
  char *v45; // rbx
  __int64 v46; // rcx
  char v47; // al
  void *SrbDataBuffer; // r12
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // [rsp+34h] [rbp-1Ch]
  unsigned __int16 v52; // [rsp+3Ah] [rbp-16h]
  __int64 v53; // [rsp+48h] [rbp-8h]
  unsigned int *v55; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int16 v56; // [rsp+A8h] [rbp+58h]

  v3 = a2;
  result = GetSrbExtension(a2);
  v53 = result;
  v8 = result;
  if ( !v6 || (result = 510LL, (*(_WORD *)(v6 + 14) & 0x1FE) != 0) )
  {
    *(_BYTE *)(v5 + 3) = 4;
    goto LABEL_59;
  }
  v9 = (*(_BYTE *)(a1 + 4024) & 8) == 0;
  v10 = *(_QWORD *)(v8 + 4160);
  v11 = *(_DWORD *)(v8 + 4200);
  v52 = HIWORD(v11);
  v56 = *(_WORD *)(v10 + 5);
  result = v56;
  if ( v9 )
  {
    result = (unsigned int)v56 + 1;
    v12 = 24 * result;
  }
  else
  {
    v12 = (v56 + 1) << 6;
  }
  if ( *(_DWORD *)(v8 + 4208) < v12 )
  {
    result = NVMeReservationReportStatus(a1, v3, v11, SHIWORD(v11), v12);
    v7 = 0LL;
    if ( !(_DWORD)result )
    {
      result = ProcessCommand(a1, v3);
LABEL_9:
      v7 = 0LL;
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  if ( (_BYTE)v11 )
  {
    v13 = (unsigned __int8)v11 - ((_DWORD)v7 + 1);
    if ( v13 )
    {
      if ( v13 != 2 )
      {
        *(_BYTE *)(v3 + 3) = 6;
        goto LABEL_59;
      }
      v14 = 32 * v56;
      v15 = v14 + 8;
      v51 = v14 + 8;
      result = StorPortExtendedFunction(0LL, a1, (unsigned int)(v14 + 8), 1701672526LL);
      v7 = 0LL;
      if ( (_DWORD)result )
      {
LABEL_15:
        *(_BYTE *)(v3 + 3) = 38;
        goto LABEL_59;
      }
      memset(0LL, 0, v15 & 0xFFFFFFFC);
      v7 = 0LL;
      MEMORY[3] = *(_BYTE *)v10;
      MEMORY[2] = *(_BYTE *)(v10 + 1);
      MEMORY[1] = *(_BYTE *)(v10 + 2);
      MEMORY[0] = *(_BYTE *)(v10 + 3);
      MEMORY[6] = BYTE1(v14);
      MEMORY[5] = BYTE2(v14);
      MEMORY[4] = HIBYTE(v14);
      MEMORY[7] = v14;
      if ( v14 )
      {
        LODWORD(v55) = 8;
        if ( v56 )
        {
          v16 = BYTE3(v55);
          v17 = 31LL;
          v18 = BYTE2(v55);
          v19 = (_BYTE *)(v10 + 74);
          v20 = BYTE1(v55);
          v21 = (_BYTE *)(v10 + 42);
          v22 = v56;
          v23 = 15;
          do
          {
            if ( (*(_BYTE *)(a1 + 4024) & 8) != 0 )
            {
              *(_BYTE *)(v17 - 16) = *(v19 - 2);
              *(_BYTE *)(v17 - 17) = *(v19 - 1);
              *(_BYTE *)(v17 - 18) = *v19;
              *(_BYTE *)(v17 - 19) = v19[1];
              *(_BYTE *)(v17 - 20) = v19[2];
              *(_BYTE *)(v17 - 21) = v19[3];
              *(_BYTE *)(v17 - 22) = v19[4];
              *(_BYTE *)(v17 - 23) = v19[5];
              v31 = *(_BYTE *)(v17 - 11) | 2;
              *(_BYTE *)(v17 - 11) = v31;
              v32 = *(v19 - 8) ^ v31;
              *(_BYTE *)(v17 - 10) &= v23;
              *(_BYTE *)(v17 - 11) = v31 ^ v32 & 1;
              ScsiReservationType = GetScsiReservationType(*(unsigned __int8 *)(v10 + 4));
              *(_BYTE *)(v27 - 10) = v23 & ScsiReservationType;
              *(_BYTE *)(v27 - 4) = *(_BYTE *)(v28 - 10);
              *(_BYTE *)(v27 - 5) = *(_BYTE *)(v28 - 9);
              *(_BYTE *)v27 = 8;
              *(_BYTE *)(v27 - 1) = v20;
              *(_BYTE *)(v27 - 2) = v18;
              *(_BYTE *)(v27 - 3) = v16;
              v30 = *(_QWORD *)(v28 + 6);
            }
            else
            {
              *(_BYTE *)(v17 - 16) = *(v21 - 2);
              *(_BYTE *)(v17 - 17) = *(v21 - 1);
              *(_BYTE *)(v17 - 18) = *v21;
              *(_BYTE *)(v17 - 19) = v21[1];
              *(_BYTE *)(v17 - 20) = v21[2];
              *(_BYTE *)(v17 - 21) = v21[3];
              *(_BYTE *)(v17 - 22) = v21[4];
              *(_BYTE *)(v17 - 23) = v21[5];
              v24 = *(_BYTE *)(v17 - 11) | 2;
              *(_BYTE *)(v17 - 11) = v24;
              v25 = *(v21 - 16) ^ v24;
              *(_BYTE *)(v17 - 10) &= v23;
              *(_BYTE *)(v17 - 11) = v24 ^ v25 & 1;
              v26 = GetScsiReservationType(*(unsigned __int8 *)(v10 + 4));
              *(_BYTE *)(v27 - 10) = v23 & v26;
              *(_BYTE *)(v27 - 4) = *(_BYTE *)(v29 - 18);
              *(_BYTE *)(v27 - 5) = *(_BYTE *)(v29 - 17);
              *(_BYTE *)v27 = 8;
              *(_BYTE *)(v27 - 1) = v20;
              *(_BYTE *)(v27 - 2) = v18;
              *(_BYTE *)(v27 - 3) = v16;
              v30 = *(_QWORD *)(v29 - 10);
            }
            *(_QWORD *)(v27 + 1) = v30;
            v21 = (_BYTE *)(v29 + 24);
            v17 = v27 + 32;
            v19 = (_BYTE *)(v28 + 64);
            --v22;
          }
          while ( v22 );
          v8 = v53;
          v15 = v51;
          v3 = a2;
          goto LABEL_47;
        }
      }
    }
    else
    {
      LOBYTE(v55) = *(_BYTE *)(v10 + 4);
      v34 = (_BYTE)v55 != 0 ? 0x10 : 0;
      v15 = v34 + 8;
      result = StorPortExtendedFunction(0LL, a1, (unsigned int)(v34 + 8), 1701672526LL);
      v7 = 0LL;
      if ( (_DWORD)result )
        goto LABEL_15;
      memset(0LL, 0, v15 & 0xFFFFFFFC);
      v7 = 0LL;
      MEMORY[3] = *(_BYTE *)v10;
      MEMORY[2] = *(_BYTE *)(v10 + 1);
      MEMORY[1] = *(_BYTE *)(v10 + 2);
      MEMORY[0] = *(_BYTE *)(v10 + 3);
      MEMORY[6] = BYTE1(v34);
      MEMORY[5] = BYTE2(v34);
      MEMORY[4] = HIBYTE(v34);
      MEMORY[7] = v34;
      if ( (_BYTE)v55 )
      {
        v35 = GetScsiReservationType(*(unsigned __int8 *)(v10 + 4));
        v37 = (_WORD)v7 + 1;
        v36[21] = v35 & 0xF;
        if ( (unsigned __int8)(*(_BYTE *)(v10 + 4) - 5) > (unsigned __int8)((_BYTE)v7 + 1) )
        {
          while ( 1 )
          {
            if ( (unsigned __int16)v7 >= v56 )
              goto LABEL_47;
            if ( (*(_BYTE *)(a1 + 4024) & 8) != 0 )
            {
              v39 = (unsigned __int64)(unsigned __int16)v7 << 6;
              if ( ((unsigned __int8)v37 & *(_BYTE *)(v39 + v10 + 66)) != 0 )
              {
                v36[15] = *(_BYTE *)(v39 + v10 + 72);
                v36[14] = *(_BYTE *)(v39 + v10 + 73);
                v36[13] = *(_BYTE *)(v39 + v10 + 74);
                v36[12] = *(_BYTE *)(v39 + v10 + 75);
                v36[11] = *(_BYTE *)(v39 + v10 + 76);
                v36[10] = *(_BYTE *)(v39 + v10 + 77);
                v36[9] = *(_BYTE *)(v39 + v10 + 78);
                v38 = *(_BYTE *)(v39 + v10 + 79);
                goto LABEL_31;
              }
            }
            else if ( ((unsigned __int8)v37 & *(_BYTE *)(v10 + 24LL * (unsigned __int16)v7 + 26)) != 0 )
            {
              v36[15] = *(_BYTE *)(v10 + 24LL * (unsigned __int16)v7 + 40);
              v36[14] = *(_BYTE *)(v10 + 24LL * (unsigned __int16)v7 + 41);
              v36[13] = *(_BYTE *)(v10 + 24LL * (unsigned __int16)v7 + 42);
              v36[12] = *(_BYTE *)(v10 + 24LL * (unsigned __int16)v7 + 43);
              v36[11] = *(_BYTE *)(v10 + 24LL * (unsigned __int16)v7 + 44);
              v36[10] = *(_BYTE *)(v10 + 24LL * (unsigned __int16)v7 + 45);
              v36[9] = *(_BYTE *)(v10 + 24LL * (unsigned __int16)v7 + 46);
              v38 = *(_BYTE *)(v10 + 24LL * (unsigned __int16)v7 + 47);
LABEL_31:
              v36[8] = v38;
              goto LABEL_47;
            }
            LOWORD(v7) = v37 + (_WORD)v7;
          }
        }
        *((_QWORD *)v36 + 1) = v7;
      }
    }
  }
  else
  {
    v40 = 8 * v56;
    v15 = v40 + 8;
    result = StorPortExtendedFunction(0LL, a1, (unsigned int)(v40 + 8), 1701672526LL);
    v7 = 0LL;
    if ( (_DWORD)result )
      goto LABEL_15;
    if ( v15 >> 2 )
    {
      memset(0LL, 0, 4LL * (v15 >> 2));
      v7 = 0LL;
    }
    MEMORY[3] = *(_BYTE *)v10;
    MEMORY[2] = *(_BYTE *)(v10 + 1);
    MEMORY[1] = *(_BYTE *)(v10 + 2);
    MEMORY[0] = *(_BYTE *)(v10 + 3);
    MEMORY[6] = BYTE1(v40);
    MEMORY[5] = BYTE2(v40);
    MEMORY[4] = HIBYTE(v40);
    MEMORY[7] = v40;
    if ( v40 && v56 )
    {
      v41 = v56;
      if ( (*(_BYTE *)(a1 + 4024) & 8) != 0 )
      {
        v45 = (char *)(v10 + 74);
        v46 = 14LL;
        do
        {
          *(_BYTE *)(v46 + 1) = *(v45 - 2);
          *(_BYTE *)v46 = *(v45 - 1);
          v46 += 8LL;
          v47 = *v45;
          v45 += 64;
          *(_BYTE *)(v46 - 9) = v47;
          *(_BYTE *)(v46 - 10) = *(v45 - 63);
          *(_BYTE *)(v46 - 11) = *(v45 - 62);
          *(_BYTE *)(v46 - 12) = *(v45 - 61);
          *(_BYTE *)(v46 - 13) = *(v45 - 60);
          *(_BYTE *)(v46 - 14) = *(v45 - 59);
          --v41;
        }
        while ( v41 );
      }
      else
      {
        v42 = (char *)(v10 + 42);
        v43 = 14LL;
        do
        {
          *(_BYTE *)(v43 + 1) = *(v42 - 2);
          *(_BYTE *)v43 = *(v42 - 1);
          v43 += 8LL;
          v44 = *v42;
          v42 += 24;
          *(_BYTE *)(v43 - 9) = v44;
          *(_BYTE *)(v43 - 10) = *(v42 - 23);
          *(_BYTE *)(v43 - 11) = *(v42 - 22);
          *(_BYTE *)(v43 - 12) = *(v42 - 21);
          *(_BYTE *)(v43 - 13) = *(v42 - 20);
          *(_BYTE *)(v43 - 14) = *(v42 - 19);
          --v41;
        }
        while ( v41 );
      }
LABEL_47:
      v7 = 0LL;
    }
  }
  v55 = v7;
  SrbDataBuffer = (void *)GetSrbDataBuffer(v3, &v55);
  result = (__int64)v55;
  v49 = *v55;
  if ( *v55 >= v52 )
  {
    if ( (v49 & 3) != 0 )
    {
      if ( v49 )
        memset(SrbDataBuffer, 0, *v55);
    }
    else
    {
      v50 = v49 >> 2;
      if ( v50 )
        memset(SrbDataBuffer, 0, 4LL * v50);
    }
    if ( v15 >= v52 )
      v15 = v52;
    result = (__int64)memmove(SrbDataBuffer, 0LL, v15);
    *(_BYTE *)(v3 + 3) = 1;
    *(_BYTE *)(v8 + 4225) |= 8u;
    goto LABEL_9;
  }
  *(_BYTE *)(v3 + 3) = 6;
LABEL_59:
  *(_BYTE *)(v8 + 4225) |= 8u;
LABEL_60:
  if ( (*(_BYTE *)(v8 + 4225) & 8) != 0 )
  {
    if ( *(unsigned int **)(v8 + 4160) != v7 )
    {
      result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(v8 + 4208), (__int64 *)(v8 + 4160), *(_QWORD *)(v8 + 4168));
      v7 = 0LL;
    }
    *(_QWORD *)(v8 + 4160) = v7;
    *(_DWORD *)(v8 + 4208) = (_DWORD)v7;
  }
  return result;
}
