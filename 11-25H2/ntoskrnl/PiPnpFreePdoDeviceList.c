/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x140A7FE48
 * Callers:
 *     PnpFreeSystemPdoList @ 0x140A7FE30 (PnpFreeSystemPdoList.c)
 *     PnpGetSystemPdoList @ 0x140AA3050 (PnpGetSystemPdoList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
