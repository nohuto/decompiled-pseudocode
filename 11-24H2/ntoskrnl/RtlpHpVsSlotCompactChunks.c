/*
 * XREFs of RtlpHpVsSlotCompactChunks @ 0x14035C460
 * Callers:
 *     RtlpHpVsContextCompact @ 0x14035CB7C (RtlpHpVsContextCompact.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140336C60 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14035C9F8 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsSubsegmentFree @ 0x14035CC40 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403628A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsChunkFree @ 0x1403645D0 (RtlpHpVsChunkFree.c)
 */

__int64 **__fastcall RtlpHpVsSlotCompactChunks(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // r10
  __int64 v5; // rdx
  unsigned __int64 *v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  char v9; // dl
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  int v16; // edx
  ULONG_PTR v17; // rdi
  unsigned int v18; // r14d
  unsigned int v19; // r9d
  unsigned int v20; // eax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 ***v24; // rax
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 **result; // rax
  __int64 *v30; // rax
  __int64 v31; // rax
  unsigned __int64 v33; // rax
  unsigned int v34; // r14d
  char v35; // r8
  int v36; // ecx
  unsigned __int64 v37; // rdx
  unsigned int v38; // eax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  char v41; // r8
  __int64 v42; // rcx
  __int64 *v43; // [rsp+30h] [rbp-58h] BYREF
  __int64 **v44; // [rsp+38h] [rbp-50h]
  __int128 v45; // [rsp+40h] [rbp-48h] BYREF
  __int64 v46; // [rsp+50h] [rbp-38h]

  v2 = (*(_BYTE *)(a1 + 5) & 1) == 0;
  v3 = a2;
  v45 = 0LL;
  v46 = 0LL;
  v44 = &v43;
  v43 = (__int64 *)&v43;
  if ( v2 )
  {
    RtlpHpAcquireQueuedLockExclusive((int *)(a2 + 8), *(unsigned __int8 *)(a1 + 3), (__int64)&v45);
    v3 = a2;
  }
  v5 = *(_QWORD *)(v3 + 24);
  v6 = (unsigned __int64 *)(v3 + 16);
  v7 = *(_QWORD *)(v3 + 16);
  v8 = 0LL;
  if ( (v5 & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_10;
    v7 ^= (unsigned __int64)v6;
  }
  if ( v7 )
  {
    v9 = v5 & 1;
    do
    {
      v10 = *(_QWORD *)(v7 + 8);
      v8 = v7;
      if ( v9 && v10 )
        v7 ^= v10;
      else
        v7 = *(_QWORD *)(v7 + 8);
    }
    while ( v7 );
  }
LABEL_10:
  while ( v8 )
  {
    v11 = *(_QWORD *)(v8 - 8);
    v12 = v8 - 8;
    v13 = v8 - 8;
    v14 = (RtlpHpHeapGlobals ^ v11 ^ (v8 - 8)) >> 32;
    if ( (v14 & 0xFF0000) != 0 )
    {
      v16 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)v8 ^ v12);
    }
    else
    {
      if ( !(_WORD)v14 )
        goto LABEL_48;
      v13 -= 16LL * (unsigned __int16)v14;
      v15 = (*(_QWORD *)v13 ^ RtlpHpHeapGlobals ^ v13) >> 32;
      if ( (v15 & 0xFF0000) != 0 )
      {
        v16 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v13 + 8) ^ v13);
        goto LABEL_17;
      }
      if ( !(_WORD)v15 )
      {
LABEL_48:
        v16 = 0;
        goto LABEL_17;
      }
      v13 -= 16LL * (unsigned __int16)v15;
      v16 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v13 + 8) ^ v13);
    }
