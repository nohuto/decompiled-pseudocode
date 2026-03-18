/*
 * XREFs of ??$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector2@@@Z @ 0x1801A1E88
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1801A29B8 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@UD2DVector2@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x1801A1D04 (--$AddProperty@UD2DVector2@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAII@Z @ 0x1801A26F0 (-GetLocalOffset@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAII@Z.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x1801A43BC (--$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<D2DVector2>(CPropertySet *this, __int64 a2, void *a3)
{
  int updated; // eax
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<D2DVector2>(
                this,
                *(_DWORD *)(a2 + 8),
                *(_DWORD *)(a2 + 12),
                *(_DWORD *)(a2 + 16),
                a3);
    v6 = updated;
    if ( updated >= 0 )
      return 0;
    v8 = 327;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v8, 0LL);
    return v6;
  }
  if ( *(_DWORD *)(a2 + 12) != (unsigned int)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetLocalOffset(
                                               (char *)this + 88,
                                               *(unsigned int *)(a2 + 8)) )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x14Eu, 0LL);
    return v6;
  }
  updated = CPropertySet::UpdateProperty<D2DVector2>(this, *(_DWORD *)(a2 + 8));
  v6 = updated;
  if ( updated < 0 )
  {
    v8 = 337;
    goto LABEL_10;
  }
  return 0;
}
