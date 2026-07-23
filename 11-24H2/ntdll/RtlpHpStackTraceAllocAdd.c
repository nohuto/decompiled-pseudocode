/*
 * XREFs of RtlpHpStackTraceAllocAdd @ 0x1800DA5A4
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1800DA400 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180064B08 (RtlpHpMetadataFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpStackDbAllocRoutine @ 0x180149D20 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackDbFreeRoutine @ 0x180149D50 (RtlpHpStackDbFreeRoutine.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocAdd(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r15
  unsigned int v7; // ebp
  __int64 v8; // rsi
  int *v9; // r12
  __int64 v10; // rbx
  unsigned int v11; // edi
  char *v12; // r8
  char v13; // cl
  unsigned __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // r10
  __int64 v17; // r13
  _QWORD *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int128 v25[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26; // [rsp+78h] [rbp+20h]
  __int64 v27; // [rsp+78h] [rbp+20h]

  v25[0] = RtlpHpEnvHandle;
  v6 = (_QWORD *)RtlpHpMetadataAlloc(0x18uLL, 0x18uLL, 0, v25);
  if ( !v6 )
    return 0;
  v6[1] = a2;
  v6[2] = a3;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  v8 = a1 + 16;
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v9 = (int *)(a1 + 20);
  v7 = 1;
  v10 = (unsigned int)(2 * (*(_DWORD *)(a1 + 20) >> 5));
  if ( *(_DWORD *)(a1 + 16) < (unsigned int)v10 )
    goto LABEL_25;
  if ( (unsigned int)v10 < 4 )
    v10 = 4LL;
  v11 = 0;
  v12 = (char *)RtlpHpStackDbAllocRoutine(8LL * (unsigned int)v10, 0LL);
  if ( v12 )
  {
    if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
    {
      v13 = -1;
      do
      {
        ++v13;
        LODWORD(v10) = (unsigned int)v10 >> 1;
      }
      while ( (_DWORD)v10 );
      v10 = (unsigned int)(1 << v13);
    }
    if ( (unsigned int)v10 > 0x4000000 )
      v10 = 0x4000000LL;
    v14 = (unsigned int)v10;
    if ( v12 > &v12[8 * v10] )
      v14 = 0LL;
    if ( v14 )
    {
      memset64(v12, v8 | 1, v14);
      v11 = 0;
    }
    v15 = *v9;
    v16 = -1LL << (*(_BYTE *)v9 & 0x1F);
    if ( (*v9 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v17 = *(_QWORD *)(a1 + 24);
        while ( 1 )
        {
          v18 = *(_QWORD **)(v17 + 8LL * v11);
          if ( ((unsigned __int8)v18 & 1) != 0 )
            break;
          *(_QWORD *)(v17 + 8LL * v11) = *v18;
          v26 = v16 & v18[1];
          v19 = (37
               * (BYTE6(v26)
                + 37
                * (BYTE5(v26)
                 + 37
                 * (BYTE4(v26)
                  + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
               + HIBYTE(v26)) & (unsigned int)(v10 - 1);
          *v18 = *(_QWORD *)&v12[8 * v19];
          *(_QWORD *)&v12[8 * v19] = v18;
        }
        v15 = *v9;
        ++v11;
      }
      while ( v11 < (unsigned int)*v9 >> 5 );
    }
    v20 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v12;
    *(_DWORD *)(a1 + 20) = (32 * v10) | v15 & 0x1F;
    if ( v20 )
      RtlpHpStackDbFreeRoutine(v20, 0LL);
    v8 = a1 + 16;
    goto LABEL_25;
  }
  if ( (unsigned int)*v9 >= 0x20 )
  {
LABEL_25:
    v21 = *(_DWORD *)(v8 + 4);
    v27 = v6[1] & (-1LL << (v21 & 0x1F));
    v22 = *(_QWORD *)(v8 + 8);
    v23 = (37
         * (BYTE6(v27)
          + 37
          * (BYTE5(v27)
           + 37
           * (BYTE4(v27)
            + 37 * (BYTE3(v27) + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
         + HIBYTE(v27)) & ((v21 >> 5) - 1);
    *v6 = *(_QWORD *)(v22 + 8 * v23);
    *(_QWORD *)(v22 + 8 * v23) = v6;
    ++*(_DWORD *)v8;
    v6 = 0LL;
    goto LABEL_26;
  }
  v7 = 0;
LABEL_26:
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  if ( v6 )
  {
    v25[0] = RtlpHpEnvHandle;
    RtlpHpMetadataFree((__int64)v6, v25);
  }
  return v7;
}
