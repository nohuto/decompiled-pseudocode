/*
 * XREFs of RtlpHpVsSlotFreeList @ 0x14035C0D0
 * Callers:
 *     RtlpHpVsContextFree @ 0x14035BAE0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextCompact @ 0x14035CB7C (RtlpHpVsContextCompact.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140336C60 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHpVsSubsegmentFree @ 0x14035CC40 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403628A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsChunkFree @ 0x1403645D0 (RtlpHpVsChunkFree.c)
 */

__int64 **__fastcall RtlpHpVsSlotFreeList(__int64 a1, __int64 a2, _QWORD *a3)
{
  bool v3; // zf
  int v5; // r14d
  ULONG_PTR v7; // r10
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  ULONG_PTR v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // r11
  int v14; // ecx
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r11
  int v17; // eax
  int v18; // ecx
  ULONG_PTR v19; // r8
  int v20; // ecx
  __int64 ***v21; // rax
  __int64 **result; // rax
  __int64 *v23; // rax
  _QWORD *v24; // rcx
  __int64 *v25; // [rsp+30h] [rbp-38h] BYREF
  __int64 **v26; // [rsp+38h] [rbp-30h]
  __int128 v27; // [rsp+40h] [rbp-28h] BYREF
  __int64 v28; // [rsp+50h] [rbp-18h]

  v3 = (*(_BYTE *)(a1 + 5) & 1) == 0;
  v27 = 0LL;
  v28 = 0LL;
  v5 = a2;
  v26 = &v25;
  v25 = (__int64 *)&v25;
  if ( v3 )
    RtlpHpAcquireQueuedLockExclusive((int *)(a2 + 8), *(unsigned __int8 *)(a1 + 3), (__int64)&v27);
  do
  {
    v7 = (ULONG_PTR)(a3 - 2);
    v8 = *(a3 - 2);
    v9 = (unsigned __int64)(a3 - 2);
    a3 = (_QWORD *)*a3;
    v10 = HIDWORD(v9);
    v11 = v7;
    if ( (((unsigned int)v10 ^ ((RtlpHpHeapGlobals ^ v8) >> 32)) & 0xFF0000) != 0 )
    {
      v17 = *(_DWORD *)(v7 + 8) ^ v7;
      goto LABEL_9;
    }
    v12 = (v7 ^ RtlpHpHeapGlobals ^ v8) >> 32;
    if ( (_WORD)v12 )
    {
      v11 = v7 - 16LL * (unsigned __int16)v12;
      v13 = RtlpHpHeapGlobals ^ *(_QWORD *)v11;
      v14 = HIDWORD(v11) ^ HIDWORD(v13);
      v15 = v11 ^ v13;
      if ( (v14 & 0xFF0000) != 0 )
        goto LABEL_8;
      v16 = HIDWORD(v15);
      if ( (_WORD)v16 )
      {
        v11 -= 16LL * (unsigned __int16)v16;
LABEL_8:
        v17 = *(_DWORD *)(v11 + 8) ^ v11;
LABEL_9:
        v18 = (unsigned __int8)(RtlpHpHeapGlobals ^ v17);
        goto LABEL_10;
      }
    }
    v18 = 0;
LABEL_10:
    v19 = (v11 - (unsigned int)(v18 << 12)) & 0xFFFFFFFFFFFFF000uLL;
    if ( (((unsigned __int16)(*(_WORD *)(v19 + 32) ^ *(_WORD *)(v19 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
    {
      v20 = 18;
      goto LABEL_13;
    }
    if ( (((unsigned int)v10 ^ HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v8)) & 0xFF0000) == 0 )
    {
      v19 = v7;
      v20 = 8;
LABEL_13:
      RtlpLogHeapFailure(v20, *(_QWORD *)(a1 + 8) ^ a1, v19, 0LL, 0LL, 0LL);
      continue;
    }
    v21 = (__int64 ***)RtlpHpVsChunkFree(a1, v5, v19, v7, 0, (__int64)&v27);
    if ( v21 )
    {
      v24 = v26;
      if ( *v26 != (__int64 *)&v25 )
LABEL_25:
        __fastfail(3u);
      v21[1] = v26;
      *v21 = &v25;
      *v24 = v21;
      v26 = (__int64 **)v21;
    }
  }
  while ( a3 );
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), &v27);
  while ( 1 )
  {
    result = &v25;
    if ( v25 == (__int64 *)&v25 )
      return result;
    if ( (__int64 **)v25[1] != &v25 )
      goto LABEL_25;
    v23 = (__int64 *)*v25;
    if ( *(__int64 **)(*v25 + 8) != v25 )
      goto LABEL_25;
    v25 = (__int64 *)*v25;
    v23[1] = (__int64)&v25;
    RtlpHpVsSubsegmentFree(a1);
  }
}
