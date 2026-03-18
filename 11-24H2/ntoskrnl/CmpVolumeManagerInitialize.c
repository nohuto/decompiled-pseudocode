/*
 * XREFs of CmpVolumeManagerInitialize @ 0x1407D8C54
 * Callers:
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpVolumeManagerInitialize()
{
  __int64 *result; // rax

  CmpVolumeManager = 0LL;
  result = &qword_140FD93F8;
  qword_140FD9400 = (__int64)&qword_140FD93F8;
  qword_140FD93F8 = (__int64)&qword_140FD93F8;
  return result;
}
