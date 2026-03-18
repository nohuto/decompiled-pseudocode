/*
 * XREFs of ??1AUTO_TGO@@MEAA@XZ @ 0x1C00158A4
 * Callers:
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00157A0 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C015FC04 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     _DrvChangeDisplaySettings_::_2_::AUTO_KM::_scalar_deleting_destructor_ @ 0x1C015FCB0 (_DrvChangeDisplaySettings_--_2_--AUTO_KM--_scalar_deleting_destructor_.c)
 *     ??_GAUTO_TGO@@MEAAPEAXI@Z @ 0x1C015FCF0 (--_GAUTO_TGO@@MEAAPEAXI@Z.c)
 *     DrvChangeDisplaySettings @ 0x1C01656CC (DrvChangeDisplaySettings.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 */

void __fastcall AUTO_TGO::~AUTO_TGO(AUTO_TGO *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_QWORD *)this = &AUTO_TGO::`vftable';
  if ( !v1 )
    PopThreadGuardedObject((char *)this + 16);
}
