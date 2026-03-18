/*
 * XREFs of MiMoveModifiedPagesToCompressList @ 0x140680478
 * Callers:
 *     MmStoreRegister @ 0x1407ED518 (MmStoreRegister.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiSetStoreVirtualPagefileValue @ 0x140226180 (MiSetStoreVirtualPagefileValue.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 */

char __fastcall MiMoveModifiedPagesToCompressList(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  unsigned __int64 i; // rbx
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
