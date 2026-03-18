/*
 * XREFs of ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01DC07C
 * Callers:
 *     NtUserLockCursor @ 0x1C005E230 (NtUserLockCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C00629A4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     PtInRect @ 0x1C0063154 (PtInRect.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C009C3B0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

void __fastcall CCursorClip::LockCursor(CCursorClip *this, struct tagRECT *a2)
{
  struct tagRECT *Reserved; // rsi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  LONG top; // r9d
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF

  Reserved = (struct tagRECT *)WPP_MAIN_CB.Reserved;
  CPushLock::AcquireLockExclusive((CPushLock *)((char *)WPP_MAIN_CB.Reserved + 32));
  if ( PtInRect(a2, *((_QWORD *)gpsi + 620)) )
  {
    *(_QWORD *)&v7.left = v4;
    v5 = HIDWORD(v4);
  }
  else
  {
    top = a2->top;
    LODWORD(v4) = a2->left + (a2->right - a2->left) / 2;
    v7.left = v4;
    LODWORD(v5) = top + (a2->bottom - top) / 2;
    v7.top = v5;
  }
  v7.right = v4 + 1;
  v7.bottom = v5 + 1;
  CCursorClip::UpdateClipRect(Reserved, &v7);
  CPushLock::ReleaseLock((CPushLock *)&Reserved[2]);
}
