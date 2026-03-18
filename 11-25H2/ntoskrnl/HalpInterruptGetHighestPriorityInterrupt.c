/*
 * XREFs of HalpInterruptGetHighestPriorityInterrupt @ 0x14053FAA0
 * Callers:
 *     HalpTimerOnlyClockInterruptPending @ 0x1405446E0 (HalpTimerOnlyClockInterruptPending.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptFindLines @ 0x140445644 (HalpInterruptFindLines.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptGetHighestPriorityInterrupt(_DWORD *a1)
{
  ULONG_PTR v1; // rbx
  int v3; // eax
  _QWORD *Lines; // rax
  ULONG_PTR BugCheckParameter4; // r8
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF

  v1 = HalpInterruptController;
  v7 = 0LL;
  LODWORD(v7) = *(_DWORD *)(HalpInterruptController + 256);
  if ( *(_QWORD *)(HalpInterruptController + 184) )
  {
    v3 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16));
    if ( ((v3 - 2) & 0xFFFFFFFD) == 0 )
      return 3221225473LL;
    switch ( v3 )
    {
      case 0:
        KeBugCheckEx(0x5Cu, 0x203uLL, *(int *)(v1 + 240), v1, 0LL);
      case 1:
        Lines = HalpInterruptFindLines((unsigned int *)&v7);
        if ( !Lines )
        {
          HalpInterruptSetProblemEx(
            v1,
            18,
            SHIDWORD(v7),
            (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
            0xF64u);
          KeBugCheckEx(0x5Cu, 0x203uLL, *(int *)(v1 + 240), v1, BugCheckParameter4);
        }
        *a1 = *(_DWORD *)(Lines[5] + 48LL);
        return 0LL;
      case 3:
        *a1 = 0;
        return 0LL;
    }
  }
  return 3221225659LL;
}
