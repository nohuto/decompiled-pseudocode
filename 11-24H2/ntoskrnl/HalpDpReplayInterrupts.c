/*
 * XREFs of HalpDpReplayInterrupts @ 0x140B4FED0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDpReplayInterrupts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r8d

  if ( !*(_QWORD *)(HalpInterruptController + 160) )
  {
    v4 = -1073741637;
LABEL_5:
    HalpInterruptSetProblemEx(
      HalpInterruptController,
      28,
      v4,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
      0x362u);
    return (unsigned int)v4;
  }
  v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), a1, a3, a4);
  if ( v4 < 0 )
    goto LABEL_5;
  return (unsigned int)v4;
}
