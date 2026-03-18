/*
 * XREFs of VidSchExitIndependentFlipInternal @ 0x1400215F8
 * Callers:
 *     VidSchiCompletePendingFlipOnPlane @ 0x14001C0D8 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchExitIndependentFlip @ 0x1400214E0 (VidSchExitIndependentFlip.c)
 * Callees:
 *     VidSchiFlushPendingTokenList @ 0x14001DA00 (VidSchiFlushPendingTokenList.c)
 *     McTemplateK0txqqqtxtx_EtwWriteTransfer @ 0x14003DB6C (McTemplateK0txqqqtxtx_EtwWriteTransfer.c)
 *     VidSchiCancelIndependentFlips @ 0x14003FA48 (VidSchiCancelIndependentFlips.c)
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x140041F6C (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 */

void VidSchExitIndependentFlipInternal(
        struct HwQueueStagingList *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        char a5,
        char a6,
        ...)
{
  int v6; // r11d
  __int64 v7; // r10
  _DWORD *v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rdi
  unsigned int i; // ebp
  int v16; // r12d
  __int64 v17; // r10
  __int64 v18; // rax
  _QWORD *v19; // r9
  bool v20; // zf
  bool *v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // r15
  unsigned int v25; // ebx
  unsigned int v26; // r8d
  __int64 v27; // r9
  __int64 v28; // r10
  int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  struct VIDSCH_FLIP_QUEUE *v34; // r9
  unsigned int v35; // ebx
  __int64 v36; // rbp
  __int64 j; // r15
  unsigned int v38; // ebx
  char v39; // bp
  __int64 k; // r14
  _QWORD *v41; // r12
  __int64 v42; // r9
  _QWORD *v43; // rdx
  struct VIDSCH_FLIP_QUEUE *v44; // r9
  int v45; // [rsp+60h] [rbp-58h]
  _QWORD *v48; // [rsp+D0h] [rbp+18h]
  bool *v50; // [rsp+F0h] [rbp+38h] BYREF
  va_list va; // [rsp+F0h] [rbp+38h]
  _QWORD *v52; // [rsp+F8h] [rbp+40h]
  va_list va1; // [rsp+100h] [rbp+48h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v50 = va_arg(va1, bool *);
  v52 = va_arg(va1, _QWORD *);
  v48 = a3;
  v6 = 0;
  v7 = *(int *)(a2 + 3744);
  v8 = a3;
  v45 = 0;
  v9 = a2;
  *v50 = 0;
  if ( v7 >= 0 )
  {
    LODWORD(a3) = *a3;
    v10 = 0LL;
    v11 = *(_DWORD **)(v9 + 3560);
    do
    {
      if ( *v11 == (_DWORD)a3 && v11[1] == v8[1] )
        break;
      ++v6;
      ++v10;
      v11 += 40;
    }
    while ( v10 <= v7 );
    v45 = v6;
  }
  v12 = 0LL;
  v13 = 0LL;
  v14 = *(_QWORD *)(v9 + 3560) + 160LL * v6;
  for ( i = *(_DWORD *)(v14 + 16); i; i >>= 1 )
  {
    if ( (i & 1) != 0 )
      break;
    v12 = (unsigned int)(v12 + 1);
  }
  v16 = 3;
  v17 = a4;
  while ( i )
  {
    WdLogSingleEntry4(8LL, *v48, v17);
    v30 = *(_QWORD *)(v14 + 88);
    v17 = a4;
    v31 = 304LL * *(unsigned int *)(v14 + 4 * v13 + 20);
    v32 = *(_QWORD *)(v9 + 8 * v12 + 3432) + 152LL;
    WdLogGlobalForLineNumber = 13810;
    a3 = (_DWORD *)(v32 + v31);
    v33 = 5LL * (unsigned int)a3[54];
    *(_QWORD *)&a3[2 * v33 + 22] = MEMORY[0xFFFFF78000000320];
    LOBYTE(a3[2 * v33 + 14]) = 0;
    BYTE1(a3[2 * v33 + 14]) = a6;
    *(_QWORD *)&a3[2 * v33 + 15] = *v48;
    *(_QWORD *)&a3[2 * v33 + 18] = a4;
    *(_QWORD *)&a3[2 * v33 + 20] = v30;
    a3[54] = (a3[54] + 1) & 3;
    while ( 1 )
    {
      i >>= 1;
      if ( !i || (i & 1) != 0 )
        break;
      v12 = (unsigned int)(v12 + 1);
    }
    v13 = (unsigned int)(v13 + 1);
  }
  v18 = *(_QWORD *)(v14 + 88);
  v19 = v52;
  *(_QWORD *)(v14 + 152) = 0LL;
  v20 = (*(_QWORD *)(v9 + 3736))++ == -1LL;
  v21 = v50;
  *v19 = v18;
  if ( v20 )
    *(_QWORD *)(v9 + 3736) = 1LL;
  LODWORD(v22) = *(_DWORD *)(v14 + 112);
  if ( (unsigned int)(v22 - 1) > 1 )
  {
    v35 = *(_DWORD *)(v14 + 16);
    v36 = 0LL;
    for ( j = 0LL; v35; v35 >>= 1 )
    {
      if ( (v35 & 1) != 0 )
        break;
      v36 = (unsigned int)(v36 + 1);
    }
    while ( v35 )
    {
      v22 = *(_QWORD *)(v9 + 8 * v36 + 3432);
      v44 = *(struct VIDSCH_FLIP_QUEUE **)(v22 + 8LL * *(unsigned int *)(v14 + 4 * j + 20) + 40);
      if ( v44 )
      {
        if ( *(_BYTE *)(v9 + 59) )
        {
          LODWORD(v50) = *((_DWORD *)v44 + 17);
          VidSchiCancelIndependentFlipsHwQueue(
            a1,
            (struct _VIDSCH_GLOBAL *)v9,
            v36,
            v44,
            v21,
            (unsigned int *)va,
            ((unsigned __int8)*((_DWORD *)v44 + 14) - 1) & 0x3F,
            2u);
        }
        else
        {
          VidSchiCancelIndependentFlips((_DWORD)a1, v9, v36, (_DWORD)v44, (__int64)v21, -1, -1);
        }
      }
      while ( 1 )
      {
        v35 >>= 1;
        if ( !v35 || (v35 & 1) != 0 )
          break;
        v36 = (unsigned int)(v36 + 1);
      }
      j = (unsigned int)(j + 1);
    }
    *(_DWORD *)(v14 + 112) = 0;
  }
  else
  {
    if ( a6 || (_DWORD)v22 != 1 )
      v16 = 0;
    *(_WORD *)(v14 + 96) = 0;
    v23 = 0LL;
    *(_DWORD *)(v14 + 100) = 0;
    v24 = 0LL;
    *(_DWORD *)(v14 + 104) = 0;
    v25 = *(_DWORD *)(v14 + 16);
    *(_DWORD *)(v14 + 112) = v16;
    for ( *(_BYTE *)(v14 + 98) = 0; v25; v25 >>= 1 )
    {
      if ( (v25 & 1) != 0 )
        break;
      v23 = (unsigned int)(v23 + 1);
    }
    while ( v25 )
    {
      v34 = *(struct VIDSCH_FLIP_QUEUE **)(*(_QWORD *)(v9 + 8 * v23 + 3432)
                                         + 8LL * *(unsigned int *)(v14 + 4 * v24 + 20)
                                         + 40);
      if ( v34 )
      {
        if ( *(_BYTE *)(v9 + 59) )
        {
          LODWORD(v50) = *((_DWORD *)v34 + 17);
          VidSchiCancelIndependentFlipsHwQueue(
            a1,
            (struct _VIDSCH_GLOBAL *)v9,
            v23,
            v34,
            v21,
            (unsigned int *)va,
            ((unsigned __int8)*((_DWORD *)v34 + 14) - 1) & 0x3F,
            2u);
        }
        else
        {
          VidSchiCancelIndependentFlips((_DWORD)a1, v9, v23, (_DWORD)v34, (__int64)v21, -1, -1);
        }
      }
      VidSchiFlushPendingTokenList(a1, (struct _VIDSCH_GLOBAL *)v9, v23, *(_DWORD *)(v14 + 4 * v24 + 20));
      while ( 1 )
      {
        v25 >>= 1;
        if ( !v25 || (v25 & 1) != 0 )
          break;
        v23 = (unsigned int)(v23 + 1);
      }
      v24 = (unsigned int)(v24 + 1);
    }
  }
  v20 = bTracingEnabled == 0;
  *v21 = 0;
  if ( !v20 )
  {
    v38 = *(_DWORD *)(v14 + 16);
    v39 = 0;
    for ( k = 0LL; v38; v38 >>= 1 )
    {
      if ( (v38 & 1) != 0 )
        break;
      ++v39;
    }
    v41 = v52;
    while ( v38 )
    {
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0txqqqtxtx_EtwWriteTransfer(
          v22,
          *v21,
          (_DWORD)a3,
          0,
          *v48,
          v39,
          *(_DWORD *)(v14 + 4 * k + 20),
          a5,
          *v21,
          a4,
          a6,
          *v41);
      while ( 1 )
      {
        v38 >>= 1;
        if ( !v38 || (v38 & 1) != 0 )
          break;
        ++v39;
      }
      k = (unsigned int)(k + 1);
    }
    v9 = a2;
  }
  if ( a6 )
  {
    v26 = *(_DWORD *)(v14 + 16);
    v27 = 0LL;
    v28 = 0LL;
    if ( v26 )
    {
      do
      {
        if ( (v26 & 1) != 0 )
          break;
        v27 = (unsigned int)(v27 + 1);
        v26 >>= 1;
      }
      while ( v26 );
      while ( v26 )
      {
        *(_DWORD *)(304LL * *(unsigned int *)(v14 + 4 * v28 + 20) + *(_QWORD *)(v9 + 8 * v27 + 3432) + 188) = -1;
        while ( 1 )
        {
          v26 >>= 1;
          if ( !v26 || (v26 & 1) != 0 )
            break;
          v27 = (unsigned int)(v27 + 1);
        }
        v28 = (unsigned int)(v28 + 1);
      }
    }
    *(_QWORD *)v14 = 0LL;
    *(_DWORD *)(v14 + 16) = 0;
    if ( v45 == *(_DWORD *)(v9 + 3744) )
    {
      v29 = v45 - 1;
      if ( v45 - 1 >= 0 )
      {
        v42 = v29;
        v43 = (_QWORD *)(*(_QWORD *)(v9 + 3560) + 160LL * v29);
        do
        {
          if ( *v43 )
            break;
          --v29;
          v43 -= 20;
          --v42;
        }
        while ( v42 >= 0 );
      }
      *(_DWORD *)(v9 + 3744) = v29;
    }
  }
}
