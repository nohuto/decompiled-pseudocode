/*
 * XREFs of KiFlushQueuedDpcsWorker @ 0x1402F5AC0
 * Callers:
 *     <none>
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1402F3D40 (KiRequestSoftwareInterrupt.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiFlushQueuedDpcsWorker(__int64 a1)
{
  unsigned int v1; // edx
  struct _KPRCB *v2; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rdx

  v1 = *(_DWORD *)(a1 + 14424);
  v2 = (struct _KPRCB *)a1;
  result = v1 | *(_DWORD *)(a1 + 14472);
  if ( v1 | *(_DWORD *)(a1 + 14472) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    KiRequestSoftwareInterrupt(v2, 2);
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
