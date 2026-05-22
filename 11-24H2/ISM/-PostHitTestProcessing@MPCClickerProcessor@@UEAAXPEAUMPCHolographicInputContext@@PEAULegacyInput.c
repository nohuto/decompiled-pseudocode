/*
 * XREFs of ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C4960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068824 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006885C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180068890 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1DFC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5E7C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCClickerProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  char IsPrimary; // al
  int v6; // r8d
  __int64 v7; // rcx
  MPCGestureHandlerManager *Instance; // rbx
  __int64 *v9; // rax
  const char *v10; // r9
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  IsPrimary = MPCInputProviderBase::IsPrimary(this);
  v6 = 0;
  if ( IsPrimary )
  {
    *(_DWORD *)(this + 3644) = *((_DWORD *)a3 + 567);
    if ( *((_BYTE *)a3 + 240) )
    {
      v7 = (unsigned int)(*((_DWORD *)a3 + 17) - 2);
      if ( *((_DWORD *)a3 + 17) == 2 )
      {
        v6 = 1;
      }
      else
      {
        v7 = (unsigned int)(*((_DWORD *)a3 + 17) - 4);
        if ( (unsigned int)v7 <= 1 )
          v6 = 2;
      }
      MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v7, (__int64)a3, v6);
      Instance = MPCGestureHandlerManager::GetInstance();
      v9 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
             &v11,
             this & -(__int64)(this != 24));
      MPCGestureHandlerManager::DownLevelTo2D(Instance, a3, v9, v10);
    }
  }
}
