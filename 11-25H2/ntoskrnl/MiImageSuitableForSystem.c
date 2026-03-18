/*
 * XREFs of MiImageSuitableForSystem @ 0x140A904C8
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140A5B2CC (MiGetSystemAddressForImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiImageSuitableForSystem(__int64 a1, _DWORD *a2)
{
  if ( *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32) )
  {
    *a2 = 1;
    if ( (*(_DWORD *)(a1 + 56) & 0x20000000) != 0 )
      return *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  }
  else
  {
    *a2 = 0;
  }
  return 0LL;
}
