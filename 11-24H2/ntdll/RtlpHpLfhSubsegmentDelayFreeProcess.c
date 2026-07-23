/*
 * XREFs of RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180062D40
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x180062820 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180063450 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x180063E90 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhOwnerCompact @ 0x180066280 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800630F0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x180063C20 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x18006BE00 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentDelayFreeProcess(__int64 *a1, unsigned __int64 a2, int a3)
{
  __int64 result; // rax
  _WORD *v6; // rbp
  __int32 v7; // eax
  unsigned __int64 v8; // rcx
  int v9; // r14d
  char v10; // r15
  int v11; // edx
  char v12; // r15
  unsigned __int64 v13; // rcx
  unsigned __int16 v14; // r14
  unsigned int v15; // ebx
  __int64 v16; // rdi
  char v17; // cl
  __int64 v18; // r8
  __int64 v19; // r10
  char *v20; // r9
  __int64 v21; // rbp
  int v22; // edx
  char *v23; // rcx
  signed __int16 v24; // ax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // [rsp+40h] [rbp-48h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]
  int v31; // [rsp+98h] [rbp+10h]
  unsigned int v32; // [rsp+A8h] [rbp+20h]

  result = *(unsigned __int16 *)(a2 + 18);
  if ( (_WORD)result )
  {
    v6 = (_WORD *)(a2 + 32);
    if ( a3 || (unsigned __int16)result >= *v6 )
    {
      v7 = _InterlockedExchange((volatile __int32 *)(a2 + 16), 0);
      v29 = a2 >> 12;
      v8 = (unsigned int)qword_1801CCEC8 ^ *(_DWORD *)(a2 + 40) ^ (unsigned int)(a2 >> 12);
      v9 = *(unsigned __int16 *)(a2 + 34);
      v10 = *(_BYTE *)(a2 + 51);
      v11 = (unsigned __int16)(qword_1801CCEC8 ^ *(_WORD *)(a2 + 40) ^ (a2 >> 12));
      v12 = v10 & 1;
      v13 = a2 + (v8 >> 16);
      v32 = HIWORD(v7);
      v31 = v11;
      v30 = v13;
      if ( v9 == HIWORD(v7) + (unsigned __int16)*v6 )
      {
        if ( *(_BYTE *)(a2 + 39) == 1 )
        {
          memset_thunk_772440563353939046((void *)(a2 + 64), 0, 8LL * ((unsigned int)(v9 + 31) >> 5));
          *(_QWORD *)(a2 + 8LL * (((unsigned int)(v9 + 31) >> 5) - 1) + 64) = (unsigned int)~(0xFFFFFFFFuLL >> (-(char)v9 & 0x1F));
          *(_BYTE *)(a2 + 36) = 0;
          goto LABEL_25;
        }
      }
      else if ( *(_BYTE *)(a2 + 39) == 1 && !v12 && HIWORD(v7) > (unsigned int)*(unsigned __int8 *)(a2 + 24) - 8 )
      {
        RtlpHpLfhSubsegmentDelayFreeListBatch((_DWORD)a1, a2, v7, v13, v11);
LABEL_24:
        v6 = (_WORD *)(a2 + 32);
LABEL_25:
        result = v32;
        *v6 += v32;
        return result;
      }
      if ( (_WORD)v7 )
      {
        v14 = v7;
        do
        {
          v15 = v14 - 1;
          v16 = v13 + v11 * v15;
          v14 = *(_WORD *)v16;
          if ( *(_DWORD *)(v16 + 8) != ((unsigned int)v16 ^ HIDWORD(a1[10]) ^ __ROL4__(
                                                                                *(_DWORD *)v16 ^ a1[10],
                                                                                *(_WORD *)v16)) )
          {
            RtlpLogHeapFailure(23, (__int64)a1, v16, a2, v15, 0LL);
            NT_ASSERT("0");
          }
          if ( !v12 && *(_BYTE *)(a2 + 39) > 1u )
          {
            v17 = *(_BYTE *)(a2 + 38);
            v18 = (unsigned int)(v16 - a2) >> 12 >> v17;
            v19 = 2 * v18;
            v20 = (char *)(2 * v18 + a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
            _m_prefetchw(v20);
            LODWORD(v21) = -1;
            v22 = 0;
            v23 = &v20[2
                     * ((((_DWORD)v16
                        - (_DWORD)a2
                        + (*(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)v29 ^ (unsigned int)(unsigned __int16)qword_1801CCEC8)
                        - 1) >> 12 >> v17)
                      - (unsigned int)v18)
                     + 2];
            if ( v20 < v23 )
            {
              do
              {
                v24 = _InterlockedDecrement16((volatile signed __int16 *)v20);
                if ( v24 )
                {
                  if ( v24 == -1 )
                    --v22;
                }
                else
                {
                  ++v22;
                  if ( (_DWORD)v21 == -1 )
                    v21 = v19 >> 1;
                }
                v20 += 2;
                v19 += 2LL;
              }
              while ( v20 < v23 );
              if ( v22 )
                RtlpHpLfhContextUpdateFreeCommitCount(a1, a2, (v22 << 12 << *(_BYTE *)(a2 + 38)) / 4096);
              if ( (_DWORD)v21 != -1 )
                RtlpHpLfhSubsegmentDecommitPages(a1, a2, (unsigned int)v21, 2LL);
            }
          }
          v25 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v15 & 0x1F);
          v26 = a2 + 8 * ((unsigned __int64)v15 >> 5);
          if ( v12 )
          {
            v28 = *(_QWORD *)(v26 + 64);
            *(_QWORD *)(v26 + 64) = v28 & v25;
            v27 = (unsigned int)v28;
          }
          else
          {
            _m_prefetchw((const void *)(v26 + 64));
            v27 = (unsigned int)_InterlockedAnd64((volatile signed __int64 *)(v26 + 64), v25);
          }
          if ( (v27 & ~v25) == 0 )
          {
            RtlpLogHeapFailure(17, *a1, v16, a2, v15, 0LL);
            NT_ASSERT("0");
          }
          v13 = v30;
          v11 = v31;
        }
        while ( v14 );
      }
      goto LABEL_24;
    }
  }
  return result;
}
