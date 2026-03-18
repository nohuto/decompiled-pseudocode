/*
 * XREFs of VidSchEnterIndependentFlip @ 0x14003F740
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0txqqqtxtx_EtwWriteTransfer @ 0x14003FBFC (McTemplateK0txqqqtxtx_EtwWriteTransfer.c)
 *     memset @ 0x140056780 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
_UNKNOWN **__fastcall VidSchEnterIndependentFlip(
        __int64 a1,
        unsigned int a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        _QWORD *a8)
{
  _UNKNOWN **result; // rax
  unsigned int v11; // r11d
  unsigned int v12; // r10d
  __int64 v13; // r9
  int v14; // r15d
  char v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rbp
  unsigned int i; // r8d
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r13
  unsigned int *v23; // r14
  __int64 v24; // r13
  __int64 v25; // rbp
  __int64 j; // r12
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r15
  struct _LUID v30; // rax
  char v31; // bp
  __int64 v32; // r10
  unsigned int v33; // r9d
  __int64 v34; // r11
  __int64 v35; // rdi
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ecx
  int v40; // r8d
  bool v41; // zf
  _QWORD *v42; // rdx
  unsigned int v43; // ebx
  char v44; // di
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF
  struct _LUID v50; // [rsp+C0h] [rbp+8h] BYREF
  struct _LUID *v51; // [rsp+D0h] [rbp+18h]
  __int64 v52; // [rsp+D8h] [rbp+20h]

  result = &retaddr;
  v52 = a4;
  v51 = a3;
  *a7 = 0;
  *a8 = 0LL;
  if ( !*(_BYTE *)(a1 + 47) )
    return result;
  v50 = 0LL;
  RtlCopyLuid(&v50, a3);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1984), &LockHandle);
  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v16 = 0LL;
  v17 = 0LL;
  for ( i = a2; i; i >>= 1 )
  {
    if ( (i & 1) != 0 )
      break;
    v13 = (unsigned int)(v13 + 1);
  }
  while ( i )
  {
    v28 = *(int *)(304LL * *(unsigned int *)(a5 + 4 * v17) + *(_QWORD *)(a1 + 8 * v13 + 3432) + 188);
    if ( (int)v28 <= -1 )
    {
      v16 = 0LL;
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 3560) + 160 * v28;
      if ( v16 )
      {
        v15 = 1;
        ++v11;
        goto LABEL_28;
      }
    }
    ++v12;
LABEL_28:
    while ( 1 )
    {
      i >>= 1;
      if ( !i || (i & 1) != 0 )
        break;
      v13 = (unsigned int)(v13 + 1);
    }
    v17 = (unsigned int)(v17 + 1);
  }
  if ( v12 && v11 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 0x8000LL, v11, v12, a1);
    WdLogGlobalForLineNumber = 906;
    goto LABEL_61;
  }
  if ( !v15 )
  {
    v19 = 0LL;
    v20 = 0LL;
    while ( v19 < *(int *)(a1 + 3728) )
    {
      v21 = *(_QWORD *)(a1 + 3560);
      if ( !*(_QWORD *)(v20 + v21) )
      {
        v16 = v21 + 160LL * v14;
        if ( v14 > *(_DWORD *)(a1 + 3744) )
          *(_DWORD *)(a1 + 3744) = v14;
        break;
      }
      ++v14;
      ++v19;
      v20 += 160LL;
    }
  }
  if ( !v16 )
  {
LABEL_61:
    v46 = *(int *)(a1 + 3744);
    v47 = *(unsigned int *)(a1 + 3728);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 0x2000LL, v47, v46, a1);
    WdLogGlobalForLineNumber = 906;
    JUMPOUT(0x14003FBF5LL);
  }
  v22 = v16 + 20;
  v23 = (unsigned int *)(v16 + 16);
  if ( v15 )
  {
    v29 = v52;
  }
  else
  {
    *v23 = a2;
    memset((void *)(v16 + 20), 0, 0x40uLL);
    v24 = 0LL;
    v25 = 0LL;
    for ( j = 0LL; a2; a2 >>= 1 )
    {
      if ( (a2 & 1) != 0 )
        break;
      v25 = (unsigned int)(v25 + 1);
    }
    v27 = a5;
    while ( a2 )
    {
      *(_DWORD *)(v16 + 4 * v24 + 20) = *(_DWORD *)(v27 + 4 * j);
      v24 = (unsigned int)(v24 + 1);
      *(_DWORD *)(*(_QWORD *)(a1 + 8 * v25 + 3432) + 304LL * *(unsigned int *)(v27 + 4 * j) + 188) = v14;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry3)(
        8LL,
        *v51,
        v52,
        *(unsigned int *)(v27 + 4 * j));
      WdLogGlobalForLineNumber = 13707;
      while ( 1 )
      {
        a2 >>= 1;
        if ( !a2 || (a2 & 1) != 0 )
          break;
        v25 = (unsigned int)(v25 + 1);
      }
      j = (unsigned int)(j + 1);
    }
    *(_DWORD *)(v16 + 116) = 0;
    v23 = (unsigned int *)(v16 + 16);
    v29 = v52;
    v22 = v16 + 20;
    *(_DWORD *)(v16 + 112) = 1;
    v30 = v50;
    *(_WORD *)(v16 + 96) = 0;
    *(struct _LUID *)v16 = v30;
    *(_QWORD *)(v16 + 8) = v29;
    *(_BYTE *)(v16 + 98) = 0;
  }
  v31 = a6;
  v32 = 0LL;
  v33 = *v23;
  v34 = 0LL;
  *(_DWORD *)(v16 + 100) = a6;
  v35 = *(_QWORD *)(a1 + 3736);
  *(_QWORD *)(v16 + 88) = v35;
  if ( v33 )
  {
    do
    {
      if ( (v33 & 1) != 0 )
        break;
      v32 = (unsigned int)(v32 + 1);
      v33 >>= 1;
    }
    while ( v33 );
    while ( v33 )
    {
      v36 = 304LL * *(unsigned int *)(v22 + 4 * v34) + 152 + *(_QWORD *)(a1 + 8 * v32 + 3432);
      v37 = *(_QWORD *)(v16 + 88);
      v38 = 5LL * *(unsigned int *)(v36 + 216);
      *(_QWORD *)(v36 + 8 * v38 + 88) = MEMORY[0xFFFFF78000000320];
      *(_WORD *)(v36 + 8 * v38 + 56) = 257;
      *(struct _LUID *)(v36 + 8 * v38 + 60) = v50;
      *(_QWORD *)(v36 + 8 * v38 + 72) = v29;
      *(_QWORD *)(v36 + 8 * v38 + 80) = v37;
      *(_DWORD *)(v36 + 216) = ((unsigned __int8)*(_DWORD *)(v36 + 216) + 1) & 3;
      while ( 1 )
      {
        v33 >>= 1;
        if ( !v33 || (v33 & 1) != 0 )
          break;
        v32 = (unsigned int)(v32 + 1);
      }
      v34 = (unsigned int)(v34 + 1);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v41 = bTracingEnabled == 0;
  v42 = a8;
  *a8 = v35;
  if ( !v41 )
  {
    v43 = *v23;
    v44 = 0;
    v45 = 0LL;
    if ( *v23 )
    {
      do
      {
        if ( (v43 & 1) != 0 )
          break;
        ++v44;
        v43 >>= 1;
      }
      while ( v43 );
      while ( v43 )
      {
        if ( (byte_140081241 & 1) != 0 )
        {
          McTemplateK0txqqqtxtx_EtwWriteTransfer(
            v39,
            (_DWORD)v42,
            v40,
            1,
            v50.LowPart,
            v44,
            *(_DWORD *)(v22 + 4 * v45),
            v31,
            0,
            v29,
            1,
            *v42);
          v42 = a8;
        }
        while ( 1 )
        {
          v43 >>= 1;
          if ( !v43 || (v43 & 1) != 0 )
            break;
          ++v44;
        }
        v45 = (unsigned int)(v45 + 1);
      }
    }
  }
  result = (_UNKNOWN **)a7;
  *a7 = 1;
  return result;
}
