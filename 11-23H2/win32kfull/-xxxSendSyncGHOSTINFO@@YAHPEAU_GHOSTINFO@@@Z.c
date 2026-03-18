/*
 * XREFs of ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01F4DA0
 * Callers:
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1C01F3DD0 (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     DwmSyncSignalGhost @ 0x1C026DAE0 (DwmSyncSignalGhost.c)
 */

__int64 __fastcall xxxSendSyncGHOSTINFO(struct _GHOSTINFO *a1, __int64 a2)
{
  void *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = (void *)ReferenceDwmApiPort(a1, a2);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  LODWORD(v2) = (int)DwmSyncSignalGhost(v2) >= 0;
  EnterCrit(1LL, 0LL);
  return (unsigned int)v2;
}
