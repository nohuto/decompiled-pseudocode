/*
 * XREFs of ?v_OnWindowCreated@WindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x180434250
 * Callers:
 *     <none>
 * Callees:
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801EEABC (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 */

void __fastcall WindowWrapper::v_OnWindowCreated(int *a1, int a2)
{
  if ( a2 != 1 )
    PushWindowTransparencyModeToWindow((HWND)a1[74], a1[133], a1[153]);
}
