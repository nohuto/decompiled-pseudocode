/*
 * XREFs of ??$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A3E00
 * Callers:
 *     ??$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A2FC8 (--$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPE.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B2860 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z @ 0x1801A3414 (-PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJPEFBUPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@I@Z @ 0x1801A3D40 (-AddMultipleAndSet@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUs.c)
 *     ?RemoveAt@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJI@Z @ 0x1801A4054 (-RemoveAt@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::AddProperty<D2D_MATRIX_3X2_F>(
        CPropertySet *this,
        unsigned int a2,
        int a3,
        int a4,
        _OWORD *a5)
{
  char *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r14
  unsigned int v9; // ebp
  int v11; // ebx
  _QWORD *v12; // r9
  __int64 v13; // rax
  int v14; // eax
  unsigned int v16; // [rsp+20h] [rbp-38h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v5 = (char *)this + 88;
  v6 = a2;
  v7 = *((unsigned int *)this + 36);
  v9 = *((_DWORD *)this + 28);
  if ( (v7 & 0xE0000000) != 0 )
  {
    v11 = -2147483637;
    goto LABEL_11;
  }
  LODWORD(v18) = a4;
  HIDWORD(v18) = v7 & 0x1FFFFFFF;
  v11 = DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::AddMultipleAndSet(
          (__int64)v5,
          &v18);
  if ( v11 < 0 )
  {
LABEL_11:
    v16 = 367;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v16, 0LL);
    return (unsigned int)v11;
  }
  v11 = DynArrayImpl<0>::Grow((__int64)(v5 + 32), 1u, 24, 1, 0LL);
  if ( v11 < 0 )
  {
    DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::RemoveAt(v5, v9);
    goto LABEL_11;
  }
  *((_DWORD *)v5 + 14) += 24;
  v12 = a5;
  v13 = *((_QWORD *)v5 + 4);
  *(_OWORD *)(v7 + v13) = *a5;
  *(_QWORD *)(v7 + v13 + 16) = v12[2];
  if ( (unsigned int)v6 >= *((_DWORD *)v5 + 6) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  if ( v9 != (_DWORD)v6 || (*(_DWORD *)(*(_QWORD *)v5 + 8 * v6 + 4) & 0x1FFFFFFF) != a3 )
  {
    v11 = -2003303421;
    v16 = 374;
    goto LABEL_12;
  }
  v14 = CPropertySet::PropertyUpdated(this, v6, 1, v12);
  v11 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x17Au, 0LL);
  else
    return 0;
  return (unsigned int)v11;
}
