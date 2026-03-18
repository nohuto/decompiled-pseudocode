/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C003F8CC
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0150CA8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 *     GreMakeBitmapNonStock @ 0x1C0060A30 (GreMakeBitmapNonStock.c)
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int64 v3; // rcx

  HmgDecrementShareReferenceCountEx(this, 0LL);
  if ( (*((_DWORD *)this + 42))-- == 1 )
  {
    if ( (*(_DWORD *)this & 0x800000) != 0 )
    {
      if ( _bittest16((const signed __int16 *)this + 51, 0xAu) )
      {
        v3 = *(_QWORD *)this;
        *((_WORD *)this + 51) &= ~0x400u;
        GreMakeBitmapNonStock(v3);
      }
    }
    *((_QWORD *)this + 20) = 0LL;
  }
}
