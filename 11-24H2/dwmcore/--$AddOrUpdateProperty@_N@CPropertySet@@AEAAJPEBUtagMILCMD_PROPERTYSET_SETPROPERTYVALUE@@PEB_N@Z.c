/*
 * XREFs of ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x180185570
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180183A98 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAII@Z @ 0x1801837D0 (-GetLocalOffset@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAII@Z.c)
 *     ??$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x180185630 (--$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x18024C768 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<bool>(CPropertySet *this, __int64 a2, void *a3)
{
  int updated; // eax
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<bool>(this, *(_DWORD *)(a2 + 8), a3);
    v6 = updated;
    if ( updated >= 0 )
      return 0;
    v8 = 327;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v8, 0LL);
    return v6;
  }
  if ( *(_DWORD *)(a2 + 12) != (unsigned int)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetLocalOffset(
                                               (__int64)this + 88,
                                               *(_DWORD *)(a2 + 8)) )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x14Eu, 0LL);
    return v6;
  }
  updated = CPropertySet::UpdateProperty<bool>(this, *(_DWORD *)(a2 + 8));
  v6 = updated;
  if ( updated < 0 )
  {
    v8 = 337;
    goto LABEL_10;
  }
  return 0;
}
