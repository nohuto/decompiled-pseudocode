/*
 * XREFs of ??1MULTISORTBLTORDER@@QEAA@XZ @ 0x1C02ADC60
 * Callers:
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02B1BD0 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     <none>
 */

void __fastcall MULTISORTBLTORDER::~MULTISORTBLTORDER(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    Win32FreePool(v1);
}
