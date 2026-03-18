/*
 * XREFs of ExpSetLicenseTamperState @ 0x140649C24
 * Callers:
 *     ExSetLicenseTamperState @ 0x1407A8CB0 (ExSetLicenseTamperState.c)
 *     sub_1407A9100 @ 0x1407A9100 (sub_1407A9100.c)
 *     sub_1407A98F4 @ 0x1407A98F4 (sub_1407A98F4.c)
 *     SLUpdateLicenseDataInternal @ 0x1407AAD54 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ntoskrnl_20 @ 0x140978FD0 (ntoskrnl_20.c)
 */

__int64 __fastcall ExpSetLicenseTamperState(__int64 a1, int a2)
{
  _DWORD v3[14]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 46988) = a2;
  memset(v3, 0, 48);
  v3[2] = a2;
  return ntoskrnl_20(a1, v3, 2LL, 0LL);
}
