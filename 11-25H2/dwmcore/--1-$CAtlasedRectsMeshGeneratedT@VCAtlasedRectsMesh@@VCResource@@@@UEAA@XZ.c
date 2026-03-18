/*
 * XREFs of ??1?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@UEAA@XZ @ 0x1802103EC
 * Callers:
 *     ??_ECAtlasedRectsMesh@@UEAAPEAXI@Z @ 0x1802103A0 (--_ECAtlasedRectsMesh@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXXZ @ 0x18021041C (-_Tidy@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::~CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>(
        CResource *this)
{
  std::vector<D2D_RECT_F>::_Tidy((char *)this + 104);
  std::vector<D2D_RECT_F>::_Tidy((char *)this + 80);
  CResource::~CResource(this);
}
