/*
 * XREFs of ??$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@$$QEA_NAEAI@Z @ 0x1800C6968
 * Callers:
 *     ?OnSuccessfulAttach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z @ 0x1800C7C20 (-OnSuccessfulAttach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z.c)
 *     ?OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z @ 0x1800C7C70 (-OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z.c)
 *     ?OnSuccessfulDetach@MPCSixDofProcessor@@EEAAXPEAUIMPCTarget@@I@Z @ 0x1801B51B0 (-OnSuccessfulDetach@MPCSixDofProcessor@@EEAAXPEAUIMPCTarget@@I@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@_NI@Z @ 0x1800C7AE0 (-MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@_NI@Z.c)
 */

void __fastcall ISMTracing::MPCInputProviderSourceDetectedLost<IMPCTarget * &,LegacyInputInfo *,bool,unsigned int &>(
        struct IMPCTarget **a1,
        struct LegacyInputInfo **a2,
        bool *a3,
        unsigned int *a4)
{
  ISMTracing *v8; // rcx

  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCInputProviderSourceDetectedLost_(v8, *a1, *a2, *a3, *a4);
  }
}
