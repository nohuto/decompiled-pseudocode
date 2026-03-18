/*
 * XREFs of ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x14020B0AC
 * Callers:
 *     NtUserLockCursor @ 0x14011DEB0 (NtUserLockCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x140047F28 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     PtInRect @ 0x1400DCAE4 (PtInRect.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CCursorClip::LockCursor(const struct tagRECT *this, struct tagRECT *a2)
{
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  LONG top; // ecx
  struct tagRECT v9; // [rsp+20h] [rbp-28h] BYREF

  CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
  UserSessionState = W32GetUserSessionState(v4);
  if ( PtInRect(a2, *(_QWORD *)(*(_QWORD *)(UserSessionState + 19928) + 4960LL)) )
  {
    v9.left = v6;
    v7 = HIDWORD(v6);
  }
  else
  {
    top = a2->top;
    LODWORD(v6) = a2->left + (a2->right - a2->left) / 2;
    v9.left = v6;
    LODWORD(v7) = top + (a2->bottom - top) / 2;
  }
  v9.top = v7;
  v9.right = v6 + 1;
  v9.bottom = v7 + 1;
  CCursorClip::UpdateClipRect(this, &v9);
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
}
