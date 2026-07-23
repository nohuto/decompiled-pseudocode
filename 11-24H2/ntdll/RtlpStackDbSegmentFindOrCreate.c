/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x18015BF7C
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x18015BD2C (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpStackDbRefCountIncrement @ 0x18015BEEC (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbSegmentComparitor @ 0x18015BF40 (RtlpStackDbSegmentComparitor.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpStackDbSegmentFindOrCreate(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r10
  unsigned __int8 *v4; // r8
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rbp
  int v19; // r8d
  __int64 v20; // rdi
  _QWORD *v21; // r15
  __int64 v22; // rax
  _QWORD *v23; // rbp
  unsigned int v24; // ebx
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r13
  BOOL v28; // eax
  __int64 v29; // r12
  void (__fastcall *v30)(__int64, __int64); // r13
  __int64 v31; // rbx
  char *v32; // r8
  char v33; // cl
  unsigned __int64 v34; // rcx
  unsigned int v35; // edx
  unsigned int v36; // edi
  __int64 v37; // r10
  __int64 v38; // r14
  _QWORD *v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // edi
  int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v47; // [rsp+60h] [rbp+8h]
  __int64 v48; // [rsp+60h] [rbp+8h]
  __int64 v49; // [rsp+60h] [rbp+8h]
  __int64 v50; // [rsp+60h] [rbp+8h]
  __int64 v51; // [rsp+68h] [rbp+10h]

  v2 = *a2;
  v4 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  v6 = 314159LL;
  v7 = 8 * v2;
  if ( (unsigned __int64)(8 * v2) >= 8 )
  {
    v7 -= 8LL * (unsigned int)v2;
    do
    {
      v8 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v6))))));
      v9 = v4[7];
      v4 += 8;
      v6 = v9 + 37 * v8;
      --v2;
    }
    while ( v2 );
  }
  v10 = v7 - 1;
  if ( !v10 )
    goto LABEL_17;
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_16:
    v6 = *v4++ + 37 * v6;
LABEL_17:
    v6 = *v4 + 37 * v6;
    goto LABEL_18;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_15:
    v6 = *v4++ + 37 * v6;
    goto LABEL_16;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_14:
    v6 = *v4++ + 37 * v6;
    goto LABEL_15;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
LABEL_13:
    v6 = *v4++ + 37 * v6;
    goto LABEL_14;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
LABEL_12:
    v6 = *v4++ + 37 * v6;
    goto LABEL_13;
  }
  if ( v15 == 1 )
  {
    v6 = *v4++ + 37 * v6;
    goto LABEL_12;
  }
LABEL_18:
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v16 = 0LL;
  v17 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v18 = v6 & v17;
LABEL_19:
  if ( v16 )
    goto LABEL_22;
  v19 = *(_DWORD *)(a1 + 4) >> 5;
  if ( v19 )
  {
    v47 = v6 & v17;
    v16 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v47)
           + 37
           * (BYTE5(v47)
            + 37
            * (BYTE4(v47)
             + 37 * (BYTE3(v47) + 37 * (BYTE2(v47) + 37 * (BYTE1(v47) + 37 * ((unsigned __int8)v18 + 11623883)))))))
          + HIBYTE(v47)) & (unsigned int)(v19 - 1));
LABEL_22:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v18 == (v17 & *(_QWORD *)(v16 + 8)) )
      {
        if ( !v16 )
          break;
        if ( RtlpStackDbSegmentComparitor(v16, a2) )
        {
          v20 = v16 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v16 + 16)) != 0);
          RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
          return v20;
        }
        goto LABEL_19;
      }
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v21 = (_QWORD *)(a1 + 64);
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * *a2 + 24, *(_QWORD *)(a1 + 64));
  v23 = (_QWORD *)v22;
  if ( !v22 )
    return 0LL;
  *(_OWORD *)v22 = 0LL;
  *(_QWORD *)(v22 + 16) = 0LL;
  *(_DWORD *)(v22 + 16) = 1;
  *(_BYTE *)(v22 + 19) = *(_BYTE *)a2;
  *(_QWORD *)(v22 + 8) = v6;
  memmove((void *)(v22 + 24), *((const void **)a2 + 1), 8LL * *a2);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v24 = *(_DWORD *)(a1 + 4);
  v25 = 0LL;
  v51 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v26 = v51;
  v27 = v6 & v51;
