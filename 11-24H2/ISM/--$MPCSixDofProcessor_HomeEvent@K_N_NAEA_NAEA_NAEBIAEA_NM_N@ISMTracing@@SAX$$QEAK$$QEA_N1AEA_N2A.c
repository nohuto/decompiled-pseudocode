/*
 * XREFs of ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2AEBI2$$QEAM1@Z @ 0x1801B9CEC
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1800105F8 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N000K0M0@Z @ 0x1801BC318 (-MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N000K0M0@Z.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,bool &,unsigned int const &,bool &,float,bool>(
        unsigned int *a1,
        bool *a2,
        bool *a3,
        bool *a4,
        bool *a5,
        unsigned int *a6,
        bool *a7,
        float *a8,
        bool *a9)
{
  ISMTracing *v13; // rcx

  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    v13 = (ISMTracing *)*a6;
    LOBYTE(v13) = *a5;
    ISMTracing::MPCSixDofProcessor_HomeEvent_(v13, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9);
  }
}
