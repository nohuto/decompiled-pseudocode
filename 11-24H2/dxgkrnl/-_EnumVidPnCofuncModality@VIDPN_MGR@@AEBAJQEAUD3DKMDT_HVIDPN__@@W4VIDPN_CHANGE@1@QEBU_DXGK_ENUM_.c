/*
 * XREFs of ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x14031854C
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x140317D5C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14003DD80 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?_VidPnChangeToEnumPivot@VIDPN_MGR@@CA?AW4_D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE@@W4VIDPN_CHANGE@1@@Z @ 0x140046484 (-_VidPnChangeToEnumPivot@VIDPN_MGR@@CA-AW4_D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE@@W4VIDPN_CHANGE.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1403186FC (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x140318A20 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x140318AE0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

__int64 __fastcall VIDPN_MGR::_EnumVidPnCofuncModality(ADAPTER_DISPLAY **a1, __int64 a2, int a3, DXGK_ENUM_PIVOT *a4)
{
  __int64 v8; // rbx
  __int64 v9; // r8
  DXGADAPTER *ContainingAdapter; // rax
  int v11; // eax
  unsigned int v12; // ebx
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v14; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v15[24]; // [rsp+58h] [rbp-30h] BYREF

  v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
  if ( ((unsigned __int16)((2 << *(_BYTE *)(v8 + 172)) - 1) & *(_WORD *)(v8 + 174)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2349;
  }
  LOBYTE(v9) = 3;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v15, (v8 + 152) & -(__int64)(v8 != -96), v9);
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(ContainingAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2366;
  }
  *(_QWORD *)&v14.EnumPivot.VidPnTargetId = 0LL;
  v14.hConstrainingVidPn = (D3DKMDT_HVIDPN)a2;
  v14.EnumPivotType = VIDPN_MGR::_VidPnChangeToEnumPivot(a3);
  if ( a4 )
  {
    v14.EnumPivot = *a4;
  }
  else
  {
    v14.EnumPivot.VidPnSourceId = -1;
    v14.EnumPivot.VidPnTargetId = -1;
  }
  if ( !a1[1] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v11 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(a1[1], &v14);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry4(2LL, a2, v14.EnumPivot.VidPnSourceId, v14.EnumPivot.VidPnTargetId, v11);
    WdLogGlobalForLineNumber = 2396;
  }
  else
  {
    v12 = 0;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v15);
  return v12;
}
