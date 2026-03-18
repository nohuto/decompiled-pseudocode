/*
 * XREFs of AlpcpCaptureWorkOnBehalfAttribute @ 0x1409C4310
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14088F7F0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsGetWorkOnBehalfThread @ 0x140432F80 (PsGetWorkOnBehalfThread.c)
 *     IoThreadToProcess @ 0x140441CC0 (IoThreadToProcess.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1404453F0 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     PoEnergyEstimationEnabled @ 0x140448760 (PoEnergyEstimationEnabled.c)
 */

__int64 __fastcall AlpcpCaptureWorkOnBehalfAttribute(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  PVOID WorkOnBehalfThread; // rax
  void *v4; // rbx
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v8 = 0LL;
  WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v7);
  v4 = WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
  {
    v5 = (__int64)WorkOnBehalfThread;
    goto LABEL_5;
  }
  if ( IoThreadToProcess(CurrentThread)[3].UserWaitTime || PoEnergyEstimationEnabled() )
  {
    v5 = (__int64)CurrentThread;
LABEL_5:
    PsEncodeThreadWorkOnBehalfTicket(v5, &v8);
  }
  if ( v7 )
    ObfDereferenceObject(v4);
  *(_QWORD *)(a1 + 64) = v8;
  return 0LL;
}
