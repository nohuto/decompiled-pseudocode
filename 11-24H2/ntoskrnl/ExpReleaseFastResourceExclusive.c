/*
 * XREFs of ExpReleaseFastResourceExclusive @ 0x14028DCE0
 * Callers:
 *     ExReleaseFastResourceShared @ 0x1404F22A0 (ExReleaseFastResourceShared.c)
 *     ExReleaseFastResourceExclusive @ 0x140655050 (ExReleaseFastResourceExclusive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14028DDD0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpReleaseFastResourceExclusive(__int64 *BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 result; // rax
  ULONG_PTR v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 v12; // rtt
  unsigned __int32 v13; // eax
  __int64 v14; // rdx
  unsigned __int32 v15; // ett

  v4 = (*((_DWORD *)BugCheckParameter2 + 24))-- == 1;
  result = (__int64)(BugCheckParameter2 + 8);
  if ( v4 )
  {
    v7 = *((unsigned __int8 *)BugCheckParameter2 + 100);
    _disable();
    v8 = *(_QWORD *)result;
    v9 = (_QWORD *)BugCheckParameter2[9];
    if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v9 != result )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v13 = *SchedulerAssist;
      do
      {
        v14 = v13;
        LODWORD(v14) = v13 & 0xFFDFFFFF;
        v15 = v13;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v13 & 0xFFDFFFFF, v13);
      }
      while ( v15 != v13 );
      if ( (v13 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v14, SchedulerAssist, a4);
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
      v12 = result;
      result = _InterlockedCompareExchange64(BugCheckParameter2, 0LL, result);
    }
    while ( v12 != result );
    if ( (_BYTE)v7 )
      return KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v7);
  }
  return result;
}
