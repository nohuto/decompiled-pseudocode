/*
 * XREFs of HasHidTable @ 0x140172640
 * Callers:
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401305C0 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EditionRawInputRequestedForKeyboard @ 0x140171DB0 (EditionRawInputRequestedForKeyboard.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x140171ED8 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     HasRawInputForegroundTarget @ 0x14017206C (HasRawInputForegroundTarget.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1401725DC (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x1402481C0 (EditionHandleAndPostKeyEvent.c)
 *     EditionKeyEventLLHook @ 0x1402487E0 (EditionKeyEventLLHook.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1402725CC (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x140272684 (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasHidTable(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 464);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 832) )
        return 1LL;
    }
  }
  return result;
}
