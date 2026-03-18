/*
 * XREFs of ?OnPointerCursorOperation@@YAXXZ @ 0x1C0062D70
 * Callers:
 *     <none>
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C001DAA0 (TransitionCursorSuppressionState.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0062E20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0063088 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C00630B4 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C014F5DC (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01AD264 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01AD308 (-xxxSwitchCursors@@YAXHH@Z.c)
 */

void OnPointerCursorOperation(void)
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett
  __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  const struct tagPOINTERCURSORDATA *v7; // rbx
  Feedback *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  BOOL v13; // ecx
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned int v23; // ecx
  char v24; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v24,
    "PointerCursorOperation",
    0LL);
  _m_prefetchw(&Feedback::gdwPointerCursorOps);
  v0 = Feedback::gdwPointerCursorOps;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0, v0);
  }
  while ( v1 != v0 );
  v2 = v0;
  if ( (v0 & 1) != 0 )
  {
    EnterCrit(1LL, 0LL);
    Feedback::xxxRestoreMouseCursors(v8);
    UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  }
  if ( (v2 & 0x700) != 0 )
  {
    EnterCrit(1LL, 0LL);
    if ( (v2 & 0x100) != 0 )
    {
      v13 = 1;
      v14 = 1;
    }
    else
    {
      v13 = (v2 & 0x400) != 0;
      v14 = 0;
    }
    xxxSwitchCursors(v13, v14);
    Feedback::gfInRange = 0;
    UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  }
  if ( (v2 & 2) != 0 )
  {
    EnterCrit(1LL, 0LL);
    if ( gCursorSuppressionState == 4 )
    {
      v23 = 8;
    }
    else if ( gCursorSuppressionState == 5 )
    {
      v23 = 1;
    }
    else
    {
      v22 = (unsigned int)(gCursorSuppressionState - 6);
      if ( gCursorSuppressionState == 6 )
      {
        v23 = 2;
      }
      else
      {
        if ( gCursorSuppressionState != 7 )
        {
LABEL_25:
          UserSessionSwitchLeaveCrit(v22, v19, v20, v21);
          goto LABEL_7;
        }
        v23 = 3;
      }
    }
    TransitionCursorSuppressionState(v23, 0);
    goto LABEL_25;
  }
LABEL_7:
  if ( (v2 & 4) != 0 )
  {
    EnterCrit(1LL, 0LL);
    xxxEnsureAllDpiCursors();
    UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  }
  v7 = (const struct tagPOINTERCURSORDATA *)_InterlockedExchange64((volatile __int64 *)&Feedback::gppcdLatest, 0LL);
  if ( v7 )
  {
    RenderCursor(v7);
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&(&Feedback::gppcdFree)[(v7 - (const struct tagPOINTERCURSORDATA *)&Feedback::gpcd)
                                                       / 0xCuLL],
      (signed __int64)v7,
      0LL);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v24);
}
