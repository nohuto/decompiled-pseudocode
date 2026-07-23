/*
 * XREFs of MiMoveModifiedPagesToCompressList @ 0x14068CE38
 * Callers:
 *     MmStoreRegister @ 0x1407FDB18 (MmStoreRegister.c)
 * Callees:
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSetStoreVirtualPagefileValue @ 0x1402FAC20 (MiSetStoreVirtualPagefileValue.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 */

char __fastcall MiMoveModifiedPagesToCompressList(__int64 a1)
{
  _UNKNOWN **v1; // rax
  ULONG_PTR i; // rbx
  unsigned __int8 v4; // bp
  __int64 v5; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v1 = &retaddr;
  for ( i = *(_QWORD *)(a1 + 3984); i != 0x3FFFFFFFFFLL; i = *(_QWORD *)(a1 + 3984) )
  {
    LOBYTE(v1) = MiSafeLockPage(i);
    v4 = (unsigned __int8)v1;
    if ( (_BYTE)v1 != 17 )
    {
      v5 = 48 * i - 0x220000000000LL;
      if ( i == *(_QWORD *)(a1 + 3984) )
      {
        MiUnlinkPageFromListEx(v5, 0);
        *(_QWORD *)(48 * i - 0x220000000000LL + 16) = MiSetStoreVirtualPagefileValue(
                                                        a1,
                                                        *(_QWORD *)(48 * i - 0x220000000000LL + 16),
                                                        3u);
        MiInsertPageInList(48 * i - 0x220000000000LL, 8u);
        v5 = 48 * i - 0x220000000000LL;
      }
      LOBYTE(v1) = MiUnlockPage(v5, v4);
    }
  }
  return (char)v1;
}
