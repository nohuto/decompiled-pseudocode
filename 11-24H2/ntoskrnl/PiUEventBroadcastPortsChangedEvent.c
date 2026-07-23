/*
 * XREFs of PiUEventBroadcastPortsChangedEvent @ 0x140722498
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140A56790 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x1403C2E70 (PsGetSessionById.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 */

int __fastcall PiUEventBroadcastPortsChangedEvent(unsigned int a1, __int128 *a2, int a3)
{
  __int64 SessionById; // rax
  __int64 v5; // rcx
  void *v6; // rbx
  unsigned int ExplicitScope; // [rsp+48h] [rbp+7h] BYREF
  WNF_CHANGE_STAMP v9; // [rsp+50h] [rbp+Fh] BYREF
  int v10; // [rsp+54h] [rbp+13h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+17h] BYREF
  __int128 Buffer; // [rsp+60h] [rbp+1Fh] BYREF
  _OWORD v13[2]; // [rsp+70h] [rbp+2Fh] BYREF

  Handle = 0LL;
  v10 = 0;
  ExplicitScope = a1;
  Buffer = 0LL;
  memset(v13, 0, sizeof(v13));
  LODWORD(SessionById) = CmOpenDeviceRegKey(PiPnpRtlCtx, a3, 17, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)SessionById >= 0 )
  {
    v9 = 32;
    LODWORD(SessionById) = PnpCtxRegQueryValue(v5, Handle, L"PortName", &v10, v13, &v9);
    if ( (int)SessionById >= 0 )
    {
      Buffer = *a2;
      if ( ExplicitScope == -1 )
      {
        LODWORD(SessionById) = ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED, &Buffer, 0x30u, 0LL, 0LL, 0, 0);
      }
      else
      {
        SessionById = PsGetSessionById(ExplicitScope);
        v6 = (void *)SessionById;
        if ( SessionById )
        {
          ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED_SESSION, &Buffer, 0x30u, 0LL, &ExplicitScope, 0, 0);
          LODWORD(SessionById) = ObfDereferenceObjectWithTag(v6, 0x79517350u);
        }
      }
    }
  }
  if ( Handle )
    LODWORD(SessionById) = ZwClose(Handle);
  return SessionById;
}
