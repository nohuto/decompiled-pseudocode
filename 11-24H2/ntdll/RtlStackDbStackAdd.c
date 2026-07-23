/*
 * XREFs of RtlStackDbStackAdd @ 0x18011BFB8
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1800DA400 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpStackDbEntryCleanup @ 0x18015BCAC (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x18015BD2C (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbEntryIsEqual @ 0x18015BE3C (RtlpStackDbEntryIsEqual.c)
 *     RtlpStackDbRefCountIncrement @ 0x18015BEEC (RtlpStackDbRefCountIncrement.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned int v22; // esi
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // r13
  int IsEqual; // eax
  __int64 v27; // r13
  __int64 v28; // r14
  __int64 v29; // rsi
  char *v30; // r8
  char v31; // cl
  unsigned __int64 v32; // rcx
  unsigned int v33; // edx
  unsigned int v34; // edi
  __int64 v35; // r10
  __int64 v36; // r13
  _QWORD *v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // edi
  __int64 v41; // rcx
  __int64 v42; // rdx
  _QWORD *v44; // [rsp+20h] [rbp-20h]
  _QWORD v45[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v46; // [rsp+80h] [rbp+40h]
  __int64 v47; // [rsp+80h] [rbp+40h]
  __int64 v48; // [rsp+80h] [rbp+40h]
  __int64 v49; // [rsp+80h] [rbp+40h]
  __int64 v50; // [rsp+98h] [rbp+58h]
  __int64 v51; // [rsp+98h] [rbp+58h]

  v3 = 0LL;
  v4 = a2;
  HIDWORD(v45[0]) = 0;
  if ( !a1 || !a3 || !a2 )
    return v3;
  v6 = a3;
  v7 = 314159LL;
  LODWORD(v45[0]) = a3;
  v45[1] = a2;
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
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  v17 = 0LL;
  v18 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v19 = v7 & v18;
LABEL_22:
  if ( v17 )
    goto LABEL_25;
  v20 = *(_DWORD *)(a1 + 20) >> 5;
  if ( v20 )
  {
    v46 = v7 & v18;
    v17 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((37
          * (BYTE6(v46)
           + 37
           * (BYTE5(v46)
            + 37
            * (BYTE4(v46)
             + 37 * (BYTE3(v46) + 37 * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * ((unsigned __int8)v19 + 11623883)))))))
          + HIBYTE(v46)) & (unsigned int)(v20 - 1));
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
        if ( (unsigned int)RtlpStackDbEntryIsEqual(v17, v45) )
        {
          v3 = v17 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v17 + 16, v21) != 0);
          RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
          return v3;
        }
        goto LABEL_22;
      }
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  v44 = (_QWORD *)RtlpStackDbEntryCreate(a1, v45, v7);
  if ( v44 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
    v22 = *(_DWORD *)(a1 + 20);
    v23 = 0LL;
    v50 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v24 = v50;
    v25 = v7 & v50;
LABEL_32:
    if ( v23 )
      goto LABEL_35;
    if ( v22 >> 5 )
    {
      v24 = v50;
      v47 = v7 & v50;
      v23 = *(_QWORD *)(a1 + 24)
          + 8LL
          * ((37
            * (BYTE6(v47)
             + 37
             * (BYTE5(v47)
              + 37
              * (BYTE4(v47)
               + 37 * (BYTE3(v47) + 37 * (BYTE2(v47) + 37 * (BYTE1(v47) + 37 * ((unsigned __int8)v25 + 11623883)))))))
            + HIBYTE(v47)) & ((v22 >> 5) - 1));
LABEL_35:
      while ( 1 )
      {
        v23 = *(_QWORD *)v23;
        if ( (v23 & 1) != 0 )
          break;
        if ( v25 == (v24 & *(_QWORD *)(v23 + 8)) )
        {
          if ( !v23 )
            break;
          IsEqual = RtlpStackDbEntryIsEqual(v23, v45);
          v24 = v50;
          if ( IsEqual )
          {
            v3 = v23 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v23 + 16, v50) != 0);
            goto LABEL_66;
          }
          goto LABEL_32;
        }
      }
    }
    v27 = *(_QWORD *)(a1 + 64);
    v28 = a1 + 16;
    v29 = 2 * (v22 >> 5);
    v51 = v27;
    v45[0] = *(_QWORD *)(a1 + 56);
    if ( *(_DWORD *)(a1 + 16) >= (unsigned int)v29 )
    {
      if ( (unsigned int)v29 < 4 )
        v29 = 4LL;
      v30 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v29, v27);
      if ( v30 )
      {
        if ( (((_DWORD)v29 - 1) & (unsigned int)v29) != 0 )
        {
          v31 = -1;
          do
          {
            ++v31;
            LODWORD(v29) = (unsigned int)v29 >> 1;
          }
          while ( (_DWORD)v29 );
          v29 = (unsigned int)(1 << v31);
        }
        if ( (unsigned int)v29 > 0x4000000 )
          v29 = 0x4000000LL;
        v32 = (unsigned int)v29;
        if ( v30 > &v30[8 * v29] )
          v32 = 0LL;
        if ( v32 )
          memset64(v30, v28 | 1, v32);
        v33 = *(_DWORD *)(a1 + 20);
        v34 = 0;
        v35 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
        if ( (v33 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v36 = *(_QWORD *)(a1 + 24);
            while ( 1 )
            {
              v37 = *(_QWORD **)(v36 + 8LL * v34);
              if ( ((unsigned __int8)v37 & 1) != 0 )
                break;
              *(_QWORD *)(v36 + 8LL * v34) = *v37;
              v48 = v35 & v37[1];
              v38 = (37
                   * (BYTE6(v48)
                    + 37
                    * (BYTE5(v48)
                     + 37
                     * (BYTE4(v48)
                      + 37
                      * (BYTE3(v48) + 37 * (BYTE2(v48) + 37 * (BYTE1(v48) + 37 * ((unsigned __int8)v48 + 11623883)))))))
                   + HIBYTE(v48)) & (unsigned int)(v29 - 1);
              *v37 = *(_QWORD *)&v30[8 * v38];
              *(_QWORD *)&v30[8 * v38] = v37;
            }
            v33 = *(_DWORD *)(a1 + 20);
            ++v34;
          }
          while ( v34 < v33 >> 5 );
          v27 = v51;
        }
        v39 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v30;
        *(_DWORD *)(a1 + 20) = v33 & 0x1F | (32 * v29);
        if ( v39 )
          ((void (__fastcall *)(__int64, __int64))v45[0])(v39, v27);
        v28 = a1 + 16;
      }
      else if ( *(_DWORD *)(a1 + 20) < 0x20u )
      {
LABEL_66:
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
        RtlpStackDbEntryCleanup(a1, v44);
        return v3;
      }
    }
    v3 = (__int64)v44;
    v40 = *(_DWORD *)(v28 + 4);
    v49 = v44[1] & (-1LL << (v40 & 0x1F));
    v41 = *(_QWORD *)(v28 + 8);
    v42 = (37
         * (BYTE6(v49)
          + 37
          * (BYTE5(v49)
           + 37
           * (BYTE4(v49)
            + 37 * (BYTE3(v49) + 37 * (BYTE2(v49) + 37 * (BYTE1(v49) + 37 * ((unsigned __int8)v49 + 11623883)))))))
         + HIBYTE(v49)) & ((v40 >> 5) - 1);
    *v44 = *(_QWORD *)(v41 + 8 * v42);
    *(_QWORD *)(v41 + 8 * v42) = v44;
    ++*(_DWORD *)v28;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  }
  return v3;
}
