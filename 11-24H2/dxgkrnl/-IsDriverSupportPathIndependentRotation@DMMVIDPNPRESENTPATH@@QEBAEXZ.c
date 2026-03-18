/*
 * XREFs of ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14039C7B4
 * Callers:
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14000CF68 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x140046300 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rdi
  char v2; // bl
  __int64 Container; // rax
  struct DXGADAPTER *ContainingAdapter; // rdi
  __int64 v5; // rcx

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( !*(_QWORD *)(v1 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v1 + 40) + 64LL);
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(Container + 48));
  if ( !ContainingAdapter )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 273;
  }
  v5 = *((_QWORD *)ContainingAdapter + 390);
  if ( *(_BYTE *)(v5 + 289) && *(_BYTE *)(v5 + 290)
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)ContainingAdapter + 27) + 64LL) + 40LL) + 28LL) >= 0x4003u )
  {
    return 1;
  }
  return v2;
}
