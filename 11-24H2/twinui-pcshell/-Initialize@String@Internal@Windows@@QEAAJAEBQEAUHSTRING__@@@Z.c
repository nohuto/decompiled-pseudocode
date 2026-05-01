/*
 * XREFs of ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18018CE08
 * Callers:
 *     ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1800A8DE4 (-GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVS.c)
 *     ?v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018B090 (-v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@I.c)
 *     ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x18018C928 (-RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     _lambda_eb4780c1661a573af0d01df637dfa0a8_::operator() @ 0x18018CB18 (_lambda_eb4780c1661a573af0d01df637dfa0a8_--operator().c)
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801A73C0 (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 *     ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x180422290 (-RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIView.c)
 *     _lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_::operator() @ 0x18043D89C (_lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_--operator().c)
 *     _lambda_94a2b8c495758bf3d605ddc865d9a432_::operator() @ 0x18043E1B0 (_lambda_94a2b8c495758bf3d605ddc865d9a432_--operator().c)
 *     ?SetPersistingStateName@WindowWrapperBase@@UEAAXPEAUHSTRING__@@@Z @ 0x180442E10 (-SetPersistingStateName@WindowWrapperBase@@UEAAXPEAUHSTRING__@@@Z.c)
 *     ?SetPersistingStateName@UwpWindowWrapperBase@@UEAAXPEAUHSTRING__@@@Z @ 0x18044B9A0 (-SetPersistingStateName@UwpWindowWrapperBase@@UEAAXPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::Initialize(HSTRING *this, HSTRING *a2)
{
  HRESULT v3; // edi
  HSTRING v4; // rcx
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  newString = 0LL;
  v3 = WindowsDuplicateString(*a2, &newString);
  if ( v3 >= 0 )
  {
    v4 = *this;
    *this = newString;
    WindowsDeleteString(v4);
  }
  return (unsigned int)v3;
}
