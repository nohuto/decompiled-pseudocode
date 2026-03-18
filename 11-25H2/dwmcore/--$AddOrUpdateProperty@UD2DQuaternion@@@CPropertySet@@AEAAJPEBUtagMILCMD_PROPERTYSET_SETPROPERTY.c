/*
 * XREFs of ??$AddOrUpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DQuaternion@@@Z @ 0x1801A1F20
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1801A29B8 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801A1C4C (--$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQu.c)
 *     ??$AddProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801A1FE0 (--$AddProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuat.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAII@Z @ 0x1801A26F0 (-GetLocalOffset@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAII@Z.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<D2DQuaternion>(CPropertySet *a1, __int64 a2, _OWORD *a3)
{
  int updated; // eax
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<D2DQuaternion>(a1, *(_DWORD *)(a2 + 8), a3);
    v7 = updated;
    if ( updated >= 0 )
      return 0;
    v9 = 327;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v9, 0LL);
    return v7;
  }
  if ( *(_DWORD *)(a2 + 12) != (unsigned int)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetLocalOffset(
                                               (char *)a1 + 88,
                                               *(unsigned int *)(a2 + 8)) )
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x14Eu, 0LL);
    return v7;
  }
  updated = CPropertySet::UpdateProperty<D2DQuaternion>(a1, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 16), a3);
  v7 = updated;
  if ( updated < 0 )
  {
    v9 = 337;
    goto LABEL_10;
  }
  return 0;
}
