/*
 * XREFs of RIMAbIsDeviceArbitrationEnabled @ 0x1400C3910
 * Callers:
 *     RIMIsDeviceArbitrationEnabled @ 0x1400C2D30 (RIMIsDeviceArbitrationEnabled.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1400C2D48 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     rimProcessPointerDeviceContact @ 0x140181B78 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMAbIsDeviceArbitrationEnabled(__int64 a1)
{
  return *(_DWORD *)(W32GetUserSessionState(a1) + 244) != 0;
}
