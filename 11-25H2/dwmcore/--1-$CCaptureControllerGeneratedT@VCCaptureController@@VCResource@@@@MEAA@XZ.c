/*
 * XREFs of ??1?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@MEAA@XZ @ 0x180233038
 * Callers:
 *     ??1CCaptureController@@EEAA@XZ @ 0x1801F908C (--1CCaptureController@@EEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::~CCaptureControllerGeneratedT<CCaptureController,CResource>(
        struct CResource **this)
{
  struct CResource *v2; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
  this[13] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
  this[14] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
  this[15] = 0LL;
  v2 = this[16];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (this[18] - v2) & 0xFFFFFFFFFFFFFFE0uLL);
    this[16] = 0LL;
    this[17] = 0LL;
    this[18] = 0LL;
  }
  CResource::~CResource((CResource *)this);
}
