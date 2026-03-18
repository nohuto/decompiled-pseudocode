/*
 * XREFs of GreUnlockVisRgnWithDmcLockAcquiredEx @ 0x1C016A7E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockVisRgnWithDmcLockAcquiredEx(__int64 a1)
{
  __int64 v1; // rbx
  struct _ERESOURCE *v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDCVisRgn", *(_QWORD *)(v1 + 88));
  v2 = *(struct _ERESOURCE **)(v1 + 88);
  if ( v2 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v2);
    PsLeavePriorityRegion(v3);
  }
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemGreLock", *(_QWORD *)(v1 + 120));
  v5 = *(struct _ERESOURCE **)(v1 + 120);
  if ( v5 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v5);
    return PsLeavePriorityRegion(v6);
  }
  return result;
}
