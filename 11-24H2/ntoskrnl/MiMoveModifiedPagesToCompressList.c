/*
 * XREFs of MiMoveModifiedPagesToCompressList @ 0x14068BD08
 * Callers:
 *     MmStoreRegister @ 0x1407FD3A8 (MmStoreRegister.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiSetStoreVirtualPagefileValue @ 0x14039D920 (MiSetStoreVirtualPagefileValue.c)
 */

char __fastcall MiMoveModifiedPagesToCompressList(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  ULONG_PTR i; // rbx
  unsigned __int8 v6; // bp
  __int64 v7; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  for ( i = *(_QWORD *)(a1 + 3984); i != 0x3FFFFFFFFFLL; i = *(_QWORD *)(a1 + 3984) )
  {
    LOBYTE(v3) = MiSafeLockPage(i, a2, a3);
    v6 = (unsigned __int8)v3;
    if ( (_BYTE)v3 != 17 )
    {
      v7 = 48 * i - 0x220000000000LL;
      if ( i == *(_QWORD *)(a1 + 3984) )
      {
        MiUnlinkPageFromListEx(v7, 0);
        *(_QWORD *)(48 * i - 0x220000000000LL + 16) = MiSetStoreVirtualPagefileValue(
                                                        a1,
                                                        *(_QWORD *)(48 * i - 0x220000000000LL + 16),
                                                        3u);
        MiInsertPageInList(48 * i - 0x220000000000LL, 8u);
        v7 = 48 * i - 0x220000000000LL;
      }
      LOBYTE(v3) = MiUnlockPage(v7, v6);
    }
  }
  return (char)v3;
}
