/*
 * XREFs of PCIeNvmeAdapterInterruptRoutine @ 0x1400DD210
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportInterrupt @ 0x140033830 (RaCallMiniportInterrupt.c)
 */

char __fastcall PCIeNvmeAdapterInterruptRoutine(__int64 a1, _DWORD *a2)
{
  if ( a2 && *a2 == 1314275652 && (a2[36] & 0x80) != 0 )
    return RaCallMiniportInterrupt((__int64)(a2 + 42));
  else
    return 0;
}