LABEL_30:
  if ( v25 )
    goto LABEL_33;
  if ( v24 >> 5 )
  {
    v26 = v51;
    v48 = v6 & v51;
    v25 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v48)
           + 37
           * (BYTE5(v48)
            + 37
            * (BYTE4(v48)
             + 37 * (BYTE3(v48) + 37 * (BYTE2(v48) + 37 * (BYTE1(v48) + 37 * ((unsigned __int8)v27 + 11623883)))))))
          + HIBYTE(v48)) & ((v24 >> 5) - 1));
LABEL_33:
    while ( 1 )
    {
      v25 = *(_QWORD *)v25;
      if ( (v25 & 1) != 0 )
        break;
      if ( v27 == (v26 & *(_QWORD *)(v25 + 8)) )
      {
        if ( !v25 )
          break;
        v28 = RtlpStackDbSegmentComparitor(v25, a2);
        v26 = v51;
        if ( v28 )
        {
          v20 = v25 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v25 + 16)) != 0);
          goto LABEL_60;
        }
        goto LABEL_30;
      }
    }
  }
  v29 = *v21;
  v30 = *(void (__fastcall **)(__int64, __int64))(a1 + 56);
  v31 = 2 * (v24 >> 5);
  if ( *(_DWORD *)a1 < (unsigned int)v31 )
    goto LABEL_59;
  if ( (unsigned int)v31 < 4 )
    v31 = 4LL;
  v32 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(8LL * (unsigned int)v31, *v21);
  if ( v32 )
  {
    if ( (((_DWORD)v31 - 1) & (unsigned int)v31) != 0 )
    {
      v33 = -1;
      do
      {
        ++v33;
        LODWORD(v31) = (unsigned int)v31 >> 1;
      }
      while ( (_DWORD)v31 );
      v31 = (unsigned int)(1 << v33);
    }
    if ( (unsigned int)v31 > 0x4000000 )
      v31 = 0x4000000LL;
    v34 = (unsigned int)v31;
    if ( v32 > &v32[8 * v31] )
      v34 = 0LL;
    if ( v34 )
      memset64(v32, a1 | 1, v34);
    v35 = *(_DWORD *)(a1 + 4);
    v36 = 0;
    v37 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (v35 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v38 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v39 = *(_QWORD **)(v38 + 8LL * v36);
          if ( ((unsigned __int8)v39 & 1) != 0 )
            break;
          *(_QWORD *)(v38 + 8LL * v36) = *v39;
          v49 = v37 & v39[1];
          v40 = (37
               * (BYTE6(v49)
                + 37
                * (BYTE5(v49)
                 + 37
                 * (BYTE4(v49)
                  + 37 * (BYTE3(v49) + 37 * (BYTE2(v49) + 37 * (BYTE1(v49) + 37 * ((unsigned __int8)v49 + 11623883)))))))
               + HIBYTE(v49)) & (unsigned int)(v31 - 1);
          *v39 = *(_QWORD *)&v32[8 * v40];
          *(_QWORD *)&v32[8 * v40] = v39;
        }
        v35 = *(_DWORD *)(a1 + 4);
        ++v36;
      }
      while ( v36 < v35 >> 5 );
    }
    v41 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v32;
    *(_DWORD *)(a1 + 4) = (32 * v31) | v35 & 0x1F;
    if ( v41 )
      v30(v41, v29);
    goto LABEL_59;
  }
  if ( *(_DWORD *)(a1 + 4) >= 0x20u )
  {
LABEL_59:
    v42 = *(_DWORD *)(a1 + 4);
    v50 = v23[1] & (-1LL << (v42 & 0x1F));
    v43 = (v42 >> 5) - 1;
    v20 = (__int64)v23;
    v44 = *(_QWORD *)(a1 + 8);
    v45 = (37
         * (BYTE6(v50)
          + 37
          * (BYTE5(v50)
           + 37
           * (BYTE4(v50)
            + 37 * (BYTE3(v50) + 37 * (BYTE2(v50) + 37 * (BYTE1(v50) + 37 * ((unsigned __int8)v50 + 11623883)))))))
         + HIBYTE(v50)) & (unsigned int)v43;
    *v23 = *(_QWORD *)(v44 + 8 * v45);
    *(_QWORD *)(v44 + 8 * v45) = v23;
    v23 = 0LL;
    ++*(_DWORD *)a1;
    goto LABEL_60;
  }
  v20 = 0LL;
LABEL_60:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  if ( v23 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v23, *v21);
  return v20;
}
