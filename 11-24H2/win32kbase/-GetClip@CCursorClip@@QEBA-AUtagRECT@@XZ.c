/*
 * XREFs of ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1400470A0
 * Callers:
 *     NtUserGetClipCursor @ 0x140046AE0 (NtUserGetClipCursor.c)
 * Callees:
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

struct tagRECT *__fastcall CCursorClip::GetClip(struct tagRECT *this, struct tagRECT *__return_ptr retstr)
{
  RIMLockShared((__int64)&this[2]);
  *retstr = this[1];
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
  return retstr;
}
