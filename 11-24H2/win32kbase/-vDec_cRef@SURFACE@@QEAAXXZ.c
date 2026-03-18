/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400351C0
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x14019B948 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 * Callees:
 *     GreMakeBitmapNonStock @ 0x140015630 (GreMakeBitmapNonStock.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int64 v2; // rdx
  __int64 v4; // rcx

  HmgDecrementShareReferenceCountEx(this, 0LL);
  if ( (*((_DWORD *)this + 42))-- == 1 )
  {
    if ( (*(_DWORD *)this & 0x800000) != 0 )
    {
      if ( _bittest16((const signed __int16 *)this + 51, 0xAu) )
      {
        v4 = *(_QWORD *)this;
        *((_WORD *)this + 51) &= ~0x400u;
        GreMakeBitmapNonStock(v4, v2);
      }
    }
    *((_QWORD *)this + 20) = 0LL;
  }
}
