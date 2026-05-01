/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1f3b5a72886870dd437060c37f92152a__long__GUID_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__&&_::_Do_call @ 0x18000F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000F554 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_1f3b5a72886870dd437060c37f92152a__long__GUID_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete_____::_Do_call(
        __int64 a1,
        _OWORD *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v6[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  *(_OWORD *)v6 = *a2;
  v3 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterGameConfig(v2, v6);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
