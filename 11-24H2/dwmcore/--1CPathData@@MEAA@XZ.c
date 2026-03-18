/*
 * XREFs of ??1CPathData@@MEAA@XZ @ 0x1801ACFFC
 * Callers:
 *     ??_GCPathData@@MEAAPEAXI@Z @ 0x1801ACFC0 (--_GCPathData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800956F8 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPathData::~CPathData(CPathData *this, __int64 a2, __int64 a3)
{
  CGlobalDrawingContext *v4; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CPathData::`vftable';
  v4 = (CGlobalDrawingContext *)*((_QWORD *)this + 7);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v4, a2, a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  std::vector<unsigned char>::_Tidy((__int64)this + 16);
}
