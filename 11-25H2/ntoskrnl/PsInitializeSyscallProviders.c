/*
 * XREFs of PsInitializeSyscallProviders @ 0x140C23428
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PsRegisterSyscallProviderServiceTableMetadata @ 0x140A9C72C (PsRegisterSyscallProviderServiceTableMetadata.c)
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
