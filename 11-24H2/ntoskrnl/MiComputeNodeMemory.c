/*
 * XREFs of MiComputeNodeMemory @ 0x14066D960
 * Callers:
 *     MiPerformMemoryChange @ 0x14066F268 (MiPerformMemoryChange.c)
 *     MiUpdatePartitionMemory @ 0x14068CAF4 (MiUpdatePartitionMemory.c)
 *     MiCompleteMemoryAddition @ 0x1407E95EC (MiCompleteMemoryAddition.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C51CC4 (MiInitializePhysicalMemoryBlocks.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiDereferencePageRuns @ 0x1403F89A4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1403F8A50 (MiReferencePageRuns.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

void __fastcall MiComputeNodeMemory(ULONG *a1, int a2)
{
  __int64 v2; // r12
  unsigned int *v3; // r13
  unsigned __int64 v4; // r14
  unsigned int *v6; // rbp
  unsigned __int64 v7; // r15
  __int64 v8; // r9
  unsigned int *v9; // rdi
  unsigned int *v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  volatile LONG *v13; // r10
  unsigned __int8 *v14; // rdx
  _QWORD *v15; // r8
  unsigned int v16; // edx
  unsigned __int64 v17; // rcx
  __int64 v18; // r9
  _QWORD *v19; // r8
  unsigned __int64 v20; // r11
  __int128 *p_Src; // rcx
  __int64 v22; // r8
  KIRQL v23; // al
  __int128 *v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // [rsp+20h] [rbp-78h]
  int v28; // [rsp+28h] [rbp-70h]
  __int64 v29; // [rsp+30h] [rbp-68h]
  __int128 Src; // [rsp+38h] [rbp-60h] BYREF
  char v31; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int8 v32; // [rsp+A0h] [rbp+8h]
  KIRQL v33; // [rsp+A0h] [rbp+8h]
  int v34; // [rsp+A8h] [rbp+10h]
  __int16 v35; // [rsp+B0h] [rbp+18h]
  volatile LONG *v36; // [rsp+B8h] [rbp+20h]

  v34 = a2;
  v2 = 0LL;
  v3 = (unsigned int *)*((_QWORD *)a1 + 4);
  v4 = -1LL;
  v35 = *(_WORD *)a1;
  v27 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( v3 )
  {
    v8 = *v3;
    v28 = *v3;
    v9 = &v3[4 * v8 + 4];
    if ( (_DWORD)v8 )
    {
      v4 = *((_QWORD *)v3 + 2);
      v7 = *(_QWORD *)&v3[4 * (unsigned int)(v8 - 1) + 6] + *(_QWORD *)&v3[4 * (unsigned int)(v8 - 1) + 4] - 1LL;
      v27 = v7;
    }
    *((_QWORD *)a1 + 2312) = v4;
    *((_QWORD *)a1 + 2313) = v7;
  }
  else
  {
    LODWORD(v8) = 0;
    v9 = 0LL;
    v28 = 0;
    if ( !a2 )
    {
      v10 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
      LODWORD(v8) = 0;
      v6 = v10;
      a2 = v34;
      v9 = &v10[4 * *v10 + 4];
    }
  }
  v11 = 0;
  v12 = *((_QWORD *)a1 + 2);
  if ( KeNumberNodes )
  {
    v13 = (volatile LONG *)(v12 + 15220);
    v36 = (volatile LONG *)(v12 + 15220);
    do
    {
      Src = 0LL;
      if ( a2 )
      {
        if ( (_DWORD)v8 )
        {
          v14 = (unsigned __int8 *)(v9 + 1);
          v8 = (unsigned int)v8;
          v15 = v3 + 6;
          do
          {
            if ( *((_DWORD *)v14 - 1) == v11 )
              *((_QWORD *)&Src + *v14) += *v15;
            v15 += 2;
            v14 += 8;
            --v8;
          }
          while ( v8 );
        }
      }
      else
      {
        v16 = 0;
        if ( *v6 )
        {
          do
          {
            if ( v9[2 * v16] == v11 )
            {
              v17 = *(_QWORD *)&v6[4 * v16 + 4];
              v18 = *(_QWORD *)&v6[4 * v16 + 6];
              if ( v18 )
              {
                v32 = v9[2 * v16 + 1];
                v19 = (_QWORD *)(48 * v17 - 0x220000000000LL + 40);
                do
                {
                  v20 = v4;
                  if ( ((*v19 >> 43) & 0x3FF) == v35 )
                  {
                    ++*((_QWORD *)&Src + v32);
                    v4 = v17;
                    if ( v20 <= v17 )
                      v4 = v20;
                    if ( v7 < v17 )
                      v7 = v17;
                  }
                  ++v17;
                  v19 += 6;
                  --v18;
                }
                while ( v18 );
                v27 = v7;
                v2 = 0LL;
              }
            }
            ++v16;
          }
          while ( v16 < *v6 );
          v13 = v36;
        }
      }
      if ( a1 == &MiSystemPartition && MmNumberOfChannels )
      {
        p_Src = &Src;
        v22 = (unsigned __int8)MmNumberOfChannels;
        do
        {
          *(_QWORD *)p_Src -= *(_QWORD *)((char *)p_Src + (_QWORD)&unk_140E37940 + 16LL * v11 - (_QWORD)&Src);
          p_Src = (__int128 *)((char *)p_Src + 8);
          --v22;
        }
        while ( v22 );
      }
      v23 = ExAcquireSpinLockExclusive(v13);
      v33 = v23;
      if ( MmNumberOfChannels )
      {
        v29 = (unsigned __int8)MmNumberOfChannels;
        v24 = &Src;
        memmove((char *)v36 + (char *)&Src - &v31 - 244, &Src, 8LL * (unsigned __int8)MmNumberOfChannels);
        v25 = v29;
        do
        {
          v2 += *(_QWORD *)v24;
          v24 = (__int128 *)((char *)v24 + 8);
          --v25;
        }
        while ( v25 );
        v23 = v33;
      }
      *(_QWORD *)(v36 - 61) = v2;
      MiReleaseSpinLockExclusive(v36, v23);
      ++v11;
      v13 = v36 + 14304;
      v7 = v27;
      v2 = 0LL;
      LODWORD(v8) = v28;
      a2 = v34;
      v36 += 14304;
    }
    while ( v11 < (unsigned __int16)KeNumberNodes );
  }
  *((_QWORD *)a1 + 2313) = v7;
  v26 = 0LL;
  if ( v4 <= v7 )
    v26 = v4;
  *((_QWORD *)a1 + 2312) = v26;
  if ( v6 )
    MiDereferencePageRuns((__int64)v6);
}
