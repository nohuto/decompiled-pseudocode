/*
 * XREFs of NvmeControllerPowerStateGetMaxPower @ 0x1401327E0
 * Callers:
 *     NvmeControllerPowerInitialize @ 0x1400F2558 (NvmeControllerPowerInitialize.c)
 *     NvmeControllerMaxOperationalPower @ 0x1401322A4 (NvmeControllerMaxOperationalPower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerPowerStateGetMaxPower(unsigned __int16 *a1)
{
  bool v2; // zf
  int v3; // eax
  int v4; // ecx

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v2 = (*((_BYTE *)a1 + 3) & 1) == 0;
  v3 = 10000;
  v4 = *a1;
  if ( !v2 )
    v3 = 100;
  return (unsigned int)(v4 * v3);
}
