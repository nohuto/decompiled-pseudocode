/*
 * XREFs of ?Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ @ 0x140151E70
 * Callers:
 *     ?ndisMpHookNmrClientDetachProvider@@YAJPEAX@Z @ 0x1400CD9A0 (-ndisMpHookNmrClientDetachProvider@@YAJPEAX@Z.c)
 *     ?DeregisterAsync@MINIPORT_HOOK_DRIVER@@AEAAXXZ @ 0x140151F00 (-DeregisterAsync@MINIPORT_HOOK_DRIVER@@AEAAXXZ.c)
 * Callees:
 *     ?WaitForAllHookedDriversToDeregister@MINIPORT_HOOK_DRIVER@@AEAAXXZ @ 0x140152038 (-WaitForAllHookedDriversToDeregister@MINIPORT_HOOK_DRIVER@@AEAAXXZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x14015DFC0 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

unsigned __int64 __fastcall MINIPORT_HOOK_DRIVER::Deregister(struct _EX_RUNDOWN_REF *this)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 Count; // rbx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  MINIPORT_HOOK_DRIVER::WaitForAllHookedDriversToDeregister((MINIPORT_HOOK_DRIVER *)this);
  KLockThisExclusive::KLockThisExclusive(
    (KLockThisExclusive *)&v5,
    (struct KPushLockBase *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead);
  v2 = 0LL;
  if ( LOBYTE(this->Count) )
  {
    Count = this[2].Count;
    LOBYTE(this->Count) = 0;
    ExReInitializeRundownProtection(this + 1);
    this[3].Count = 0LL;
    this[2].Count = 0LL;
    *(_OWORD *)&this[4].Count = 0LL;
    *(_OWORD *)&this[6].Count = 0LL;
    this[8].Count = 0LL;
    KLockHolder::ReleaseExclusive(&v5);
    v2 = Count;
  }
  KLockHolder::~KLockHolder(&v5);
  return v2;
}
