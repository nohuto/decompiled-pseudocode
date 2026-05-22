/*
 * XREFs of ?ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z @ 0x1800BC020
 * Callers:
 *     ?ForcePrimaryInputType@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@W4InputType@@@Z @ 0x1800B8B00 (-ForcePrimaryInputType@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@W4InputType@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MPCHolographicInputManager_ForcedPrimary_@ISMTracing@@QEAAXK@Z @ 0x1800BCD44 (-MPCHolographicInputManager_ForcedPrimary_@ISMTracing@@QEAAXK@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800BD7E0 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCHolographicInputManager::ForcePrimaryInputType(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rdx
  ISMTracing *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(unsigned int (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 3600) + 48LL))(**(_QWORD **)(a1 + 3600)) != a2 )
  {
    v4 = *(_QWORD **)(a1 + 3304);
    v5 = *(_QWORD **)(a1 + 3312);
    while ( v4 != v5 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 48LL))(*v4) == a2
        && !(unsigned __int8)MPCHolographicInputManager::TrySetProviderAsPrimary((MPCHolographicInputManager *)a1) )
      {
        v6 = -2147467259;
        v7 = 1104LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)v6);
        return v6;
      }
      ++v4;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 3600) + 48LL))(**(_QWORD **)(a1 + 3600)) != a2 )
    {
      v6 = -2147024809;
      v7 = 1108LL;
      goto LABEL_8;
    }
    if ( ISMTracing::IsEnabled() )
    {
      ISMTracing::Instance();
      ISMTracing::MPCHolographicInputManager_ForcedPrimary_(v9, a2);
    }
  }
  return 0LL;
}
