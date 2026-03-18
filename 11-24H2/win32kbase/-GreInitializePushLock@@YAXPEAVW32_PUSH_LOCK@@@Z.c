/*
 * XREFs of ?GreInitializePushLock@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14012CF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreInitializePushLock(struct W32_PUSH_LOCK *a1)
{
  *(_QWORD *)a1 = 0LL;
}
