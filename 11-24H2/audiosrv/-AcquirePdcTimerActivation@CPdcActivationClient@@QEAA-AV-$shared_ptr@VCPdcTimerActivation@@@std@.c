/*
 * XREFs of ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18004FF70
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180010DC4 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800108DC (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YAXAEAVCPdcTimerActivation@@$$QEAPEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x180016A48 (--$_Construct_in_place@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005009C (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@AEAAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@QEAU234@$$QEAU234@@Z @ 0x180103160 (--$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@-$vector.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CPdcActivationClient::AcquirePdcTimerActivation(_QWORD *a1, _QWORD *a2, struct CVADServer *a3)
{
  _QWORD *v4; // rdi
  struct _Mtx_internal_imp_t *v7; // rbx
  std::_Mutex_base *v8; // rcx
  struct CVADServer **v9; // rdx
  char *v10; // rax
  std::_Ref_count_base *v11; // rbx
  int v12; // [rsp+20h] [rbp-48h]
  char *v13; // [rsp+28h] [rbp-40h] BYREF
  std::_Ref_count_base *v14; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct CPdcActivationClient *v16; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+78h] [rbp+10h]
  struct CVADServer *v18; // [rsp+80h] [rbp+18h] BYREF
  char *v19; // [rsp+88h] [rbp+20h]

  v18 = a3;
  v17 = a2;
  v4 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( *a1 )
  {
    v7 = (struct _Mtx_internal_imp_t *)(a1 + 4);
    v16 = (struct CPdcActivationClient *)(a1 + 4);
    v8 = (std::_Mutex_base *)(a1 + 4);
    try
    {
      std::_Mutex_base::lock(v8);
      v9 = (struct CVADServer **)a1[2];
      if ( v9 == (struct CVADServer **)a1[3] )
      {
        std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Emplace_reallocate<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
          a1 + 1,
          v9,
          &v18);
      }
      else
      {
        *v9 = a3;
        a1[2] += 8LL;
      }
      _Mtx_unlock(v7);
      v16 = (struct CPdcActivationClient *)a1;
      v10 = (char *)operator new(0x28uLL);
      v11 = (std::_Ref_count_base *)v10;
      v19 = v10;
      if ( v10 )
      {
        *(_OWORD *)v10 = 0LL;
        *((_DWORD *)v10 + 2) = 1;
        *((_DWORD *)v10 + 3) = 1;
        *(_QWORD *)v10 = &std::_Ref_count_obj2<CPdcTimerActivation>::`vftable';
        std::_Construct_in_place<CPdcTimerActivation,CPdcActivationClient *,CVADServer * &>(
          (CPdcTimerActivation *)(v10 + 16),
          &v16,
          &v18);
      }
      else
      {
        v11 = 0LL;
      }
      v13 = (char *)v11 + 16;
      v14 = v11;
      std::shared_ptr<std::function<void (void)>>::operator=(v4, &v13);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x38,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\pdcactivationclient.cpp",
        (const char *)0x8007000ELL,
        v12);
      return v17;
    }
  }
  return v4;
}
