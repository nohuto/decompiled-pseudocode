/*
 * XREFs of CiProcessInitialize @ 0x1C000F91C
 * Callers:
 *     CsInitialize @ 0x1C000F040 (CsInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiProcessInitialize(__int64 a1)
{
  _DWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall **v3)(); // [rsp+28h] [rbp-20h]
  __int64 *v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  v2[0] = 65545;
  v2[1] = 0x10000;
  v3 = &CiKernelCalloutTable;
  v5 = a1;
  v4 = &CiKernelInterface;
  return ExRegisterExtension(&CiKernelExtensionRegistration, 65537LL, v2);
}
