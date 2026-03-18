/*
 * XREFs of RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1402B5E60
 * Callers:
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1402B5B00 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x1402B5D24 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x1402B6AE8 (RtlpHpLfhOwnerGetSubsegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhSubsegmentSetWitheldBlocks @ 0x1402B523C (RtlpHpLfhSubsegmentSetWitheldBlocks.c)
 *     RtlpHpLfhBlockBitmapInitialize @ 0x1402B5A9C (RtlpHpLfhBlockBitmapInitialize.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402B61E0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x1402B6644 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x1402B93D8 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentDelayFreeListProcess(ULONG_PTR *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // rdi
  char v7; // r14
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // r10d
  unsigned __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 result; // rax
  unsigned __int16 v14; // si
  unsigned int v15; // ebx
  ULONG_PTR v16; // rdi
  char v17; // cl
  __int64 v18; // r8
  __int64 v19; // r10
  char *v20; // r9
  int v21; // edx
  int v22; // eax
  int v23; // edx
  char *v24; // rcx
  signed __int16 v25; // ax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  bool v30; // zf
  __int64 v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+28h] [rbp-50h]
  __int64 v33; // [rsp+30h] [rbp-48h]
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]
  int v35; // [rsp+88h] [rbp+10h]
  unsigned __int64 v36; // [rsp+98h] [rbp+20h]

  v4 = a2 >> 12;
  v6 = a3 >> 16;
  v7 = *(_BYTE *)(a2 + 51) & 1;
  v8 = *(_DWORD *)(a2 + 40) ^ qword_140E28208 ^ (a2 >> 12);
  v9 = *(unsigned __int16 *)(a2 + 34);
  v10 = (unsigned __int16)v8;
  v11 = a2 + ((unsigned __int64)v8 >> 16);
  v12 = v8;
  result = WORD1(a3) + (unsigned int)*(unsigned __int16 *)(a2 + 32);
  v36 = a2 >> 12;
  v35 = v10;
  v34 = v11;
  v33 = a3 >> 16;
  if ( v9 != (_DWORD)result )
  {
    if ( *(_BYTE *)(a2 + 39) == 1 && !v7 )
    {
      result = (unsigned int)*(unsigned __int8 *)(a2 + 24) - 8;
      if ( WORD1(a3) > (unsigned int)result )
      {
        result = RtlpHpLfhSubsegmentDelayFreeListBatch((_DWORD)a1, a2, a3, v11, v10);
LABEL_22:
        *(_WORD *)(a2 + 32) += v6;
        return result;
      }
    }
LABEL_3:
    v14 = a3;
    if ( (_WORD)a3 )
    {
      do
      {
        v15 = v14 - 1;
        v16 = v11 + v10 * v15;
        v14 = *(_WORD *)v16;
        if ( *(_DWORD *)(v16 + 8) != ((unsigned int)v16 ^ HIDWORD(a1[10]) ^ __ROL4__(
                                                                              *(_DWORD *)v16 ^ a1[10],
                                                                              *(_WORD *)v16)) )
        {
          RtlpLogHeapFailure(23, (ULONG_PTR)a1, v16, a2, v15, 0LL);
          NT_ASSERT("0");
        }
        if ( !v7 && *(_BYTE *)(a2 + 39) > 1u )
        {
          v17 = *(_BYTE *)(a2 + 38);
          v18 = (unsigned int)(v16 - a2) >> 12 >> v17;
          v19 = 2 * v18;
          v20 = (char *)(2 * v18 + a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
          _m_prefetchw(v20);
          v21 = (unsigned __int16)v4;
          LODWORD(v4) = -1;
          v22 = *(unsigned __int16 *)(a2 + 40) ^ v21 ^ (unsigned __int16)qword_140E28208;
          v23 = 0;
          v24 = &v20[2 * (((unsigned int)(v16 - a2 + v22 - 1) >> 12 >> v17) - (unsigned int)v18) + 2];
          if ( v20 < v24 )
          {
            do
            {
              v25 = _InterlockedDecrement16((volatile signed __int16 *)v20);
              if ( v25 )
              {
                if ( v25 == -1 )
                  --v23;
              }
              else
              {
                ++v23;
                if ( (_DWORD)v4 == -1 )
                  v4 = v19 >> 1;
              }
              v20 += 2;
              v19 += 2LL;
            }
            while ( v20 < v24 );
            if ( v23 )
              RtlpHpLfhContextUpdateFreeCommitCount(a1, a2, (v23 << 12 << *(_BYTE *)(a2 + 38)) / 4096);
            if ( (_DWORD)v4 != -1 )
              RtlpHpLfhSubsegmentDecommitPages(a1, a2, (unsigned int)v4, 2LL, v31, v32);
          }
          LOWORD(v4) = v36;
        }
        v26 = __ROL8__(-2LL, v15 & 0x3F);
        v27 = a2 + 8 * ((unsigned __int64)v15 >> 6);
        if ( v7 )
        {
          result = v26 & *(_QWORD *)(v27 + 64);
          v28 = *(_QWORD *)(v27 + 64) & ~v26;
          *(_QWORD *)(v27 + 64) = result;
        }
        else
        {
          _m_prefetchw((const void *)(v27 + 64));
          result = _InterlockedAnd64((volatile signed __int64 *)(v27 + 64), v26);
          v28 = result & ~v26;
        }
        if ( !v28 )
        {
          RtlpLogHeapFailure(17, *a1, v16, a2, v15, 0LL);
          NT_ASSERT("0");
        }
        v11 = v34;
        v10 = v35;
      }
      while ( v14 );
      LOWORD(v6) = v33;
    }
    goto LABEL_22;
  }
  if ( *(_BYTE *)(a2 + 39) != 1 )
    goto LABEL_3;
  RtlpHpLfhBlockBitmapInitialize((void *)(a2 + 64), v9 + *(unsigned __int8 *)(a2 + 37));
  v30 = *(_BYTE *)(a2 + 37) == 0;
  *(_BYTE *)(a2 + 36) = 0;
  if ( !v30 )
    RtlpHpLfhSubsegmentSetWitheldBlocks(
      a2 + 64,
      v29,
      (__int64)&a1[8 * (unsigned __int64)*(unsigned __int16 *)(a2 + 44)],
      v12,
      HIBYTE(*(unsigned __int16 *)(a2 + 38)) << 12 << *(_WORD *)(a2 + 38));
  result = v33;
  *(_WORD *)(a2 + 32) += v33;
  return result;
}
