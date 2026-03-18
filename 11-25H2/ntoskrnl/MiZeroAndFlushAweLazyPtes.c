/*
 * XREFs of MiZeroAndFlushAweLazyPtes @ 0x140677AAC
 * Callers:
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiCompareTbFlushTimeStamp @ 0x140239C5C (MiCompareTbFlushTimeStamp.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiSetPteTimeStamp @ 0x14044EF40 (MiSetPteTimeStamp.c)
 *     MiWriteAweClusterPte @ 0x1404D8144 (MiWriteAweClusterPte.c)
 *     MiGetAweFlushList @ 0x140676CC4 (MiGetAweFlushList.c)
 *     MiInsertAweFlushList @ 0x140676F7C (MiInsertAweFlushList.c)
 */

void __fastcall MiZeroAndFlushAweLazyPtes(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v3; // rsi
  __int64 AweFlushList; // rbp
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  int v7; // r12d
  int v8; // edx
  unsigned __int64 v9; // rdi
  volatile unsigned __int64 v10; // rbx
  volatile unsigned __int64 v11; // rbx
  int v12; // r14d

  v3 = (volatile signed __int64 *)(a2 & 0xFFFFFFFFFFFFF000uLL);
  AweFlushList = 0LL;
  v5 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v6 = MiSetPteTimeStamp(CLFS_LSN_NULL_EXT, 0LL);
  v7 = 0;
  v8 = 0;
  v9 = v6 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
  if ( (unsigned __int64)v3 < v5 )
  {
    do
    {
      v10 = *v3;
      if ( (*v3 & 0x801) == 0 && v10 )
      {
        if ( qword_140E2D940 )
        {
          if ( (v10 & 0x10) != 0 )
            v10 &= ~0x10uLL;
          else
            v10 &= ~qword_140E2D940;
        }
        v11 = HIDWORD(v10);
        if ( (_DWORD)v11 )
        {
          v12 = 0;
          if ( (_DWORD)v11 == v8 )
          {
            v12 = v7;
          }
          else if ( MiCompareTbFlushTimeStamp((unsigned int)v11) )
          {
            v7 = 1;
            v12 = 1;
          }
          else
          {
            v7 = 0;
          }
          MiWriteAweClusterPte(*(_QWORD *)(a1 + 40), v3, v9, 6, *(_QWORD *)(a1 + 160));
          if ( v12 )
          {
            if ( !AweFlushList )
              AweFlushList = MiGetAweFlushList(a1, 64);
            MiInsertAweFlushList(a1, AweFlushList, (unsigned __int64)v3, 64);
          }
          v8 = v11;
        }
      }
      v3 += *(_QWORD *)(a1 + 160);
    }
    while ( (unsigned __int64)v3 < v5 );
    if ( AweFlushList )
    {
      MiFlushTbList(AweFlushList);
      MiReleaseProcessorFlushList();
    }
  }
}
