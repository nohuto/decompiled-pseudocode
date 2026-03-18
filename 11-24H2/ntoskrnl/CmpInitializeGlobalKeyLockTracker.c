/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x1407DDF60
 * Callers:
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140EF5488;
  qword_140EF5490 = (__int64)&qword_140EF5488;
  qword_140EF5488 = (__int64)&qword_140EF5488;
  return result;
}
