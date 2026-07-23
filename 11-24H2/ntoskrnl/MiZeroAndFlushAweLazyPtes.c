/*
 * XREFs of MiZeroAndFlushAweLazyPtes @ 0x1406844BC
 * Callers:
 *     MiWriteAwePtes @ 0x1404B4FD0 (MiWriteAwePtes.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiSetPteTimeStamp @ 0x140444FC4 (MiSetPteTimeStamp.c)
 *     MiCompareTbFlushTimeStamp @ 0x14044D95C (MiCompareTbFlushTimeStamp.c)
 *     MiWriteAweClusterPte @ 0x1404D0434 (MiWriteAweClusterPte.c)
 *     MiGetAweFlushList @ 0x1406836D4 (MiGetAweFlushList.c)
 *     MiInsertAweFlushList @ 0x14068398C (MiInsertAweFlushList.c)
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
        if ( qword_140E2DCC0 )
        {
          if ( (v10 & 0x10) != 0 )
            v10 &= ~0x10uLL;
          else
            v10 &= ~qword_140E2DCC0;
        }
        v11 = HIDWORD(v10);
        if ( (_DWORD)v11 )
        {
          v12 = 0;
          if ( (_DWORD)v11 == v8 )
          {
            v12 = v7;
          }
          else if ( MiCompareTbFlushTimeStamp(v11) )
          {
            v7 = 1;
            v12 = 1;
          }
          else
          {
            v7 = 0;
          }
          MiWriteAweClusterPte(*(_QWORD *)(a1 + 40), v3, v9, 6LL, *(_QWORD *)(a1 + 160));
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
