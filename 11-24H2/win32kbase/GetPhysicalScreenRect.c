/*
 * XREFs of GetPhysicalScreenRect @ 0x14014E974
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     UserGetDisconnectDeviceResolutionHint @ 0x1401B3574 (UserGetDisconnectDeviceResolutionHint.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall GetPhysicalScreenRect(_OWORD *a1)
{
  __int128 v2; // xmm0
  _OWORD *result; // rax

  v2 = *(_OWORD *)(**(_QWORD **)(W32GetUserSessionState(a1) + 57008) + 24LL);
  result = a1;
  *a1 = v2;
  return result;
}
