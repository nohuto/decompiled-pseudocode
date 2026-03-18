/*
 * XREFs of ?vDisableSynchronizeNKAPC@@YAXPEAX00@Z @ 0x140330810
 * Callers:
 *     <none>
 * Callees:
 *     ?vDisableTimers@@YAXK@Z @ 0x140218D88 (-vDisableTimers@@YAXK@Z.c)
 */

void __fastcall vDisableSynchronizeNKAPC(void *a1, void *a2, void *a3)
{
  int v3; // ebx
  __int64 v4; // rdx

  v3 = (int)a1;
  UserEnterUserCritSec(a1, a2, a3);
  vDisableTimers(v3, v4);
  UserLeaveUserCritSec();
}
