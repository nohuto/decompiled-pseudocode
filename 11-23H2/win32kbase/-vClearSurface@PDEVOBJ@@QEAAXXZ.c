/*
 * XREFs of ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0155FD8
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0160E5C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003881C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0049D88 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C0049DDC (--1DLODCOBJ@@QEAA@XZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C005F78C (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 */

void __fastcall PDEVOBJ::vClearSurface(PDEVOBJ *this)
{
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rcx
  __int64 v4; // rcx
  struct _ERESOURCE v5; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v2 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8), 16);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)&v5.SharedWaiters);
  DEVLOCKOBJ::vLock((DEVLOCKOBJ *)&v5, this);
  *(_QWORD *)(*(_QWORD *)this + 2528LL) = 0LL;
  DEVLOCKOBJ::vDestructor(&v5);
  DLODCOBJ::~DLODCOBJ((DLODCOBJ *)&v5.SharedWaiters);
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8));
  v3 = *(struct _ERESOURCE **)(v2 + 8);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    PsLeavePriorityRegion(v4);
  }
}
