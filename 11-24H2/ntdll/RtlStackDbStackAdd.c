/*
 * XREFs of RtlStackDbStackAdd @ 0x18011DD88
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1800DF290 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpStackDbEntryCleanup @ 0x18015D8EC (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x18015D96C (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbEntryIsEqual @ 0x18015DA7C (RtlpStackDbEntryIsEqual.c)
 *     RtlpStackDbRefCountIncrement @ 0x18015DB2C (RtlpStackDbRefCountIncrement.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlStackDbStackAdd(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int8 *v4; // r9
  __int64 v6; // r10
  __int64 v7; // rdi
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // r14
  int v20; // r8d
  __int64 v21; // rdx
  volatile signed __int32 **v22; // rdx
  unsigned __int64 v23; // r8
  unsigned int v24; // esi
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r13
  int IsEqual; // eax
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // rsi
  char *v32; // r8
  char v33; // cl
  unsigned __int64 v34; // rcx
  unsigned int v35; // edx
  unsigned int v36; // edi
  __int64 v37; // r10
  __int64 v38; // r13
  _QWORD *v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // edi
  __int64 v43; // rcx
  __int64 v44; // rdx
  _QWORD *v46; // [rsp+20h] [rbp-20h]
  _QWORD v47[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v48; // [rsp+80h] [rbp+40h]
  __int64 v49; // [rsp+80h] [rbp+40h]
  __int64 v50; // [rsp+80h] [rbp+40h]
  __int64 v51; // [rsp+80h] [rbp+40h]
  __int64 v52; // [rsp+98h] [rbp+58h]
  __int64 v53; // [rsp+98h] [rbp+58h]

  v3 = 0LL;
  v4 = a2;
  HIDWORD(v47[0]) = 0;
  if ( !a1 || !a3 || !a2 )
    return v3;
  v6 = a3;
  v7 = 314159LL;
  LODWORD(v47[0]) = a3;
  v47[1] = a2;
  v8 = 8LL * a3;
  if ( v8 >= 8 )
  {
    v8 -= 8LL * (unsigned int)v6;
    do
    {
      v9 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v7))))));
      v10 = v4[7];
      v4 += 8;
      v7 = v10 + 37 * v9;
      --v6;
    }
    while ( v6 );
  }
  v11 = v8 - 1;
  if ( !v11 )
    goto LABEL_20;
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_19:
    v7 = *v4++ + 37 * v7;
LABEL_20:
    v7 = *v4 + 37 * v7;
    goto LABEL_21;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_18:
    v7 = *v4++ + 37 * v7;
    goto LABEL_19;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
LABEL_17:
    v7 = *v4++ + 37 * v7;
    goto LABEL_18;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
LABEL_16:
    v7 = *v4++ + 37 * v7;
    goto LABEL_17;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
LABEL_15:
    v7 = *v4++ + 37 * v7;
    goto LABEL_16;
  }
  if ( v16 == 1 )
  {
    v7 = *v4++ + 37 * v7;
    goto LABEL_15;
  }
LABEL_21:
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 32));
  v17 = 0LL;
  v18 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v19 = v7 & v18;
LABEL_22:
  if ( v17 )
    goto LABEL_25;
  v20 = *(_DWORD *)(a1 + 20) >> 5;
  if ( v20 )
  {
    v48 = v7 & v18;
    v17 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((37
          * (BYTE6(v48)
           + 37
           * (BYTE5(v48)
            + 37
            * (BYTE4(v48)
             + 37 * (BYTE3(v48) + 37 * (BYTE2(v48) + 37 * (BYTE1(v48) + 37 * ((unsigned __int8)v19 + 11623883)))))))
          + HIBYTE(v48)) & (unsigned int)(v20 - 1));
LABEL_25:
    while ( 1 )
    {
      v17 = *(_QWORD *)v17;
      if ( (v17 & 1) != 0 )
        break;
      if ( v19 == (v18 & *(_QWORD *)(v17 + 8)) )
      {
        if ( !v17 )
          break;
        if ( (unsigned int)RtlpStackDbEntryIsEqual(v17, v47) )
        {
          v3 = v17 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v17 + 16, v21) != 0);
          RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
          return v3;
        }
        goto LABEL_22;
      }
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
  v46 = (_QWORD *)RtlpStackDbEntryCreate(a1, v47, v7);
  if ( v46 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 32), v22, v23);
    v24 = *(_DWORD *)(a1 + 20);
    v25 = 0LL;
    v52 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v26 = v52;
    v27 = v7 & v52;
LABEL_32:
    if ( v25 )
      goto LABEL_35;
    if ( v24 >> 5 )
    {
      v26 = v52;
      v49 = v7 & v52;
      v25 = *(_QWORD *)(a1 + 24)
          + 8LL
          * ((37
            * (BYTE6(v49)
             + 37
             * (BYTE5(v49)
              + 37
              * (BYTE4(v49)
               + 37 * (BYTE3(v49) + 37 * (BYTE2(v49) + 37 * (BYTE1(v49) + 37 * ((unsigned __int8)v27 + 11623883)))))))
            + HIBYTE(v49)) & ((v24 >> 5) - 1));
LABEL_35:
      while ( 1 )
      {
        v25 = *(_QWORD *)v25;
        if ( (v25 & 1) != 0 )
          break;
        if ( v27 == (v26 & *(_QWORD *)(v25 + 8)) )
        {
          if ( !v25 )
            break;
          IsEqual = RtlpStackDbEntryIsEqual(v25, v47);
          v26 = v52;
          if ( IsEqual )
          {
            v3 = v25 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v25 + 16, v52) != 0);
            goto LABEL_66;
          }
          goto LABEL_32;
        }
      }
    }
    v29 = *(_QWORD *)(a1 + 64);
    v30 = a1 + 16;
    v31 = 2 * (v24 >> 5);
    v53 = v29;
    v47[0] = *(_QWORD *)(a1 + 56);
    if ( *(_DWORD *)(a1 + 16) >= (unsigned int)v31 )
    {
      if ( (unsigned int)v31 < 4 )
        v31 = 4LL;
      v32 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v31, v29);
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
          memset64(v32, v30 | 1, v34);
        v35 = *(_DWORD *)(a1 + 20);
        v36 = 0;
        v37 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
        if ( (v35 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v38 = *(_QWORD *)(a1 + 24);
            while ( 1 )
            {
              v39 = *(_QWORD **)(v38 + 8LL * v36);
              if ( ((unsigned __int8)v39 & 1) != 0 )
                break;
              *(_QWORD *)(v38 + 8LL * v36) = *v39;
              v50 = v37 & v39[1];
              v40 = (37
                   * (BYTE6(v50)
                    + 37
                    * (BYTE5(v50)
                     + 37
                     * (BYTE4(v50)
                      + 37
                      * (BYTE3(v50) + 37 * (BYTE2(v50) + 37 * (BYTE1(v50) + 37 * ((unsigned __int8)v50 + 11623883)))))))
                   + HIBYTE(v50)) & (unsigned int)(v31 - 1);
              *v39 = *(_QWORD *)&v32[8 * v40];
              *(_QWORD *)&v32[8 * v40] = v39;
            }
            v35 = *(_DWORD *)(a1 + 20);
            ++v36;
          }
          while ( v36 < v35 >> 5 );
          v29 = v53;
        }
        v41 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v32;
        *(_DWORD *)(a1 + 20) = v35 & 0x1F | (32 * v31);
        if ( v41 )
          ((void (__fastcall *)(__int64, __int64))v47[0])(v41, v29);
        v30 = a1 + 16;
      }
      else if ( *(_DWORD *)(a1 + 20) < 0x20u )
      {
LABEL_66:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
        RtlpStackDbEntryCleanup(a1, v46);
        return v3;
      }
    }
    v3 = (__int64)v46;
    v42 = *(_DWORD *)(v30 + 4);
    v51 = v46[1] & (-1LL << (v42 & 0x1F));
    v43 = *(_QWORD *)(v30 + 8);
    v44 = (37
         * (BYTE6(v51)
          + 37
          * (BYTE5(v51)
           + 37
           * (BYTE4(v51)
            + 37 * (BYTE3(v51) + 37 * (BYTE2(v51) + 37 * (BYTE1(v51) + 37 * ((unsigned __int8)v51 + 11623883)))))))
         + HIBYTE(v51)) & ((v42 >> 5) - 1);
    *v46 = *(_QWORD *)(v43 + 8 * v44);
    *(_QWORD *)(v43 + 8 * v44) = v46;
    ++*(_DWORD *)v30;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  }
  return v3;
}
