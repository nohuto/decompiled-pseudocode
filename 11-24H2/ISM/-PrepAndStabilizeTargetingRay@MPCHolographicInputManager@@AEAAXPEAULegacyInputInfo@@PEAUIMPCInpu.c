/*
 * XREFs of ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x180012948
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800121C4 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800111D0 (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_@ISMTracing@@QEAAXPEA.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x180012AE0 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x180014240 (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_@ISMTracing@@QEAAXPEAULegac.c)
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18006A014 (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization_@ISMTracing@@QEAAXPEAU.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCHolographicInputManager::PrepAndStabilizeTargetingRay(
        MPCHolographicInputManager *this,
        struct LegacyInputInfo *a2,
        struct IMPCInputProviderBase *a3)
{
  char v6; // al
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int128 v13; // xmm1
  unsigned __int64 v14; // rdx
  const char *v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int8 v17; // cl
  unsigned __int64 v18; // rdx
  unsigned __int8 v19; // cl
  ISMTracing *v20; // rcx
  ISMTracing *v21; // rcx
  ISMTracing *v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)a2 + 20) = *((_DWORD *)a2 + 1);
  *((_BYTE *)a2 + 144) = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 152LL))(a3);
  v6 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 352LL))(a3);
  *((_DWORD *)a2 + 68) = 0;
  *((_BYTE *)a2 + 88) = v6;
  *((_BYTE *)a2 + 312) = 0;
  *((_BYTE *)a2 + 240) = 0;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 64LL))(
    a3,
    this,
    a2);
  v7 = *(_QWORD *)this;
  v8 = *((_OWORD *)a2 + 180);
  *((_QWORD *)a2 + 113) = *(_QWORD *)this;
  v9 = *((_QWORD *)this + 1);
  v10 = *((_OWORD *)a2 + 181);
  *((_QWORD *)a2 + 114) = v9;
  *((_OWORD *)a2 + 11) = v8;
  *((_QWORD *)a2 + 20) = v9;
  v11 = *((_OWORD *)a2 + 182);
  v12 = *((_QWORD *)a2 + 115);
  *((_OWORD *)a2 + 12) = v10;
  *((_QWORD *)a2 + 19) = v7;
  v13 = *((_OWORD *)a2 + 183);
  *((_QWORD *)a2 + 21) = v12;
  *((_OWORD *)a2 + 13) = v11;
  *((_OWORD *)a2 + 14) = v13;
  if ( ISMTracing::IsEnabled(v7, v14) )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization_(v22, a2);
  }
  if ( !*((_BYTE *)a2 + 48) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x42C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v15);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 144LL))(a3, a2);
  if ( ISMTracing::IsEnabled(v17, v16) )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_(v21, a2);
  }
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 344LL))(a3, a2);
  MPCHolographicInputManager::TransformRayToHeadFromWorld(this, (struct LegacyInputInfo *)((char *)a2 + 120));
  if ( ISMTracing::IsEnabled(v19, v18) )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_(v20, a2);
  }
}
