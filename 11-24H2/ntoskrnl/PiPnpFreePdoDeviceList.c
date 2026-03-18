/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x140A832F8
 * Callers:
 *     PnpFreeSystemPdoList @ 0x140A832E0 (PnpFreeSystemPdoList.c)
 *     PnpGetSystemPdoList @ 0x140AA8060 (PnpGetSystemPdoList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpFreePdoDeviceList(PVOID *P)
{
  unsigned int i; // ebx

  if ( P )
  {
    for ( i = 0; i < *(_DWORD *)P; ++i )
      ObfDereferenceObjectWithTag(P[i + 1], 0x6C706E50u);
    ExFreePoolWithTag(P, 0);
  }
}
