/*
 * XREFs of KiFlushQueuedDpcsWorker @ 0x140476570
 * Callers:
 *     <none>
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140297BA0 (KiRequestSoftwareInterrupt.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiFlushQueuedDpcsWorker(__int64 a1)
{
  __int64 v1; // rdx
  struct _KPRCB *v2; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rdx

  v1 = *(unsigned int *)(a1 + 14424);
  v2 = (struct _KPRCB *)a1;
  result = (unsigned int)v1 | *(_DWORD *)(a1 + 14472);
  if ( (unsigned int)v1 | *(_DWORD *)(a1 + 14472) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v1) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, v1);
    }
    LOBYTE(v1) = 2;
    KiRequestSoftwareInterrupt(v2, v1);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
