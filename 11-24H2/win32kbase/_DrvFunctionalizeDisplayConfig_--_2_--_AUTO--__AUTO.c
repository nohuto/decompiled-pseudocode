/*
 * XREFs of _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x14008D8CC
 * Callers:
 *     DrvFunctionalizeDisplayConfig @ 0x140153090 (DrvFunctionalizeDisplayConfig.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1401C6740 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--_scalar_deleting_destructor_.c)
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x14008D914 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14008D940 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

void __fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(PVOID *this)
{
  PVOID v2; // rcx

  *this = &off_140245E28;
  FreePathsModality(this[6]);
  v2 = this[7];
  if ( v2 )
    ObfDereferenceObject(v2);
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)this);
}
