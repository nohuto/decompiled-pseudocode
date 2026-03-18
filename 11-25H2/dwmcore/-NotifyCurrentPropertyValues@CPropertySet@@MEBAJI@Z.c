/*
 * XREFs of ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x1802200C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801A4FE0 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?GetDataType@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1801D0280 (-GetDataType@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA-AW4DCOM.c)
 */

__int64 __fastcall CPropertySet::NotifyCurrentPropertyValues(CPropertySet *this, unsigned int a2)
{
  unsigned int v4; // edi
  int DataType; // eax
  int v6; // eax

  v4 = 0;
  while ( a2 )
  {
    if ( (a2 & 1) != 0 && v4 < *((_DWORD *)this + 28) )
    {
      DataType = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetDataType((__int64)this + 88, v4);
      v6 = CPropertySet::NotifyPropertyValue((__int64)this, v4, DataType);
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x20Bu, 0LL);
        return 0LL;
      }
    }
    a2 >>= 1;
    ++v4;
  }
  return 0LL;
}
