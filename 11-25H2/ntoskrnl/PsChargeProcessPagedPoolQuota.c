/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x1408B0170
 * Callers:
 *     AlpcpCreateReserve @ 0x1408AEE08 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x1408AFF04 (AlpcpCreateSecurityContext.c)
 *     MiInsertVadCharges @ 0x140900770 (MiInsertVadCharges.c)
 *     ExpAllocateHandleTable @ 0x1409719B0 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140971B08 (ExpAllocateTablePagedPoolNoZero.c)
 *     AlpcpChargePagedPoolQuota @ 0x14098E5C4 (AlpcpChargePagedPoolQuota.c)
 * Callees:
 *     PspChargeQuota @ 0x1403C65E0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(*(_QWORD *)(a1 + 760), a1, 1, a2);
}
