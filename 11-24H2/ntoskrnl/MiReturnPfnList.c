/*
 * XREFs of MiReturnPfnList @ 0x140679AA0
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x1406794B8 (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x1407FADD4 (MiDeleteSparseRange.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiUnlinkPageChainHead @ 0x1402E8490 (MiUnlinkPageChainHead.c)
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
    MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4), 2LL);
    MiUnlockPage(v5, v4);
  }
  return v1;
}
