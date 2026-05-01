/*
 * XREFs of ?CompareOrdinal@String@Internal@Windows@@QEBAHAEBV123@@Z @ 0x1801EDC24
 * Callers:
 *     ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x180422290 (-RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::CompareOrdinal(HSTRING *this, HSTRING *a2)
{
  INT32 result; // [rsp+30h] [rbp+8h] BYREF

  result = 0;
  WindowsCompareStringOrdinal(*this, *a2, &result);
  return (unsigned int)result;
}
