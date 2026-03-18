/*
 * XREFs of ??1CPathGeometry@@MEAA@XZ @ 0x18018079C
 * Callers:
 *     ??_GCPathGeometry@@MEAAPEAXI@Z @ 0x180180750 (--_GCPathGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPathGeometry::~CPathGeometry(CPathData **this)
{
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(this + 17);
  CGeometry::~CGeometry(this);
}
