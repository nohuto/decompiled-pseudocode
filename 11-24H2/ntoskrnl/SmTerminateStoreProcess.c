/*
 * XREFs of SmTerminateStoreProcess @ 0x14060CB08
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A8CB0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     SmPartitionCleanup @ 0x140797594 (SmPartitionCleanup.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     PsTerminateMinimalProcess @ 0x140778C58 (PsTerminateMinimalProcess.c)
 */

LONG __fastcall SmTerminateStoreProcess(__int64 a1)
{
  LONG result; // eax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  PsTerminateMinimalProcess(*(PRKPROCESS *)(a1 + 2168));
  Timeout.QuadPart = -3000000000LL;
  while ( KeWaitForSingleObject(*(PVOID *)(a1 + 2168), WrKernel, 0, 0, &Timeout) )
    ;
  ZwClose(*(HANDLE *)(a1 + 2160));
  ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(a1 + 2168), 0x746C6644u);
  Timeout.QuadPart = -6000000000LL;
  while ( KeWaitForSingleObject((PVOID)(a1 + 2176), WrKernel, 0, 0, &Timeout) )
    ;
  result = KeResetEvent((PRKEVENT)(a1 + 2176));
  *(_QWORD *)(a1 + 2168) = 0LL;
  *(_QWORD *)(a1 + 2160) = 0LL;
  return result;
}
