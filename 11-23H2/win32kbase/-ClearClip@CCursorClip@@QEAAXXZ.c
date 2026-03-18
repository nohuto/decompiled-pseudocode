/*
 * XREFs of ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0062ED0
 * Callers:
 *     NtUserLockCursor @ 0x1C005E230 (NtUserLockCursor.c)
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C0066298 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     NtUserClipCursor @ 0x1C01431D0 (NtUserClipCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C00629A4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C009C3B0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CCursorClip::ClearClip(CCursorClip *this)
{
  __int64 v2; // rcx
  struct tagRECT v3; // [rsp+20h] [rbp-18h] BYREF

  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)this + 32));
  v2 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( !v2 )
    v2 = *((_QWORD *)this + 3) - *((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *(struct tagRECT *)this;
    CCursorClip::UpdateClipRect((struct tagRECT *)this, &v3);
  }
  CPushLock::ReleaseLock((CCursorClip *)((char *)this + 32));
}
