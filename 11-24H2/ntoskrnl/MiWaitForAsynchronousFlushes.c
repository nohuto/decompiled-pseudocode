/*
 * XREFs of MiWaitForAsynchronousFlushes @ 0x1404C860C
 * Callers:
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiWaitForAsynchronousFlushes(unsigned int *a1, __int64 a2)
{
  unsigned int *v2; // rdi
  PVOID *v3; // r14
  unsigned int *v4; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // ebx
  __int64 v7; // rcx

  v2 = a1;
  v3 = (PVOID *)(a1 + 528);
  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v6 = 0;
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 1;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  do
  {
    if ( !*((_QWORD *)v4 + 2) || v4[13] )
    {
      v4 += 66;
    }
    else
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
      __writecr8(CurrentIrql);
      KeWaitForMultipleObjects(8u, v3, WaitAny, WrPageOut, 0, 0, 0LL, (PKWAIT_BLOCK)(v2 + 544));
      v4 = v2;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 1;
        LOBYTE(v7) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v7, a2);
      }
    }
  }
  while ( v4 < (unsigned int *)v3 );
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
  }
  __writecr8(CurrentIrql);
  while ( (*v2 & 0x80000000) == 0 )
  {
    v2 += 66;
    if ( v2 >= (unsigned int *)v3 )
      return v6;
  }
  return *v2;
}
