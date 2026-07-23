/*
 * XREFs of PsInitializeSyscallProviders @ 0x140C36834
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsRegisterSyscallProviderServiceTableMetadata @ 0x140A9D41C (PsRegisterSyscallProviderServiceTableMetadata.c)
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
        (int)VslpEnterIumSecureMode(2u, 0xEAu, 0, (__int64)v0) >= 0) )
  {
    PspSyscallProvidersEnabled = 1;
    PsRegisterSyscallProviderServiceTableMetadata(0);
  }
  else
  {
    PspSyscallProvidersEnabled = 0;
  }
}
