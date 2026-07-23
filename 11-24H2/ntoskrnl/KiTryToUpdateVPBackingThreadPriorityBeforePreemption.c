/*
 * XREFs of KiTryToUpdateVPBackingThreadPriorityBeforePreemption @ 0x140285700
 * Callers:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     ?KiStartRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KTHREAD@@@Z @ 0x140285600 (-KiStartRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAT_KISOLATION.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x140286DA0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 * Callees:
 *     KiUpdateVPBackingThreadPriority @ 0x1404DD430 (KiUpdateVPBackingThreadPriority.c)
 */

void __fastcall KiTryToUpdateVPBackingThreadPriorityBeforePreemption(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // di
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  char v9; // al

  v4 = 0;
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
  {
    if ( BugCheckParameter1 != a4 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        return;
      v4 = 1;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
    {
      v6 = *(unsigned __int8 *)(BugCheckParameter1 + 388);
      if ( *(_DWORD *)(BugCheckParameter1 + 536) == *(_DWORD *)(a2 + 36) )
      {
        v7 = v6 - 2;
        if ( !v7
          || (v8 = v7 - 1) == 0
          || v8 == 2 && (v9 = *(_BYTE *)(BugCheckParameter1 + 112) & 7, v9 != 1) && (unsigned __int8)(v9 - 3) > 3u )
        {
          KiUpdateVPBackingThreadPriority(BugCheckParameter1);
        }
      }
    }
    if ( v4 )
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
}
