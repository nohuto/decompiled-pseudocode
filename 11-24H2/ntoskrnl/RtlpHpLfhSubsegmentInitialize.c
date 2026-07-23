/*
 * XREFs of RtlpHpLfhSubsegmentInitialize @ 0x1403D8348
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1404E751C (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlpHpLfhSubsegmentPrefetchRange @ 0x1403D86BC (RtlpHpLfhSubsegmentPrefetchRange.c)
 *     RtlpHpLfhSubsegmentComputeCommitUnit @ 0x1403D9204 (RtlpHpLfhSubsegmentComputeCommitUnit.c)
 *     RtlpHpLfhBlockBitmapInitialize @ 0x1403D96B0 (RtlpHpLfhBlockBitmapInitialize.c)
 *     RtlpHpInitializeLock @ 0x1403D970C (RtlpHpInitializeLock.c)
 *     RtlpHpLfhSubsegmentSetWitheldBlocks @ 0x1403D9724 (RtlpHpLfhSubsegmentSetWitheldBlocks.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  unsigned int v11; // edi
  int v12; // r9d
  __int64 v13; // r10
  int v14; // r11d
  unsigned __int64 v15; // r8
  int v16; // r15d
  __int64 v17; // rax
  unsigned int v18; // esi
  __int64 v19; // r9
  int v20; // edx
  int v21; // edi
  __int64 v22; // r8
  unsigned int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rax
  _WORD *v26; // rdx
  char *v27; // r8
  char *v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int8 v30; // cl
  unsigned __int8 v31; // al
  char v32; // al
  int v33; // edx
  unsigned __int8 *v34; // rsi
  __int64 v35; // rax
  __int16 v36; // cx
  __int16 v37; // ax
  bool v38; // zf
  char *v39; // rdi
  int v41; // [rsp+30h] [rbp-58h]
  __int64 v42; // [rsp+38h] [rbp-50h]
  int v43; // [rsp+98h] [rbp+10h]
  __int16 v45; // [rsp+A0h] [rbp+18h]
  int v47; // [rsp+C0h] [rbp+38h]

  v9 = a3;
  v42 = (*a5 >> 1) + 1;
  v10 = (unsigned __int16)RtlpBucketBlockSizes[v42];
  v11 = 2 * (a2 / (unsigned int)RtlpHpLfhSubsegmentComputeCommitUnit(a2, (unsigned __int16)RtlpBucketBlockSizes[v42]));
  v15 = (8 * (a2 - v11) - 512) / (v13 + (unsigned __int64)(8 * v10));
  v16 = (v11 + 8 * (((unsigned __int64)(unsigned int)v15 + 63) >> 6) + 79) & 0xFFFFFFF0;
  v17 = (a2 - v16) / v10;
  if ( (unsigned int)v15 < (unsigned int)v17 )
    v17 = (unsigned int)v15;
  v18 = v17;
  v41 = 8 * ((unsigned __int64)(v17 + 63) >> 6);
  if ( v12 )
  {
    v38 = v12 == (_DWORD)v13;
    v9 = a2;
    v19 = (unsigned int)v13;
    if ( v38 && a2 >= 0x10000 )
      v9 = 0x10000;
  }
  else
  {
    v19 = (unsigned int)(v14 + 3);
  }
  v47 = v13 & a7;
  if ( v47 )
    v19 = 2LL;
  RtlpHpLfhSubsegmentPrefetchRange(a1, 0LL, v9, v19);
  v21 = v20 + 64;
  memset_0((void *)a1, v20, (unsigned int)(v20 + 64));
  RtlpHpInitializeLock(a1 + 56, *(unsigned __int8 *)(a6 + 65));
  HIWORD(v43) = v16;
  LOWORD(v43) = v10;
  *(_DWORD *)(a1 + 40) = v43 ^ qword_140E28348 ^ (a1 >> 12);
  *(_WORD *)(a1 + 32) = v18;
  *(_WORD *)(a1 + 44) = (unsigned __int64)&a5[-v22] >> 6;
  _BitScanForward(&v23, a3 >> 12);
  *(_WORD *)(a1 + 34) = v18;
  LOBYTE(v45) = v23;
  HIBYTE(v45) = a2 >> 12 >> v23;
  *(_BYTE *)(a1 + 22) = 3;
  *(_WORD *)(a1 + 46) = 0;
  *(_WORD *)(a1 + 38) = v45;
  v24 = (unsigned __int8)((unsigned int)(v21 + v41) >> 3);
  v25 = *(unsigned __int8 *)(a1 + 39);
  *(_BYTE *)(a1 + 24) = v24;
  v26 = (_WORD *)(a1 + 8 * v24);
  v27 = (char *)&v26[v25];
  *v26 = v21 - 63;
  v28 = (char *)(v26 + 1);
  v29 = ((unsigned __int64)(unsigned int)(v21 - 63) + v27 - v28) >> 1;
  if ( v28 > v27 )
    v29 = 0LL;
  if ( v29 )
  {
    v39 = v28;
    while ( v29 )
    {
      *(_WORD *)v39 = -1;
      v39 += 2;
      --v29;
    }
    LOBYTE(v21) = 64;
  }
  v30 = *((_BYTE *)RtlpSearchWidth + v42);
  v31 = v21;
  if ( v30 < (unsigned __int8)v21 )
    v31 = *((_BYTE *)RtlpSearchWidth + v42);
  if ( v31 >= v18 )
  {
    v32 = v18;
  }
  else
  {
    if ( v30 < (unsigned __int8)v21 )
      LOBYTE(v21) = *((_BYTE *)RtlpSearchWidth + v42);
    v32 = v21;
  }
  *(_BYTE *)(a1 + 50) = v32;
  RtlpHpLfhBlockBitmapInitialize(a1 + 64, v18);
  v33 = v10 - 1;
  if ( ((v10 - 1) & v10) == 0 )
  {
    v16 = (unsigned __int16)v16 - (v33 & ((unsigned __int16)v16 + v10 - 1)) + v10 - 1;
    if ( v16 + v10 * v18 != a2 )
      NT_ASSERT("FirstBlockOffset + BlockSize * BlockCount == SubsegmentSize");
    HIWORD(v43) = v16;
    *(_DWORD *)(a1 + 40) = v43 ^ qword_140E28348 ^ (a1 >> 12);
    goto LABEL_18;
  }
  if ( a2 <= 0x1000 )
  {
LABEL_18:
    v34 = a5;
    goto LABEL_19;
  }
  v34 = a5;
  if ( (*(_BYTE *)(a6 + 70) & 1) != 0 )
  {
    v37 = RtlpHpLfhSubsegmentSetWitheldBlocks((int)a1 + 64, v33, (_DWORD)a5, v43, a2);
    *(_WORD *)(a1 + 32) -= v37;
    *(_WORD *)(a1 + 34) -= v37;
    *(_BYTE *)(a1 + 37) += v37;
  }
LABEL_19:
  LOWORD(v35) = *(_WORD *)(a1 + 34);
  v36 = v35 + *(unsigned __int8 *)(a1 + 37);
  if ( !v47 && a4 == 1 )
  {
    v35 = *((unsigned int *)v34 + 18);
    v36 = ((v35 * (unsigned __int64)(v9 - v16)) >> 32) - 1;
  }
  *(_WORD *)(a1 + 48) = v36;
  if ( a4 == 2 )
  {
    LOBYTE(v35) = *(_BYTE *)(a1 + 51) | 1;
    *(_BYTE *)(a1 + 51) = v35;
  }
  return v35;
}
