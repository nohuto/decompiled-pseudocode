/*
 * XREFs of MiReturnPfnList @ 0x14067AC80
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14067A698 (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x1407FB544 (MiDeleteSparseRange.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 */

__int64 __fastcall MiReturnPfnList(__int64 a1)
{
  __int64 v1; // rbp
  __int64 *i; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 v7; // bl
  __int64 v8; // rdi
  int v10; // [rsp+40h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 16);
  for ( i = MiUnlinkPageChainHead(a1); ; i = MiUnlinkPageChainHead(a1) )
  {
    v8 = (__int64)i;
    if ( !i )
      break;
    v7 = MiLockPageInline((__int64)i, v4, v5, v6);
    *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
    HIWORD(v10) = HIWORD(*(_DWORD *)(v8 + 32));
    LOWORD(v10) = 0;
    *(_DWORD *)(v8 + 32) = v10;
    MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v8 + 0x220000000000LL) >> 4), 2LL);
    MiUnlockPage(v8, v7);
  }
  return v1;
}
