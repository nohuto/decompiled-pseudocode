/*
 * XREFs of RtlpHpTagContextAllocateTag @ 0x1800B79F0
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x180094EF0 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x180010830 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18004EF28 (RtlpHpMetadataFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpTagContextFindFreeTag @ 0x1800B7BCC (RtlpHpTagContextFindFreeTag.c)
 *     RtlpHpTagContextFindMapping @ 0x1800B7C20 (RtlpHpTagContextFindMapping.c)
 */

__int64 __fastcall RtlpHpTagContextAllocateTag(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  volatile signed __int32 **v8; // rdx
  unsigned __int64 v9; // r8
  signed __int64 v10; // rbx
  __int128 v11; // xmm0
  __int64 Mapping; // rax
  unsigned __int16 FreeTag; // ax
  unsigned __int16 v14; // di
  __int64 v15; // r9
  __int64 v16; // r8
  signed __int64 *v17; // roff
  signed __int64 v18; // rax
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  signed __int64 v21; // rdx
  __int128 v23[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+50h] [rbp+8h]

  v23[0] = RtlpHpEnvHandle;
  v7 = RtlpHpMetadataAlloc(0x30uLL, 0x30uLL, 0, v23);
  v10 = v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_OWORD *)(v7 + 16) = 0LL;
    *(_OWORD *)(v7 + 32) = 0LL;
    v11 = *a2;
    *(_QWORD *)(v7 + 32) = a4;
    *(_QWORD *)(v7 + 8) = a3;
    *(_OWORD *)(v7 + 16) = v11;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpHpTagContext, v8, v9);
    Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, a2, a3);
    if ( Mapping )
    {
      _InterlockedAdd64((volatile signed __int64 *)(Mapping + 32), a4);
      v14 = *(_WORD *)(Mapping + 40);
    }
    else
    {
      FreeTag = RtlpHpTagContextFindFreeTag();
      v14 = FreeTag;
      if ( FreeTag )
      {
        *(_WORD *)(v10 + 40) = FreeTag;
        *(_QWORD *)(qword_1801D3C38 + 8LL * FreeTag - 8) = v10;
        v15 = qword_1801D3C30;
        v24 = *(_QWORD *)(v10 + 8) & (-1LL << (dword_1801D3C2C & 0x1F));
        v16 = (37
             * (BYTE6(v24)
              + 37
              * (BYTE5(v24)
               + 37
               * (BYTE4(v24)
                + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
             + HIBYTE(v24)) & (((unsigned int)dword_1801D3C2C >> 5) - 1);
        v17 = (signed __int64 *)(qword_1801D3C30 + 8 * v16);
        _m_prefetchw(v17);
        v18 = *v17;
        *(_QWORD *)v10 = *v17;
        v20 = v18;
        v19 = _InterlockedCompareExchange64(v17, v10, v18);
        if ( v20 != v19 )
        {
          do
          {
            v21 = v19;
            *(_QWORD *)v10 = v19;
            v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 8 * v16), v10, v19);
          }
          while ( v19 != v21 );
        }
        word_1801D3C40 = v14;
        ++dword_1801D3C28;
        v10 = 0LL;
        ++word_1801D3C42;
      }
    }
    RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
    if ( v10 )
    {
      v23[0] = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v10, v23);
    }
  }
  else
  {
    return 0;
  }
  return v14;
}
