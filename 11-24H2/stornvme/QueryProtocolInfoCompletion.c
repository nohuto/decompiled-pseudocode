/*
 * XREFs of QueryProtocolInfoCompletion @ 0x1400111F0
 * Callers:
 *     <none>
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     ProcessNvmeHealthInfoLog @ 0x140005380 (ProcessNvmeHealthInfoLog.c)
 *     BuildGetLogPageCommand @ 0x1400065E0 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     NVMeControllerSupportsUUIDList @ 0x14000D6E0 (NVMeControllerSupportsUUIDList.c)
 *     memmove @ 0x1400311C0 (memmove.c)
 */

__int16 __fastcall QueryProtocolInfoCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // dl
  __int64 v7; // rbx
  unsigned __int8 *v8; // rdi
  __int64 v9; // r15
  char v10; // bp
  _DWORD *v11; // r13
  __int64 v12; // rsi
  int v13; // ecx
  _DWORD *v14; // rsi
  unsigned __int64 v15; // rax
  const void *v16; // rdx
  const void *v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int v19; // ecx
  unsigned int v20; // ebp
  unsigned int v21; // ebp
  int v22; // edx
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rdx
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // eax
  int v29; // ecx
  int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // r8

  v6 = *(_BYTE *)(a2 + 2);
  if ( v6 == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - (v7 & 0xFFF) + 4096;
  v8 = *(unsigned __int8 **)(v7 + 4200);
  v9 = *(unsigned int *)(v7 + 4208);
  LOBYTE(a4) = 0;
  v10 = 0;
  v11 = 0LL;
  if ( v6 == 40 )
    v12 = *(_QWORD *)(a2 + 64);
  else
    v12 = *(_QWORD *)(a2 + 24);
  v13 = *(_DWORD *)(v12 + 40);
  v14 = (_DWORD *)(v12 + 28);
  LOWORD(v15) = v13 - 2;
  if ( v13 == 2 )
    goto LABEL_14;
  LOWORD(v15) = v13 - 3;
  if ( v13 == 3 )
  {
LABEL_13:
    LOBYTE(a4) = 1;
    goto LABEL_15;
  }
  LOWORD(v15) = v13 - 4;
  if ( v13 == 4 )
  {
LABEL_14:
    v10 = 1;
    goto LABEL_15;
  }
  if ( v13 == 5 )
    goto LABEL_13;
LABEL_15:
  if ( (unsigned int)(v13 - 4) <= 1 )
    v11 = v14;
  if ( !a3 )
    goto LABEL_63;
  if ( *(_BYTE *)(a2 + 3) != 1 )
  {
    if ( v10 )
    {
      if ( v8 )
      {
        LODWORD(v15) = *((_DWORD *)v8 + 1);
        if ( (v15 & 1) == 0 )
        {
          LOWORD(v15) = *(_WORD *)(a3 + 14);
          if ( (v15 & 0xE00) == 0 )
          {
            LOWORD(v15) = v15 & 0x1FE;
            if ( (_WORD)v15 == 4 )
            {
              *(_BYTE *)(a2 + 3) = 1;
              goto LABEL_65;
            }
          }
        }
      }
    }
LABEL_64:
    v14[7] = 0;
    goto LABEL_65;
  }
  if ( !v8 )
  {
    if ( (_BYTE)a4 )
      v14[8] = *(_DWORD *)a3;
    v14[7] = *(_DWORD *)(v7 + 4208);
    LODWORD(v15) = *(_DWORD *)(v7 + 4208);
    if ( (_DWORD)v15 )
    {
      v16 = *(const void **)(v7 + 4160);
      if ( v16 )
      {
        LOWORD(v15) = (unsigned __int16)memmove((char *)v14 + (unsigned int)v14[6] + 8, v16, (unsigned int)v15);
        if ( v10 )
        {
          if ( v14[4] == 2 )
            LOWORD(v15) = ProcessNvmeHealthInfoLog(a1, a2, *(unsigned __int8 **)(v7 + 4160), 13);
        }
      }
    }
    goto LABEL_65;
  }
  if ( !v10
    || (v17 = *(const void **)(v7 + 4160)) == 0LL
    || !(_DWORD)v9
    || (a4 = *((unsigned int *)v8 + 11), LOWORD(v15) = a4 + v9, *((_DWORD *)v8 + 10) < (unsigned int)(a4 + v9))
    || (v18 = *((_QWORD *)v8 + 6)) != 0 && (v15 = *((_QWORD *)v8 + 4) + v9, v18 < v15) )
  {
LABEL_63:
    *(_BYTE *)(a2 + 3) = 4;
    goto LABEL_64;
  }
  LOWORD(v15) = (unsigned __int16)memmove(
                                    (char *)v14 + (unsigned int)v14[6] + a4 + 8,
                                    v17,
                                    *(unsigned int *)(v7 + 4208));
  v19 = *(_DWORD *)(v7 + 4208);
  if ( *((_DWORD *)v8 + 11) )
    v19 += v14[7];
  v14[7] = v19;
  v20 = *((_DWORD *)v8 + 10);
  if ( v20 == v19 )
    goto LABEL_65;
  if ( v20 <= v19 )
  {
    v14[7] = v20;
LABEL_65:
    v31 = *(_QWORD *)(v7 + 4160);
    if ( v31 )
    {
      if ( v8 && *((_DWORD *)v8 + 3) )
        LODWORD(v9) = *((_DWORD *)v8 + 3);
      v15 = *(_QWORD *)(v7 + 4168);
      if ( v7 != -4160 )
      {
        if ( v15 )
        {
          LODWORD(v15) = StorPortExtendedFunction(83LL, a1, v31, (unsigned int)v9);
          if ( !(_DWORD)v15 )
            *(_QWORD *)(v7 + 4160) = 0LL;
        }
      }
    }
    v32 = *(_QWORD *)(v7 + 4200);
    if ( v32 )
    {
      LOWORD(v15) = StorPortExtendedFunction(1LL, a1, v32, a4);
      *(_QWORD *)(v7 + 4200) = 0LL;
    }
    *(_BYTE *)(v7 + 4225) |= 8u;
    *(_QWORD *)(v7 + 4160) = 0LL;
    *(_DWORD *)(v7 + 4208) = 0;
    return v15;
  }
  *(_BYTE *)(v7 + 4225) |= 3u;
  v21 = v20 - v19;
  SrbAssignQueueId(a1, a2);
  v22 = *((_DWORD *)v8 + 11);
  if ( !v22 )
    *((_DWORD *)v8 + 1) &= ~1u;
  v23 = *((_QWORD *)v8 + 4) + *(unsigned int *)(v7 + 4208);
  *((_QWORD *)v8 + 4) = v23;
  v24 = v22 + *(_DWORD *)(v7 + 4208);
  v25 = *((_QWORD *)v8 + 6);
  *((_DWORD *)v8 + 11) = v24;
  v26 = *((_DWORD *)v8 + 3);
  if ( v25 )
  {
    v27 = v25 - v23;
    v28 = *((_DWORD *)v8 + 3);
    if ( v26 >= v27 )
      v28 = v27;
    if ( v21 >= v28 )
    {
      v21 = v27;
      if ( v26 < v27 )
        v21 = *((_DWORD *)v8 + 3);
    }
  }
  else
  {
    if ( v21 < v26 )
      v26 = v21;
    v21 = v26;
  }
  BuildGetLogPageCommand(a1, v7, *v8, v21, *((_QWORD *)v8 + 3), *((_DWORD *)v8 + 2), v23, v14[10]);
  if ( v11 )
  {
    *(_DWORD *)(v7 + 4136) = v11[4];
    v29 = (v21 >> 2) - 1;
    *(_WORD *)(v7 + 4138) = v29;
    *(_DWORD *)(v7 + 4140) = v11[5];
    *(_WORD *)(v7 + 4140) = HIWORD(v29);
    *(_QWORD *)(v7 + 4144) = *((_QWORD *)v8 + 4);
    *(_QWORD *)(v7 + 4152) = (unsigned int)v11[11];
  }
  else
  {
    v30 = *(_DWORD *)(v7 + 4136) ^ ((unsigned __int16)*(_DWORD *)(v7 + 4136) ^ (unsigned __int16)((unsigned __int16)v14[11] << 15)) & 0x8000;
    *(_DWORD *)(v7 + 4136) = v30;
    *(_DWORD *)(v7 + 4136) = v30 ^ ((unsigned __int16)v30 ^ (unsigned __int16)((unsigned __int16)v14[11] << 7)) & 0xF00;
    if ( NVMeControllerSupportsUUIDList(a1) && (v14[11] & 0x7F00) != 0 && *v8 >= 0xC0u )
      *(_DWORD *)(v7 + 4152) ^= ((unsigned __int8)BYTE1(v14[11]) ^ (unsigned __int8)*(_DWORD *)(v7 + 4152)) & 0x7F;
  }
  *(_BYTE *)(v7 + 4225) |= 4u;
  *(_QWORD *)(v7 + 4192) = QueryProtocolInfoCompletion;
  *(_QWORD *)(v7 + 4160) = *((_QWORD *)v8 + 2);
  *(_QWORD *)(v7 + 4168) = *((_QWORD *)v8 + 3);
  *(_DWORD *)(v7 + 4208) = v21;
  *(_QWORD *)(v7 + 4200) = v8;
  LOWORD(v15) = ProcessCommand(a1, a2);
  return v15;
}
