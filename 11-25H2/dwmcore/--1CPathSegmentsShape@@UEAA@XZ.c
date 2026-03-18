/*
 * XREFs of ??1CPathSegmentsShape@@UEAA@XZ @ 0x18020514C
 * Callers:
 *     ??_ECPathSegmentsShape@@UEAAPEAXI@Z @ 0x180205110 (--_ECPathSegmentsShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPathSegmentsShape::~CPathSegmentsShape(CPathData **this)
{
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(this + 2);
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(this + 1);
}
