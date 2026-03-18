/*
 * XREFs of ??$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DMatrix@@@Z @ 0x180184C7C
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180183A98 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@UD2DMatrix@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x180184D40 (--$AddProperty@UD2DMatrix@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x18018510C (--$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<D2DMatrix>(__int64 a1, __int64 a2, void *a3)
{
  int updated; // eax
  unsigned int v4; // ebx
  __int64 v6; // rbx
  unsigned int v7; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<D2DMatrix>((CPropertySet *)a1, *(_DWORD *)(a2 + 8), a3);
    v4 = updated;
    if ( updated >= 0 )
      return 0;
    v7 = 327;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v7, 0LL);
    return v4;
  }
  v6 = *(unsigned int *)(a2 + 8);
  if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 112) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  if ( *(_DWORD *)(a2 + 12) != (*(_DWORD *)(*(_QWORD *)(a1 + 88) + 8 * v6 + 4) & 0x1FFFFFFF) )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x14Eu, 0LL);
    return v4;
  }
  updated = CPropertySet::UpdateProperty<D2DMatrix>((CPropertySet *)a1, v6);
  v4 = updated;
  if ( updated < 0 )
  {
    v7 = 337;
    goto LABEL_9;
  }
  return 0;
}
