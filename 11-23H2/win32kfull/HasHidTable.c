/*
 * XREFs of HasHidTable @ 0x1C0119210
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C0036714 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     HasRawInputForegroundTarget @ 0x1C0036824 (HasRawInputForegroundTarget.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0036950 (EditionHandleAndPostKeyEvent.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0037984 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     UpdateRawMouseMode @ 0x1C0039F44 (UpdateRawMouseMode.c)
 *     EditionUpdateRawMouseMode @ 0x1C0039FB0 (EditionUpdateRawMouseMode.c)
 *     EditionKeyEventLLHook @ 0x1C003CDC0 (EditionKeyEventLLHook.c)
 *     EditionHandleAltTab @ 0x1C009F640 (EditionHandleAltTab.c)
 *     SetWakeBit @ 0x1C01190C0 (SetWakeBit.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01A817C (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01A980C (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01A98B8 (UnregisterModernAppThreadForRawKeyboard.c)
 *     EditionRawInputRequestedForKeyboard @ 0x1C01E6EB0 (EditionRawInputRequestedForKeyboard.c)
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
    v2 = *(_QWORD *)(a1 + 424);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 856) )
        return 1LL;
    }
  }
  return result;
}
