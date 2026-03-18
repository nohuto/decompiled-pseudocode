/*
 * XREFs of IoRetryAsMiniDump @ 0x14058E570
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 * Callees:
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     IoSetBugCheckProgressFlag @ 0x14058EA90 (IoSetBugCheckProgressFlag.c)
 *     IoWriteCrashDump @ 0x14058EFA4 (IoWriteCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG __fastcall IoRetryAsMiniDump(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        const void *a6,
        const void *a7,
        const void *a8,
        char a9,
        const void *a10)
{
  DbgPrintEx(
    5u,
    2u,
    "IoRetryAsMiniDump() - BugCheckCode: 0x%08lx, BugCheckParameter1: 0x%08lx, BugCheckParameter2: 0x%08lx, BugCheckParam"
    "eter3: 0x%08lx, BugCheckParameter4: 0x%08lx\n",
    a1,
    a2,
    a3,
    a4,
    a5);
  DbgPrintEx(
    5u,
    2u,
    "IoRetryAsMiniDump() - ContextSave: 0x%p, Thread: 0x%p, ProgressRoutine: 0x%p, TrapFrame: 0x%p\n",
    a6,
    a7,
    a8,
    a10);
  guard_dispatch_icall_no_overrides(10LL);
  if ( (unsigned __int8)IoWriteCrashDump(a1, a2, a3, a4, a5, (__int64)a6, (__int64)a7, (__int64)a8, a9) )
    return DbgPrintEx(5u, 2u, "IoRetryAsMiniDump() completed.\n");
  DbgPrintEx(5u, 0, "IoRetryAsMiniDump() failed, status: 0x%08x!\n", -1073741823);
  return IoSetBugCheckProgressFlag(0x2000000LL);
}
