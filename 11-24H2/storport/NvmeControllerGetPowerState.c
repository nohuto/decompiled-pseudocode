/*
 * XREFs of NvmeControllerGetPowerState @ 0x140132250
 * Callers:
 *     NvmeControllerSetPowerState @ 0x1400CA468 (NvmeControllerSetPowerState.c)
 *     NvmeControllerPowerInitialize @ 0x1400F2558 (NvmeControllerPowerInitialize.c)
 *     NvmeControllerMaxOperationalPower @ 0x1401322A4 (NvmeControllerMaxOperationalPower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerGetPowerState(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 592);
  if ( a2 > 0x1Fu || a2 > *(_BYTE *)(v2 + 263) )
    return 0LL;
  else
    return v2 + 32 * (a2 + 64LL);
}
