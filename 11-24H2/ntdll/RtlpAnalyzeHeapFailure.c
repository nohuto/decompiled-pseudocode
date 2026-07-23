/*
 * XREFs of RtlpAnalyzeHeapFailure @ 0x18000F2D0
 * Callers:
 *     RtlpPopulateListIndex @ 0x18000C23C (RtlpPopulateListIndex.c)
 *     RtlpExtendHeap @ 0x18000CB60 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18000D030 (RtlpFindAndCommitPages.c)
 *     RtlpGrowBlockInPlace @ 0x18000D610 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x18000DD00 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18000EB10 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCollectFreeBlocks @ 0x18000F7E0 (RtlpCollectFreeBlocks.c)
 *     RtlDebugAllocateHeap @ 0x18001F7A4 (RtlDebugAllocateHeap.c)
 *     RtlSetUserValueHeap @ 0x18001FB40 (RtlSetUserValueHeap.c)
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x180022020 (RtlDebugFreeHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800222F8 (RtlpValidateHeapSegment.c)
 *     RtlpAllocateNTHeapInternal @ 0x180054DA0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18005AF10 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18005C7E8 (RtlDebugReAllocateHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1800DA200 (RtlpSetupExtendedBlock.c)
 *     RtlGetUserInfoHeap @ 0x1800E63B0 (RtlGetUserInfoHeap.c)
 *     RtlpCoalesceHeap @ 0x180106F80 (RtlpCoalesceHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180109150 (RtlSetUserFlagsHeap.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 *     RtlZeroHeap @ 0x180142320 (RtlZeroHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlpAnalyzeHeapFailure(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r9
  int v5; // r8d
  char result; // al
  int v7; // edx
  __int64 v8; // rax
  char v9; // al
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // ecx
  unsigned __int64 v21; // [rsp+38h] [rbp-20h]

  v4 = 0LL;
  v5 = 0;
  result = byte_1801D1908 != 0;
  if ( byte_1801D1908 )
    return result;
  v7 = *(_DWORD *)(a2 + 8);
  if ( (v7 & *(_DWORD *)(a1 + 124)) == 0 )
  {
    v5 = 10;
    if ( (*(_DWORD *)(a1 + 112) & 0x4000000) != 0
      || HIBYTE(v7) == ((unsigned __int8)v7 ^ (unsigned __int8)(BYTE1(v7) ^ BYTE2(v7))) )
    {
      v5 = 1;
      v8 = *(unsigned __int8 *)(a2 + 14);
      if ( (_BYTE)v8 )
      {
        v4 = (a2 & 0xFFFFFFFFFFFF0000uLL) + ((1 - v8) << 16);
        v21 = v4;
      }
      else
      {
        v4 = a1;
        v21 = a1;
      }
      if ( *(_DWORD *)(v4 + 16) == -1114130 )
      {
        v9 = *(_BYTE *)(a2 + 15);
        if ( v9 == 4 || (v5 = 2, a2 >= *(_QWORD *)(v4 + 48)) && a2 < *(_QWORD *)(v4 + 72) && *(_QWORD *)(v4 + 40) == a1 )
        {
          v5 = 3;
          if ( v9 == 3 )
          {
            v10 = a2 + 16;
            v11 = *(_QWORD *)(a2 + 48);
            if ( (v11 & 0xFFF) != 0 )
              goto LABEL_34;
            if ( v11 < *(_QWORD *)(v4 + 48) )
              goto LABEL_34;
            if ( v11 + *(_QWORD *)(a2 + 56) > *(_QWORD *)(v4 + 72) )
              goto LABEL_34;
            v5 = 4;
            v12 = **(_QWORD **)(a2 + 24);
            if ( v12 != *(_QWORD *)(*(_QWORD *)v10 + 8LL) )
              goto LABEL_34;
            if ( v12 != v10 )
              goto LABEL_34;
            v5 = 5;
            v13 = **(_QWORD **)(a2 + 40);
            if ( v13 != *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) || v13 != a2 + 32 )
              goto LABEL_34;
LABEL_23:
            v5 = 7;
            v14 = *(unsigned __int16 *)(a1 + 140);
            v15 = *(unsigned __int16 *)(a2 + 12);
            if ( (_WORD)v14 == (_WORD)v15 )
              goto LABEL_30;
            v16 = a2 - 16 * (v14 ^ v15);
            if ( *(_DWORD *)(a1 + 124) )
            {
              v17 = *(_DWORD *)(v16 + 8);
              if ( (v17 & *(_DWORD *)(a1 + 124)) != 0 )
                v17 ^= *(_DWORD *)(a1 + 136);
              v4 = v21;
              v5 = 7;
            }
            else
            {
              LOWORD(v17) = *(_WORD *)(v16 + 8);
            }
            if ( (_WORD)v17 == (*(_WORD *)(a2 + 12) ^ *(_WORD *)(a1 + 140)) )
            {
LABEL_30:
              v5 = 8;
              if ( (*(_BYTE *)(a2 + 10) & 1) != 0
                || (v18 = **(_QWORD **)(a2 + 24), v18 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v18 == a2 + 16 )
              {
                v5 = 9;
              }
            }
            goto LABEL_34;
          }
          v5 = 6;
          if ( (*(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 16LL * (unsigned __int16)v7 + 12)) == (_WORD)v7 )
            goto LABEL_23;
        }
      }
    }
  }
LABEL_34:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  switch ( v5 )
  {
    case 0:
    case 1:
    case 6:
    case 7:
    case 10:
      v20 = 3;
      goto LABEL_43;
    case 2:
      v19 = *(_QWORD *)(v4 + 40);
      v20 = 12;
      goto LABEL_44;
    case 3:
      v20 = 0;
      goto LABEL_43;
    case 4:
    case 5:
      v20 = 14;
      goto LABEL_43;
    case 8:
      v20 = 13;
      goto LABEL_43;
    default:
      v20 = 2;
LABEL_43:
      LODWORD(v19) = v5;
LABEL_44:
      result = RtlpLogHeapFailure(v20, a1, a2, v19, 0LL, 0LL);
      break;
  }
  return result;
}
