/*
 * XREFs of PpMarkDeviceStackExtensionFlag @ 0x1404A36F4
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpStartDeviceNode @ 0x1409A168C (PnpStartDeviceNode.c)
 *     IopDoDeferredSetInterfaceState @ 0x140A6C2D0 (IopDoDeferredSetInterfaceState.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall PpMarkDeviceStackExtensionFlag(__int64 a1, int a2, char a3)
{
  KIRQL v6; // dl
  __int64 v7; // rcx

  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 312);
    if ( a3 )
      *(_DWORD *)(v7 + 32) |= a2;
    else
      *(_DWORD *)(v7 + 32) &= ~a2;
    a1 = *(_QWORD *)(a1 + 24);
  }
  KeReleaseQueuedSpinLock(0xAuLL, v6);
}
