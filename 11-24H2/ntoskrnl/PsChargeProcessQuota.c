/*
 * XREFs of PsChargeProcessQuota @ 0x14046CF4C
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspChargeQuota @ 0x14027BB30 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessQuota(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(*(_QWORD *)(a1 + 760), a1, 3, a3);
}
