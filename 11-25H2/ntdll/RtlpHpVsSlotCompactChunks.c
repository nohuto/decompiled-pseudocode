/*
 * XREFs of RtlpHpVsSlotCompactChunks @ 0x18011CF64
 * Callers:
 *     RtlpHpVsSlotCompact @ 0x18011CEF4 (RtlpHpVsSlotCompact.c)
 * Callees:
 *     RtlpHpVsSubsegmentFree @ 0x18000AF04 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x18000D7C0 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsChunkFree @ 0x18000F800 (RtlpHpVsChunkFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 */

__int64 *__fastcall RtlpHpVsSlotCompactChunks(__int64 a1, _RTL_SRWLOCK *a2)
{
  _RTL_SRWLOCK *v2; // r10
  _RTL_SRWLOCK *v4; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 Value; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  unsigned __int64 v16; // rdi
  unsigned int v17; // r13d
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // r8d
  __int64 *v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // r13d
  unsigned __int64 v25; // r10
  unsigned int v26; // eax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  bool v32; // zf
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 *result; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v39; // [rsp+38h] [rbp-60h]
  PRTL_SRWLOCK SRWLock[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v41; // [rsp+50h] [rbp-48h]

  v32 = (*(_BYTE *)(a1 + 5) & 1) == 0;
  v2 = a2;
  *(_OWORD *)SRWLock = 0LL;
  v41 = 0LL;
  v39 = &v38;
  v38 = (__int64)&v38;
  if ( v32 )
  {
    SRWLock[1] = a2 + 1;
    RtlAcquireSRWLockExclusive(a2 + 1);
    v2 = a2;
  }
  v4 = v2 + 2;
  v5 = 0LL;
  Value = v2[2].Value;
  if ( (*(_BYTE *)&v2[3].0 & 1) == 0 )
    goto LABEL_6;
  if ( Value )
  {
    Value ^= (unsigned __int64)v4;
LABEL_6:
    while ( Value )
    {
      v7 = *(_QWORD *)(Value + 8);
      v5 = Value;
      if ( (*(_BYTE *)&v2[3].0 & 1) != 0 && v7 )
        Value ^= v7;
      else
        Value = *(_QWORD *)(Value + 8);
    }
  }
  v8 = RtlpHpHeapGlobals;
  while ( v5 )
  {
    v9 = v5 - 8;
    v10 = *(_QWORD *)(v5 - 8);
    v11 = v5 - 8;
    v12 = HIDWORD(v8) ^ HIDWORD(v10) ^ ((v5 - 8) >> 32);
    if ( (v12 & 0xFF0000) != 0 )
    {
      v13 = *(_DWORD *)v5 ^ v9;
      goto LABEL_19;
    }
    if ( (_WORD)v12 )
    {
      v11 -= 16LL * (unsigned __int16)(WORD2(v8) ^ HIDWORD(*(_QWORD *)(v5 - 8)) ^ ((v5 - 8) >> 32));
      v14 = HIDWORD(*(_QWORD *)v11) ^ HIDWORD(v8) ^ HIDWORD(v11);
      if ( (v14 & 0xFF0000) != 0 )
        goto LABEL_18;
      if ( (_WORD)v14 )
      {
        v11 -= 16LL * (unsigned __int16)(HIDWORD(*(_QWORD *)v11) ^ WORD2(v8) ^ WORD2(v11));
LABEL_18:
        v13 = *(_DWORD *)(v11 + 8) ^ v11;
LABEL_19:
        v15 = (unsigned __int8)(v8 ^ v13);
        goto LABEL_23;
      }
    }
    v15 = 0;
LABEL_23:
    v16 = (v11 - (unsigned int)(v15 << 12)) & 0xFFFFFFFFFFFFF000uLL;
    if ( ((HIDWORD(v9) ^ HIDWORD(v8) ^ HIDWORD(v10)) & 0xFF0000) != 0
      || (((unsigned __int16)(*(_WORD *)(v16 + 32) ^ *(_WORD *)(v16 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
    {
      RtlpLogHeapFailure(18, *(_QWORD *)(a1 + 8) ^ a1, v16, v5 - 8, 0LL, 0LL);
      break;
    }
    v17 = v8 ^ *(_DWORD *)v9 ^ v9;
    v18 = 16 * HIWORD(v17);
    if ( v18 < 0x1000 )
      break;
    v19 = (v9 + v18 - v16) & 0xFFFFF000;
    v20 = (v9 - v16 + 4127) & 0xFFFFF000;
    if ( v20 < v19
      && (*(_QWORD *)(v16 + 16) & (-1LL << (v20 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                   - (unsigned __int8)((unsigned __int64)(v19 - 1) >> 12)))) != 0 )
    {
      RtlpHpVsFreeChunkRemove(a1, (_RTL_RB_TREE *)v2, v16, v5 - 8);
      *(_BYTE *)(v9 + 6) = BYTE6(v9) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
      *(_DWORD *)v5 = (unsigned __int8)(RtlpHpHeapGlobals ^ v9 ^ ((unsigned int)(v9 - v16) >> 12));
      v21 = (__int64 *)RtlpHpVsChunkFree(a1, (unsigned __int64)a2, v16, v5 - 8, 1, (__int64)SRWLock);
      if ( v21 )
      {
        v22 = v39;
        if ( (__int64 *)*v39 != &v38 )
LABEL_89:
          __fastfail(3u);
        v21[1] = (__int64)v39;
        *v21 = (__int64)&v38;
        *v22 = (__int64)v21;
        v39 = v21;
      }
      if ( *(_WORD *)(a1 + 6) )
        v23 = *(_QWORD *)(*(__int16 *)(a1 + 6) + a1 + 32);
      else
        v23 = *(_QWORD *)(a1 + 88);
      if ( !v23 )
        break;
      v24 = v17 + 1;
      if ( (v4[1].Value & 1) != 0 )
      {
        if ( v4->Value )
          v5 = v4->Value ^ (unsigned __int64)v4;
        else
          v5 = 0LL;
      }
      else
      {
        v5 = v4->Value;
      }
      v25 = 0LL;
      v8 = RtlpHpHeapGlobals;
      while ( v5 )
      {
        v26 = RtlpHpHeapGlobals ^ *(_DWORD *)(v5 - 8) ^ (v5 - 8);
        if ( v24 >= v26 )
        {
          if ( v24 <= v26 )
            goto LABEL_61;
          v27 = *(_QWORD *)(v5 + 8);
        }
        else
        {
          v27 = *(_QWORD *)v5;
          v25 = v5;
        }
        if ( (*(_BYTE *)&v4[1].0 & 1) != 0 && v27 )
          v5 ^= v27;
        else
          v5 = v27;
      }
      v5 = v25;
      v32 = v25 == 0;
      v2 = a2;
      if ( !v32 )
        continue;
      v5 = 0LL;
      if ( (v4[1].Value & 1) != 0 )
      {
        if ( !v4->Value )
          goto LABEL_61;
        v28 = v4->Value ^ (unsigned __int64)v4;
      }
      else
      {
        v28 = v4->Value;
      }
      while ( v28 )
      {
        v29 = *(_QWORD *)(v28 + 8);
        v5 = v28;
        if ( (*(_BYTE *)&v4[1].0 & 1) != 0 && v29 )
          v28 ^= v29;
        else
          v28 = *(_QWORD *)(v28 + 8);
      }
LABEL_61:
      v2 = a2;
    }
    else
    {
      v30 = v5;
      v31 = *(_QWORD *)v5;
      if ( *(_QWORD *)v5 )
      {
        v32 = (*(_BYTE *)(a1 + 5) & 1) == 0;
LABEL_66:
        if ( !v32 )
        {
          v5 ^= v31;
          goto LABEL_69;
        }
        while ( 1 )
        {
          v5 = v31;
LABEL_69:
          if ( !*(_QWORD *)(v5 + 8) )
            break;
          v31 = *(_QWORD *)(v5 + 8);
          if ( (*(_BYTE *)(a1 + 5) & 1) != 0 )
          {
            v32 = v31 == 0;
            goto LABEL_66;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v34 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v34 )
            v5 ^= v34;
          else
            v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v5 )
            break;
          v33 = *(_QWORD *)(v5 + 8);
          if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v33 )
            v33 ^= v5;
          if ( v33 == v30 )
            break;
          v30 = v5;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlReleaseSRWLockExclusive(SRWLock[1]);
  while ( 1 )
  {
    v35 = v38;
    result = &v38;
    if ( (__int64 *)v38 == &v38 )
      return result;
    if ( *(__int64 **)(v38 + 8) != &v38 )
      goto LABEL_89;
    v37 = *(_QWORD *)v38;
    if ( *(_QWORD *)(*(_QWORD *)v38 + 8LL) != v38 )
      goto LABEL_89;
    v38 = *(_QWORD *)v38;
    *(_QWORD *)(v37 + 8) = &v38;
    RtlpHpVsSubsegmentFree(a1, v35);
  }
}
