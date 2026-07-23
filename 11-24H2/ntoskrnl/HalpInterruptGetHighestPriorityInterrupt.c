/*
 * XREFs of HalpInterruptGetHighestPriorityInterrupt @ 0x14053FC20
 * Callers:
 *     HalpTimerOnlyClockInterruptPending @ 0x140544890 (HalpTimerOnlyClockInterruptPending.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x140373298 (HalpInterruptFindLines.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptGetHighestPriorityInterrupt(_DWORD *a1)
{
  ULONG_PTR v1; // rbx
  int v3; // eax
  ULONG_PTR *Lines; // rax
  ULONG_PTR BugCheckParameter4; // r8
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = HalpInterruptController;
  v7[0] = 0LL;
  LODWORD(v7[0]) = *(_DWORD *)(HalpInterruptController + 256);
  if ( *(_QWORD *)(HalpInterruptController + 184) )
  {
    v3 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), (char *)v7 + 4);
    if ( ((v3 - 2) & 0xFFFFFFFD) == 0 )
      return 3221225473LL;
    switch ( v3 )
    {
      case 0:
        KeBugCheckEx(0x5Cu, 0x203uLL, *(int *)(v1 + 240), v1, 0LL);
      case 1:
        Lines = HalpInterruptFindLines((int *)v7);
        if ( !Lines )
        {
          HalpInterruptSetProblemEx(
            v1,
            18,
            SHIDWORD(v7[0]),
            (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
            0xF70u);
          KeBugCheckEx(0x5Cu, 0x203uLL, *(int *)(v1 + 240), v1, BugCheckParameter4);
        }
        *a1 = *(_DWORD *)(Lines[5] + 48);
        return 0LL;
      case 3:
        *a1 = 0;
        return 0LL;
    }
  }
  return 3221225659LL;
}
