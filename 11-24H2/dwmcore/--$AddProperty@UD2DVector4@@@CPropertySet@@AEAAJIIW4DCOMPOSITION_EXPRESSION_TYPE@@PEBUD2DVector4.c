/*
 * XREFs of ??$AddProperty@UD2DVector4@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector4@@@Z @ 0x180183804
 * Callers:
 *     ??$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector4@@@Z @ 0x180183318 (--$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@UD2DVector4@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector4@@PEAI@Z @ 0x180183714 (--$AddProperty@UD2DVector4@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ?PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z @ 0x1801844F4 (-PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::AddProperty<D2DVector4>(
        CPropertySet *this,
        unsigned int a2,
        int a3,
        int a4,
        _OWORD *a5)
{
  __int64 v6; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0;
  v6 = a2;
  v8 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector4>(
         (__int64)this + 88,
         a4,
         a5,
         &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 367;
  }
  else
  {
    if ( (unsigned int)v6 >= *((_DWORD *)this + 28) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    if ( v13 != (_DWORD)v6 || (*(_DWORD *)(*((_QWORD *)this + 11) + 8 * v6 + 4) & 0x1FFFFFFF) != a3 )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x176u, 0LL);
      return v9;
    }
    v8 = CPropertySet::PropertyUpdated(this, v6, 1u, a5);
    v9 = v8;
    if ( v8 >= 0 )
      return 0;
    v11 = 378;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v11, 0LL);
  return v9;
}
