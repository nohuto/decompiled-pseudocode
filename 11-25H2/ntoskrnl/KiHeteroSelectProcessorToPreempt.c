/*
 * XREFs of KiHeteroSelectProcessorToPreempt @ 0x140330300
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSelectCandidateProcessor @ 0x14032DF70 (KiSelectCandidateProcessor.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x14032EC90 (KiIsIsolationUnitIdleByHandle.c)
 *     KiSelectProcessorToPreempt @ 0x140330680 (KiSelectProcessorToPreempt.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1403312E4 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 */

__int64 __fastcall KiHeteroSelectProcessorToPreempt(__int64 a1, __int64 a2, _WORD *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r13
  unsigned int v6; // edi
  _QWORD *v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r14
  int v18; // r9d
  unsigned int v19; // edx
  unsigned int v20; // ebx
  _BYTE *v21; // rax
  unsigned int v22; // ecx
  __int64 *v23; // r12
  __int64 v24; // r15
  int v25; // r13d
  __int64 v26; // rbx
  _QWORD **v28; // r8
  int v29; // edx
  unsigned __int64 v30; // r9
  char v31; // cl
  int v32; // edx
  unsigned __int64 v33; // rax
  unsigned __int64 *v34; // r8
  int v35; // edx
  unsigned __int64 v36; // r9
  int v37; // r9d
  unsigned __int64 v38; // [rsp+30h] [rbp-38h] BYREF
  __int64 v39; // [rsp+38h] [rbp-30h]
  __int64 v40; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-20h] BYREF
  __int64 v42; // [rsp+50h] [rbp-18h] BYREF
  int v44; // [rsp+C0h] [rbp+58h]
  _QWORD *v45; // [rsp+C8h] [rbp+60h] BYREF

  v45 = (_QWORD *)a4;
  v5 = *(_QWORD *)(a2 + 192);
  v6 = 0;
  v7 = (_QWORD *)a4;
  v41 = v5;
  v8 = a1;
  v9 = *(unsigned __int16 *)(v5 + 136);
  if ( (unsigned __int16)v9 >= *a3 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)&a3[4 * v9 + 4];
  v11 = *(_QWORD *)(v5 + 192);
  v12 = *(_QWORD *)(v11
                  + 24LL
                  * (*(unsigned __int8 *)(a4 + 16)
                   + (unsigned int)*(unsigned __int8 *)(v5 + 185) * (*(_DWORD *)(a4 + 8) + 2 * *(_DWORD *)(a4 + 4)))
                  + 16);
  v13 = v12 & *(_QWORD *)(v11
                        + 24LL
                        * (*(unsigned __int8 *)(a4 + 16)
                         + (unsigned int)*(unsigned __int8 *)(v5 + 185)
                         * (*(_DWORD *)(a4 + 8) + 2 * *(_DWORD *)(a4 + 4)))
                        + 8) & v10;
  v14 = v12 & v10;
  if ( (v12 & v10) != 0 )
  {
    if ( !v13 )
      v13 = v12 & v10;
  }
  else
  {
    v14 = v10 & *(_QWORD *)(v5 + 128);
    v13 = v14;
  }
  v15 = 0LL;
  if ( v13 != v14 )
    v15 = v13;
  v16 = KiSelectProcessorToPreempt(a1, a2, v14, v15);
  v17 = v16;
  if ( (v14 & *(_QWORD *)(v16 + 200)) == 0 )
  {
    v31 = *(_BYTE *)(v16 + 209);
    v32 = *(unsigned __int8 *)(v16 + 208);
    _BitScanForward64(&v33, __ROR8__(v14, v31));
    v17 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + 64 * v32 + (((_BYTE)v33 + v31) & 0x3Fu))];
  }
  v18 = *((_DWORD *)v7 + 5);
  v19 = v18;
  v44 = v18;
  v20 = **(unsigned __int8 **)(v17 + 56);
  v40 = v17;
  if ( v18 < (int)(v20 >> 7) )
    v19 = v20 >> 7;
  v38 = (int)v19 ^ ((int)v19 ^ (unsigned __int64)v17) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !v19 )
  {
    v23 = &v40;
    v22 = 1;
LABEL_15:
    v39 = v22;
    do
    {
      v24 = *v23;
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 48), 0LL) )
      {
        do
        {
          if ( (++v25 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v24 + 48) );
      }
      ++v23;
      --v39;
    }
    while ( v39 );
    v5 = v41;
    v7 = v45;
    v18 = v44;
    goto LABEL_20;
  }
  if ( v19 != 1 )
    goto LABEL_21;
  v21 = *(_BYTE **)(v17 + 36440);
  v22 = (unsigned __int8)*v21;
  v23 = (__int64 *)(v21 + 8);
  if ( *v21 )
    goto LABEL_15;
LABEL_20:
  v8 = a1;
LABEL_21:
  if ( ((**(_BYTE **)(v17 + 56) ^ v20) & 0x80u) != 0 )
    KiAcquirePrcbLocksForPreemptionAttemptSlowPath(v17, (unsigned int)v18, &v38);
  if ( (*(_QWORD *)(v5 + 8LL * *((int *)v7 + 5) + 16) & v14 & *(_QWORD *)(v5 + 8)) != 0 )
  {
    v28 = 0LL;
    v29 = 0;
    v30 = v38 & 0xFFFFFFFFFFFFFFFEuLL;
    v45 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v38 & 1) != 0 )
    {
      if ( (v38 & 1) == 1 )
      {
        v28 = (_QWORD **)(*(_QWORD *)(v30 + 36440) + 8LL);
        v29 = **(unsigned __int8 **)(v30 + 36440);
      }
      if ( !v29 )
        return (unsigned int)-1073741267;
    }
    else
    {
      v28 = &v45;
      v29 = 1;
    }
    do
      _InterlockedAnd64(v28[--v29] + 6, 0LL);
    while ( v29 );
    return (unsigned int)-1073741267;
  }
  v26 = a5;
  *(_DWORD *)(a5 + 8) = 0;
  if ( (*(_BYTE *)(v17 + 35) & 0x10) != 0 )
  {
    v34 = 0LL;
    v35 = 0;
    v36 = v38 & 0xFFFFFFFFFFFFFFFEuLL;
    v41 = v38 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v38 & 1) != 0 )
    {
      if ( (v38 & 1) == 1 )
      {
        v34 = (unsigned __int64 *)(*(_QWORD *)(v36 + 36440) + 8LL);
        v35 = **(unsigned __int8 **)(v36 + 36440);
      }
      if ( !v35 )
        goto LABEL_48;
    }
    else
    {
      v34 = &v41;
      v35 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v34[--v35] + 48), 0LL);
    while ( v35 );
LABEL_48:
    v37 = *((_DWORD *)v7 + 5);
    v38 = 0LL;
    KiSelectCandidateProcessor(v17, v8, v14, v37, &v38);
    if ( (unsigned int)KiIsIsolationUnitIdleByHandle(&v38) )
      *(_DWORD *)(v26 + 8) = 1;
    goto LABEL_26;
  }
  if ( (unsigned int)KiIsIsolationUnitIdleByHandle(&v38) )
  {
    v42 = v14;
    v45 = &v42;
    __fastfail(0x21u);
  }
LABEL_26:
  *(_QWORD *)v26 = v38;
  *(_DWORD *)(v26 + 12) = 0;
  return v6;
}
