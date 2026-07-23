/*
 * XREFs of PspUnlockJobChain @ 0x1408D80E0
 * Callers:
 *     PspSetUILimitJobObject @ 0x140778788 (PspSetUILimitJobObject.c)
 *     PspImplicitAssignProcessToJob @ 0x1408D79EC (PspImplicitAssignProcessToJob.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1408D7BB8 (PspUnlockJobsAndProcessExclusive.c)
 *     PspGetMemoryPartitionImplicit @ 0x1408D7CF0 (PspGetMemoryPartitionImplicit.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJobChain(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 i; // rsi

  if ( *(_QWORD *)(a1 + 1336) > 1uLL )
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1312) + 56LL));
  v4 = *(_QWORD *)(a1 + 1336);
  if ( v4 > 2 )
  {
    for ( i = v4 - 2; i; --i )
      ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1344) + 8 * i - 8) + 56LL));
  }
  if ( *(_QWORD *)(a1 + 1336) )
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1304) + 56LL));
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery();
  }
}
