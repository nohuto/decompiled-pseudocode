/*
 * XREFs of ?SyncIntervalSatisfied@CFlipToken@@IEAA_NAEBUCOMPOSITION_MONITOR_TIMING@@@Z @ 0x14000BF68
 * Callers:
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z @ 0x14005EA40 (-CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

char __fastcall CFlipToken::SyncIntervalSatisfied(CFlipToken *this, const struct COMPOSITION_MONITOR_TIMING *a2)
{
  _QWORD *v4; // rdi
  CPushLock *v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // rax

  if ( !*((_DWORD *)this + 32) )
    return 1;
  v4 = (_QWORD *)*((_QWORD *)this + 6);
  KeEnterCriticalRegion();
  v5 = (CPushLock *)(v4 + 6);
  ExAcquirePushLockSharedEx(v4 + 6, 0LL);
  v6 = v4[20] ? 0LL : v4[18];
  CPushLock::ReleaseLock(v5);
  if ( *((_QWORD *)this + 14) >= v6 )
    return 1;
  if ( *((_BYTE *)this + 576) )
    v8 = *((_QWORD *)a2 + 3);
  else
    v8 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 14) = v6 + (v8 >> 1);
  return 0;
}
