/*
 * XREFs of MiInitializeNuma @ 0x14065D29C
 * Callers:
 *     MiInitializePartition @ 0x1407DC8B8 (MiInitializePartition.c)
 * Callees:
 *     InitializeSListHead @ 0x140460EA0 (InitializeSListHead.c)
 *     MiInitializeSlabAllocator @ 0x14067C6FC (MiInitializeSlabAllocator.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiInitializeHugeIoRanges @ 0x1407DB1E4 (MiInitializeHugeIoRanges.c)
 *     MiInitializeChannelOrdering @ 0x1407E6E24 (MiInitializeChannelOrdering.c)
 */

void __fastcall MiInitializeNuma(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 v3; // r14
  __int64 v4; // rdi
  _QWORD *v5; // rdx
  __int64 v6; // r10
  int *v7; // r11
  __int64 v8; // rbp
  _QWORD *v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbp
  char *v19; // r14
  __int64 v20; // r15
  char *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // r13
  int *v24; // r14
  unsigned int v25; // esi
  _SLIST_HEADER *v26; // rbp
  int v27; // eax
  __int64 v28; // rbp
  unsigned int i; // esi
  unsigned int v31; // [rsp+68h] [rbp+10h]
  __int64 v32; // [rsp+70h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v31 = 0;
  v3 = a1;
  v32 = v1;
  if ( KeNumberNodes )
  {
    v4 = v1 + 57036;
    do
    {
      *(_QWORD *)(v4 - 41788) = -1LL;
      *(_QWORD *)(v4 - 42052) = v3;
      *(_DWORD *)(v4 - 41892) = v2;
      *(_BYTE *)(v4 - 51852) = 8;
      *(_BYTE *)(v4 - 51850) = 8;
      MiInitializeChannelOrdering(v3, v2);
      MiInitializeHugeIoRanges(v1);
      v5 = (_QWORD *)(v4 - 56908);
      v6 = 4LL;
      v7 = dword_140E2D980;
      do
      {
        v8 = (unsigned int)*v7;
        v9 = v5 + 32;
        v10 = v5;
        v11 = 2LL;
        do
        {
          v12 = 4LL;
          do
          {
            v13 = 2LL;
            do
            {
              v10[1] = v9;
              v9 += 4;
              *v10 = v8;
              v10 += 2;
              --v13;
            }
            while ( v13 );
            --v12;
          }
          while ( v12 );
          --v11;
        }
        while ( v11 );
        v5 += 160;
        ++v7;
        --v6;
      }
      while ( v6 );
      v14 = (unsigned int)dword_140E2D98C;
      v15 = v4 - 42156;
      v16 = (_QWORD *)(v4 - 42188);
      v17 = 2LL;
      do
      {
        v16[1] = v15;
        v15 += 32LL;
        *v16 = v14;
        v16 += 2;
        --v17;
      }
      while ( v17 );
      v18 = v4 - 51828;
      v19 = (char *)(v4 - 50380);
      v20 = 8LL;
      do
      {
        v21 = v19;
        v22 = v18;
        v23 = 2LL;
        do
        {
          *(_QWORD *)(v22 - 16) = 0LL;
          *(_DWORD *)(v22 - 4) = 2;
          *(_QWORD *)v22 = 0x3FFFFFFFFFLL;
          *(_QWORD *)(v22 + 8) = 0x3FFFFFFFFFLL;
          *(_DWORD *)(v22 + 16) = 0;
          memset_0(v21, -1, 0x200uLL);
          v21 += 4096;
          v22 += 704LL;
          --v23;
        }
        while ( v23 );
        v19 += 512;
        v18 += 88LL;
        --v20;
      }
      while ( v20 );
      v24 = (int *)(v4 - 41684);
      v25 = 0;
      v26 = (_SLIST_HEADER *)(v4 - 41724);
      do
      {
        InitializeSListHead(v26);
        v27 = -(v25++ - 1 > 1);
        v26 += 3;
        *v24 = v27 & 5;
        v24 += 12;
      }
      while ( v25 < 8 );
      v3 = a1;
      v28 = v4 - 41340;
      for ( i = 0; i < 9; ++i )
      {
        MiInitializeSlabAllocator(v28, i, v31, a1);
        v28 += 232LL;
      }
      *(_DWORD *)(v4 - 52) = 8;
      *(_QWORD *)(v4 - 44) = v4 - 36;
      *(_QWORD *)(v4 - 12) = 0LL;
      *(_DWORD *)v4 = 5;
      *(_QWORD *)(v4 + 4) = 0x3FFFFFFFFFLL;
      *(_QWORD *)(v4 + 12) = 0x3FFFFFFFFFLL;
      *(_DWORD *)(v4 + 20) = 0;
      if ( (ULONG *)a1 != &MiSystemPartition )
        *(_DWORD *)(v4 - 41852) ^= (*(_DWORD *)(57216LL * v31 + qword_140E389D0 + 15184) ^ *(_DWORD *)(v4 - 41852)) & 2;
      v1 = v32 + 57216;
      v2 = v31 + 1;
      v32 += 57216LL;
      v4 += 57216LL;
      v31 = v2;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
  }
}
