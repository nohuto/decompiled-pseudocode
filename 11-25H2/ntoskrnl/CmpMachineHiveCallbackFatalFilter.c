/*
 * XREFs of CmpMachineHiveCallbackFatalFilter @ 0x1407C27E8
 * Callers:
 *     CmpMachineHiveLoadedWorkItem @ 0x1407C2820 (CmpMachineHiveLoadedWorkItem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpMachineHiveCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x13Fu, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 80), BugCheckParameter4);
}
