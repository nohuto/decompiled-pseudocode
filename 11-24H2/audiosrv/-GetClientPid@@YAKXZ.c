/*
 * XREFs of ?GetClientPid@@YAKXZ @ 0x180118CEC
 * Callers:
 *     ?GetCapabilityUsageSession@@YAJPEAPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x180118B2C (-GetCapabilityUsageSession@@YAJPEAPEAUICapabilityUsageSession@Management@CapabilityAccess@Intern.c)
 *     ?HasMicrophoneAccess@@YAJPEA_N@Z @ 0x18011933C (-HasMicrophoneAccess@@YAJPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 */

DWORD GetClientPid(void)
{
  _DWORD RpcCallAttributes[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v2[56]; // [rsp+28h] [rbp-90h] BYREF
  int v3; // [rsp+60h] [rbp-58h]

  memset_0(v2, 0, 0x70uLL);
  RpcCallAttributes[1] = 16;
  RpcCallAttributes[0] = 3;
  if ( RpcServerInqCallAttributesW(0LL, RpcCallAttributes) )
    return GetCurrentProcessId();
  else
    return v3;
}
