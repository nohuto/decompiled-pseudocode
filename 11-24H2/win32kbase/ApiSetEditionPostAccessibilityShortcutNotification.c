/*
 * XREFs of ApiSetEditionPostAccessibilityShortcutNotification @ 0x140222058
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1400FAD40 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401099A0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x14010F530 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F52B0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F6080 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionPostAccessibilityShortcutNotification(__int64 a1, __int64 a2))(void)
{
  unsigned int v2; // ebx
  __int64 (*result)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 3216LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 3224LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD))result)(v2);
    }
  }
  return result;
}
