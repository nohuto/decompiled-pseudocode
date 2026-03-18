/*
 * XREFs of KeReadyThread @ 0x140338E58
 * Callers:
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 * Callees:
 *     KiInSwapSingleProcess @ 0x1402A67C4 (KiInSwapSingleProcess.c)
 *     KiFastReadyThread @ 0x1403385A4 (KiFastReadyThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeReadyThread(ULONG_PTR a1)
{
  __int64 v1; // rdi
  ULONG_PTR v2; // rbx
  char result; // al
  unsigned __int8 CurrentIrql; // si

  v1 = *(_QWORD *)(a1 + 184);
  v2 = a1;
  if ( (*(_DWORD *)(v1 + 264) & 7) == 0 )
    return KiFastReadyThread(v2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  result = KiInSwapSingleProcess(v2, v1, CurrentIrql);
  if ( !result )
    return KiFastReadyThread(v2);
  return result;
}
