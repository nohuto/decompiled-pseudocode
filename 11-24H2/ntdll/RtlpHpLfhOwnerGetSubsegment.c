/*
 * XREFs of RtlpHpLfhOwnerGetSubsegment @ 0x180062820
 * Callers:
 *     RtlpHpLfhBucketGetSubsegment @ 0x180061120 (RtlpHpLfhBucketGetSubsegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180062D40 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800630F0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x180063C20 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x18006BE00 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

unsigned __int64 __fastcall RtlpHpLfhOwnerGetSubsegment(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r8
  _QWORD *v4; // r9
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int16 v8; // cx
  int v9; // r11d
  int v10; // r10d
  __int32 v11; // eax
  char v12; // r12
  int v13; // r14d
  __int16 v14; // r15
  int v15; // edx
  unsigned __int64 v16; // rcx
  unsigned __int16 v17; // r15
  __int64 v18; // r14
  unsigned int v19; // ebx
  __int64 v20; // rdi
  char v21; // cl
  __int64 v22; // r8
  __int64 v23; // r10
  char *v24; // r9
  int v25; // edx
  char *v26; // rcx
  signed __int16 v27; // ax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  unsigned __int64 *v34; // rcx
  _QWORD *v36; // rax
  unsigned __int64 *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // [rsp+48h] [rbp-1h]
  _QWORD *v42; // [rsp+50h] [rbp+7h] BYREF
  _QWORD *v43; // [rsp+58h] [rbp+Fh]
  _QWORD *v44; // [rsp+60h] [rbp+17h] BYREF
  unsigned __int64 *v45; // [rsp+68h] [rbp+1Fh]
  int v47; // [rsp+C0h] [rbp+77h]
  __int16 v48; // [rsp+C8h] [rbp+7Fh]

  v2 = a2;
  v45 = (unsigned __int64 *)&v44;
  v3 = *(_QWORD **)(a2 + 24);
  v44 = &v44;
  v4 = (_QWORD *)(a2 + 24);
  v43 = &v42;
  v6 = &v42;
  while ( 2 )
  {
    v42 = v6;
    while ( 1 )
    {
      if ( v3 == v4 )
      {
        if ( v6 != &v42 )
        {
          v7 = (unsigned __int64)v6;
          RtlpHpLfhSubsegmentDelayFreeProcess(a1, v6, 1LL);
LABEL_31:
          v6 = v42;
          goto LABEL_32;
        }
        v7 = 0LL;
        goto LABEL_32;
      }
      v7 = (unsigned __int64)v3;
      v3 = (_QWORD *)*v3;
      v8 = *(_WORD *)(v7 + 18);
      v9 = *(unsigned __int16 *)(v7 + 32);
      v10 = v9 + v8;
      if ( v10 )
        break;
      if ( v3[1] != v7 )
        goto LABEL_49;
      v36 = *(_QWORD **)(v7 + 8);
      if ( *v36 != v7 )
        goto LABEL_49;
      *v36 = v3;
      v3[1] = v36;
      v37 = v45;
      if ( (_QWORD **)*v45 != &v44 )
        goto LABEL_49;
      *(_QWORD *)(v7 + 8) = v45;
      *(_QWORD *)v7 = &v44;
      *v37 = v7;
      v6 = v42;
      v45 = (unsigned __int64 *)v7;
    }
    if ( v10 == *(unsigned __int16 *)(v7 + 34) )
    {
      if ( v3[1] != v7
        || (v38 = *(_QWORD **)(v7 + 8), *v38 != v7)
        || (*v38 = v3, v3[1] = v38, v39 = v42, (_QWORD **)v42[1] != &v42) )
      {
LABEL_49:
        __fastfail(3u);
      }
      *(_QWORD *)v7 = v42;
      *(_QWORD *)(v7 + 8) = &v42;
      v6 = (_QWORD *)v7;
      v39[1] = v7;
      continue;
    }
    break;
  }
  if ( v8 && v8 >= (unsigned __int16)v9 )
  {
    v11 = _InterlockedExchange((volatile __int32 *)(v7 + 16), 0);
    v12 = *(_BYTE *)(v7 + 51) & 1;
    v13 = *(unsigned __int16 *)(v7 + 34);
    v14 = HIWORD(v11);
    v15 = (unsigned __int16)(qword_1801CCEC8 ^ *(_WORD *)(v7 + 40) ^ (v7 >> 12));
    v16 = v7
        + ((unsigned __int64)((unsigned int)qword_1801CCEC8 ^ *(_DWORD *)(v7 + 40) ^ (unsigned int)(v7 >> 12)) >> 16);
    v48 = HIWORD(v11);
    v47 = v15;
    v41 = v16;
    if ( v13 != HIWORD(v11) + *(unsigned __int16 *)(v7 + 32) )
    {
      if ( *(_BYTE *)(v7 + 39) == 1 && !v12 && HIWORD(v11) > (unsigned int)*(unsigned __int8 *)(v7 + 24) - 8 )
      {
        RtlpHpLfhSubsegmentDelayFreeListBatch((_DWORD)a1, v7, v11, v16, v15);
        goto LABEL_30;
      }
LABEL_10:
      if ( !(_WORD)v11 )
        goto LABEL_30;
      v17 = v11;
      LODWORD(v18) = -1;
      while ( 2 )
      {
        v19 = v17 - 1;
        v20 = v16 + v15 * v19;
        v17 = *(_WORD *)v20;
        if ( *(_DWORD *)(v20 + 8) != ((unsigned int)v20 ^ HIDWORD(a1[10]) ^ __ROL4__(
                                                                              *(_DWORD *)v20 ^ a1[10],
                                                                              *(_WORD *)v20)) )
        {
          RtlpLogHeapFailure(23, (__int64)a1, v20, v7, v19, 0LL);
          NT_ASSERT("0");
        }
        if ( !v12 && *(_BYTE *)(v7 + 39) > 1u )
        {
          v21 = *(_BYTE *)(v7 + 38);
          v22 = (unsigned int)(v20 - v7) >> 12 >> v21;
          v23 = 2 * v22;
          v24 = (char *)(2 * v22 + v7 + 8LL * *(unsigned __int8 *)(v7 + 24));
          _m_prefetchw(v24);
          v25 = 0;
          v26 = &v24[2
                   * ((((_DWORD)v20
                      - (_DWORD)v7
                      + (*(unsigned __int16 *)(v7 + 40) ^ (unsigned __int16)(v7 >> 12) ^ (unsigned int)(unsigned __int16)qword_1801CCEC8)
                      - 1) >> 12 >> v21)
                    - (unsigned int)v22)
                   + 2];
          if ( v24 >= v26 )
            goto LABEL_24;
          do
          {
            v27 = _InterlockedDecrement16((volatile signed __int16 *)v24);
            if ( v27 )
            {
              if ( v27 == -1 )
                --v25;
            }
            else
            {
              ++v25;
              if ( (_DWORD)v18 == -1 )
                v18 = v23 >> 1;
            }
            v24 += 2;
            v23 += 2LL;
          }
          while ( v24 < v26 );
          if ( v25 )
            RtlpHpLfhContextUpdateFreeCommitCount(a1, v7, (v25 << 12 << *(_BYTE *)(v7 + 38)) / 4096);
          if ( (_DWORD)v18 == -1 )
          {
            LODWORD(v18) = -1;
          }
          else
          {
            RtlpHpLfhSubsegmentDecommitPages(a1, v7, (unsigned int)v18, 2LL);
LABEL_24:
            LODWORD(v18) = -1;
          }
        }
        v28 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v19 & 0x1F);
        v29 = v7 + 8 * ((unsigned __int64)v19 >> 5);
        if ( v12 )
        {
          v30 = *(_QWORD *)(v29 + 64);
          v40 = v30 & v28;
          v30 = (unsigned int)v30;
          *(_QWORD *)(v29 + 64) = v40;
        }
        else
        {
          _m_prefetchw((const void *)(v29 + 64));
          v30 = (unsigned int)_InterlockedAnd64((volatile signed __int64 *)(v29 + 64), v28);
        }
        if ( (~v28 & v30) == 0 )
        {
          RtlpLogHeapFailure(17, *a1, v20, v7, v19, 0LL);
          NT_ASSERT("0");
        }
        v16 = v41;
        v15 = v47;
        if ( !v17 )
        {
          v14 = v48;
          goto LABEL_30;
        }
        continue;
      }
    }
    if ( *(_BYTE *)(v7 + 39) != 1 )
      goto LABEL_10;
    memset_thunk_772440563353939046((void *)(v7 + 64), 0, 8LL * ((unsigned int)(v13 + 31) >> 5));
    *(_QWORD *)(v7 + 8LL * (((unsigned int)(v13 + 31) >> 5) - 1) + 64) = (unsigned int)~(0xFFFFFFFFuLL >> (-(char)v13 & 0x1F));
    *(_BYTE *)(v7 + 36) = 0;
LABEL_30:
    *(_WORD *)(v7 + 32) += v14;
    v2 = a2;
    goto LABEL_31;
  }
LABEL_32:
  if ( v6 != &v42 )
  {
    v31 = *(_QWORD **)(v2 + 32);
    *v31 = v6;
    v32 = v43;
    *(_QWORD *)(v2 + 32) = v43;
    *v32 = v2 + 24;
    v42[1] = v31;
  }
  if ( v44 != &v44 )
  {
    v33 = *(_QWORD **)(v2 + 32);
    *v33 = v44;
    v34 = v45;
    *(_QWORD *)(v2 + 32) = v45;
    *v34 = v2 + 24;
    v44[1] = v33;
  }
  return v7;
}
