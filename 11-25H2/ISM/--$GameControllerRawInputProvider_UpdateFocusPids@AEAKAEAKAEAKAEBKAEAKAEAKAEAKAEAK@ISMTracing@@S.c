/*
 * XREFs of ??$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEAK00AEBK0000@Z @ 0x1800CB0E0
 * Callers:
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x1800669F8 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GameControllerRawInputProvider_UpdateFocusPids_@ISMTracing@@QEAAXAEBK0000000@Z @ 0x1800CB4A0 (-GameControllerRawInputProvider_UpdateFocusPids_@ISMTracing@@QEAAXAEBK0000000@Z.c)
 */

void __fastcall ISMTracing::GameControllerRawInputProvider_UpdateFocusPids<unsigned long &,unsigned long &,unsigned long &,unsigned long const &,unsigned long &,unsigned long &,unsigned long &,unsigned long &>(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  ISMTracing *v12; // rcx

  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::GameControllerRawInputProvider_UpdateFocusPids_(v12, a1, a2, a3, a4, a5, a6, a7, a8);
  }
}
