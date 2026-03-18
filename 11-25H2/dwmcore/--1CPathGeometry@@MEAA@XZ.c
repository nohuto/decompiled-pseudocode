/*
 * XREFs of ??1CPathGeometry@@MEAA@XZ @ 0x18020E78C
 * Callers:
 *     ??_GCPathGeometry@@MEAAPEAXI@Z @ 0x18020E740 (--_GCPathGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPathGeometry::~CPathGeometry(CPathData **this)
{
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(this + 17);
  CGeometry::~CGeometry(this);
}
