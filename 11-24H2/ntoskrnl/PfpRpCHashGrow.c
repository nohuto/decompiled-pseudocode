/*
 * XREFs of PfpRpCHashGrow @ 0x1406F6670
 * Callers:
 *     PfpRpCHashAddEntries @ 0x140A5EF34 (PfpRpCHashAddEntries.c)
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PfpRpCHashGrow(__int64 a1, __int64 a2, unsigned __int64 *a3, _QWORD *a4)
{
  __int64 v5; // r14
  unsigned int v6; // edi
  unsigned int v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // edi
  char v10; // dl
  unsigned int v11; // esi
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // r12d
  unsigned int v15; // edi
  __int64 *v16; // r15
  unsigned __int64 v17; // r13
  size_t v18; // r10
  int v19; // r14d
  __int64 v20; // r8
  char *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 i; // rax
  __int64 v25; // r9
  char *Pool2; // [rsp+20h] [rbp-58h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+30h] [rbp-48h]
  __int128 v29; // [rsp+38h] [rbp-40h]
  __int64 v30; // [rsp+48h] [rbp-30h]
  void *Src[2]; // [rsp+50h] [rbp-28h]
  char v32; // [rsp+C0h] [rbp+48h]
  __int64 v33; // [rsp+C0h] [rbp+48h]

  BugCheckParameter2 = (volatile signed __int64 *)(a1 + 128);
  v5 = a2;
  FsRtlAcquirePushLockExclusive((unsigned __int64 *)(a1 + 128));
  v6 = *(_DWORD *)(v5 + 12);
  if ( 2 * *(_DWORD *)(v5 + 16) >= v6 )
  {
    v8 = 2 * v6;
    if ( v8 < 8 )
      v8 = 8;
    v9 = v8 << *(_DWORD *)(v5 + 8);
    v7 = 0;
    Pool2 = (char *)ExAllocatePool2(0x100uLL, v9, 0x48436650u);
    if ( Pool2 )
    {
      v10 = -1;
      HIDWORD(v30) = 0;
      *(_OWORD *)Src = *(_OWORD *)v5;
      v32 = _mm_cvtsi128_si32(_mm_loadl_epi64((const __m128i *)(v5 + 8)));
      v11 = 1 << v32;
      v12 = -1;
      v13 = 1 << v32;
      if ( 1 << v32 )
      {
        do
        {
          ++v12;
          v13 >>= 1;
        }
        while ( v13 );
      }
      v14 = v12 + 1;
      if ( ((v11 - 1) & v11) == 0 )
        v14 = v12;
      v15 = v9 >> v14;
      if ( ((v15 - 1) & v15) != 0 )
      {
        for ( ; v15; v15 >>= 1 )
          ++v10;
        v15 = 1 << v10;
      }
      LODWORD(v30) = 0;
      *((_QWORD *)&v29 + 1) = __PAIR64__(v15, v14);
      *(_QWORD *)&v29 = Pool2;
      memset_0(Pool2, 0, (unsigned __int64)v15 << v14);
      v16 = (__int64 *)Src[0];
      v17 = (unsigned __int64)Src[0] + ((unsigned __int64)HIDWORD(Src[1]) << v32);
      if ( Src[0] < (void *)v17 )
      {
        v18 = v11;
        v19 = 0;
        do
        {
          v20 = *v16;
          if ( *v16 )
          {
            if ( v15 )
            {
              v22 = v15 - 1;
              v23 = 0LL;
              v33 = *v16;
              for ( i = 37
                      * (BYTE6(v33)
                       + 37
                       * (BYTE5(v33)
                        + 37
                        * (BYTE4(v33)
                         + 37
                         * (BYTE3(v33) + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v20 + 11623883)))))))
                      + (unsigned int)HIBYTE(v33); ; i = v15 - 1 )
              {
                v25 = i & v22;
                v21 = &Pool2[v25 << v14];
                if ( !*(_QWORD *)v21 || *(_QWORD *)v21 == v20 )
                  break;
                if ( !v23 )
                {
                  v23 = 2654435761LL * v20 + 1;
                  if ( ((-79 * (_BYTE)v20) & 1) != 0 )
                    v23 = 2654435761LL * v20;
                }
                v22 = v23 + v25;
              }
            }
            else
            {
              v21 = 0LL;
            }
            memmove(v21, v16, v18);
            v18 = v11;
            LODWORD(v30) = ++v19;
          }
          v16 = (__int64 *)((char *)v16 + v18);
        }
        while ( (unsigned __int64)v16 < v17 );
        v5 = a2;
      }
      FsRtlAcquirePushLockExclusive(a3);
      *(_OWORD *)v5 = v29;
      *(_QWORD *)(v5 + 16) = v30;
      if ( Src[0] )
      {
        *(_QWORD *)Src[0] = *a4;
        *a4 = Src[0];
      }
    }
    else
    {
      v7 = -1073741670;
    }
  }
  else
  {
    v7 = 0;
    FsRtlAcquirePushLockExclusive(a3);
  }
  VmpReleasePushLockExclusive(BugCheckParameter2);
  return v7;
}
