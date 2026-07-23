/*
 * XREFs of ExpTimeRefreshDpcRoutine @ 0x1404A93F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x1404FB730 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x14051840C (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine7 @ 0x1406B6600 (KiCustomAccessRoutine7.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall ExpTimeRefreshDpcRoutine(__int64 a1, volatile signed __int32 *a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v8[46]; // [rsp+0h] [rbp-1C8h] BYREF
  _QWORD v9[16]; // [rsp+140h] [rbp-88h] BYREF

  v9[13] = v8;
  memset_0(v9, 0, 0x60uLL);
  if ( (__int64)a2 >> 47 != -1 && (__int64)a2 >> 47 != 0 )
  {
    v8[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v9[11] = a3;
    v9[8] = __ROL8__(a2, a3);
    v9[3] = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine7(a2);
  }
  if ( _InterlockedIncrement(a2) == 1 )
    ExQueueWorkItem(&ExpTimeRefreshWorkItem, DelayedWorkQueue);
}
