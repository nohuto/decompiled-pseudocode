/*
 * XREFs of PiUEventBroadcastPortsChangedEvent @ 0x140724908
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140A5E370 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x140349430 (PsGetSessionById.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     _PnpCtxRegQueryValue @ 0x1408BC774 (_PnpCtxRegQueryValue.c)
 *     _CmOpenDeviceRegKey @ 0x1408C6880 (_CmOpenDeviceRegKey.c)
 */

int __fastcall PiUEventBroadcastPortsChangedEvent(unsigned int a1, __int128 *a2, int a3)
{
  __int64 SessionById; // rax
  __int64 v5; // rcx
  void *v6; // rbx
  int v9; // [rsp+50h] [rbp+Fh] BYREF
  int v10; // [rsp+54h] [rbp+13h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+17h] BYREF
  __int128 v12; // [rsp+60h] [rbp+1Fh] BYREF
  _OWORD v13[2]; // [rsp+70h] [rbp+2Fh] BYREF

  Handle = 0LL;
  v10 = 0;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  LODWORD(SessionById) = CmOpenDeviceRegKey(PiPnpRtlCtx, a3, 17, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)SessionById >= 0 )
  {
    v9 = 32;
    LODWORD(SessionById) = PnpCtxRegQueryValue(v5, Handle, L"PortName", &v10, v13, &v9);
    if ( (int)SessionById >= 0 )
    {
      v12 = *a2;
      if ( a1 == -1 )
      {
        LODWORD(SessionById) = ZwUpdateWnfStateData((__int64)&WNF_PNPA_PORTS_CHANGED, (__int64)&v12);
      }
      else
      {
        SessionById = PsGetSessionById(a1);
        v6 = (void *)SessionById;
        if ( SessionById )
        {
          ZwUpdateWnfStateData((__int64)&WNF_PNPA_PORTS_CHANGED_SESSION, (__int64)&v12);
          LODWORD(SessionById) = ObfDereferenceObjectWithTag(v6, 0x79517350u);
        }
      }
    }
  }
  if ( Handle )
    LODWORD(SessionById) = ZwClose(Handle);
  return SessionById;
}
