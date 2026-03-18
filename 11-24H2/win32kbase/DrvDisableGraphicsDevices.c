/*
 * XREFs of DrvDisableGraphicsDevices @ 0x14015ADCC
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE8CC (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvDisableGraphicsDevices(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1096LL); result; result = *(_QWORD *)(result + 128) )
  {
    if ( *(_QWORD *)(result + 144) == a1 )
      *(_DWORD *)(result + 164) |= 1u;
  }
  return result;
}
