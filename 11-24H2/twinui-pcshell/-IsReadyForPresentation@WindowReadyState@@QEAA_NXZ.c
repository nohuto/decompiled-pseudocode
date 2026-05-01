/*
 * XREFs of ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18001BA4C
 * Callers:
 *     ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001AF9C (-OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Intern.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18001B480 (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18001B5A0 (-v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1800A88BC (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x1800AA0A4 (-PosChanged@UwpWindowReadyState@@QEAAXHH@Z.c)
 *     ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x1801B5F44 (-HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z.c)
 *     ?get_ClientWindowReadyForPresentation@WindowWrapperBase@@UEAAJPEAE@Z @ 0x180443E80 (-get_ClientWindowReadyForPresentation@WindowWrapperBase@@UEAAJPEAE@Z.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1804451B0 (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18044521C (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1804452E8 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1804453D4 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18044546C (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall WindowReadyState::IsReadyForPresentation(WindowReadyState *this)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)this )
    return *((_DWORD *)this + 2) == 0;
  return result;
}
