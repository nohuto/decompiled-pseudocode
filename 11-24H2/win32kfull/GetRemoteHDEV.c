/*
 * XREFs of GetRemoteHDEV @ 0x1402698B8
 * Callers:
 *     RemoteShadowCleanup @ 0x1401E0124 (RemoteShadowCleanup.c)
 *     RemotePassthruDisable @ 0x1401FBD88 (RemotePassthruDisable.c)
 *     CtxDisplayIOCtl @ 0x1402B6DAC (CtxDisplayIOCtl.c)
 *     RemoteShadowStart @ 0x1402B6EFC (RemoteShadowStart.c)
 * Callees:
 *     DrvFindRemoteDriverhdevInMDEV @ 0x140322AA4 (DrvFindRemoteDriverhdevInMDEV.c)
 */

__int64 __fastcall GetRemoteHDEV(__int64 a1, __int64 a2)
{
  __int16 v3; // bx
  __int64 v4; // rcx

  v3 = a1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 57008);
  if ( (unsigned __int16)(v3 - 1) > 0xFFFDu )
    return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, 1LL) + 57008) + 48LL);
  v4 = *(_QWORD *)(v4 + 16);
  if ( *(_DWORD *)(v4 + 20) == 1 )
    return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, 1LL) + 57008) + 48LL);
  else
    return DrvFindRemoteDriverhdevInMDEV(v4, 1LL, a2);
}
