/*
 * XREFs of ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C014E9C2
 * Callers:
 *     FreezeThawTimers @ 0x1C0080360 (FreezeThawTimers.c)
 *     InternalSetTimer @ 0x1C00EFF30 (InternalSetTimer.c)
 *     SetProcessTimerDelay @ 0x1C01C0060 (SetProcessTimerDelay.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoPushLockSh::~CAutoPushLockSh(CAutoPushLockSh *this, __int64 a2, __int64 a3)
{
  ExReleasePushLockSharedEx(*(_QWORD *)this, 0LL, a3);
  KeLeaveCriticalRegion();
}
