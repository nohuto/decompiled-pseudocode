/*
 * XREFs of KiHeteroSelectProcessorToPreempt @ 0x1402A45C0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSelectCandidateProcessor @ 0x1402A2F00 (KiSelectCandidateProcessor.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x1402A37F0 (KiIsIsolationUnitIdleByHandle.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1402A6534 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall KiHeteroSelectProcessorToPreempt(
        unsigned __int64 a1,
        unsigned __int64 a2,
        _WORD *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // r10
  unsigned __int64 *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rbp
  unsigned __int8 *v17; // rdx
  __int64 v18; // rdi
  int v19; // ebx
  _BYTE *v20; // rsi
  unsigned int v21; // r11d
  int v22; // r10d
  char v23; // r8
  int v24; // ecx
  char v25; // cl
  unsigned __int64 v26; // rax
  int v27; // edx
  int v28; // r12d
  int v29; // edx
  unsigned __int8 v30; // bl
  _BYTE *v31; // rax
  unsigned int v32; // ecx
  __int64 *v33; // r14
  __int64 v34; // rbp
  __int64 v35; // rdi
  unsigned int v36; // esi
  _QWORD *v37; // rbx
  int v39; // edx
  unsigned __int64 v40; // r8
  __int64 v41; // r13
  _QWORD *v42; // r8
  int v43; // edx
  unsigned __int64 v44; // r9
  __int64 v45; // r9
  unsigned int v46; // r9d
  __int64 v47; // rdx
  _BYTE *v48; // rbx
  unsigned int v49; // r9d
  __int64 v50; // rdx
  _BYTE *v51; // rbx
  __int64 v52; // rdx
  unsigned __int64 v53; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+38h] [rbp-C0h]
  __int64 v55; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v57; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD *v58; // [rsp+58h] [rbp-A0h] BYREF
  int v59; // [rsp+60h] [rbp-98h]
  _QWORD v60[9]; // [rsp+68h] [rbp-90h] BYREF

  v5 = *(_QWORD *)(a2 + 192);
  v6 = 0LL;
  v7 = a4;
  v58 = a5;
  v8 = a2;
  v55 = a4;
  v9 = *(unsigned __int16 *)(v5 + 136);
  v53 = a2;
  v57 = a1;
  v56 = v5;
  if ( (unsigned __int16)v9 >= *a3 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)&a3[4 * v9 + 4];
  v11 = *(_QWORD *)(v5 + 192);
  v12 = *(unsigned __int8 *)(v7 + 16)
      + (unsigned int)*(unsigned __int8 *)(v5 + 185) * (*(_DWORD *)(v7 + 8) + 2 * *(_DWORD *)(v7 + 4));
  v13 = *(_QWORD *)(v11 + 24 * v12 + 16);
  v14 = v13 & *(_QWORD *)(v11 + 24 * v12 + 8) & v10;
  v15 = v13 & v10;
  v54 = v13 & v10;
  if ( (v13 & v10) != 0 )
  {
    if ( v14 )
    {
      v54 = v13 & v10;
      if ( v14 != (v13 & v10) )
      {
        v54 = v13 & v10;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v15 = v10 & *(_QWORD *)(v5 + 128);
    v54 = v15;
  }
  v14 = 0LL;
LABEL_9:
  v16 = v15 & *(_QWORD *)(v8 + 36416);
  if ( ((v16 - 1) & v16) == 0 )
    goto LABEL_17;
  v17 = *(unsigned __int8 **)(v8 + 36424);
  v18 = v17[705];
  v19 = v17[704];
  v20 = (char *)&v60[1] + v18;
  memmove((char *)&v60[1] + v18, v17 + 576, v17[704]);
  v21 = v18 + v19;
  v22 = -1;
  v23 = *(_BYTE *)(v57 + 195);
  if ( (KiHeteroSchedulerOptionsMask & 2) == 0 || (KiHeteroSchedulerOptions & 2) != 0 )
  {
    v24 = *(unsigned __int8 *)(v57 + 516);
    if ( (unsigned int)(v24 - 5) <= 1 || v24 == 2 || (_BYTE)v24 == 1 )
    {
      if ( KeHeteroSystemQos )
      {
        v41 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 328LL);
        if ( (v41 & v16) != 0 )
        {
          v46 = v18;
          if ( (unsigned int)v18 < v21 )
          {
            v47 = __ROL8__(1LL, v18);
            v48 = (char *)&v60[1] + v18;
            do
            {
              if ( (v41 & v47 & v16) != 0 && (*v48 & 0x7F) < v23 )
              {
                v22 = v46;
                v23 = *v48 & 0x7F;
              }
              ++v46;
              v47 = __ROL8__(v47, 1);
              ++v48;
            }
            while ( v46 < v21 );
          }
        }
        v8 = v53;
      }
    }
  }
  if ( !v14 )
  {
LABEL_14:
    if ( v22 < 0 )
    {
      if ( (unsigned int)v18 >= v21 )
        goto LABEL_16;
      v52 = __ROL8__(1LL, v18);
      do
      {
        if ( (v52 & v16) != 0 && (*v20 & 0x7F) < v23 )
        {
          v22 = v18;
          v23 = *v20 & 0x7F;
        }
        LODWORD(v18) = v18 + 1;
        v52 = __ROL8__(v52, 1);
        ++v20;
      }
      while ( (unsigned int)v18 < v21 );
      if ( v22 < 0 )
        goto LABEL_16;
    }
    goto LABEL_15;
  }
  if ( v22 < 0 )
  {
    v49 = v18;
    if ( (unsigned int)v18 >= v21 )
      goto LABEL_16;
    v50 = __ROL8__(1LL, v18);
    v51 = (char *)&v60[1] + v18;
    do
    {
      if ( (v50 & v14) != 0 && (*v51 & 0x7F) < v23 )
      {
        v22 = v49;
        v23 = *v51 & 0x7F;
      }
      ++v49;
      v50 = __ROL8__(v50, 1);
      ++v51;
    }
    while ( v49 < v21 );
    goto LABEL_14;
  }
LABEL_15:
  v8 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * *(unsigned __int8 *)(v8 + 208) + v22)];
LABEL_16:
  v7 = v55;
  v6 = 0LL;
  v15 = v54;
  v5 = v56;
LABEL_17:
  if ( (v15 & *(_QWORD *)(v8 + 200)) == 0 )
  {
    v25 = *(_BYTE *)(v8 + 209);
    _BitScanForward64(&v26, __ROR8__(v15, v25));
    v27 = *(unsigned __int8 *)(v8 + 208) << 6;
    v59 = v26;
    v8 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + (((_BYTE)v26 + v25) & 0x3Fu) + v27)];
  }
  v28 = *(_DWORD *)(v7 + 20);
  v29 = v28;
  v30 = **(_BYTE **)(v8 + 56);
  v60[0] = v8;
  if ( v28 < v30 >> 7 )
    v29 = v30 >> 7;
  v53 = v29 ^ (v8 ^ v29) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v29 )
  {
    if ( v29 != 1 )
      goto LABEL_33;
    v31 = *(_BYTE **)(v8 + 36440);
    v32 = (unsigned __int8)*v31;
    v33 = (__int64 *)(v31 + 8);
    if ( !*v31 )
      goto LABEL_33;
  }
  else
  {
    v33 = v60;
    v32 = 1;
  }
  v34 = v32;
  do
  {
    v35 = *v33;
    v36 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 48), 0LL) )
    {
      do
      {
        if ( (++v36 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v36);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v35 + 48) );
    }
    ++v33;
    --v34;
  }
  while ( v34 );
  v5 = v56;
  v15 = v54;
  v7 = v55;
LABEL_33:
  if ( ((**(_BYTE **)(v8 + 56) ^ v30) & 0x80u) != 0 )
  {
    KiAcquirePrcbLocksForPreemptionAttemptSlowPath(v8, (unsigned int)v28, &v53);
    v5 = v56;
  }
  if ( (*(_QWORD *)(v5 + 8LL * *(int *)(v7 + 20) + 16) & v15 & *(_QWORD *)(v5 + 8)) != 0 )
  {
    v39 = 0;
    v40 = v53 & 0xFFFFFFFFFFFFFFFEuLL;
    v57 = v53 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v53 & 1) != 0 )
    {
      if ( (v53 & 1) == 1 )
      {
        v6 = (unsigned __int64 *)(*(_QWORD *)(v40 + 36440) + 8LL);
        v39 = **(unsigned __int8 **)(v40 + 36440);
      }
      if ( !v39 )
        goto LABEL_49;
    }
    else
    {
      v6 = &v57;
      v39 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v6[--v39] + 48), 0LL);
    while ( v39 );
LABEL_49:
    LODWORD(v6) = -1073741267;
    return (unsigned int)v6;
  }
  v37 = v58;
  *((_DWORD *)v58 + 2) = 0;
  if ( (*(_BYTE *)(v8 + 35) & 0x10) != 0 )
  {
    v42 = 0LL;
    v43 = 0;
    v44 = v53 & 0xFFFFFFFFFFFFFFFEuLL;
    v58 = (_QWORD *)(v53 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v53 & 1) != 0 )
    {
      if ( (v53 & 1) == 1 )
      {
        v42 = (_QWORD *)(*(_QWORD *)(v44 + 36440) + 8LL);
        v43 = **(unsigned __int8 **)(v44 + 36440);
      }
      if ( !v43 )
        goto LABEL_58;
    }
    else
    {
      v42 = &v58;
      v43 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v42[--v43] + 48LL), 0LL);
    while ( v43 );
LABEL_58:
    v45 = *(unsigned int *)(v7 + 20);
    v53 = 0LL;
    KiSelectCandidateProcessor(v8, v57, v15, v45, &v53);
    if ( (unsigned int)KiIsIsolationUnitIdleByHandle(&v53) )
      *((_DWORD *)v37 + 2) = 1;
    goto LABEL_38;
  }
  if ( (unsigned int)KiIsIsolationUnitIdleByHandle(&v53) )
  {
    v55 = v15;
    v58 = &v55;
    __fastfail(0x21u);
  }
LABEL_38:
  *v37 = v53;
  *((_DWORD *)v37 + 3) = 0;
  return (unsigned int)v6;
}
