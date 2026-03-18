/*
 * XREFs of PipDmgDestroyIommuExtension @ 0x14082C4C0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409A0984 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x140A87040 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     PiIommuFreeExtension @ 0x140729CF8 (PiIommuFreeExtension.c)
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
