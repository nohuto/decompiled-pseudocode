/*
 * XREFs of MiMarkLargePageRanges @ 0x140C5209C
 * Callers:
 *     MiInitializePhysicalMemoryBlocks @ 0x140C51CC4 (MiInitializePhysicalMemoryBlocks.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiFindDescriptorByPfn @ 0x140C51290 (MiFindDescriptorByPfn.c)
 *     MiMarkLargePageMappings @ 0x140C51F6C (MiMarkLargePageMappings.c)
 */

char __fastcall MiMarkLargePageRanges(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // ebp
  __int64 v4; // r14
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r12
  __int64 v12; // rsi
  unsigned __int64 v13; // r15
  unsigned __int64 DescriptorByPfn; // rax
  __int64 v15; // r11
  int v16; // ecx
  unsigned __int64 v17; // rax

  MiMarkLargePageMappings();
  LOBYTE(v2) = (_BYTE)MmPhysicalMemoryBlock;
  v3 = *(_DWORD *)MmPhysicalMemoryBlock;
  if ( *(_DWORD *)MmPhysicalMemoryBlock )
  {
    v4 = 16LL * v3;
    do
    {
      LOBYTE(v2) = (_BYTE)MmPhysicalMemoryBlock;
      v4 -= 16LL;
      --v3;
      v5 = *(_QWORD *)((char *)MmPhysicalMemoryBlock + v4 + 16);
      v6 = (v5 + *(_QWORD *)((char *)MmPhysicalMemoryBlock + v4 + 24)) & 0xFFFFFFFFFFFFFE00uLL;
      v7 = (v5 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      if ( v7 )
      {
        if ( v7 < v6 )
        {
          v8 = -1LL;
          v9 = 0LL;
          LOBYTE(v2) = 0;
          v10 = 48 * v7 - 0x220000000000LL;
          v11 = v10 + 48 * (v6 - v7);
          if ( v10 < v11 )
          {
            do
            {
              if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
                && (*(_BYTE *)(v10 + 34) & 7) == 6
                && (*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
              {
                v12 = 1LL;
                v13 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v10 + 0x220000000000LL) >> 4);
                if ( !v9 )
                  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v10 + 0x220000000000LL) >> 4);
                DescriptorByPfn = MiFindDescriptorByPfn(
                                    a1,
                                    0xAAAAAAAAAAAAAAABuLL * ((__int64)(v10 + 0x220000000000LL) >> 4));
                if ( DescriptorByPfn )
                {
                  v16 = *(_DWORD *)(DescriptorByPfn + 24);
                  if ( (v16 & 0x20000000) == 0 && v16 != 2 && v16 != 24 )
                    v12 = *(_QWORD *)(DescriptorByPfn + 32) + *(_QWORD *)(DescriptorByPfn + 40) - v13;
                }
                v9 += v12;
                v2 = 48 * v12;
              }
              else
              {
                if ( v9 < 0x200 )
                {
                  if ( !v9 )
                    v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v10 + 0x220000000000LL) >> 4);
                }
                else
                {
                  v9 &= 0xFFFFFFFFFFFFFE00uLL;
                  MiUpdateLargePageBitMap((unsigned __int64)&MiSystemPartition, v8, v9, 3);
                }
                v17 = v9 + 512;
                v9 = 0LL;
                v2 = (v8 + v17) & 0xFFFFFFFFFFFFFE00uLL;
                if ( !v2 )
                  goto LABEL_26;
                v15 = 48 * v2;
                v2 = 0xFFFFDE0000000000uLL;
              }
              v10 = v2 + v15;
            }
            while ( v10 < v11 );
            if ( v9 >= 0x200 )
              LOBYTE(v2) = MiUpdateLargePageBitMap(
                             (unsigned __int64)&MiSystemPartition,
                             v8,
                             v9 & 0xFFFFFFFFFFFFFE00uLL,
                             3);
          }
        }
      }
LABEL_26:
      ;
    }
    while ( v3 );
  }
  return v2;
}
