/*
 * XREFs of ??1DRIVERMANAGEMENTSHARELOCK@@QEAA@XZ @ 0x1C015FBB0
 * Callers:
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C01665A0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C0166C90 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DRIVERMANAGEMENTSHARELOCK::~DRIVERMANAGEMENTSHARELOCK(DRIVERMANAGEMENTSHARELOCK *this)
{
  __int64 v1; // rbx
  struct _ERESOURCE *v2; // rcx
  __int64 v3; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v1 + 8));
  v2 = *(struct _ERESOURCE **)(v1 + 8);
  if ( v2 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v2);
    PsLeavePriorityRegion(v3);
  }
}
