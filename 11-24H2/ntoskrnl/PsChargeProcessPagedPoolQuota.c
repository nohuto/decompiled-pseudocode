/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x14089EAD0
 * Callers:
 *     AlpcpChargePagedPoolQuota @ 0x140892384 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpCreateReserve @ 0x140893C6C (AlpcpCreateReserve.c)
 *     NtAlpcCreateSecurityContext @ 0x14089D0F0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x14089E878 (AlpcpCreateSecurityContext.c)
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 *     ExpAllocateHandleTable @ 0x14094D2D4 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x14094D42C (ExpAllocateTablePagedPoolNoZero.c)
 * Callees:
 *     PspChargeQuota @ 0x14027BB30 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(*(_QWORD *)(a1 + 760), a1, 1, a2);
}
