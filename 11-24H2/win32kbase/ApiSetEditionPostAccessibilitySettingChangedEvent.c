/*
 * XREFs of ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140221FF8
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1400FAD40 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x140157A10 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x14019F990 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F52B0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?MKButtonSelect@@YAHG@Z @ 0x1401F54B0 (-MKButtonSelect@@YAHG@Z.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1401F55A0 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F5610 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1401F5A40 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1401F5EB0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1401F6230 (-xxxTwoKeysDown@@YAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionPostAccessibilitySettingChangedEvent(__int64 a1, __int64 a2))(void)
{
  unsigned int v2; // ebx
  __int64 (*result)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4912LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 4920LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD))result)(v2);
    }
  }
  return result;
}
