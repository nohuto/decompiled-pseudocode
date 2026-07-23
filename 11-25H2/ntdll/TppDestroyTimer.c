/*
 * XREFs of TppDestroyTimer @ 0x1800EBB9C
 * Callers:
 *     TppFreeWait @ 0x180041EB0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x180041F00 (TppTimerpFree.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TppDestroyTimer(_QWORD *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  void *v4; // rcx
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[18];
  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 432), 0xFFFFFFFF);
  if ( v3 > 0 && v3 - 1 <= 0 )
  {
    v4 = *(void **)(v2 + 56);
    WorkerFactoryInformation = -1;
    NtSetInformationWorkerFactory(v4, WorkerFactoryBindingCount, &WorkerFactoryInformation, 4u);
  }
  TppCleanupGroupMemberDestroy(a1);
}
