/*
 * XREFs of ?GetSyncId@FlipManagerTokenObject@@QEAAJPEA_K_N@Z @ 0x14009A2D0
 * Callers:
 *     ?NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14005CA4C (-NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall FlipManagerTokenObject::GetSyncId(FlipManagerTokenObject *this, unsigned __int64 *a2)
{
  unsigned __int64 v4; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 88, 0LL);
  v4 = *((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  *a2 = v4;
  CPushLock::ReleaseLock((FlipManagerTokenObject *)((char *)this + 88));
  return 0LL;
}
