/*
 * XREFs of PnpiCleanupForceActiveBothInterrupts @ 0x14003DE14
 * Callers:
 *     ACPIInitResetDeviceExtension @ 0x14003DA70 (ACPIInitResetDeviceExtension.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1400557B8 (ACPIInitDeleteDeviceExtension.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1400A5090 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpiCleanupForceActiveBothInterrupts(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 696);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x44706341u);
    *(_QWORD *)(a1 + 696) = 0LL;
  }
  *(_DWORD *)(a1 + 704) = -1;
}
