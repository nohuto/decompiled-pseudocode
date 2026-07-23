/*
 * XREFs of RtlpHpTagContextAllocateTag @ 0x1800A1D38
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x180083CE0 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180064B08 (RtlpHpMetadataFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpTagContextFindFreeTag @ 0x1800A1F14 (RtlpHpTagContextFindFreeTag.c)
 *     RtlpHpTagContextFindMapping @ 0x1800A1F60 (RtlpHpTagContextFindMapping.c)
 */

__int64 __fastcall RtlpHpTagContextAllocateTag(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  signed __int64 v8; // rbx
  __int128 v9; // xmm0
  __int64 Mapping; // rax
  unsigned __int16 FreeTag; // ax
  unsigned __int16 v12; // di
  __int64 v13; // r9
  __int64 v14; // r8
  signed __int64 *v15; // roff
  signed __int64 v16; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  signed __int64 v19; // rdx
  __int128 v21[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+50h] [rbp+8h]

  v21[0] = RtlpHpEnvHandle;
  v7 = RtlpHpMetadataAlloc(0x30uLL, 0x30uLL, 0, v21);
  v8 = v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_OWORD *)(v7 + 16) = 0LL;
    *(_OWORD *)(v7 + 32) = 0LL;
    v9 = *a2;
    *(_QWORD *)(v7 + 32) = a4;
    *(_QWORD *)(v7 + 8) = a3;
    *(_OWORD *)(v7 + 16) = v9;
    RtlAcquireSRWLockExclusive(&RtlpHpTagContext);
    Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, a2, a3);
    if ( Mapping )
    {
      _InterlockedAdd64((volatile signed __int64 *)(Mapping + 32), a4);
      v12 = *(_WORD *)(Mapping + 40);
    }
    else
    {
      FreeTag = RtlpHpTagContextFindFreeTag();
      v12 = FreeTag;
      if ( FreeTag )
      {
        *(_WORD *)(v8 + 40) = FreeTag;
        *(_QWORD *)(qword_1801D2C38 + 8LL * FreeTag - 8) = v8;
        v13 = qword_1801D2C30;
        v22 = *(_QWORD *)(v8 + 8) & (-1LL << (dword_1801D2C2C & 0x1F));
        v14 = (37
             * (BYTE6(v22)
              + 37
              * (BYTE5(v22)
               + 37
               * (BYTE4(v22)
                + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
             + HIBYTE(v22)) & (((unsigned int)dword_1801D2C2C >> 5) - 1);
        v15 = (signed __int64 *)(qword_1801D2C30 + 8 * v14);
        _m_prefetchw(v15);
        v16 = *v15;
        *(_QWORD *)v8 = *v15;
        v18 = v16;
        v17 = _InterlockedCompareExchange64(v15, v8, v16);
        if ( v18 != v17 )
        {
          do
          {
            v19 = v17;
            *(_QWORD *)v8 = v17;
            v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8 * v14), v8, v17);
          }
          while ( v17 != v19 );
        }
        word_1801D2C40 = v12;
        ++dword_1801D2C28;
        v8 = 0LL;
        ++word_1801D2C42;
      }
    }
    RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
    if ( v8 )
    {
      v21[0] = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v8, v21);
    }
  }
  else
  {
    return 0;
  }
  return v12;
}
