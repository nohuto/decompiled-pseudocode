/*
 * XREFs of ?DeBoostIfTime@CLastWokenThread@@QEAAX_J@Z @ 0x14006A918
 * Callers:
 *     ?OnDaemonTimer@LastWokenThread@@YAXXZ @ 0x14006A8E0 (-OnDaemonTimer@LastWokenThread@@YAXXZ.c)
 * Callees:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14006C430 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 */

void __fastcall CLastWokenThread::DeBoostIfTime(CLastWokenThread *this, __int64 a2)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 17) && a2 > *((_QWORD *)this + 3) )
  {
    ForegroundBoost::SetForegroundPriority(*((_QWORD *)this + 1), 0LL, 16LL);
    *((_QWORD *)this + 3) = 0LL;
    *((_BYTE *)this + 17) = 0;
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
