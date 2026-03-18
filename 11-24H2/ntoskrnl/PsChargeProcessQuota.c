/*
 * XREFs of PsChargeProcessQuota @ 0x1403CCF70
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     MmCreateProcessAddressSpace @ 0x140AE61C8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspChargeQuota @ 0x14024B520 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessQuota(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(*(_QWORD *)(a1 + 760), a1, 3, a3);
}
