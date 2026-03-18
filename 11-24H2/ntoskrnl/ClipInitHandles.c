/*
 * XREFs of ClipInitHandles @ 0x140655660
 * Callers:
 *     sub_140972980 @ 0x140972980 (sub_140972980.c)
 * Callees:
 *     sub_140800A74 @ 0x140800A74 (sub_140800A74.c)
 */

__int64 ClipInitHandles()
{
  qword_140FD7430 = (__int64)ExUpdateLicenseData;
  qword_140FD7438 = (__int64)ntoskrnl_27;
  qword_140FD7440 = (__int64)ExUpdateOsPfnInRegistry;
  qword_140FD7448 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  return sub_140800A74();
}
