/*
 * XREFs of ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x180214870
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180181AE0 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?GetDataType@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1801A8720 (-GetDataType@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA-AW4DCOM.c)
 */

__int64 __fastcall CPropertySet::NotifyCurrentPropertyValues(CPropertySet *this, unsigned int a2)
{
  unsigned int v4; // edi
  int DataType; // eax
  __int64 v6; // r9
  int v7; // eax

  v4 = 0;
  while ( a2 )
  {
    if ( (a2 & 1) != 0 && v4 < *((_DWORD *)this + 28) )
    {
      DataType = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetDataType((__int64)this + 88, v4);
      v7 = CPropertySet::NotifyPropertyValue((__int64)this, v4, DataType, v6);
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x20Bu, 0LL);
        return 0LL;
      }
    }
    a2 >>= 1;
    ++v4;
  }
  return 0LL;
}
