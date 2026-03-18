/*
 * XREFs of KeReadyThread @ 0x1402F1904
 * Callers:
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 * Callees:
 *     KiFastReadyThread @ 0x1402F12A8 (KiFastReadyThread.c)
 *     KiInSwapSingleProcess @ 0x1402F28E4 (KiInSwapSingleProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeReadyThread(ULONG_PTR a1)
{
  ULONG_PTR v1; // rbx
  char result; // al
  unsigned __int8 CurrentIrql; // si

  v1 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 184) + 264LL) & 7) == 0 )
    return KiFastReadyThread(v1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  result = KiInSwapSingleProcess(v1);
  if ( !result )
    return KiFastReadyThread(v1);
  return result;
}
