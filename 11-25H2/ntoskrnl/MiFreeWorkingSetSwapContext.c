/*
 * XREFs of MiFreeWorkingSetSwapContext @ 0x140A39390
 * Callers:
 *     MiBeginProcessClean @ 0x1403D80B8 (MiBeginProcessClean.c)
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x140454FFC (MmInSwapWorkingSet.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1407EB280 (MiInSwapSharedWorkingSetWorker.c)
 * Callees:
 *     MiFreeReservationRun @ 0x140A39448 (MiFreeReservationRun.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeWorkingSetSwapContext(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx

  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  v4 = *(void **)(a2 + 8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(a2 + 56);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  MiFreeReservationRun(a1, a2 + 64);
  ExFreePoolWithTag((PVOID)a2, 0);
}
