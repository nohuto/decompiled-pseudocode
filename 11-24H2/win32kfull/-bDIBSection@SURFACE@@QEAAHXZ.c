/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1401748D8
 * Callers:
 *     GreSetDIBColorTable @ 0x140174640 (GreSetDIBColorTable.c)
 *     GreGetDIBColorTable @ 0x140174780 (GreGetDIBColorTable.c)
 *     GreMakeBitmapStock @ 0x1401D6B00 (GreMakeBitmapStock.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x140310000 (NtGdiGetColorSpaceforBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bDIBSection(SURFACE *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
  {
    if ( *((_QWORD *)this + 24) )
      return 1LL;
  }
  return result;
}
