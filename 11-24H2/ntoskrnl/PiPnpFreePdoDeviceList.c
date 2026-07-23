/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x140A7DE18
 * Callers:
 *     PnpFreeSystemPdoList @ 0x140A7DE00 (PnpFreeSystemPdoList.c)
 *     PnpGetSystemPdoList @ 0x140AA3160 (PnpGetSystemPdoList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
