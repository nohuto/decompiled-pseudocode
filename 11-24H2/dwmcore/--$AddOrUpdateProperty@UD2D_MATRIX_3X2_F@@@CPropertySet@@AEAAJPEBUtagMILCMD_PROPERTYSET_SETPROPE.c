/*
 * XREFs of ??$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801840A8
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180183A98 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z @ 0x1801844F4 (-PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180184F90 (--$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<D2D_MATRIX_3X2_F>(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  unsigned int v9; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_BYTE *)(a2 + 20) )
  {
    v3 = *(unsigned int *)(a2 + 8);
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 112) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v4 = *(_QWORD *)(a1 + 88);
    v5 = *(_DWORD *)(v4 + 8 * v3 + 4);
    if ( *(_DWORD *)(a2 + 12) != (v5 & 0x1FFFFFFF) )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x14Eu, 0LL);
      return v9;
    }
    if ( (unsigned int)v3 < *(_DWORD *)(a1 + 112) && *(_DWORD *)(v4 + 8 * v3) == *(_DWORD *)(a2 + 16) )
    {
      v6 = *(_QWORD *)(a1 + 120);
      v7 = v5 & 0x1FFFFFFF;
      *(_OWORD *)(v7 + v6) = *(_OWORD *)a3;
      *(_QWORD *)(v7 + v6 + 16) = a3[2];
      v8 = CPropertySet::PropertyUpdated((CPropertySet *)a1, v3, 2u, a3);
      v9 = v8;
      if ( v8 >= 0 )
        return 0;
      v12 = 415;
    }
    else
    {
      v9 = -2147024809;
      v12 = 408;
      v8 = -2147024809;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v12, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x151u, 0LL);
    return v9;
  }
  v11 = CPropertySet::AddProperty<D2D_MATRIX_3X2_F>((CPropertySet *)a1, *(_DWORD *)(a2 + 8), a3);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x147u, 0LL);
    return v9;
  }
  return 0;
}
