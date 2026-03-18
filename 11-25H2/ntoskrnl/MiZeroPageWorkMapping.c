/*
 * XREFs of MiZeroPageWorkMapping @ 0x14043AE70
 * Callers:
 *     MiPageListCollision @ 0x14043ADFC (MiPageListCollision.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall MiZeroPageWorkMapping(unsigned int a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // rbp
  unsigned __int64 i; // rbx
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  volatile __int64 *v11; // rcx
  __int64 v12; // rcx
  struct _LIST_ENTRY **v13; // rax
  __int64 v14; // r11
  _BYTE v15[208]; // [rsp+40h] [rbp-118h] BYREF

  v5 = a1;
  memset_0(v15, 0, 0xC8uLL);
  for ( i = a2; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  v7 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)v5 <= 1 )
  {
    v12 = (unsigned int)(2 - v5);
    do
    {
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v12;
    }
    while ( v12 );
  }
  v8 = 0;
  v9 = MiPtesToSupportLargePageSizes[v5];
  if ( v9 )
  {
    v10 = 0LL;
    do
    {
      v11 = (volatile __int64 *)(v7 + 8 * v10);
      if ( *v11 )
      {
        if ( (unsigned int)v5 <= 1 )
          MiRewritePteWithLockBit(0LL, 0, v11, CLFS_LSN_NULL_EXT);
        else
          *v11 = CLFS_LSN_NULL_EXT;
      }
      v10 = ++v8;
    }
    while ( v8 < v9 );
  }
  if ( a3 )
  {
    v13 = MiVaToFlushVm(i);
    MiInitializeTbFlushList((__int64)v15, (__int64)v13, 20, 8, 1);
    if ( (unsigned int)v5 <= (unsigned int)v14 )
    {
      MiInsertLargeTbFlushEntry((__int64)v15, 2 - v5, a2);
      MiFlushTbList((__int64)v15);
    }
    else
    {
      if ( (_DWORD)v5 != 3 )
        v14 = MiPageSizes[v5];
      MiInsertTbFlushEntry((__int64)v15, i, v14, 0);
      MiFlushTbList((__int64)v15);
    }
  }
}
