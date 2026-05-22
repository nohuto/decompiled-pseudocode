/*
 * XREFs of ?NotifyHotkeyRegistrationChanged@PenEventsClientCustomProxy@@AEAAJW4PenHotkeyId@@_N@Z @ 0x180075FD4
 * Callers:
 *     ?OnDisconnected@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180075EA0 (-OnDisconnected@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnUndockedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180085A20 (-OnUndockedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnDockedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180195A40 (-OnDockedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnTailButtonClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180195CE0 (-OnTailButtonClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnTailButtonDoubleClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180195D50 (-OnTailButtonDoubleClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnTailButtonLongPressedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180195DC0 (-OnTailButtonLongPressedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 * Callees:
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x1800369FC (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged(__int64 a1, int a2, unsigned __int8 a3)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 56) )
  {
    v3 = PenEventsDispatcherPrincipal::NotifyHotkeyRegistrationChanged(*(_QWORD *)(a1 + 56), a1, a2, a3);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x27,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneve"
                      "ntsdispatcherprincipal.cpp",
        (const char *)(unsigned int)v3,
        v5);
  }
  return 0LL;
}
