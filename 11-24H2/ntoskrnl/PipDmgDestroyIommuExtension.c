/*
 * XREFs of PipDmgDestroyIommuExtension @ 0x14098237C
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x140982310 (PiDmaGuardProcessNewDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409BEDFC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x140A88248 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     PiIommuFreeExtension @ 0x140733EB8 (PiIommuFreeExtension.c)
 */

void __fastcall PipDmgDestroyIommuExtension(__int64 a1)
{
  _BYTE *v2; // rcx

  v2 = *(_BYTE **)(a1 + 720);
  if ( v2 )
  {
    PiIommuFreeExtension(v2);
    *(_QWORD *)(a1 + 720) = 0LL;
  }
}
