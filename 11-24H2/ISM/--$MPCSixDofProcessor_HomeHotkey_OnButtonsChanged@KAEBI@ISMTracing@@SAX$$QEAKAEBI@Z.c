/*
 * XREFs of ??$MPCSixDofProcessor_HomeHotkey_OnButtonsChanged@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z @ 0x1801B9F74
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1800105F8 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCSixDofProcessor_HomeHotkey_OnButtonsChanged_@ISMTracing@@QEAAXKK@Z @ 0x1801BC42C (-MPCSixDofProcessor_HomeHotkey_OnButtonsChanged_@ISMTracing@@QEAAXKK@Z.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeHotkey_OnButtonsChanged<unsigned long,unsigned int const &>(
        unsigned int *a1,
        unsigned int *a2)
{
  ISMTracing *v4; // rcx

  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCSixDofProcessor_HomeHotkey_OnButtonsChanged_(v4, *a1, *a2);
  }
}
