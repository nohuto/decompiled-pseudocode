/*
 * XREFs of ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x18000FDF8
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18000FC60 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x180011570 (-IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180012E04 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180068AA0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z @ 0x1801B4078 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall MPCSixDofProcessor::ShouldRequestPrimary(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  struct MPCHolographicInputManager *Instance; // rdi
  char v5; // bl

  Instance = MPCHolographicInputManager::GetInstance();
  v5 = 0;
  if ( MPCInputProviderBase::IsPrimary((MPCSixDofProcessor *)((char *)this + 24)) )
    return 0;
  if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 0)
    || (*(unsigned int (__fastcall **)(_QWORD))(***((_QWORD ***)Instance + 450) + 48LL))(**((_QWORD **)Instance + 450)) == 0x2000
    || *((_DWORD *)a2 + 17) == 1
    && MPCHolographicInputManager::IsProviderPrimary(Instance, *((const struct IMPCInputProviderBase **)Instance + 418)) )
  {
    return 1;
  }
  return v5;
}
