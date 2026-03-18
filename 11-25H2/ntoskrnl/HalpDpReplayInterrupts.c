/*
 * XREFs of HalpDpReplayInterrupts @ 0x140B3FED0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpDpReplayInterrupts()
{
  int v0; // r8d

  if ( !*(_QWORD *)(HalpInterruptController + 160) )
  {
    v0 = -1073741637;
LABEL_5:
    HalpInterruptSetProblemEx(
      HalpInterruptController,
      28,
      v0,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
      0x362u);
    return (unsigned int)v0;
  }
  v0 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16));
  if ( v0 < 0 )
    goto LABEL_5;
  return (unsigned int)v0;
}
