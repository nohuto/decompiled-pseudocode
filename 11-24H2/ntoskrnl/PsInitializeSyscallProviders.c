/*
 * XREFs of PsInitializeSyscallProviders @ 0x140C346F4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PsRegisterSyscallProviderServiceTableMetadata @ 0x140AA208C (PsRegisterSyscallProviderServiceTableMetadata.c)
 */

void PsInitializeSyscallProviders()
{
  _BYTE v0[8]; // [rsp+20h] [rbp-88h] BYREF
  void *v1; // [rsp+28h] [rbp-80h]
  __int64 v2; // [rsp+30h] [rbp-78h]

  if ( VslVsmEnabled
    && (memset_0(v0, 0, 0x68uLL),
        v2 = 32LL,
        v1 = &PspServiceDescriptorGroupTable,
        (int)VslpEnterIumSecureMode(2u, 234LL, 0, (__int64)v0) >= 0) )
  {
    PspSyscallProvidersEnabled = 1;
    PsRegisterSyscallProviderServiceTableMetadata(0);
  }
  else
  {
    PspSyscallProvidersEnabled = 0;
  }
}
