/*
 * XREFs of ExpReleaseFastResourceExclusive @ 0x14025D6D0
 * Callers:
 *     ExReleaseFastResourceShared @ 0x1404F49A0 (ExReleaseFastResourceShared.c)
 *     ExReleaseFastResourceExclusive @ 0x140656950 (ExReleaseFastResourceExclusive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14025D7C0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpReleaseFastResourceExclusive(__int64 *BugCheckParameter2)
{
  bool v1; // zf
  __int64 result; // rax
  ULONG_PTR v4; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v9; // rtt
  signed __int32 v10; // eax
  signed __int32 v11; // ett

  v1 = (*((_DWORD *)BugCheckParameter2 + 24))-- == 1;
  result = (__int64)(BugCheckParameter2 + 8);
  if ( v1 )
  {
    v4 = *((unsigned __int8 *)BugCheckParameter2 + 100);
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
    if ( (_BYTE)v4 )
      return KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v4);
  }
  return result;
}
