/*
 * XREFs of ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x140047F28
 * Callers:
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x140049610 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x140054FA0 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x14011E540 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x14020B0AC (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     SendAppClipChanged @ 0x140048000 (SendAppClipChanged.c)
 *     ?SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z @ 0x140048054 (-SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z.c)
 *     ?EnsureValidCursorPosition@CCursorClip@@QEAAXXZ @ 0x14020B058 (-EnsureValidCursorPosition@CCursorClip@@QEAAXXZ.c)
 */

void __fastcall CCursorClip::UpdateClipRect(const struct tagRECT *this, struct tagRECT *a2)
{
  LONG left; // r9d
  LONG right; // r8d
  LONG top; // ecx
  LONG bottom; // r10d
  LONG v7; // eax
  LONG v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  CCursorClip *v11; // rcx
  struct tagRECT v12; // [rsp+20h] [rbp-18h] BYREF

  left = this->left;
  right = this->right;
  top = this->top;
  if ( left <= a2->left )
    left = a2->left;
  bottom = this->bottom;
  if ( right >= a2->right )
    right = a2->right;
  a2->left = left;
  v7 = a2->top;
  a2->right = right;
  if ( top <= v7 )
    top = v7;
  v8 = a2->bottom;
  a2->top = top;
  if ( bottom >= v8 )
    bottom = v8;
  a2->bottom = bottom;
  if ( left > right || top > bottom )
    *a2 = *this;
  this[1] = *(const struct tagRECT *)a2;
  InputTraceLogging::Mouse::SetAppClip(this + 1);
  v9 = *(_QWORD *)&this[1].left;
  v12 = 0LL;
  v10 = v9 - *(_QWORD *)&this->left;
  if ( !v10 )
    v10 = *(_QWORD *)&this[1].right - *(_QWORD *)&this->right;
  if ( v10 )
    v12 = this[1];
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
  SendAppClipChanged(&v12);
  CCursorClip::EnsureValidCursorPosition(v11);
  CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
}
