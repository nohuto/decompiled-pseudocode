/*
 * XREFs of ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAX_N_K@Z @ 0x1806BC900
 * Callers:
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@WBI@E$AAAX_N_K@Z @ 0x1806BC940 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssi_ea_1806BC940.c)
 * Callees:
 *     ?DismissViewAnimated@GuidedSnapAssistViewController@@QE$AAAXW4DismissOptions@@@Z @ 0x180225838 (-DismissViewAnimated@GuidedSnapAssistViewController@@QE$AAAXW4DismissOptions@@@Z.c)
 *     ?SnapAssistDismissed@SnapAssistState@@QEAA?AW4SnapAssistStateTransition@@XZ @ 0x1806BE118 (-SnapAssistDismissed@SnapAssistState@@QEAA-AW4SnapAssistStateTransition@@XZ.c)
 */

__int64 __fastcall _HostWindowActivationChanged__QIXamlSwitcherWindowInteractionEvents__GuidedSnapAssistViewController__UE_AAAX_N_K_Z(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  if ( !a2 && !*(_BYTE *)(*(_QWORD *)(a1 + 384) + 176LL) )
  {
    SnapAssistState::SnapAssistDismissed();
    return GuidedSnapAssistViewController::DismissViewAnimated(a1, 0);
  }
  return result;
}
