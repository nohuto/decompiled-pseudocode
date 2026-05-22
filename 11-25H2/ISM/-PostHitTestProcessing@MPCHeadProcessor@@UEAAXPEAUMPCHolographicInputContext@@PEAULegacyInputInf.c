/*
 * XREFs of ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800685F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Display3DCursor@MPCHeadProcessor@@UEAA_NXZ @ 0x180012650 (-Display3DCursor@MPCHeadProcessor@@UEAA_NXZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068A34 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180068A6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180068AA0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180069474 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B403C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C7CBC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCHeadProcessor::PostHitTestProcessing(
        MPCHeadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  __int64 v5; // rcx
  bool v6; // al
  MPCGestureHandlerManager *Instance; // rbx
  struct MPCGestureHandlerManager *v8; // rbx
  __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rax
  char v12; // [rsp+40h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary(this) && *((_BYTE *)a3 + 240) )
  {
    MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v5, a3, 4LL);
    v6 = *((_BYTE *)a3 + 900) || !MPCHeadProcessor::Display3DCursor(this);
    *((_BYTE *)a3 + 900) = v6;
    Instance = MPCGestureHandlerManager::GetInstance();
    wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
      &v12,
      (unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24));
    MPCGestureHandlerManager::DownLevelTo2D(Instance, a3);
    v8 = MPCGestureHandlerManager::GetInstance();
    v9 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
           &v12,
           (unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24));
    MPCGestureHandlerManager::OnGazeUpdate(v8, v9);
  }
  v10 = *((_BYTE *)a3 + 312) != 0;
  if ( !*((_BYTE *)this + 3641) || *((_BYTE *)this + 3640) != v10 )
  {
    v11 = *((_QWORD *)this + 3);
    *((_BYTE *)this + 3640) = v10;
    *((_BYTE *)this + 3641) = 1;
    *(_BYTE *)(v11 + 1488) = v10;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 48LL))(
      *((_QWORD *)this + 2),
      *((_QWORD *)this + 3));
  }
}
