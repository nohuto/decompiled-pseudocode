/*
 * XREFs of ?RegisterForViewEvents@UwpWindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x1800A48E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1800A4930 (-RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIV.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::RegisterForViewEvents(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v5; // eax
  const char *v7; // r9
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h]

  v10 = a5;
  v9 = 0;
  v5 = UwpWindowEventDispatcher::RegisterForViewEventsWithOptions(a1 + 24);
  if ( v5 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x212,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v5,
        v9);
    }
    catch ( ... )
    {
      *(_DWORD *)(v8 + 64) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x215,
                               (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                               v7);
      return v12;
    }
  }
  return 0LL;
}
