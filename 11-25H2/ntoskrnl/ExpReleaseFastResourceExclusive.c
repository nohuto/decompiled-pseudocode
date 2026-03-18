/*
 * XREFs of ExpReleaseFastResourceExclusive @ 0x14027C150
 * Callers:
 *     ExReleaseFastResourceShared @ 0x1404F2490 (ExReleaseFastResourceShared.c)
 *     ExReleaseFastResourceExclusive @ 0x14064AA50 (ExReleaseFastResourceExclusive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14027D4F0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 */

signed __int64 __fastcall ExpReleaseFastResourceExclusive(signed __int64 *BugCheckParameter2)
{
  bool v1; // zf
  signed __int64 result; // rax
  char v4; // di
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int64 v9; // rtt
  signed __int32 v10; // eax
  signed __int32 v11; // ett

  v1 = (*((_DWORD *)BugCheckParameter2 + 24))-- == 1;
  result = (signed __int64)(BugCheckParameter2 + 8);
  if ( v1 )
  {
    v4 = *((_BYTE *)BugCheckParameter2 + 100);
    _disable();
    v5 = *(_QWORD *)result;
    v6 = (_QWORD *)BugCheckParameter2[9];
    if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v6 != result )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v10 = *SchedulerAssist;
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    BugCheckParameter2[10] = 0LL;
    *((_BYTE *)BugCheckParameter2 + 100) = 0;
    _m_prefetchw(BugCheckParameter2);
    result = *BugCheckParameter2;
    do
    {
      if ( (result & 2) != 0 )
        return ExpReleaseFastResourceExclusiveSlow((ULONG_PTR)BugCheckParameter2);
      v9 = result;
      result = _InterlockedCompareExchange64(BugCheckParameter2, 0LL, result);
    }
    while ( v9 != result );
    if ( v4 )
      return KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2);
  }
  return result;
}
