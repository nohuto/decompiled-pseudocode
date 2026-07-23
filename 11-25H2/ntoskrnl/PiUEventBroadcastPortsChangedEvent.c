/*
 * XREFs of PiUEventBroadcastPortsChangedEvent @ 0x140718808
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140A5C500 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x140953C60 (_PnpCtxRegQueryValue.c)
 */

int __fastcall PiUEventBroadcastPortsChangedEvent(unsigned int a1, __int128 *a2)
{
  __int64 SessionById; // rax
  __int64 v4; // rcx
  void *v5; // rbx
  unsigned int ExplicitScope; // [rsp+48h] [rbp+7h] BYREF
  WNF_CHANGE_STAMP v8; // [rsp+50h] [rbp+Fh] BYREF
  int v9; // [rsp+54h] [rbp+13h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+17h] BYREF
  __int128 Buffer; // [rsp+60h] [rbp+1Fh] BYREF
  _OWORD v12[2]; // [rsp+70h] [rbp+2Fh] BYREF

  Handle = 0LL;
  v9 = 0;
  ExplicitScope = a1;
  Buffer = 0LL;
  memset(v12, 0, sizeof(v12));
  LODWORD(SessionById) = CmOpenDeviceRegKey(PiPnpRtlCtx, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)SessionById >= 0 )
  {
    v8 = 32;
    LODWORD(SessionById) = PnpCtxRegQueryValue(v4, Handle, L"PortName", &v9, v12, &v8);
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
        v5 = (void *)SessionById;
        if ( SessionById )
        {
          ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED_SESSION, &Buffer, 0x30u, 0LL, &ExplicitScope, 0, 0);
          LODWORD(SessionById) = ObfDereferenceObjectWithTag(v5, 0x79517350u);
        }
      }
    }
  }
  if ( Handle )
    LODWORD(SessionById) = ZwClose(Handle);
  return SessionById;
}
