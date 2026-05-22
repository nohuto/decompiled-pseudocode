/*
 * XREFs of ?OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801B2450
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000E67C (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068A34 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180068A6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180068AA0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B403C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800C12DC (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C7CBC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCVoiceProcessor::OnGazeUpdate(unsigned __int64 this, struct LegacyInputInfo *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  const char *v7; // r9
  struct MPCConstantManager *Instance; // rax
  __int64 v9; // rcx
  struct MPCGestureHandlerManager *v10; // rax
  unsigned __int64 v11; // rdx
  MPCGestureHandlerManager *v12; // rbx
  __int64 *v13; // rax
  const char *v14; // r9
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary(this) && *((_BYTE *)a2 + 240) )
  {
    Instance = MPCConstantManager::GetInstance(v5, v4, v6, v7);
    *((_QWORD *)&v15 + 1) = 17LL;
    *(_QWORD *)&v15 = L"AllowDownleveling";
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>((__int64)Instance, this & -(__int64)(this != 24), &v15) )
    {
      MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v9, (__int64)a2, 4);
      v10 = MPCGestureHandlerManager::GetInstance();
      v11 = this & -(__int64)(this != 24);
      v12 = v10;
      v13 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v16,
              v11);
      MPCGestureHandlerManager::DownLevelTo2D(v12, a2, v13, v14);
    }
  }
}
