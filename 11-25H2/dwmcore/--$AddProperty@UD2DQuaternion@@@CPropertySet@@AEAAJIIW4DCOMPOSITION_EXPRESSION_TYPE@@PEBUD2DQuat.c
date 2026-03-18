/*
 * XREFs of ??$AddProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801A1FE0
 * Callers:
 *     ??$AddOrUpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DQuaternion@@@Z @ 0x1801A1F20 (--$AddOrUpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTY.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@UD2DQuaternion@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@PEAI@Z @ 0x1801A20B4 (--$AddProperty@UD2DQuaternion@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloca.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAII@Z @ 0x1801A26F0 (-GetLocalOffset@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAII@Z.c)
 *     ?PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z @ 0x1801A3414 (-PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CPropertySet::AddProperty<D2DQuaternion>(
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
  v8 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DQuaternion>(
         (char *)this + 88,
         a4,
         a5,
         &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 367;
    goto LABEL_8;
  }
  LocalOffset = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetLocalOffset((char *)this + 88, a2);
  if ( v13 != a2 || LocalOffset != a3 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x176u, 0LL);
    return v9;
  }
  v8 = CPropertySet::PropertyUpdated(this, a2, 1u, a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 378;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v12, 0LL);
    return v9;
  }
  return 0;
}
