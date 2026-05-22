/*
 * XREFs of ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x180068750
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180012E04 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180068984 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068A34 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180068A6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180068AA0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180068AD0 (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?HasMenuButtonReleased@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800692F4 (-HasMenuButtonReleased@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B403C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B4350 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z @ 0x1800B9BA8 (-OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800BC884 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x1801B42F0 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801B52E4 (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801B6064 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 */

void __fastcall MPCSixDofProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  bool HasMenuButtonReleased; // bl
  struct MPCHolographicInputManager *Instance; // rax
  int v7; // eax
  struct MPCHolographicInputManager *v8; // rax
  int v9; // eax
  struct MPCGestureHandlerManager *v10; // rbx
  __int64 v11; // rax
  char IsInjecting; // al
  struct LegacyInputInfo *v13; // rdx
  MPCSixDofProcessor *v14; // rcx
  struct MPCGestureHandlerManager *v15; // rax
  unsigned __int64 v16; // rdx
  MPCGestureHandlerManager *v17; // rbx
  struct MPCGestureHandlerManager *v18; // rbx
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-28h]
  int v21; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v23; // [rsp+50h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
  {
    MPCSixDofProcessor::UpdatePoint((MPCSixDofProcessor *)(this - 24), a3);
    HasMenuButtonReleased = MPCSixDofProcessor::HasMenuButtonReleased((MPCSixDofProcessor *)(this - 24), a3);
    if ( HasMenuButtonReleased )
      MPCManager::OnMenuPressed(MPCManager::s_instance, 5LL, *(unsigned int *)(this + 2804));
    if ( *((_BYTE *)a3 + 240) )
    {
      memcpy_0((void *)(this + 4760), a3, 0xBC0uLL);
      if ( HasMenuButtonReleased )
      {
        Instance = MPCHolographicInputManager::GetInstance();
        v20 = *((_DWORD *)a3 + 62);
        v7 = MPCHolographicInputManager::InjectRightClick(Instance, 1LL, *((unsigned int *)a3 + 68));
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3C7,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
            (const char *)(unsigned int)v7,
            v20);
        v8 = MPCHolographicInputManager::GetInstance();
        v21 = *((_DWORD *)a3 + 62);
        v9 = MPCHolographicInputManager::InjectRightClick(v8, 0LL, *((unsigned int *)a3 + 68));
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3CF,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
            (const char *)(unsigned int)v9,
            v21);
      }
      if ( *(_BYTE *)(this + 3653) )
      {
        MPCSixDofProcessor::UpdateTouchpadDownleveling((MPCSixDofProcessor *)(this - 24), a3);
        return;
      }
      v10 = MPCGestureHandlerManager::GetInstance();
      v11 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v23,
              this & -(__int64)(this != 24));
      IsInjecting = MPCGestureHandlerManager::IsInjecting(v10, v11);
      v13 = a3;
      v14 = (MPCSixDofProcessor *)(this - 24);
      if ( !IsInjecting )
      {
        MPCSixDofProcessor::UpdateTouchpadDownleveling(v14, a3);
        if ( *(_BYTE *)(this + 3653) )
          return;
        v13 = a3;
        v14 = (MPCSixDofProcessor *)(this - 24);
      }
      MPCSixDofProcessor::PopulateDownLevelInfo(v14, v13);
      v15 = MPCGestureHandlerManager::GetInstance();
      v16 = this & -(__int64)(this != 24);
      goto LABEL_19;
    }
    if ( *(_QWORD *)(this + 3600) && *(_BYTE *)(this + 3624) )
    {
      a3 = (struct LegacyInputInfo *)(this + 4760);
      MPCSixDofProcessor::PopulateDownLevelInfo(
        (MPCSixDofProcessor *)(this - 24),
        (struct LegacyInputInfo *)(this + 4760));
      v15 = MPCGestureHandlerManager::GetInstance();
      v16 = this & -(__int64)(this != 24);
LABEL_19:
      v17 = v15;
      wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v23, v16);
      MPCGestureHandlerManager::DownLevelTo2D(v17, a3);
      return;
    }
    v18 = MPCGestureHandlerManager::GetInstance();
    v19 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v23,
            this & -(__int64)(this != 24));
    if ( (unsigned __int8)MPCGestureHandlerManager::IsHovering(v18, v19) )
      MPCSixDofProcessor::EndGesture((MPCSixDofProcessor *)(this - 24));
  }
}
