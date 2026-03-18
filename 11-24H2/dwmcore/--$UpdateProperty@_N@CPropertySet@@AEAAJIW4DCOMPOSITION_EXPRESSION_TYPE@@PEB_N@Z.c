/*
 * XREFs of ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x18024C768
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801841F0 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x180185570 (--$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z @ 0x1801844F4 (-PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z.c)
 *     ?GetDataType@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1801A8720 (-GetDataType@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA-AW4DCOM.c)
 *     ??$GetPropertyValue@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEA_NI@Z @ 0x1801A8750 (--$GetPropertyValue@_N@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QE.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<bool>(CPropertySet *this, unsigned int a2, int a3, _BYTE *a4)
{
  int v7; // eax
  unsigned int v8; // ebx

  if ( a2 < *((_DWORD *)this + 28)
    && (unsigned int)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetDataType(
                       (__int64)this + 88,
                       a2) == a3 )
  {
    *(_BYTE *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<bool>(
                (__int64)this + 88,
                a2) = *a4;
    v7 = CPropertySet::PropertyUpdated(this, a2, 2, a4);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x19Fu, 0LL);
    else
      return 0;
  }
  else
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x198u, 0LL);
  }
  return v8;
}
