/*
 * XREFs of KeEnumerateProcessorDpcs @ 0x1405BCDFC
 * Callers:
 *     DbgkpLkmdSnapGlobals @ 0x14057E65C (DbgkpLkmdSnapGlobals.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     DbgkpLkmdSnapDataEx @ 0x14057E624 (DbgkpLkmdSnapDataEx.c)
 */

__int64 __fastcall KeEnumerateProcessorDpcs(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  KSPIN_LOCK *v6; // rbx
  __int64 v7; // rbp
  _QWORD *i; // rdi
  __int64 result; // rax

  v4 = KiProcessorBlock[a1];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  v6 = (KSPIN_LOCK *)(v4 + 14416);
  v7 = 2LL;
  do
  {
    KxAcquireSpinLock(v6);
    for ( i = (_QWORD *)*(v6 - 2); i; i = (_QWORD *)*i )
      DbgkpLkmdSnapDataEx(a3, (__int64)(i - 1), 64LL, 0LL);
    KxReleaseSpinLock((volatile signed __int64 *)v6);
    v6 += 6;
    --v7;
  }
  while ( v7 );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
