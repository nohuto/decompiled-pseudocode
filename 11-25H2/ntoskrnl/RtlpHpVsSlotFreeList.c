/*
 * XREFs of RtlpHpVsSlotFreeList @ 0x1404EFFFC
 * Callers:
 *     RtlpHpVsContextFree @ 0x1402E0830 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextCompact @ 0x1403C7B4C (RtlpHpVsContextCompact.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140213800 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkFree @ 0x1402E1780 (RtlpHpVsChunkFree.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140320690 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentFree @ 0x1403CB9D4 (RtlpHpVsSubsegmentFree.c)
 */

__int64 *__fastcall RtlpHpVsSlotFreeList(__int64 a1, __int64 a2, _QWORD *a3)
{
  bool v3; // zf
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r8
  int v12; // eax
  unsigned __int64 v13; // rcx
  __int64 v14; // r11
  int v15; // ecx
  unsigned __int64 v16; // r11
  int v17; // ecx
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r8
  int v20; // ecx
  __int64 *v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rdx
  __int64 *result; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v27; // [rsp+38h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-28h] BYREF
  __int64 v29; // [rsp+50h] [rbp-18h]

  v3 = (*(_BYTE *)(a1 + 5) & 1) == 0;
  v28 = 0LL;
  v29 = 0LL;
  v27 = &v26;
  v26 = (__int64)&v26;
  if ( v3 )
    RtlpHpAcquireQueuedLockExclusive((int *)(a2 + 8), *(unsigned __int8 *)(a1 + 3), (__int64)&v28);
  do
  {
    v7 = (unsigned __int64)(a3 - 2);
    v8 = *(a3 - 2);
    v9 = (unsigned __int64)(a3 - 2);
    a3 = (_QWORD *)*a3;
    v10 = HIDWORD(v9);
    v11 = v7;
    if ( (((unsigned int)v10 ^ ((RtlpHpHeapGlobals ^ v8) >> 32)) & 0xFF0000) != 0 )
    {
      v12 = *(_DWORD *)(v7 + 8) ^ v7;
      goto LABEL_8;
    }
    v13 = (v7 ^ RtlpHpHeapGlobals ^ v8) >> 32;
    if ( (_WORD)v13 )
    {
      v11 = v7 - 16LL * (unsigned __int16)v13;
      v14 = RtlpHpHeapGlobals ^ *(_QWORD *)v11;
      v15 = HIDWORD(v11) ^ HIDWORD(v14);
      v16 = v11 ^ v14;
      if ( (v15 & 0xFF0000) != 0 )
        goto LABEL_7;
      v18 = HIDWORD(v16);
      if ( (_WORD)v18 )
      {
        v11 -= 16LL * (unsigned __int16)v18;
LABEL_7:
        v12 = *(_DWORD *)(v11 + 8) ^ v11;
LABEL_8:
        v17 = (unsigned __int8)(RtlpHpHeapGlobals ^ v12);
        goto LABEL_12;
      }
    }
    v17 = 0;
LABEL_12:
    v19 = (v11 - (unsigned int)(v17 << 12)) & 0xFFFFFFFFFFFFF000uLL;
    if ( (((unsigned __int16)(*(_WORD *)(v19 + 32) ^ *(_WORD *)(v19 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
    {
      v20 = 18;
LABEL_19:
      RtlpLogHeapFailure(v20, *(_QWORD *)(a1 + 8) ^ a1, v19, 0LL, 0LL, 0LL);
      continue;
    }
    if ( (((unsigned int)v10 ^ HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v8)) & 0xFF0000) == 0 )
    {
      v19 = v7;
      v20 = 8;
      goto LABEL_19;
    }
    v21 = (__int64 *)RtlpHpVsChunkFree(a1, a2, v19, v7, 0, (__int64)&v28);
    if ( v21 )
    {
      v22 = v27;
      if ( (__int64 *)*v27 != &v26 )
LABEL_27:
        __fastfail(3u);
      v21[1] = (__int64)v27;
      *v21 = (__int64)&v26;
      *v22 = (__int64)v21;
      v27 = v21;
    }
  }
  while ( a3 );
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), (__int64)&v28);
  while ( 1 )
  {
    v23 = v26;
    result = &v26;
    if ( (__int64 *)v26 == &v26 )
      return result;
    if ( *(__int64 **)(v26 + 8) != &v26 )
      goto LABEL_27;
    v25 = *(_QWORD *)v26;
    if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 )
      goto LABEL_27;
    v26 = *(_QWORD *)v26;
    *(_QWORD *)(v25 + 8) = &v26;
    RtlpHpVsSubsegmentFree(a1, v23);
  }
}
