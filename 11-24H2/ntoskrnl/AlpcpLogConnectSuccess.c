/*
 * XREFs of AlpcpLogConnectSuccess @ 0x1407428DC
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x14086392C (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x14088AF50 (NtSecureConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x140AA9974 (AlpcpInvokeLogCallbacks.c)
 */

__int64 __fastcall AlpcpLogConnectSuccess(int a1)
{
  __int128 v1; // xmm0
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+30h] [rbp-28h]

  v4 = 0LL;
  v3 = 0LL;
  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  DWORD2(v4) = a1;
  LODWORD(v4) = 7;
  v3 = v1;
  return AlpcpInvokeLogCallbacks(&v3, 28LL);
}
