/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x140896630
 * Callers:
 *     AlpcpChargePagedPoolQuota @ 0x14088DD64 (AlpcpChargePagedPoolQuota.c)
 *     NtAlpcCreateSecurityContext @ 0x140894C50 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x1408963D8 (AlpcpCreateSecurityContext.c)
 *     MiInsertVadCharges @ 0x1408E2418 (MiInsertVadCharges.c)
 *     ExpAllocateHandleTable @ 0x14093BFFC (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x14093C154 (ExpAllocateTablePagedPoolNoZero.c)
 *     AlpcpCreateReserve @ 0x14093F62C (AlpcpCreateReserve.c)
 * Callees:
 *     PspChargeQuota @ 0x14024B520 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(*(_QWORD *)(a1 + 760), a1, 1, a2);
}
