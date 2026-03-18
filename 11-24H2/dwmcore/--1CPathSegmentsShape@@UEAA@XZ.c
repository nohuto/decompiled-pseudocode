/*
 * XREFs of ??1CPathSegmentsShape@@UEAA@XZ @ 0x1801F96CC
 * Callers:
 *     ??_ECPathSegmentsShape@@UEAAPEAXI@Z @ 0x1801F9690 (--_ECPathSegmentsShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPathSegmentsShape::~CPathSegmentsShape(CPathData **this)
{
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(this + 2);
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(this + 1);
}
