/*
 * XREFs of xxxSendPointerMessageWorker @ 0x1400A8F90
 * Callers:
 *     xxxSendPointerMessage @ 0x1400A8EFC (xxxSendPointerMessage.c)
 *     EditionPointerParentNotify @ 0x1400A97F0 (EditionPointerParentNotify.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x140154A38 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14021985C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxSendPointerMessageWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _BYTE *v6; // rax
  unsigned int v9; // esi
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64, __int64); // rax
  __int64 v13; // r8
  __int64 v14; // rdx

  v6 = *(_BYTE **)(a1 + 40);
  v9 = a2;
  if ( (char)v6[20] < 0 || (char)v6[19] < 0 || (v6[18] & 4) != 0 )
    return 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(W32GetUserSessionState(a1, a2)
                                                                              + 8LL * ((a6 + 6) & 0x1F)
                                                                              + 71176);
  if ( v9 == 528 )
  {
    v14 = 528LL;
    v13 = 582LL;
  }
  else
  {
    v13 = a4;
    v14 = v9;
  }
  return v12(a1, v14, v13, a3, a5);
}
