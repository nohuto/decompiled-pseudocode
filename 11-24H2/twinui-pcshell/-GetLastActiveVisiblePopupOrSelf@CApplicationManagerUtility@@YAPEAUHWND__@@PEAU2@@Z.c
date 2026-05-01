/*
 * XREFs of ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x1801C5F28
 * Callers:
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x1801C5D10 (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x1801C5D40 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 *     ?SwitchToThisWindow@CApplicationManagerUtility@@YAXPEAUHWND__@@@Z @ 0x1802BA0C8 (-SwitchToThisWindow@CApplicationManagerUtility@@YAXPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

CApplicationManagerUtility *__fastcall CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(
        CApplicationManagerUtility *this,
        HWND a2)
{
  CApplicationManagerUtility *v2; // rdi
  HWND LastActivePopup; // rbx

  v2 = this;
  LastActivePopup = GetLastActivePopup((HWND)this);
  if ( IsWindowVisible(LastActivePopup) )
    return (CApplicationManagerUtility *)LastActivePopup;
  return v2;
}
