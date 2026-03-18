/*
 * XREFs of ??1?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@MEAA@XZ @ 0x1801309FC
 * Callers:
 *     ??_ECAtlasedRectsGroup@@UEAAPEAXI@Z @ 0x1801309B0 (--_ECAtlasedRectsGroup@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$UnRegisterNotifiers@VCAtlasedRectsMesh@@@CResource@@QEAAXPEAV?$vector@PEAVCAtlasedRectsMesh@@V?$allocator@PEAVCAtlasedRectsMesh@@@std@@@std@@@Z @ 0x180130A64 (--$UnRegisterNotifiers@VCAtlasedRectsMesh@@@CResource@@QEAAXPEAV-$vector@PEAVCAtlasedRectsMesh@@.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CAtlasedRectsGroupGeneratedT<CAtlasedRectsGroup,CContent>::~CAtlasedRectsGroupGeneratedT<CAtlasedRectsGroup,CContent>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CResource::UnRegisterNotifiers<CAtlasedRectsMesh>((CResource *)this);
  if ( this[10] )
  {
    std::_Deallocate<16,0>(this[10], (this[12] - this[10]) & 0xFFFFFFFFFFFFFFF8uLL);
    this[10] = 0LL;
    this[11] = 0LL;
    this[12] = 0LL;
  }
  CResource::~CResource((CResource *)this);
}
