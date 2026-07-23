/*
 * XREFs of CmpVolumeManagerInitialize @ 0x1407D91A4
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpVolumeManagerInitialize()
{
  __int64 *result; // rax

  CmpVolumeManager = 0LL;
  result = &qword_140FDA410;
  qword_140FDA418 = (__int64)&qword_140FDA410;
  qword_140FDA410 = (__int64)&qword_140FDA410;
  return result;
}
