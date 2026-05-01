/*
 * XREFs of ?_ProcessOverride@CVisibilityOverride@@AEAAXXZ @ 0x180195568
 * Callers:
 *     ?OnIdleStateChanged@CVisibilityOverride@@UEAAJH@Z @ 0x1801954A0 (-OnIdleStateChanged@CVisibilityOverride@@UEAAJH@Z.c)
 *     ?s_DXModeWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180195510 (-s_DXModeWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?s_HoloShellWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180235950 (-s_HoloShellWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisibilityOverride::_ProcessOverride(CVisibilityOverride *this)
{
  char v1; // di
  __int64 v3; // rax
  void (*v4)(void); // rax

  v1 = 0;
  if ( !*((_BYTE *)this + 88) || *((_BYTE *)this + 89) )
    v1 = (unsigned int)D3DKMTCheckOcclusion(&CVisibilityOverride::s_checkOcclusion) == -1071775738;
  if ( v1 != *((_BYTE *)this + 52) )
  {
    v3 = **((_QWORD **)this + 10);
    if ( v1 )
      v4 = *(void (**)(void))(v3 + 24);
    else
      v4 = *(void (**)(void))(v3 + 32);
    v4();
    *((_BYTE *)this + 52) = v1;
  }
}
