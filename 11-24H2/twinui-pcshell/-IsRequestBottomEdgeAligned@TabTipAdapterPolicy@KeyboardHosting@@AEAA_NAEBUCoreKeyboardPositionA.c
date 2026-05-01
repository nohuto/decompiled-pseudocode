/*
 * XREFs of ?IsRequestBottomEdgeAligned@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180200D34
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180255CA0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     <none>
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IsRequestBottomEdgeAligned(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a2)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 869) && *(_DWORD *)a2 == 2 && *((_DWORD *)a2 + 6) == 6 )
    return 1;
  return result;
}
