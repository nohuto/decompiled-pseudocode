/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1400A24D0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400A0F30 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A22EC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A3A84 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x14015C3B4 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x14019AC10 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F5610 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetAccessEnabledFlag(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rax

  v1 = *(unsigned int *)(W32GetUserSessionState(a1) + 20524);
  if ( (v1 & 1) != 0 )
    goto LABEL_2;
  v1 = *(unsigned int *)(W32GetUserSessionState(v1) + 20524);
  if ( (v1 & 4) != 0 )
    goto LABEL_2;
  v1 = *(unsigned int *)(W32GetUserSessionState(v1) + 20628);
  if ( (v1 & 1) != 0
    || (v1 = *(unsigned int *)(W32GetUserSessionState(v1) + 20628), (v1 & 4) != 0)
    || (v1 = *(unsigned int *)(W32GetUserSessionState(v1) + 21100), (v1 & 4) != 0)
    || (v1 = *(unsigned int *)(W32GetUserSessionState(v1) + 20636), (v1 & 1) != 0)
    || (v1 = *(unsigned int *)(W32GetUserSessionState(v1) + 20636), (v1 & 4) != 0)
    || (v1 = *(unsigned int *)(W32GetUserSessionState(v1) + 20972), (v1 & 1) != 0)
    || (v1 = *(unsigned int *)(W32GetUserSessionState(v1) + 20972), (v1 & 4) != 0)
    || (v1 = *(unsigned int *)(W32GetUserSessionState(v1) + 21004), (v1 & 1) != 0)
    || (*(_DWORD *)(W32GetUserSessionState(v1) + 67056) & 0x8000) != 0 )
  {
LABEL_2:
    UserSessionState = W32GetUserSessionState(v1);
    *(_DWORD *)(UserSessionState + 67056) |= 0x100u;
  }
  else
  {
    v3 = W32GetUserSessionState(v1);
    *(_DWORD *)(v3 + 67056) &= ~0x100u;
  }
}