LABEL_17:
    v17 = (v13 - (unsigned int)(v16 << 12)) & 0xFFFFFFFFFFFFF000uLL;
    if ( ((v12 ^ RtlpHpHeapGlobals ^ v11) & 0xFF000000000000LL) != 0
      || (((unsigned __int16)(*(_WORD *)(v17 + 32) ^ *(_WORD *)(v17 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
    {
      RtlpLogHeapFailure(18, *(_QWORD *)(a1 + 8) ^ a1, v17, v8 - 8, 0LL, 0LL);
    }
    else if ( 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v12 ^ *(_DWORD *)v12) >> 16)) >= 0x1000 )
    {
      v18 = RtlpHpHeapGlobals ^ v12 ^ *(_DWORD *)v12;
      v19 = (v12 - v17 + 4127) & 0xFFFFF000;
      v20 = (v12 + 16 * HIWORD(v18) - v17) & 0xFFFFF000;
      if ( v19 >= v20
        || (*(_QWORD *)(v17 + 16) & (-1LL << (v19 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                     - (unsigned __int8)((unsigned __int64)(v20 - 1) >> 12)))) == 0 )
      {
        v21 = v8;
        if ( *(_QWORD *)v8 )
        {
          v22 = v8 ^ *(_QWORD *)v8;
          v8 = *(_QWORD *)v8;
          if ( (*(_BYTE *)(a1 + 5) & 1) != 0 )
            v8 = v22;
          while ( *(_QWORD *)(v8 + 8) )
          {
            v23 = *(_QWORD *)(v8 + 8);
            if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v23 )
              v8 ^= v23;
            else
              v8 = *(_QWORD *)(v8 + 8);
          }
        }
        else
        {
          v26 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v26 )
            v8 ^= v26;
          else
            v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          while ( v8 )
          {
            v27 = *(_QWORD *)(v8 + 8);
            if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v27 )
              v27 ^= v8;
            if ( v27 == v21 )
              break;
            v21 = v8;
            v28 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v28 )
              v8 ^= v28;
            else
              v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          }
        }
        continue;
      }
      RtlpHpVsFreeChunkRemove(a1, v3, v17, v8 - 8);
      *(_BYTE *)(v12 + 6) = BYTE6(v12) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
      *(_DWORD *)v8 = (unsigned __int8)(RtlpHpHeapGlobals ^ v12 ^ ((unsigned int)(v12 - v17) >> 12));
      v24 = (__int64 ***)RtlpHpVsChunkFree(a1, a2, v17, (int)v8 - 8, 1, (__int64)&v45);
      if ( v24 )
      {
        v25 = v44;
        if ( *v44 != (__int64 *)&v43 )
LABEL_34:
          __fastfail(3u);
        v24[1] = v44;
        *v24 = &v43;
        *v25 = v24;
        v44 = (__int64 **)v24;
      }
      v31 = *(__int16 *)(a1 + 6);
      if ( (_WORD)v31 ? *(_QWORD *)(v31 + a1 + 32) : *(_QWORD *)(a1 + 88) )
      {
        v33 = v6[1];
        v34 = v18 + 1;
        v8 = *v6;
        if ( (v33 & 1) != 0 && v8 )
          v8 ^= (unsigned __int64)v6;
        v35 = v33;
        v36 = v33 & 1;
        v37 = 0LL;
        while ( 1 )
        {
          if ( !v8 )
          {
            v3 = a2;
            v8 = v37;
            if ( !v37 )
            {
              v40 = *v6;
              v8 = 0LL;
              if ( (v6[1] & 1) != 0 )
              {
                if ( v40 )
                {
                  v40 ^= (unsigned __int64)v6;
                  goto LABEL_75;
                }
              }
              else
              {
LABEL_75:
                if ( v40 )
                {
                  v41 = v35 & 1;
                  do
                  {
                    v42 = *(_QWORD *)(v40 + 8);
                    v8 = v40;
                    if ( v41 && v42 )
                      v40 ^= v42;
                    else
                      v40 = *(_QWORD *)(v40 + 8);
                  }
                  while ( v40 );
                }
              }
              v3 = a2;
            }
            goto LABEL_10;
          }
          v38 = RtlpHpHeapGlobals ^ *(_DWORD *)(v8 - 8) ^ (v8 - 8);
          if ( v34 < v38 )
          {
            v39 = *(_QWORD *)v8;
            v37 = v8;
            if ( !v36 || !v39 )
              goto LABEL_68;
            v8 ^= v39;
          }
          else
          {
            if ( v34 <= v38 )
            {
              v3 = a2;
              goto LABEL_10;
            }
            v39 = *(_QWORD *)(v8 + 8);
            if ( v36 && v39 )
              v8 ^= v39;
            else
LABEL_68:
              v8 = v39;
          }
        }
      }
    }
    break;
  }
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), &v45);
  while ( 1 )
  {
    result = &v43;
    if ( v43 == (__int64 *)&v43 )
      return result;
    if ( (__int64 **)v43[1] != &v43 )
      goto LABEL_34;
    v30 = (__int64 *)*v43;
    if ( *(__int64 **)(*v43 + 8) != v43 )
      goto LABEL_34;
    v43 = (__int64 *)*v43;
    v30[1] = (__int64)&v43;
    RtlpHpVsSubsegmentFree(a1);
  }
}
