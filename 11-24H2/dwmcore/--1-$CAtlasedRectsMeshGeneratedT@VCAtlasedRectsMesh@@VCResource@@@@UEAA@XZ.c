/*
 * XREFs of ??1?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@UEAA@XZ @ 0x180203F2C
 * Callers:
 *     ??_ECAtlasedRectsMesh@@UEAAPEAXI@Z @ 0x180203EE0 (--_ECAtlasedRectsMesh@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXXZ @ 0x180203F5C (-_Tidy@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::~CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>(
        CResource *this)
{
  std::vector<D2D_RECT_F>::_Tidy((char *)this + 104);
  std::vector<D2D_RECT_F>::_Tidy((char *)this + 80);
  CResource::~CResource(this);
}
