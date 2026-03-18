/*
 * XREFs of ?pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1400D3F30
 * Callers:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x140015998 (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x1400D2508 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401EFD2C (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 * Callees:
 *     <none>
 */

struct SURFACE *__fastcall BLTRECORD::PROXYDCOBJ::pSurfaceEff(BLTRECORD::PROXYDCOBJ *this)
{
  struct SURFACE *result; // rax
  struct Gre::Base::SESSION_GLOBALS *v3; // rcx

  result = (struct SURFACE *)*((_QWORD *)this + 14);
  if ( !result )
  {
    v3 = Gre::Base::Globals(this);
    result = *(struct SURFACE **)(*(_QWORD *)this + 496LL);
    if ( result )
    {
      if ( *((_QWORD *)this + 3) )
        return (struct SURFACE *)*((_QWORD *)this + 3);
    }
    else
    {
      return (struct SURFACE *)*((_QWORD *)v3 + 533);
    }
  }
  return result;
}
