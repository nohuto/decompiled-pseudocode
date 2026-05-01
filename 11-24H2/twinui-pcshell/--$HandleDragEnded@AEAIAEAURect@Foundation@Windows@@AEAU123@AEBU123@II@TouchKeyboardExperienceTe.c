/*
 * XREFs of ??$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEBU123@II@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAURect@Foundation@Windows@@1AEBU123@$$QEAI3@Z @ 0x180484574
 * Callers:
 *     ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x180485CF0 (-HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveA.c)
 * Callees:
 *     ?Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ @ 0x18007FF6C (-Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180080268 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?HandleDragEnded_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEBURect@Foundation@Windows@@00II@Z @ 0x180485FFC (-HandleDragEnded_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEBURect@Foundation@Windows@@00I.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::HandleDragEnded<unsigned int &,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect const &,unsigned int,unsigned int>(
        unsigned int *a1,
        const struct Windows::Foundation::Rect *a2,
        const struct Windows::Foundation::Rect *a3,
        const struct Windows::Foundation::Rect *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  TouchKeyboardExperienceTelemetryLogger *v10; // rcx

  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled() )
  {
    TouchKeyboardExperienceTelemetryLogger::Instance();
    TouchKeyboardExperienceTelemetryLogger::HandleDragEnded_(v10, *a1, a2, a3, a4, *a5, *a6);
  }
}
