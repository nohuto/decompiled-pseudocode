/*
 * XREFs of SmTerminateStoreProcess @ 0x140600ADC
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404AAD80 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     SmPartitionCleanup @ 0x1407881C4 (SmPartitionCleanup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PsTerminateMinimalProcess @ 0x140768FA8 (PsTerminateMinimalProcess.c)
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
