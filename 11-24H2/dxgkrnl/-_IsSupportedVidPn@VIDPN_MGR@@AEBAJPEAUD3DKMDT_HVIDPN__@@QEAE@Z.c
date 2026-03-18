/*
 * XREFs of ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x140317EFC
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x140317D5C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14003DD80 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1403167AC (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1403180B0 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_IsSupportedVidPn(ADAPTER_DISPLAY **this, D3DKMDT_HVIDPN a2, unsigned __int8 *const a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  DXGADAPTER *ContainingAdapter; // r14
  bool v9; // zf
  int IsSupportedVidPn; // eax
  unsigned int v11; // ebx
  __int64 result; // rax
  _DXGKARG_ISSUPPORTEDVIDPN v13; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2234;
  }
  *a3 = 0;
  v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a2);
  v7 = v6;
  if ( !*(_BYTE *)(v6 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v6 + 96)) )
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 2255;
    *a3 = 0;
    return 0LL;
  }
  if ( ((unsigned __int16)((2 << *(_BYTE *)(v7 + 172)) - 1) & *(_WORD *)(v7 + 174)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2263;
  }
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(ContainingAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2273;
  }
  v9 = this[1] == 0LL;
  *(_QWORD *)&v13.IsVidPnSupported = 0LL;
  v13.hDesiredVidPn = a2;
  if ( v9 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(this[1], &v13);
  v11 = IsSupportedVidPn;
  if ( IsSupportedVidPn >= 0 )
  {
    *a3 = v13.IsVidPnSupported;
    return 0LL;
  }
  WdLogSingleEntry3(2LL, a2, ContainingAdapter, IsSupportedVidPn);
  result = v11;
  WdLogGlobalForLineNumber = 2290;
  return result;
}
