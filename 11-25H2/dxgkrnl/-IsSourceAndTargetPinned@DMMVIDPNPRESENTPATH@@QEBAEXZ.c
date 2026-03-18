/*
 * XREFs of ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14001C234
 * Callers:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14001CB60 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1402CEBD8 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1402D1600 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rdi
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  v1 = *((_QWORD *)this + 11);
  v2 = 1;
  v3 = *(_QWORD *)(v1 + 104);
  if ( v3 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 96), 1u);
    v4 = *(_QWORD *)(v1 + 104);
  }
  else
  {
    v4 = 0LL;
  }
  v5 = *((_QWORD *)this + 12);
  v6 = *(_QWORD *)(v5 + 104);
  if ( v6 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v6 + 96), 1u);
    v7 = *(_QWORD *)(v5 + 104);
  }
  else
  {
    v7 = 0LL;
  }
  if ( *(_QWORD *)(v4 + 144) && *(_QWORD *)(v7 + 144) )
  {
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 88));
  }
  else
  {
    if ( v7 )
      ReferenceCounted::Release((ReferenceCounted *)(v7 + 88));
    v2 = 0;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v4 + 88));
  return v2;
}
