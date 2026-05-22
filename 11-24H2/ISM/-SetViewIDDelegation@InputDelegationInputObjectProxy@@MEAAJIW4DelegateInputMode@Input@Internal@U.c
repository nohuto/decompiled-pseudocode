/*
 * XREFs of ?SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180134210
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D4C8 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AE0DC (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     ?OnInputDelegated@BamoInputDelegationInputObjectProxy@@UEAAJII_N@Z @ 0x180133D50 (-OnInputDelegated@BamoInputDelegationInputObjectProxy@@UEAAJII_N@Z.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::SetViewIDDelegation(
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
      (void *)0x94,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\inputdelegation\\server\\"
           "inputdelegationinputobjectproxy.cpp",
      a4);
  if ( (a3 & 0xE) != 0 && (a3 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 84) = a2;
    if ( IsEdition(8778LL) )
      *(_BYTE *)(a1 + 88) = 1;
LABEL_8:
    if ( !v5 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( !a2 )
  {
    v5 = *(_DWORD *)(a1 + 84);
    goto LABEL_8;
  }
LABEL_9:
  ForegroundManager = ISMStatics::GetForegroundManager();
  ForegroundManager::SetInputDelegation(ForegroundManager, *(struct InputSite **)(a1 + 96), 0, (const char *)v5, a3);
LABEL_10:
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( !IsEdition(8778LL) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xB2,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\inputdelegation\\serve"
             "r\\inputdelegationinputobjectproxy.cpp",
        v8);
    *(_BYTE *)(a1 + 88) = 0;
    BamoInputDelegationInputObjectProxy::OnInputDelegated((BamoInputDelegationInputObjectProxy *)(a1 + 8), 0, v5, 0);
  }
  return 0LL;
}
