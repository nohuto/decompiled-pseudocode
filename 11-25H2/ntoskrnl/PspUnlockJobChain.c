/*
 * XREFs of PspUnlockJobChain @ 0x1408D864C
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1408D7F4C (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x1408D81A0 (PspGetMemoryPartitionImplicit.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1408D8590 (PspUnlockJobsAndProcessExclusive.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJobChain(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 i; // rsi

  if ( *(_QWORD *)(a1 + 1336) > 1uLL )
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1312) + 56LL));
  v6 = *(_QWORD *)(a1 + 1336);
  if ( v6 > 2 )
  {
    for ( i = v6 - 2; i; --i )
      ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1344) + 8 * i - 8) + 56LL));
  }
  if ( *(_QWORD *)(a1 + 1336) )
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1304) + 56LL));
  if ( (a3 & 1) == 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    if ( a2 )
    {
      if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
        KiCheckForKernelApcDelivery();
    }
  }
}
