/*
 * XREFs of KiInterruptHandler @ 0x1405B9B80
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiInterruptHandler(ULONG_PTR BugCheckParameter1, __int64 a2, ULONG_PTR a3)
{
  KeBugCheckEx(61 - ((*(_DWORD *)(BugCheckParameter1 + 4) & 0x66) != 0), BugCheckParameter1, a3, 0LL, 0LL);
}
