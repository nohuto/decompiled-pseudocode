/*
 * XREFs of RtlpHpStackTraceAllocAdd @ 0x1800DF434
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1800DF290 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x180010830 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18004EF28 (RtlpHpMetadataFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpStackDbAllocRoutine @ 0x18014B970 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackDbFreeRoutine @ 0x18014B9A0 (RtlpHpStackDbFreeRoutine.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocAdd(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 **v6; // rdx
  unsigned __int64 v7; // r8
  _QWORD *v8; // r15
  unsigned int v9; // ebp
  __int64 v10; // rsi
  int *v11; // r12
  __int64 v12; // rbx
  unsigned int v13; // edi
  char *v14; // r8
  char v15; // cl
  unsigned __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // r10
  __int64 v19; // r13
  _QWORD *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int128 v27[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v28; // [rsp+78h] [rbp+20h]
  __int64 v29; // [rsp+78h] [rbp+20h]

  v27[0] = RtlpHpEnvHandle;
  v8 = (_QWORD *)RtlpHpMetadataAlloc(0x18uLL, 0x18uLL, 0, v27);
  if ( !v8 )
    return 0;
  v8[1] = a2;
  v8[2] = a3;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 8), v6, v7);
  v10 = a1 + 16;
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v11 = (int *)(a1 + 20);
  v9 = 1;
  v12 = (unsigned int)(2 * (*(_DWORD *)(a1 + 20) >> 5));
  if ( *(_DWORD *)(a1 + 16) < (unsigned int)v12 )
    goto LABEL_25;
  if ( (unsigned int)v12 < 4 )
    v12 = 4LL;
  v13 = 0;
  v14 = (char *)RtlpHpStackDbAllocRoutine(8LL * (unsigned int)v12, 0LL);
  if ( v14 )
  {
    if ( (((_DWORD)v12 - 1) & (unsigned int)v12) != 0 )
    {
      v15 = -1;
      do
      {
        ++v15;
        LODWORD(v12) = (unsigned int)v12 >> 1;
      }
      while ( (_DWORD)v12 );
      v12 = (unsigned int)(1 << v15);
    }
    if ( (unsigned int)v12 > 0x4000000 )
      v12 = 0x4000000LL;
    v16 = (unsigned int)v12;
    if ( v14 > &v14[8 * v12] )
      v16 = 0LL;
    if ( v16 )
    {
      memset64(v14, v10 | 1, v16);
      v13 = 0;
    }
    v17 = *v11;
    v18 = -1LL << (*(_BYTE *)v11 & 0x1F);
    if ( (*v11 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v19 = *(_QWORD *)(a1 + 24);
        while ( 1 )
        {
          v20 = *(_QWORD **)(v19 + 8LL * v13);
          if ( ((unsigned __int8)v20 & 1) != 0 )
            break;
          *(_QWORD *)(v19 + 8LL * v13) = *v20;
          v28 = v18 & v20[1];
          v21 = (37
               * (BYTE6(v28)
                + 37
                * (BYTE5(v28)
                 + 37
                 * (BYTE4(v28)
                  + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
               + HIBYTE(v28)) & (unsigned int)(v12 - 1);
          *v20 = *(_QWORD *)&v14[8 * v21];
          *(_QWORD *)&v14[8 * v21] = v20;
        }
        v17 = *v11;
        ++v13;
      }
      while ( v13 < (unsigned int)*v11 >> 5 );
    }
    v22 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v14;
    *(_DWORD *)(a1 + 20) = (32 * v12) | v17 & 0x1F;
    if ( v22 )
      RtlpHpStackDbFreeRoutine(v22, 0LL);
    v10 = a1 + 16;
    goto LABEL_25;
  }
  if ( (unsigned int)*v11 >= 0x20 )
  {
LABEL_25:
    v23 = *(_DWORD *)(v10 + 4);
    v29 = v8[1] & (-1LL << (v23 & 0x1F));
    v24 = *(_QWORD *)(v10 + 8);
    v25 = (37
         * (BYTE6(v29)
          + 37
          * (BYTE5(v29)
           + 37
           * (BYTE4(v29)
            + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
         + HIBYTE(v29)) & ((v23 >> 5) - 1);
    *v8 = *(_QWORD *)(v24 + 8 * v25);
    *(_QWORD *)(v24 + 8 * v25) = v8;
    ++*(_DWORD *)v10;
    v8 = 0LL;
    goto LABEL_26;
  }
  v9 = 0;
LABEL_26:
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  if ( v8 )
  {
    v27[0] = RtlpHpEnvHandle;
    RtlpHpMetadataFree((__int64)v8, v27);
  }
  return v9;
}
