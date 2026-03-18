/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400DD1F4
 * Callers:
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1400DD084 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 *     ?bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z @ 0x140268328 (-bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int64 v3; // rcx

  DEC_SHARE_REF_CNT(this);
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
