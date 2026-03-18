/*
 * XREFs of ??$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x180185630
 * Callers:
 *     ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x180185570 (--$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAII@Z @ 0x1801837D0 (-GetLocalOffset@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAII@Z.c)
 *     ?PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z @ 0x1801844F4 (-PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z.c)
 *     ??$AddProperty@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x1801856E8 (--$AddProperty@_N@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4.c)
 */

__int64 __fastcall CPropertySet::AddProperty<bool>(
        CPropertySet *this,
        unsigned int a2,
        int a3,
        unsigned int a4,
        void *a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  int LocalOffset; // eax
  unsigned int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0;
  v8 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<bool>(
         (char *)this + 88,
         a4,
         a5,
         &v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    LocalOffset = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetLocalOffset(
                    (__int64)this + 88,
                    a2);
    if ( v13 != a2 || LocalOffset != a3 )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x176u, 0LL);
      return v9;
    }
    v8 = CPropertySet::PropertyUpdated(this, a2, 1, a5);
    v9 = v8;
    if ( v8 >= 0 )
      return 0;
    v12 = 378;
  }
  else
  {
    v12 = 367;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v12, 0LL);
  return v9;
}
