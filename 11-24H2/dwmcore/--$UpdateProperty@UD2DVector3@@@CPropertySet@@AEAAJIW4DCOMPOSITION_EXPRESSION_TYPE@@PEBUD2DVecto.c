/*
 * XREFs of ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x180185260
 * Callers:
 *     ??$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector3@@@Z @ 0x180183258 (--$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801841F0 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$GetPropertyValue@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEAUD2DMatrix@@I@Z @ 0x180182A2C (--$GetPropertyValue@UD2DMatrix@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloc.c)
 *     ?PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z @ 0x1801844F4 (-PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DVector3>(CPropertySet *this, unsigned int a2, int a3, _DWORD *a4)
{
  char *v7; // rcx
  __int64 Property; // rax
  int v9; // eax
  unsigned int v10; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 >= *((_DWORD *)this + 28) )
    goto LABEL_7;
  v7 = (char *)this + 88;
  if ( a2 >= *((_DWORD *)v7 + 6) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  if ( *(_DWORD *)(*(_QWORD *)v7 + 8LL * a2) == a3 )
  {
    Property = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                 (__int64)v7,
                 a2);
    *(_QWORD *)Property = *(_QWORD *)a4;
    *(_DWORD *)(Property + 8) = a4[2];
    v9 = CPropertySet::PropertyUpdated(this, a2, 2, a4);
    v10 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x19Fu, 0LL);
    else
      return 0;
  }
  else
  {
LABEL_7:
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x198u, 0LL);
  }
  return v10;
}
