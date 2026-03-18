/*
 * XREFs of ??1CComplexShape@@UEAA@XZ @ 0x180259230
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180051E30 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ??_ECComplexShape@@UEAAPEAXI@Z @ 0x180259260 (--_ECComplexShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CComplexShape::~CComplexShape(CComplexShape *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease((CPathData **)this + 1);
}
