/*
 * XREFs of ??1CPathData@@MEAA@XZ @ 0x1801A8474
 * Callers:
 *     ??_GCPathData@@MEAAPEAXI@Z @ 0x180060E00 (--_GCPathData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x18013A67C (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPathData::~CPathData(CPathData *this)
{
  CGlobalDrawingContext *v2; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CPathData::`vftable';
  v2 = (CGlobalDrawingContext *)*((_QWORD *)this + 7);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  std::vector<unsigned char>::_Tidy((__int64)this + 16);
}
