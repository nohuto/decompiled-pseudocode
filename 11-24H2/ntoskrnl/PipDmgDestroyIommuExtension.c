/*
 * XREFs of PipDmgDestroyIommuExtension @ 0x1409C45C8
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x1409C455C (PiDmaGuardProcessNewDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A109EC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x140A8BD58 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     PiIommuFreeExtension @ 0x140735F88 (PiIommuFreeExtension.c)
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
