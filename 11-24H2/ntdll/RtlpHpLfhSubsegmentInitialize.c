/*
 * XREFs of RtlpHpLfhSubsegmentInitialize @ 0x180065C18
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1800669B0 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlpHpLfhBlockBitmapInitialize @ 0x180063FD0 (RtlpHpLfhBlockBitmapInitialize.c)
 *     RtlpHpLfhSubsegmentPrefetchRange @ 0x1800DD8F0 (RtlpHpLfhSubsegmentPrefetchRange.c)
 *     RtlpHpLfhSubsegmentComputeCommitUnit @ 0x1800DDAD0 (RtlpHpLfhSubsegmentComputeCommitUnit.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpHpLfhSubsegmentInitialize(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned __int8 *a5,
        __int64 a6,
        int a7)
{
  unsigned int v9; // ebp
  unsigned int v10; // r13d
  unsigned int v11; // eax
  unsigned int v12; // r10d
  int v13; // r9d
  __int64 v14; // r11
  int v15; // edi
  unsigned int v16; // ecx
  int v17; // r14d
  int v18; // edi
  unsigned __int64 v19; // r8
  int v20; // r14d
  __int64 v21; // rax
  unsigned int v22; // esi
  __int64 v23; // r9
  unsigned int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rax
  _WORD *v27; // rdx
  char *v28; // r8
  char *v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int8 v31; // dl
  unsigned __int8 v32; // cl
  unsigned __int8 v33; // al
  char v34; // al
  __int64 v35; // rax
  __int16 v36; // cx
  char *v37; // rdi
  int v39; // [rsp+20h] [rbp-58h]
  __int64 v40; // [rsp+28h] [rbp-50h]
  int v41; // [rsp+88h] [rbp+10h]
  __int16 v43; // [rsp+90h] [rbp+18h]
  int v45; // [rsp+B0h] [rbp+38h]

  v9 = a3;
  v40 = (*a5 >> 1) + 1;
  v10 = (unsigned __int16)RtlpBucketBlockSizes[v40];
  v11 = RtlpHpLfhSubsegmentComputeCommitUnit(a2, (unsigned __int16)RtlpBucketBlockSizes[v40]);
  v14 = (unsigned int)(v13 + 2);
  v15 = 2 * (a2 / v11);
  v16 = a2 - v15;
  v17 = v15 + 79;
  v18 = a4;
  v19 = (8 * v16 - 512) / (v14 + (unsigned __int64)(8 * v10));
  v20 = (v17 + 8 * (((unsigned __int64)(unsigned int)v19 + 31) >> 5)) & 0xFFFFFFF0;
  v21 = (a2 - v20) / v10;
  if ( (unsigned int)v19 < (unsigned int)v21 )
    v21 = (unsigned int)v19;
  v22 = v21;
  v39 = 8 * ((unsigned __int64)(v21 + 31) >> 5);
  if ( a4 )
  {
    v23 = v12;
    v9 = a2;
    if ( a4 == v12 && a2 >= 0x10000 )
      v9 = 0x10000;
  }
  else
  {
    v23 = v12 + 2;
  }
  v45 = v12 & a7;
  if ( v45 )
    v23 = (unsigned int)v14;
  RtlpHpLfhSubsegmentPrefetchRange(a1, 0LL, v9, v23);
  memset_thunk_772440563353939046((void *)a1, 0, 0x40uLL);
  HIWORD(v41) = v20;
  LOWORD(v41) = v10;
  *(_DWORD *)(a1 + 40) = v41 ^ qword_1801CCEC8 ^ (a1 >> 12);
  *(_WORD *)(a1 + 44) = (unsigned __int64)&a5[-a6] >> 6;
  _BitScanForward(&v24, a3 >> 12);
  *(_WORD *)(a1 + 32) = v22;
  LOBYTE(v43) = v24;
  HIBYTE(v43) = a2 >> 12 >> v24;
  *(_WORD *)(a1 + 34) = v22;
  *(_BYTE *)(a1 + 22) = 3;
  *(_WORD *)(a1 + 46) = 0;
  *(_WORD *)(a1 + 38) = v43;
  v25 = (unsigned __int8)((unsigned int)(v39 + 64) >> 3);
  v26 = *(unsigned __int8 *)(a1 + 39);
  *(_BYTE *)(a1 + 24) = v25;
  v27 = (_WORD *)(a1 + 8 * v25);
  v28 = (char *)&v27[v26];
  *v27 = 1;
  v29 = (char *)(v27 + 1);
  v30 = (unsigned __int64)(v28 - v29 + 1) >> 1;
  if ( v29 > v28 )
    v30 = 0LL;
  if ( v30 )
  {
    v37 = v29;
    while ( v30 )
    {
      *(_WORD *)v37 = -1;
      v37 += 2;
      --v30;
    }
    v18 = a4;
  }
  v31 = RtlpSearchWidth[v40];
  v32 = 32;
  v33 = 32;
  if ( v31 < 0x20u )
    v33 = RtlpSearchWidth[v40];
  if ( v33 < v22 )
  {
    if ( v31 < 0x20u )
      v32 = RtlpSearchWidth[v40];
    v34 = v32;
  }
  else
  {
    v34 = v22;
  }
  *(_BYTE *)(a1 + 50) = v34;
  RtlpHpLfhBlockBitmapInitialize((void *)(a1 + 64), v22);
  if ( ((v10 - 1) & v10) == 0 )
  {
    v20 = (unsigned __int16)v20 - ((v10 - 1) & ((unsigned __int16)v20 + v10 - 1)) + v10 - 1;
    if ( v20 + v10 * v22 != a2 )
      NT_ASSERT("FirstBlockOffset + BlockSize * BlockCount == SubsegmentSize");
    HIWORD(v41) = v20;
    *(_DWORD *)(a1 + 40) = v41 ^ qword_1801CCEC8 ^ (a1 >> 12);
  }
  LOBYTE(v35) = a6;
  if ( (*(_BYTE *)(a6 + 70) & 1) != 0 )
    NT_ASSERT("LfhContext->Config.Global.WitholdPageCrossingBlocks == 0");
  v36 = *(_WORD *)(a1 + 34);
  if ( !v45 && v18 == 1 )
  {
    v35 = *((unsigned int *)a5 + 18);
    v36 = ((v35 * (unsigned __int64)(v9 - v20)) >> 32) - 1;
  }
  *(_WORD *)(a1 + 48) = v36;
  if ( v18 == 2 )
  {
    LOBYTE(v35) = *(_BYTE *)(a1 + 51) | 1;
    *(_BYTE *)(a1 + 51) = v35;
  }
  return v35;
}
