/*
 * XREFs of CmpVolumeManagerInitialize @ 0x1407C9464
 * Callers:
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpVolumeManagerInitialize()
{
  __int64 *result; // rax

  CmpVolumeManager = 0LL;
  result = &qword_140FD9428;
  qword_140FD9430 = (__int64)&qword_140FD9428;
  qword_140FD9428 = (__int64)&qword_140FD9428;
  return result;
}
