/*
 * XREFs of ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C005DCC4
 * Callers:
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C0044560 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     GreGetDeviceCaps @ 0x1C005D880 (GreGetDeviceCaps.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C015F5F0 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK(NEEDDYNAMICMODECHANGESHARELOCK *this)
{
  __int64 v1; // rbx
  struct _ERESOURCE *v2; // rcx

  if ( *(_BYTE *)this )
  {
    v1 = *(_QWORD *)(SGDGetSessionState(this) + 24);
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v1 + 80));
    v2 = *(struct _ERESOURCE **)(v1 + 80);
    if ( v2 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v2);
      PsLeavePriorityRegion();
    }
  }
}
