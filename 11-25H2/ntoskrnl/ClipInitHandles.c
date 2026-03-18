/*
 * XREFs of ClipInitHandles @ 0x140649760
 * Callers:
 *     sub_140978BA4 @ 0x140978BA4 (sub_140978BA4.c)
 * Callees:
 *     sub_1407F0BB4 @ 0x1407F0BB4 (sub_1407F0BB4.c)
 */

__int64 ClipInitHandles()
{
  qword_140FD7430 = (__int64)ExUpdateLicenseData;
  qword_140FD7438 = (__int64)ntoskrnl_27;
  qword_140FD7440 = (__int64)ExUpdateOsPfnInRegistry;
  qword_140FD7448 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  return sub_1407F0BB4();
}
