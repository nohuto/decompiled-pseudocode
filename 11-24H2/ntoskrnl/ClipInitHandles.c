/*
 * XREFs of ClipInitHandles @ 0x140653D60
 * Callers:
 *     sub_14095B190 @ 0x14095B190 (sub_14095B190.c)
 * Callees:
 *     sub_1408011B4 @ 0x1408011B4 (sub_1408011B4.c)
 */

__int64 ClipInitHandles()
{
  qword_140FD8440 = (__int64)ExUpdateLicenseData;
  qword_140FD8448 = (__int64)ntoskrnl_27;
  qword_140FD8450 = (__int64)ExUpdateOsPfnInRegistry;
  qword_140FD8458 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  return sub_1408011B4();
}
