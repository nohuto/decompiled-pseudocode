/*
 * XREFs of ??$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1801833E0
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180183A98 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x180183640 (--$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCO.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAII@Z @ 0x1801837D0 (-GetLocalOffset@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAII@Z.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x18024E67C (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3D.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<_D3DCOLORVALUE>(CPropertySet *this, __int64 a2, void *a3)
{
  int updated; // eax
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( !*(_BYTE *)(a2 + 20) )
  {
    if ( *(_DWORD *)(a2 + 12) != (unsigned int)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetLocalOffset(
                                                 (char *)this + 88,
                                                 *(unsigned int *)(a2 + 8)) )
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x14Eu, 0LL);
      return v6;
    }
    updated = CPropertySet::UpdateProperty<_D3DCOLORVALUE>(this, *(_DWORD *)(a2 + 8));
    v6 = updated;
    if ( updated >= 0 )
      return 0;
    v8 = 337;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v8, 0LL);
    return v6;
  }
  updated = CPropertySet::AddProperty<_D3DCOLORVALUE>(this, *(_DWORD *)(a2 + 8), a3);
  v6 = updated;
  if ( updated < 0 )
  {
    v8 = 327;
    goto LABEL_5;
  }
  return 0;
}
