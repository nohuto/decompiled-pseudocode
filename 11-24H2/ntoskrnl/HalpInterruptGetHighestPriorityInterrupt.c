/*
 * XREFs of HalpInterruptGetHighestPriorityInterrupt @ 0x1405422D0
 * Callers:
 *     HalpTimerOnlyClockInterruptPending @ 0x140546FD0 (HalpTimerOnlyClockInterruptPending.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x1403B97B4 (HalpInterruptFindLines.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptGetHighestPriorityInterrupt(_DWORD *a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  int v4; // eax
  _QWORD *Lines; // rax
  ULONG_PTR BugCheckParameter4; // r8
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+20h]

  v2 = HalpInterruptController;
  v8[0] = 0LL;
  v9 = 0;
  v10 = 0;
  LODWORD(v8[0]) = *(_DWORD *)(HalpInterruptController + 256);
  if ( *(_QWORD *)(HalpInterruptController + 184) )
  {
    v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), (char *)v8 + 4, &v9, a2);
    if ( ((v4 - 2) & 0xFFFFFFFD) == 0 )
      return 3221225473LL;
    switch ( v4 )
    {
      case 0:
        KeBugCheckEx(0x5Cu, 0x203uLL, *(int *)(v2 + 240), v2, 0LL);
      case 1:
        Lines = HalpInterruptFindLines((unsigned int *)v8);
        if ( !Lines )
        {
          HalpInterruptSetProblemEx(
            v2,
            18,
            SHIDWORD(v8[0]),
            (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
            0xF64u);
          KeBugCheckEx(0x5Cu, 0x203uLL, *(int *)(v2 + 240), v2, BugCheckParameter4);
        }
        *a1 = *(_DWORD *)(56LL * v10 + Lines[5] + 48);
        return 0LL;
      case 3:
        *a1 = v9;
        return 0LL;
    }
  }
  return 3221225659LL;
}
