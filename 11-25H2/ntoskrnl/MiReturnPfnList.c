/*
 * XREFs of MiReturnPfnList @ 0x14066E1F4
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14066DC0C (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x1407EAF44 (MiDeleteSparseRange.c)
 * Callees:
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiUnlinkPageChainHead @ 0x14033BAF0 (MiUnlinkPageChainHead.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiReturnPfnList(__int64 a1)
{
  __int64 v1; // rbp
  __int64 *i; // rax
  unsigned __int8 v4; // bl
  __int64 v5; // rdi
  int v7; // [rsp+40h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 16);
  for ( i = MiUnlinkPageChainHead(a1); ; i = MiUnlinkPageChainHead(a1) )
  {
    v5 = (__int64)i;
    if ( !i )
      break;
    v4 = MiLockPageInline((__int64)i);
    *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
    HIWORD(v7) = HIWORD(*(_DWORD *)(v5 + 32));
    LOWORD(v7) = 0;
    *(_DWORD *)(v5 + 32) = v7;
    MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4), 2);
    MiUnlockPage(v5, v4);
  }
  return v1;
}
