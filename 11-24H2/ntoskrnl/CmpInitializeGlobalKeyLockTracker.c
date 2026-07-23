/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x1407DE4B0
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140EF56C8;
  qword_140EF56D0 = (__int64)&qword_140EF56C8;
  qword_140EF56C8 = (__int64)&qword_140EF56C8;
  return result;
}
