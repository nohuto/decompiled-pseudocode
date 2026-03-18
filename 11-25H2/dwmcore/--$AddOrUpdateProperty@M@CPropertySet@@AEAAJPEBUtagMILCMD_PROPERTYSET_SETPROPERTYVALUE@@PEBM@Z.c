/*
 * XREFs of ??$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z @ 0x1801A2CBC
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1801A29B8 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B2860 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z @ 0x1801A3414 (-PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z.c)
 *     ?RemoveAt@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJI@Z @ 0x1801A4054 (-RemoveAt@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<float>(CPropertySet *this, __int64 a2, _DWORD *a3)
{
  char *v3; // rbx
  unsigned int v6; // ecx
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned int v9; // r8d
  int v10; // edi
  unsigned int v11; // ebx
  __int64 v13; // r10
  int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-30h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v22; // [rsp+78h] [rbp+10h]
  int v23; // [rsp+88h] [rbp+20h]

  v3 = (char *)this + 88;
  if ( !*(_BYTE *)(a2 + 20) )
  {
    v13 = *(unsigned int *)(a2 + 8);
    if ( (unsigned int)v13 >= *((_DWORD *)this + 28) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v14 = *(_DWORD *)(*(_QWORD *)v3 + 8 * v13 + 4);
    if ( *(_DWORD *)(a2 + 12) != (v14 & 0x1FFFFFFF) )
    {
      v11 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x14Eu, 0LL);
      return v11;
    }
    if ( (unsigned int)v13 < *((_DWORD *)this + 28) && *(_DWORD *)(*(_QWORD *)v3 + 8 * v13) == *(_DWORD *)(a2 + 16) )
    {
      *(_DWORD *)((v14 & 0x1FFFFFFF) + *((_QWORD *)this + 15)) = *a3;
      v10 = CPropertySet::PropertyUpdated(this, v13, 2u, a3);
      v11 = v10;
      if ( v10 >= 0 )
        return 0;
      v15 = 415;
    }
    else
    {
      v11 = -2147024809;
      v15 = 408;
      v10 = -2147024809;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v15, 0LL);
    v18 = 337;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v18, 0LL);
    return v11;
  }
  v6 = *((_DWORD *)this + 36);
  v7 = *(unsigned int *)(a2 + 8);
  v8 = *((unsigned int *)v3 + 6);
  v23 = *(_DWORD *)(a2 + 12);
  v22 = v6;
  if ( (v6 & 0xE0000000) != 0 )
  {
    v10 = -2147483637;
LABEL_28:
    v16 = 367;
    goto LABEL_22;
  }
  v9 = v8 + 1;
  LODWORD(v19) = *(_DWORD *)(a2 + 16);
  HIDWORD(v19) = v6 & 0x1FFFFFFF;
  if ( (int)v8 + 1 < (unsigned int)v8 )
  {
    v10 = -2147024362;
    v17 = 181;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v17, 0LL);
    goto LABEL_28;
  }
  if ( v9 > *((_DWORD *)v3 + 5) )
  {
    v20 = &v19;
    v10 = DynArrayImpl<0>::Grow((__int64)v3, 8u, 1, 0, (unsigned __int64 *)&v20);
    if ( v10 >= 0 )
    {
      *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)v3 + 6))++) + *(_QWORD *)v3) = *v20;
      goto LABEL_7;
    }
    v17 = 192;
    goto LABEL_30;
  }
  *(_QWORD *)(*(_QWORD *)v3 + 8 * v8) = v19;
  *((_DWORD *)v3 + 6) = v9;
LABEL_7:
  v10 = DynArrayImpl<0>::Grow((__int64)(v3 + 32), 1u, 4, 1, 0LL);
  if ( v10 < 0 )
  {
    DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::RemoveAt(
      v3,
      (unsigned int)v8);
    goto LABEL_28;
  }
  *((_DWORD *)v3 + 14) += 4;
  *(_DWORD *)(v22 + *((_QWORD *)v3 + 4)) = *a3;
  if ( (unsigned int)v7 >= *((_DWORD *)v3 + 6) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  if ( (_DWORD)v8 != (_DWORD)v7 || (*(_DWORD *)(*(_QWORD *)v3 + 8 * v7 + 4) & 0x1FFFFFFF) != v23 )
  {
    v10 = -2003303421;
    v16 = 374;
    goto LABEL_22;
  }
  v10 = CPropertySet::PropertyUpdated(this, v7, 1u, a3);
  if ( v10 < 0 )
  {
    v16 = 378;
LABEL_22:
    v11 = v10;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v16, 0LL);
    v18 = 327;
    goto LABEL_23;
  }
  return 0;
}
