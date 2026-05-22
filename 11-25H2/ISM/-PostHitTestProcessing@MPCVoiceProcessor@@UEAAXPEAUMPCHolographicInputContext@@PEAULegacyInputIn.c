/*
 * XREFs of ?PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801B2510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000E67C (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068A34 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180068A6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B403C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800C12DC (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C7CBC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCVoiceProcessor::PostHitTestProcessing(
        __int64 this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3,
        const char *a4)
{
  struct MPCConstantManager *Instance; // rax
  __int64 v7; // rcx
  const char *v8; // r9
  struct MPCGestureHandlerManager *v9; // rax
  unsigned __int64 v10; // rdx
  MPCGestureHandlerManager *v11; // rbx
  __int64 *v12; // rax
  const char *v13; // r9
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(this + 3548) )
  {
    if ( *((_BYTE *)a3 + 240) )
    {
      Instance = MPCConstantManager::GetInstance(this, (__int64)a2, (__int64)a3, a4);
      *((_QWORD *)&v14 + 1) = 17LL;
      *(_QWORD *)&v14 = L"AllowDownleveling";
      if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                              (__int64)Instance,
                              this & -(__int64)(this != 24),
                              &v14) )
      {
        if ( *((_DWORD *)a3 + 16) != 7 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x67,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
            v8);
        MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v7, (__int64)a3, 3);
        v9 = MPCGestureHandlerManager::GetInstance();
        v10 = this & -(__int64)(this != 24);
        v11 = v9;
        v12 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                &v16,
                v10);
        MPCGestureHandlerManager::DownLevelTo2D(v11, a3, v12, v13);
      }
    }
  }
}
