/*
 * XREFs of ndisDmaTelemetryUpdateBucketSchema @ 0x1400DC5D4
 * Callers:
 *     ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1400DA01C (-ndisInitializeDmaSubsystem@@YAXXZ.c)
 *     ndisDmaTelemetryKnobsUpdateRoutine @ 0x1400DC5A0 (ndisDmaTelemetryKnobsUpdateRoutine.c)
 * Callees:
 *     ?UpdateBucketSchema@Bucketizer@@QEAAX_K@Z @ 0x1400DC318 (-UpdateBucketSchema@Bucketizer@@QEAAX_K@Z.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1400E62E0 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     LookUpTableFlushComplete @ 0x14014EE64 (LookUpTableFlushComplete.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisDmaTelemetryUpdateBucketSchema(__int64 a1)
{
  Bucketizer *v2; // rcx
  __int64 v3; // rbx
  void *v4; // rdx
  struct _EX_TIMER *v5; // rcx
  KLockThisExclusive v6; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(&v6, &stru_14011CB08);
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_14011A7D8 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v3 = qword_14011A7E0;
    if ( KeGetCurrentIrql() >= 2u || (unsigned int)KeIsExecutingDpc() )
    {
      v4 = *(void **)(v3 + 264);
      v5 = *(struct _EX_TIMER **)(v3 + 360);
      *(_BYTE *)(v3 + 372) = 1;
      TlgAggregateInternalFlushTimerCallbackKernelMode(v5, v4);
    }
    else
    {
      LookUpTableFlushComplete(v3);
    }
  }
  Bucketizer::UpdateBucketSchema(v2, a1);
  KLockHolder::~KLockHolder(&v6);
}
