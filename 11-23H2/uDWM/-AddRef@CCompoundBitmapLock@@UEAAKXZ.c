/*
 * XREFs of ?AddRef@CCompoundBitmapLock@@UEAAKXZ @ 0x18001EC80
 * Callers:
 *     ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x180066600 (-AddRef@CBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x180066620 (-AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x180066640 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x180066660 (-AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x180066680 (-AddRef@CBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x180066880 (-AddRef@CCompressedSourceBitmap@@WPA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WPI@EAAKXZ @ 0x1800668A0 (-AddRef@CCompressedSourceBitmap@@WPI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x180066A20 (-AddRef@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x180066A40 (-AddRef@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CCompoundBitmapLock::AddRef(CCompoundBitmapLock *this)
{
  return CMILCOMBase::InternalAddRef(this);
}
