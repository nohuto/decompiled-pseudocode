/*
 * XREFs of ?SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180131EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D738 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AFD6C (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     ?OnInputDelegated@BamoInputDelegationInputObjectProxy@@UEAAJII_N@Z @ 0x1801319F0 (-OnInputDelegated@BamoInputDelegationInputObjectProxy@@UEAAJII_N@Z.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::SetProcessIDDelegation(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const char *a4)
{
  unsigned int v5; // edi
  ForegroundManager *ForegroundManager; // rax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = a2;
  if ( !*(_QWORD *)(a1 + 96) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\inputdelegation\\server\\"
           "inputdelegationinputobjectproxy.cpp",
      a4);
  if ( (a3 & 0xE) != 0 && (a3 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 80) = a2;
    if ( IsEdition(8778LL) )
      *(_BYTE *)(a1 + 88) = 1;
LABEL_8:
    if ( !v5 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( !a2 )
  {
    v5 = *(_DWORD *)(a1 + 80);
    goto LABEL_8;
  }
LABEL_9:
  ForegroundManager = ISMStatics::GetForegroundManager();
  ForegroundManager::SetInputDelegation(ForegroundManager, *(struct InputSite **)(a1 + 96), v5, 0LL, a3);
LABEL_10:
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( !IsEdition(8778LL) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xE6,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\inputdelegation\\serve"
             "r\\inputdelegationinputobjectproxy.cpp",
        v8);
    *(_BYTE *)(a1 + 88) = 0;
    BamoInputDelegationInputObjectProxy::OnInputDelegated((BamoInputDelegationInputObjectProxy *)(a1 + 8), v5, 0, 0);
  }
  return 0LL;
}
