/*
 * XREFs of ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180183A98
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector3@@@Z @ 0x180183258 (--$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 *     ??$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector4@@@Z @ 0x180183318 (--$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 *     ??$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1801833E0 (--$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERT.c)
 *     ??$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z @ 0x180183D9C (--$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z.c)
 *     ??$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801840A8 (--$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPE.c)
 *     ??$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DMatrix@@@Z @ 0x180184C7C (--$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALU.c)
 *     ??$AddOrUpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DQuaternion@@@Z @ 0x1801854B0 (--$AddOrUpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTY.c)
 *     ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x180185570 (--$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z.c)
 *     ??$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector2@@@Z @ 0x18018579C (--$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::ProcessSetPropertyValue(
        CPropertySet *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROPERTYSET_SETPROPERTYVALUE *a3,
        _OWORD *a4,
        unsigned int a5)
{
  int updated; // eax
  unsigned int v6; // ebx
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  switch ( *((_DWORD *)a3 + 4) )
  {
    case 0x11:
      if ( a5 != 4 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x59u, 0LL);
        return v6;
      }
      updated = CPropertySet::AddOrUpdateProperty<bool>(this);
      v6 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 90;
      goto LABEL_17;
    case 0x12:
      if ( a5 != 4 )
      {
        v8 = -2003303421;
        v6 = -2003303421;
        v9 = 94;
        goto LABEL_19;
      }
      updated = CPropertySet::AddOrUpdateProperty<float>(this);
      v6 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 95;
LABEL_17:
      v8 = updated;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v9, 0LL);
      return v6;
    case 0x23:
      if ( a5 != 8 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x63u, 0LL);
        return v6;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DVector2>(this, a3, a4);
      v6 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 100;
      goto LABEL_17;
    case 0x34:
      if ( a5 != 12 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x68u, 0LL);
        return v6;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DVector3>(this, (__int64)a3, a4);
      v6 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 105;
      goto LABEL_17;
    case 0x45:
      if ( a5 != 16 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x6Du, 0LL);
        return v6;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DVector4>(this, (__int64)a3, a4);
      v6 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 110;
      goto LABEL_17;
    case 0x46:
      if ( a5 != 16 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x72u, 0LL);
        return v6;
      }
      updated = CPropertySet::AddOrUpdateProperty<_D3DCOLORVALUE>(this, (__int64)a3, a4);
      v6 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 115;
      goto LABEL_17;
    case 0x47:
      if ( a5 != 16 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x77u, 0LL);
        return v6;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DQuaternion>(this, a3, a4);
      v6 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 120;
      goto LABEL_17;
  }
  if ( *((_DWORD *)a3 + 4) != 104 )
  {
    if ( *((_DWORD *)a3 + 4) != 265 )
      ModuleFailFastForHRESULT(-2003303421, retaddr);
    if ( a5 != 64 )
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x81u, 0LL);
      return v6;
    }
    updated = CPropertySet::AddOrUpdateProperty<D2DMatrix>(this, a3, a4);
    v6 = updated;
    if ( updated >= 0 )
      return 0;
    v9 = 130;
    goto LABEL_17;
  }
  if ( a5 != 24 )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x7Cu, 0LL);
    return v6;
  }
  updated = CPropertySet::AddOrUpdateProperty<D2D_MATRIX_3X2_F>(this, a3, a4);
  v6 = updated;
  if ( updated < 0 )
  {
    v9 = 125;
    goto LABEL_17;
  }
  return 0;
}
